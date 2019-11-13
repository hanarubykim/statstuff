#include <sys.stat.h>

int main(){
//file size
  struct stat st;
  stat("main.c", &st);
  printf("The size of this file is %d bytes", st.st_size);
//mode (permissions)
  printf("The mode of this file is %s", st.st_mode);
//time of last access (displayed in the following format: Fri Oct 28 09:03:01 2016
  printf("The time this file was last accessed is %s", st.atime);

//Modify the size so it is printed out in human readable form (that is using B, KB, MB, GB).

//You may want to look into the sprintf function to help.

// Attempt to print out the permissions in ls -l form, ignoring the early bits that include the file type information

//Permissions are of type mode_t, which is an integer type.

//The permissions section of the mode is stored in the last 9 bits of the mode_t data type.

}
