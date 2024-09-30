// Online C compiler to run C program online
#include<stdio.h>
int maximale (int a,int b){
    int max;
    max=0;
    if (a>b){
        max=a;
       
       
    }
    else
    max=b;
    return max;
}
int main(){
int s,d;
int result;
printf("afichee une nomber: ");
scanf("%d",&s);
printf("afichee une nomber: ");
scanf("%d",&d);
result=maximale(s,d);
printf("le maximal est %d \n",result);
return 0;
}