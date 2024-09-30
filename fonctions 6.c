// Online C compiler to run C program online
#include <stdio.h>
int Fibonacci (int n){
   
    if (n<=1){
        return n;
    }
    return Fibonacci(n-1)+Fibonacci(n-2);
}

int main() {
    int b,a;
    
    printf("entrer une nuber: ");
    scanf("%d",&b);
    printf("entrer une Fibonacci %d \n",b);
for (a=0;a<b;a++){
    printf("%d",Fibonacci(a));
}
    return 0;
}