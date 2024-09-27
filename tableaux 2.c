#include <stdio.h>

int main() {
  int y[5];
  int i;
  printf("entrer un élement: \n");
  
  i=0;
  
  for (i = 0; i < 5; i++) {
      y[i]=0;
    printf("nombre[%d]= ",i,y[i]);
    scanf("%d",&y[i]);
    
    
  }
  

    return 0;
}