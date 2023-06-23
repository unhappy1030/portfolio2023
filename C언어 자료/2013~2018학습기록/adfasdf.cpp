#include<stdio.h>

int main() {
	int xset[] = {1, 3, 5, 7, 9};
	int yset[] = {1, 6, 8};
	int dataset[1000];
	int dataidx = 0;
	int i=0;
	int j=0;
	const int xsize = 5;
	const int ysize = 3;
	
	printf("합집합");
	while((i<xsize)&&(j<ysize))
	{
		if(xset[i]<yset[j])
		{
			printf("%d", yset[j]);
			i++;
		}
		else if(xset[i]>yset[j])
		{
			printf("%d", yset[j]);
			j++;
		}
		else
		{
			printf("%d", yset[j]);
			i++;
			j++;
		}
	} 
	while(i<xsize)printf("%d ", xset[i++]);
	while(j<ysize)printf("%d ", yset[j++]);
	dataidx=0;
	printf("\n 교집합");
	for(i=0;i<xsize;i++){
		int flag=0;
		for(j=0;j<xsize;j++)
		{
			if(xset[i]==yset[j])
			{
				flag=1;
			}
			if(flag)
			{
				printf("%d ", xset[i]);
			}
		}
	}
	dataidx=0;
	printf("\n 차집합(X-Y)");
	for(i=0;i<xsize;i++)
	{
		int flag=0;
		for(j=0;j<xsize;j++)
		{
			if(xset[i]==yset[j])
			{
				flag=1;
			}
		}
		if(!flag)
		{
			printf("%d ", xset[i]);
		}
	}
	return 0;
}
