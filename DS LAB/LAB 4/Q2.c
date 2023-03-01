#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 
int main() {

    int count[2][10]={0,0};
    char test_str[50];
    scanf("%s",test_str);
    for(int i=0;i<50;i++){
        if(test_str[i]>='0' && test_str[i]<='9'){
            switch(test_str[i]){
                case '0': count[1][0]++;
                            break;
                case '1': count[1][1]++;
                            break;
                case '2': count[1][2]++;
                            break;
                case '3': count[1][3]++;
                            break;
                case '4': count[1][4]++;
                            break;
                case '5': count[1][5]++;
                            break;
                case '6': count[1][6]++;
                            break;
                case '7': count[1][7]++;
                            break;
                case '8': count[1][8]++;
                            break;
                case '9': count[1][9]++;
                            break;
                default: break;
            }
        }
        else{}
    }
    for(int i=0;i<=9;i++){
        printf("%d",count[1][i]);
        printf(" ");
    }
    return 0;
}
