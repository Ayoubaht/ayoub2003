// Online C compiler to run C program online
#include<stdio.h>
int Factorielle (int a){
   int b;
   for (b=0;b<=10;b++){
       printf("%d * %d= %d \n",a,b,a*b);
       
   }
}
int main(){
int s;
int result;
printf("le Factorielle est: ");
scanf("%d",&s);
Factorielle (s);
return 0;
}