#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
	int n = 0;
	char arr1[] = "aaaaaaaa";
	char arr2[] = "********";
	char* a1 = &arr2[0];
	char* a2 = &arr2[0];
	n = strlen(arr1);
	for (int i = 0; i<n / 2; i++) {
		arr1[i] = arr2[i];
		arr1[n - i - 1] = arr2[n - i - 1];
		printf("%s\n", arr1);
	}
	system("pause");
	return 0;
}
