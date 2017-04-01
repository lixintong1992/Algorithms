#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[] = {1,6,3,2,5,8,5,11};
    bubble_sort(a,8);
    int i = 0;
    for(i = 0;i < 8; i++){
        printf("%d ", a[i]);
    }
    return 0;
}

void bubble_sort(int s[], int len){
    int temp, i, j;
    for (i = 0; i < len; i++){
        //每一次由底至上地上升
        for (j = len - 1; j > i; j--){
            if (s[j] < s[j-1]){
                temp = s[j];
                s[j] = s[j - 1];
                s[j - 1] = temp;
            }
        }
    }
}
