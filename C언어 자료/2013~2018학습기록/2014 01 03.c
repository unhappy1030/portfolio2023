#include<stdio.h>
#include<stdlib.h>

#define limit 8
#define n 5
#define min 1

int main() {
	static struct body{
		char *name;
		int size;
		int price;
	}a[]={{"plum",4,4500},{"apple",5,5700},{"orange",2,2250},{"strawberry",1,1100},{"melon",6,6700}};
	
	int nv,v[8+1];
	int item[8+1], i , s ,p;
	
	for(s=0;s<=8;s++)
	{
		v[s]=0;
	}
	for(i=0;i<n;i++)
	{
		for(s=a[i].size;s<=8;s++)
		{
			p=s-a[i].size;
			nv=v[p]+a[i].price;
			if(nv>v[s])
			{
				v[s]=nv;
				item[s]=i;
			}
		}
	}
	for(s=8;s>=min;s=s-a[item[s]].size)
	{
		printf("%10s %8ld\n", a[item[s]].name, a[item[s]].price);
	}
	printf("%d\n", v[8]);
	return 0;
}
