#include <stdio.h>
#include <stdlib.h>

int main() {
	char a[]="Seoul", b[]="10,312,545", c[]="+91,375";
	char d[]="Pusan", e[]="3,567,910", f[]="+5,868";
	char g[]="Incheon", h[]="2,758,296", i[]="+64,888";
	char j[]="Daegu", k[]="2,511,676", l[]="+17,230";
	char m[]="Gwangju", n[]="1,454,636", o[]="+29,774";
	printf("%15s%15s%15s\n",a, b, c);
	printf("%15s%15s%15s\n",d, e, f);
	printf("%15s%15s%15s\n",g, h, i);
	printf("%15s%15s%15s\n",j, k, l);
	printf("%15s%15s%15s", m, n, o);
	return 0;
}
