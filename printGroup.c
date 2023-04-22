#include<stdio.h>
#include<unistd.h>

int main(){
  printf("Pid del grupo de proceso: %d\n", getpgid());
  return(0);
}
