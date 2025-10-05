#include<stdio.h>
#include<string.h>

int getDigit(int num, int n, int N) {

    n = N / n - 1;
    for (int i = 0;i < n;i++) {
        num /= 10;
    }
    return num % 10;
}

int main() {
    char n[251];
    scanf("%s", n);
    int k = 0;
    scanf("%d", &k);
    int len = strlen(n);
    // for(int i =0;i<count;i++){
    //     // if(getDigit(n,i,count)>getDigit(n,i-1,count)&&getDigit(n,i,count)<getDigit(n,i+1,count)){

    //     // }
    //     arr[i]=getDigit(n,i,count);
    // }
    for (int l = 0;l < k;l++) {

        int tempBoolean = 0;
        for (int i = 0;i < len - 1;i++) {
            if (n[i] > n[i + 1]) {
                for (int j = i;j < len - 1;j++) {
                    n[j] = n[j + 1];
                }
                len--;
                tempBoolean = 1;
                break;
            }

        }
        if (tempBoolean == 0) {
            len--;
        }
    }
    int first = 0;
    while (n[first] == '0') {
        first++;
    }


    for (int i = first;i < len;i++) {
        printf("%c", n[i]);
    }
    return 0;
}

