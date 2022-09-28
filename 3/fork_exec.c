#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h> 
#include <sys/wait.h>
 
int main(){

  pid_t pid = fork();
  if (pid == 0) {
    // the child process will execute this
    char *const argv[3] = {
        "/bin/ls", // string literial is of type "const char*"
        "-l",
        NULL // it must have a NULL in the end of argv
    };
    int ret = execv(argv[0], argv);
    // if succeeds, execve should never return
    // if it returns, it must fail (e.g. cannot find the executable file)
    printf("Fails to execute %s\n", argv[0]);
    exit(1); 
  }else{
    printf("I'm the Parent\n");
  }

  return 0;
}
