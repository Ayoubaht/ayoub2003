#include <stdio.h>

int main() {
  int y[5];
  int i,S;
  printf("entrer un élement: \n");
  
  i=0;
  
  for (i = 0; i < 5; i++) {
      y[i]=0;
    printf("nombre[%d]= ",i,y[i]);
    scanf("%d",&y[i]);
    S=0;
    
    
  }
  
  for (i = 0; i < 5; i++) {
      
      S=S+y[i];
      
  }
  printf("totale: %d",S);
  

    return 0;
}