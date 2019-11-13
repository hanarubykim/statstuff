#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
  struct stat st;
  stat("main.c", &st);
  printf("The size of this file is %ld bytes\n\n", st.st_size);
  printf("The mode of this file is %d\n\n", st.st_mode);
  printf("The time this file was last accessed is %ld\n\n", st.st_atime);
  printf("Permissions of this file: %d\n\n", st.st_mode);
//Modify the size so it is printed out in human readable form (that is using B, KB, MB, GB).
//You may want to look into the sprintf function to help.
// Attempt to print out the permissions in ls -l form, ignoring the early bits that include the file type information
}
