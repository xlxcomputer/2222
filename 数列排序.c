#include<stdio.h>
int maxid(int a[], int len) {
	int maxid = 0;
	for (int i = 0; i < len; i++) {
		if (a[i] > a[maxid]) {
			maxid = i;
		}
	}
	return maxid;
}

int main() {
	int a[] = { 23,34,43,32,56,43,67,84,56,78,21 };
	int len = sizeof(a) / sizeof(a[0]);
	int i;
	for (i = len - 1; i > 0; i--) {
		int max = maxid(a, i + 1);
		int t = a[max];
		a[max] = a[i];
		a[i] = t;
	}
	for (i = 0; i < len; i++) {
		printf("%d\t", a[i]);
	}
	
	return 0;
}