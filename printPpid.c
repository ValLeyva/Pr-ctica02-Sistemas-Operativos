#include<stdio.h>
#include<unistd.h>

int main(){
  printf("El pid del proceso Padre es: %d\n", getppid());
  return(0);
}
