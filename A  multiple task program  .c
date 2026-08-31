#include<stdio.h>

int main(){
	char operation;
	double a,b;
	
	printf("Enter an operator(+,-,*,/):");
	scanf("%c",&operation);
	printf("Enter two operands:");
	scanf("%1f%1f",&a,&b);
	
	switch ( operation )
	{
		case'+' : printf("%.1f + %.1f =%.1f",a,b,a+b);
		         break;
		case'-' : printf("The difference of %1f and %1f is : %1f\n",a,b,a-b);
		         break;
		case'*' : printf("The product of %1f and %1f is : %2f\n",a,b,a*b);
		         break;
		case'/' : if(b==0)
		printf("Division by zero\n");
		else
		
		      printf("The result of %1f/%1f is : %1f\n",a,b,a/b);
		      break;
		      default: printf("Unknown operator \n");
		      break;
			
	}
}
