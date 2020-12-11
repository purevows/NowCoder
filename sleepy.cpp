#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int main()
{
	int n, k, max = 0, basicscore = 0, temp;
	scanf("%d %d", &n ,&k);
	int score[n] = {0}, awake[n] = {0};
	for(int i = 0; i < n; i++)
		scanf("%d", &score[i]);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &awake[i]);
		basicscore = basicscore + score[i] * awake[i];
	}
	for(int i = 0; i < n; i++)
	{
		if(awake[i] == 0)
		{
			temp = 0;
			for(int j = 0; j < k; j++)
			{
				if(i + j < n)
					temp = temp + score[i + j] * !awake[i + j];
			}
			temp = temp + basicscore;
			if(max < temp)
				max = temp;
		}
	}
	printf("%d", max);
	return 0;
}
