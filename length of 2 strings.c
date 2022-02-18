#include<stdio.h>
#include<string.h>
void main()
{
	char s1[100],s2[100];
	int i,j,len=0;
	scanf("%[^\n]s",s1);
	scanf(" %[^\n]s",s2);
	for(i=0;s1[i]!='\0';i++)
	{
		len=len+1;
	}
	j=len;
//	printf("%d",j);
    for(i=0;s2[i]!='\0';i++)
    {
    	s1[j+1]=s2[i];
    	j++;
	}
	printf("%s",s1);
	
	
	
} 
