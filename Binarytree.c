#include "header.h"
#include "declaration.h"
int main(void)
{
	char Option;
	printf("Do you want to creat a tree ?(Y/N):");
	scanf("%c",&Option);
	switch(Option)
	{
		case 'Y': 
			printf("Tree Root is been created\n");	
			break;
		 case 'N':
			printf("Good Bye\n");	
			break;
		 default:
			printf("Invalid Option\n");	
	}
	return 0;
}
