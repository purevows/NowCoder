#include<stdio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;

struct node1 
{
	int n;
	long long int id[200];
}num[100];

struct node2 
{
	int n;
	long long int id[200];
}result[100];

int main()
{
	int t, i, j, k, l, flag;
	for(i = 0; i < 100; i++)
		for(j = 0; j < 200; j++)
		{
			num[i].id[j] = 0;
			result[i].id[j] = -1;
		}
	scanf("%d", &t);
	for(i = 0; i < t; i++)
	{
		scanf("%d", &num[i].n);
		for(j = 0; j < num[i].n; j++)
			scanf("%lld", &num[i].id[j]);
	}
	for(i = 0; i < t; i++)
	{
		l = 0;
		for(j = num[i].n - 1; j >= 0; j--)
		{
			flag = 0;
			for(k = 0; k < l; k++)
			{
				if(num[i].id[j] == result[i].id[k])
					flag = 1;
			}
			if(flag == 0)
				result[i].id[l++] = num[i].id[j];
		}
		result[i].n = l;
		printf("%lld", result[i].id[0]);
		for(k = 1; k < result[i].n; k++)
			printf(" %lld", result[i].id[k]);
		printf("\n");
	}
	return 0;
}
