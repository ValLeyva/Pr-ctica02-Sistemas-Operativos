#include<stdio.h>
#include<unistd.h>

int main(){
  printf("Pid de la sesión: %d\n", getsid(pid));
  return(0);
}
