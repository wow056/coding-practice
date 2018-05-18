#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float cases[100];
	int people[1000];
	int i, j;
	int C, N, tempdata, tempsum, tempavg, tempcnt;

	scanf("%d", &C);
	for (i = 0; i < C; i++)
	{
		scanf("%d", &N);
		tempsum = 0;
		for (j = 0; j < N; j++)
		{
			scanf("%d", &people[j]);
			tempsum += people[j];
		}
		tempavg = tempsum / N;
		tempcnt = 0;
		for (j = 0; j < N; j++)
		{
			if(people[j] > tempavg)
			{
				tempcnt++;
			}
		}
		cases[i] = (float)tempcnt / N * 100;
	}
	for (i = 0; i < C; i++)
	{
		printf("%.3f%%\n", cases[i]);
	}
	return 0;
}