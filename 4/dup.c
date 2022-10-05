#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h> 
#include <sys/wait.h>
#include <fcntl.h>
#include <string.h>
int main(){

  pid_t pid = fork();
  if (pid == 0) {
    int fd = open("log.txt", O_WRONLY | O_CREAT | O_TRUNC); // [1]
    printf("STDOUT1 \n");
    write(fd, "File Descriptor 1 \n", strlen("File Descriptor 1 \n"));
    dup2(fd, fileno(stdout));                                     // [2]
    printf("STDOUT2 \n");
    write(fd, "File Descriptor 2 \n", strlen("File Descriptor 2 \n"));
    close(fd);                                                    // [3]
    printf("STDOUT3 \n");
    //fprintf(fd, "File Descriptor 3 \n");
    // execv(...)k
  }else{
    printf("I'm the Parent\n");
  }

  return 0;
}
