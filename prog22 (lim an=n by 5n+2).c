//lim n to inf =n/(5n+2) = a_n
#include <stdio.h>
#include<math.h>
int main()
{
	float eps=1,ancurrent,anprev;
	int n=1;
	while(eps>0.0000000001)
	{
		anprev=ancurrent;
		ancurrent = (float) n/(5*n +2);
		n++;
		eps=fabs(ancurrent-anprev);
	}
	printf("The limit is close to %f",ancurrent);
	return 0;
}
