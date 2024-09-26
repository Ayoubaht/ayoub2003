// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n , d=1 ,a=1;
    printf ("entrer une valeur n: ");
    scanf("%i",&n);
    while( a <= n){
        
        d*=a;
        a++;
    }
    printf ("resultat: %i",d);
    return 0;
}