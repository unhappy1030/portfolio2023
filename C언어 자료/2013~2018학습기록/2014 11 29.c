#include<stdio.h>
#include<stdlib.h>

int main() {
	FILE *inFile,*outFile;
	int DATA[10];
	int data_count, min_data=10001, GCD_data=0;
	int i, j, LCM_data=1;
	inFile=fopen("input.txt","r");
	if(inFile==0)
	{
		printf("�Է������� �������� �ʽ��ϴ�.\n");
		return -1;
	}
	fscanf(inFile,"%d", &data_count);
	for(i=0;i<data_count;i++)
	{
		fscanf(inFile,"%d", &DATA[i]);	
		if(min_data>DATA[i]) min_data = DATA[i];
	}
	for(i=1;i<=min_data;i++)
	{
		for(j=0;j<data_count;j++)
		{
			if(DATA[j] % i !=0) break;
		}
		if(j==data_count) GCD_data=i;
	}
	printf("�ִ����� : %d\n", GCD_data);
	for(i=0;i<data_count;i++)
	{
		LCM_data *= (DATA[i]/GCD_data);
	}
	printf("�ּҰ���� : %d\n", LCM_data * GCD_data);
	return 0;
	
}
