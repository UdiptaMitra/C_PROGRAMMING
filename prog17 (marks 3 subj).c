#include<stdio.h>
int main()
{
	unsigned int marks1,marks2,marks3;
	float average;
	printf("\nEnter marks in subject 1, 2 and 3 in order: ");
	scanf("%u %u %u",&marks1,&marks2,&marks3);
	average=(marks1+marks2+marks3)/3.0f;
	if ((average>=60)||(marks1>=80||marks2>=80||marks3>=80))
	{
		printf("\nGood job");
	}
	else
	{
		printf("\nDo better");
	}
	return 0;
}
