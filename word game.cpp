#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int main()
{
	int t, m ,n;
	char map[99][99] = {0}, word[9] = {0};
	int i, j, k, l, len, count;
	scanf("%d", &t);
	for(i = 0; i < t; i++)
	{
		char map[99][99] = {0}, word[9] = {0};
		scanf("%d %d", &m, &n);
		for(j = 0; j < m; j++)
			scanf("%s", &map[j]);
		scanf("%s", &word);
		len = strlen(word);
		count = 0;
		for(j = 0; j < m; j++)
		{
			for(k = 0; k < n; k++)
			{
				if(len == 1)
				{
					if(map[j][k] == word[0])
						count++;
				}
				else if(map[j][k] == word[0])
				{
					for(l = 1; l < len; l++)
					{
						if(map[j][k + l] != word[l])
							break;
					}
					if(l == len)
						count++;
					for(l = 1; l < len; l++)
					{
						if(map[j + l][k] != word[l])
							break;
					}
					if(l == len)
						count++;
					for(l = 1; l < len; l++)
					{
						if(map[j + l][k + l] != word[l])
							break;
					}
					if(l == len)
						count++;
				}
			}
		}
		printf("%d\n", count);
	}
	return 0;
}
