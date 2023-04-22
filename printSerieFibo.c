#include<stdio.h>
//sucesion de numeros entereos que se genera calculando cada termino a partir de la sumas de los dos anteriores
//FUNCIÓN FIBONACCI
void fibonacci(int n){
  float arr[60];
  int a=0, b=1, c=1, i, resultado;
  for (i = 1;i<=50;i++) {
    c=a+b;
    a=b;
    b=c;
    arr[i]=c;
  }
  //resultado=arr[n+1];
  printf("La posición %d de la serie fibonacci es: %f \n",n,arr[(n-1)]);
}
int main(void){
  int numero;

  printf("Ingrese el elemento que desea saber de la serie fibonacci: ");
  scanf("%d",&numero);

  fibonacci(numero);



return 0;
}
