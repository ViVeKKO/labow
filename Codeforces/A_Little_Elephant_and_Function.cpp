#include <cstdio>
 
int main() {
	int n;
	scanf("%d",&n);
	printf("%d",n);
	for (int i=1;i<=n-1;++i) printf(" %d",i);
	printf("\n");
	return 0;
}