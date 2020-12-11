#include<stdio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;

struct node
{
	char time[9];
}num[100];

int main()
{
	int t, hour, minute, second;
	int i, j;
	for(i = 0; i < 100; i++)
		for(j = 0; j < 9; j++)
			num[i].time[j] = 0;
	scanf("%d", &t);
	for(i = 0; i < t; i++)
		scanf("%s", &num[i].time);
	for(i = 0; i < t; i++)
	{
		if((num[i].time[0] - '0') * 10 + (num[i].time[1] - '0') >= 24)
			num[i].time[0] = '0';
		if((num[i].time[3] - '0') * 10 + (num[i].time[4] - '0') >= 60)
			num[i].time[3] = '0';
		if((num[i].time[6] - '0') * 10 + (num[i].time[7] - '0') >= 60)
			num[i].time[6] = '0';
		printf("%s\n", &num[i].time);
	}
	return 0;
}
