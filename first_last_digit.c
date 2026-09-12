# include <stdio.h>
  int main (){
    int n;
    printf("Enter the number :\n");
    scanf("%d",&n);

    if(n<1){
      n=-n;
    }

int last =n%10
    int first=0;
   for( ;n>0;n=n/10){  
  first=n;
   }

printf("first digit is %d\n",first);
printf("last digit is %d",last);
    return 0;
  }
