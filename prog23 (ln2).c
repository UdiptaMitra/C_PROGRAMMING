//log_e(2)=1-1/2+1/3_1/4+....
#include <stdio.h>
#include<math.h>
int main()
{
	float eps=1,sncurrent,snprev;
	int n=1,i;
	while(eps>0.0000000001)
	{
		snprev=sncurrent;
		for(i=1;i<=n;i++)
		{
			if(i%2==1)
			{
				sncurrent+=(1/i);
			}
			else
			{
				sncurrent-=(1/i);
			}
		}
		n++;
		eps=fabs(sncurrent-snprev);
	}
	printf("ln2 is close to %f",sncurrent);
	return 0;
}
