#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
int main() {
    int n=0;
    scanf("%d",&n);
    char num[31];
        scanf("%s", num);
        int len = strlen(num);
        int tenNum = 0;
        int templen = len-1;
        for (int i = 0;i < len;i++) {
            if (num[i] >= 'A' && num[i] <= 'F') {
                        num[i] -= ('A' - 10);
            }
            else if (num[i] >= '0' && num[i] <= '9') {
				num[i] -= '0';
            }
            tenNum += num[i] * pow(n,templen);
            templen--;
        }
        int goal = 0;
        scanf("%d", &goal);
        char result[100];
        int temp = 1;
		int index = 0;
        if(tenNum==0){
            printf("0");
            return 0;
		}
		int digit = 0;
        while (tenNum > 0) {
			digit = tenNum % goal;
            if (digit < 10) {
				result[index++] = digit + '0';
            }
            else {
				result[index++] = digit - 10 + 'A';
            }
            tenNum /= goal;
   //         result += (tenNum% goal)*temp;
			//temp *= 10;
   //         tenNum /= goal;
        }
        for (int i = index - 1;i >= 0;i--) {
			printf("%c", result[i]);
        }

    return 0;
}