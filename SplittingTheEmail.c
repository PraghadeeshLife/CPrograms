#include <stdio.h>

int main(void) {
  printf("Splitting the Email\n");
  char data[] = "praghadeeshhello@indiamail.com";

  
  int i = 0;
  while(data[i] != '@' && data[i] != '\0'){
    printf("%c",data[i]);
    i = i+1;
  }
  return 0;
}
