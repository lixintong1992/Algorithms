#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[] = {1,6,3,2,5,8,5,11};
    shell_Sort(a,8);
    int i = 0;
    for(i = 0;i < 8; i++){
        printf("%d ", a[i]);
    }
    return 0;
}

void shell_Sort(int s[], int len){
    int group, i, j, temp;
    for (group = len / 2; group > 0; group /= 2){
        for (i = group; i < len; i++){
            for (j = i - group; j >= 0; j -= group){
                if (s[j] > s[j + group]){
                    temp = s[j];
                    s[j] = s[j + group];
                    s[j + group] = temp;
                }
            }
        }
    }
}
