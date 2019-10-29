#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[100], i, j, k, n;
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf_s("%d", &a[i]);
	}
	/*for (i = 1; i <= n -1; i++) {
		for (j = i; j <= n; j++) {
			if (a[i] < a[j + 1]) {
				k = a[i];
				a[i] = a[j + 1];
				a[j + 1] = k;
			}
		}
	}*/int u;
	for (i = 1; i <= n - 1; i++) {
		for (j = 1; j <= n-i; j++) {
			if (a[j] < a[j+1]) {
				k = a[j];
				a[j] = a[j + 1];
				a[j + 1] = k;
			}for (u = 1; u <= n; u++) {
				printf("%d   ", a[u]);
			}printf("\n");
		}
	}
	for (i = 1; i <= n; i++) {
		printf("%d   ", a[i]);
	}
	return 0;
}
