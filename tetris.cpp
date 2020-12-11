#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int main()
{
	int n, m, c, flag, score = 0;
	scanf("%d %d", &n, &m);
	int screen[n] = {0};
	for(int i = 0; i < m; i++)
	{
		scanf("%d", &c);
		screen[c - 1] = screen[c - 1] + 1;
		flag = 0;
		for(int j = 0; j < n; j++)
		{
			if(screen[j] == 0)
				flag = 1;
		}
		if(flag == 0)
		{
			for(int k = 0; k < n; k++)
			{
				screen[k] = screen[k] - 1;
			}
			score++;
		}
	}
	printf("%d", score);
	return 0;
}
