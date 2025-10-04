#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {

    int arr[10000];
    int num;
    int count=0;
    scanf("%d", &num);
    for (int i = 0;i < num;i++) {
        scanf("%d", &arr[i]);

    }
    for (int i = 0;i < num;i++) {
        if (arr[i] != (i + 1)) {
            int index = arr[i] - 1;
            int temp = arr[index];
            arr[index] = arr[i];
            arr[i] = temp;
            count++;
            i--;
        }
    }
    printf("%d", count);
    return 0;
}
