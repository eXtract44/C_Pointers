
#include <stdio.h>
#include <stdlib.h>


int main() {
char str[] = "Hello";
	
 printf("OldString = %s\n", str);

 char* ptr  = strConCat(str);
  printf("NewString = %s\n", ptr);
//free(ptr);
	return 0;
}
