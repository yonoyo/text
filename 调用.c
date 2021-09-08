#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void show(char* a1, char* a2){
	for (int i = 0; i<8/ 2; i++) {
		a1[i] = a2[i];
		a1[8 - i - 1] = a2[8- i - 1];
		printf("%s\n", a1);
	}
}
int main() {
	int n = 0;
	char arr1[] = "aaaaaaaa";
	char arr2[] = "********";
	show(arr1, arr2);
	system("pause");
	return 0;
}