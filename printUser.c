#include<stdio.h>
#include<unistd.h>

int main(){
  printf("Pid del usuario: %d\n", getuid());
  return(0);
}
