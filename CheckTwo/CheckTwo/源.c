#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
void Check(int arr[], int len){
	int i = 0;
	int tmp = 0;
	int arr1[10] = { 0 };
	int arr2[10] = { 0 };
	int j = 0;
	int m = 0;
	int k = 0;
	int s = 0;
	for (i = 0; i < len; i++){
		tmp = tmp^arr[i];
	}
	int count = 0;
	for (i =31; i >= 0; i--){
		if((tmp >> i) &1){
			count = i;
		}
	}
	for (i = 0; i < len; i++){
		if ((arr[i] >> count )& 1){
			arr1[j] = arr[i];
			j++;
		}
		else{
			arr2[m] = arr[i];
			m++;
		}
	}
	for (i = 0; i < j; i++){
		k = k^arr1[i];
	}
	printf("%d\n", k);
	for (i = 0; i < m; i++){
		s = s^arr2[i];
	}
	printf("%d\n", s);

}
int main(){
	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3 };
	int len = sizeof(arr) / sizeof(arr[0]);
	Check(arr,len);
	system("pause");
	return 0;
}