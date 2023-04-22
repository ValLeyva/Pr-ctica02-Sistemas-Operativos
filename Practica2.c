#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<stdlib.h>
#include<string.h>

int main(){
  pid_t pid;//entero con signo que representa el id del proceso
  char na[50];
  int n, estado;
  char ruta[] ="/home/val/Documentos/SisOperativos/Práctica02/";
  //1. MPRIMIMOS EL PROMPT
  printf("$");
  scanf("%s",na);//  lee la variable

while(strcmp(na, "EXIT") != 0){
  //2. REEAMOS UN NUEVO PROCESO
  pid=fork();
  //ejecuición del proceso hijo
  if(pid==0){
          //4. EJECUTAMOS EL ARCHIVO DESDE UN NUEVO PROCESO
          estado = execl(strcat(ruta,na), na, NULL);
          //6. VALIDACION DE LA EJECUCION DEL ARCHIVO
          if(estado==-1){
            perror("El archivo no existe o no es un archivo ejecutable");
          }
          //5.FINALIZAR LA EJECUCION DEL ARCHIVO
          _exit(2);
  }else

  //ejecución del padre
  if(pid>0){
    //7. HACEMOS QUE EL PROCESO PADRE ESPERE A QUE EL PROCESO DEL HIJO TERMINE
    pid = wait(&estado);
    //8. MPRIMIMOS DE NUEVO EL PROMPT
    printf("$");
    scanf("%s",na);//  lee la variable

  }
  else{
    //3. IMPRIME EL MENSAJE SI EL PROCESO NO SE CREO
    printf("El proceso no se creo correctamente \n");
  }
}
}
