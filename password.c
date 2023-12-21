#include<stdio.h>
#include<string.h>

main()
{
	char a[100];
	int i,symbol = 0,digit = 0,letter = 0;
	
	printf("Enter Your Password = ");
	gets(a);
	
	if(a>=6)
	{
		for(i=0;a[i]!=NULL;i++)
		{
			if(a[i] = 'A' && a[i] = 'Z' || a[i] = 'a' && a[i] = 'z')
			{
				letter = 1;
			}
			else if(a[i] = 1 && a[i] = 9)
			{
				digit = 1;	
			}
			else
			{
				symbol = 1;
			}
			
			if( letter == 1 && digit == 1 && symbol == 1)
			{
				printf("Password is valid");
			}
			else
			{
				printf("Password is unvalid ")
			}
			
		}
	}
	else
	{
		printf("Invalid Password");
	}
}