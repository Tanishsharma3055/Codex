#include <stdio.h>
  int main (){
    int n=1, fac =1;  
     printf("Here you can find the factorial of any number\nJust enter the number:\n");
     scanf("%d",& n);

     for( int i=n;i>=1;i--){
        fac=fac*i;
     }

     printf("Answer is %d\n",fac);
     return 0;
  }
