#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 40
void push(char);
char pop();
int ispalindrome(char* );
char stack[SIZE];
int top=-1,i=0;
void main()
{
char str1[SIZE],str2[SIZE],str3[SIZE];
 	gets(str1);

 //str2[SIZE]=str1[SIZE];
 	strcpy(str2,str1);

	strrev(str1);
	i=strlen(str1)-1;
	push('*');
	while(ispalindrome(str1))
	{
		push(str1[i]);
		str1[i]='\0';
		i--;

	}	
		if(top==0)
		{
			printf("already palindrome");

			getch();
			exit (0);
		}
	i=0;

while(stack[top]!='*')
{
	
	str3[i]= (char)pop();
	i++;
}
	str3[i]='\0';
	strcat(str2,str3);
	puts(str2);
	getch();
	}
	void push(char c)
	{

	stack[++top]=c;

	}
	char pop()
	{
 	char c;

 	c=stack[top--];
 	if(c=='*')
  	return ('\0');
	else
	return c;
	}
int ispalindrome(char *str1)
{
  int n,l,r;
  n=strlen(str1);
  l=0;
  r=n-1;
  while(l<r)
  {
	 if(str1[l]!=str1[r])
	  {
		return 1;

		}
  l++;
  r--;
  }
  return 0;


}
