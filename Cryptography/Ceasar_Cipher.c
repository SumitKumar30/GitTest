#include <stdio.h>
void main()
{
	char plain[100];
	int cipher[100], i,l;
	printf("Enter string length:");
	scanf("%d",&l);

	printf("Enter plain text:");
	for(i = 0; i < l; i++)
	{
		scanf("%c",&plain[i]);
	}
	printf("\nThe cipher text is:");
	for(i=0; i < l; i++)
	{
		cipher[i] = (((int)(plain[i])-97+3)%26+97);
	}
	for(i = 0; i < l; i++)
	{
		printf("%c",(char)cipher[i]);
	}
	getch();
}