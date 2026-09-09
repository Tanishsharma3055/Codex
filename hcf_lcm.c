#include <stdio.h>

int main() {
   int a,b;
   printf("Enter the numbers whose lcm and hcf you want\nEnter number 1: ");
   scanf("%d",&a);
    printf("Enter number 2: ");
   scanf("%d",&b);

   int h=1,l=1;
   for( int i=1 ; i<=a && i<=b ; i++){
    if(a%i==0 && b%i==0){
        h=i;
    }
   }
   int g=(a>b)?a:b;

   for( int i=g;i<=a*b;i++){
    if(i%a==0 && i%b==0){
        l=i;
        break;
    }
   }

printf("hcf is %d\n",h);
printf("lcm is %d",l);

    return 0;
}
