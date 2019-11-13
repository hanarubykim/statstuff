//There is a function called stat. It is used to get information about a file. Write a program that uses stat to display the following information about a file:

int main(){
  
}
//file size
//mode (permissions)
//time of last access (displayed in the following format: Fri Oct 28 09:03:01 2016


// Once you have that, try the following:
//
//     Modify the size so it is printed out in human readable form (that is using B, KB, MB, GB).
//         You may want to look into the sprintf function to help.
//     Attempt to print out the permissions in ls -l form, ignoring the early bits that include the file type information
//         Permissions are of type mode_t, which is an integer type.
//         The permissions section of the mode is stored in the last 9 bits of the mode_t data type.