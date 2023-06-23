#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct a{
	char *str;
};
void back(struct a *t, struct a *t1, int n)
{
	memcpy(t1->str, t->str, n);
}
int main() {
	int n;
	struct a t, t2;
	scanf("%d", &n);
	t.str = (char *)malloc(sizeof(char) * n);
	scanf("%s", t.str);
	t2.str = (char *)malloc(sizeof(char) * n);
	back(t, t2, n);
	printf("%s\n", t2.str);
	return 0;
}
