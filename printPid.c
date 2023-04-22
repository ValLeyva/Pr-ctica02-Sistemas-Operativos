#include<stdio.h>
#include<unistd.h>

int main(){
  printf("El pid del proceso hijo es: %d\n", getpid());
  _exit(0);

}
