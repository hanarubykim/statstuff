#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
  struct stat st;
  stat("main.c", &st);
  printf("The size of this file is %ld\n\n bytes", st.st_size);
  int i;
  long tmp = st.st_size;
  char * byteSize[] = {"B, KB, MB, GB"};
  while(tmp >= 1024){
    tmp /= 1024;
    i++;
  }
  printf("More readable... The size of this file is %ld\n\n %s", tmp, byteSize[i]);
  printf("The mode of this file is %d\n\n", st.st_mode);
  printf("The time this file was last accessed is %s\n\n", ctime(&st.st_atime));
  printf("Permissions of this file: %d\n\n", st.st_mode);
}
