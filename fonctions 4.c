// Online C compiler to run C program online
#include<stdio.h>
int minimale (int a,int b){
    int min;
    min=0;
    if (a<b){
        min=a;
       
       
    }
    else
    min=b;
    return min;
}
int main(){
int s,d;
int result;
printf("afichee une nomber: ");
scanf("%d",&s);
printf("afichee une nomber: ");
scanf("%d",&d);
result=minimale(s,d);
printf("le minimale est %d \n",result);
return 0;
}