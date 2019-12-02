#include <stdio.h>

int main(void) {
	// your code here
	int x[100];
	int i=0,y=0;
	while(1)
	{
		scanf("%d",&y);
		if(y == 42)
			break;
		x[i] = y;
		i++;
	}
	
	for(y=0;y<i;y++)
		printf("%d\n",x[y]);
	
	return 0;
}
