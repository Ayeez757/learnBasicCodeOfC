#include<stdio.h>
#include<string.h>
int main() {

    char str[110];
    scanf("%s", str);
    int len = strlen(str);
    // for(int i =0;i<110;i++){
    //     scanf("%c",&str[i]);
    // }
    for (int i = 0;i < len;i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            if (str[i + 1] >= '0' && str[i + 1] <= '9') {
                for (int j = 0;j < str[i + 1] - '0';j++) {
                    printf("%c", str[i]);
                }
            }
            else {
                printf("%c", str[i]);
            }
        }
    }
    return 0;
}