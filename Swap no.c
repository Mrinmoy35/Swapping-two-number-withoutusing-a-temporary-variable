#include<stdio.h>
int main()
{
	int a=40, b=50;  
	printf("Before swap a=%d b=%d",a,b); 
	a=a+b;//a=90 (40+50)    
        b=a-b;//b=40 (90-50)   
        a=a-b;//a=50 (90-40)    
        printf("\nAfter swap a=%d b=%d",a,b);    
        return 0;
	
}
