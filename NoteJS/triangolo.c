#include <stdio.h>   
#include <unistd.h>
int main() {
int altezza=3;
int base=10;
int perimetro=(base+altezza)*2;
int pid=fork();
if(pid==0) {
	printf("perimetro %d \n",perimetro);
}	else if (pid>0){
int area =base*altezza);
printf("area %d \n",area);
}
else{
printf("processo figlio fallito \n");
}}
