#include <stdio.h> 
main() 
{ 
int m; 
printf("Enter marks");
scanf("%d",&m);
if(m>=85&&m<=100)
	  printf("GRADE A");
else if(m>=70&&m<=84)	
    printf("GRADE B");
else if(m>=55&&m<=69)
    printf("GRADE C");
else if(m>=40&&m<=54)
    printf("GRADE D");
else if(m<40)
   printf("fail");
else
   printf("wrong choice");
}
