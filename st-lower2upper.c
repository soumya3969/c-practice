#include<stdio.h>
#include<ctype.h>
char s[100];
int count, ch, i;
void cLow(char *s)
{
	printf("%s",s);
	for(i=0;(s[i]=getchar())!='\n';i++);
	
	s[i]='\0';
	count=i;
	printf("1     : %s",s);
	printf("\n2:  ");
	for(i=0;i<count;i++)
	{
		ch=islower(s[i])?toupper(s[i]):tolower(s[i]);
		putchar(ch);
		
	}
}
int main(){
	printf("enter a sentence :");
	fgets(s,0,stdin);
	cLow(s);
}
