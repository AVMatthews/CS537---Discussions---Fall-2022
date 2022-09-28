#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


int main (int argc, char *argv[])
{
  char str[] ="- This, a sample string.";
  char * pch;
  int numArgs = argc;

  for(int i = 0; i < numArgs; i++){
    write(STDOUT_FILENO, argv[i], strlen(argv[i]));
    write(STDOUT_FILENO, "\n", strlen("\n"));
  }
  char line[100];
  fgets(line, 100, stdin);

  write(STDOUT_FILENO, line, strlen(line));


  //printf ("Splitting string \"%s\" into tokens:\n",str);
  pch = strtok (line," ,.-");
  while (pch != NULL)
    {
      printf ("%s\n",pch);
      pch = strtok (NULL, " ,.-");
    }

  printf("%s\n", str);
  char *copy = strdup(str);
  printf("%s\n", copy);
  char *beginning = strndup(str, 5);
  printf("%s\n", beginning);
  
  return 0;
}
