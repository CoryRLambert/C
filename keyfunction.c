#include <stdio.h>
#include <math.h>
float squareroot(float a);
float main()
	{
		float a,s:
		
		printf("Type in a numbers a \n");
		printf("after the input type the Enter Key. \n");
		printf("Input a ");
		scanf("%f",&a);
		printf("the number you typed was %f\n",a);
		s = sqrt(a);
		printf("the square root of %f is f\n",a, s);
		
		return 0;
	}
	
float squareroot(float a){
		float s = sqrt(a);
		return s;
		
	}
