#include<stdio.h>
  int main()
  {
 float e,p,c,m,q;
     
    printf("Check your grade\nYou just need to enter your marks in following subjects\n");
    printf("English: ");
    scanf("%f", & e);
    printf("Physics: ");
    scanf("%f",&p);
    printf("Chemistry :");
    scanf("%f", & c);
    printf("Maths :");
    scanf("%f", & m);
    printf("Physical Education: ");
    scanf("%f",& q);
    float x=(e+p+c+m+q)/5;

    if (100>=x && 90<=x)  //(100>x>=90) it the wrong way 
            { printf("your grade is A\n"); }

        else if(90>x && x>=80) 
             {printf("your grade is B\n");}
        else if(80>x && x>=70)
             {printf("your grade is C\n");}
        else if(70>x && x>=60)
             {printf("your grade is D\n");}
            else 
               {printf("you are failed\n");}
     

    printf("Your percentage is %.2f",x);
    printf(" %% \nThanks you"); // in c language if you want to print percentage sign the you have to write %%

 }
