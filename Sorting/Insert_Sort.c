#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[] = {1,6,3,2,5,8,5,11};
    insert_sort(a,8);
    int i = 0;
    for(i = 0;i < 8; i++){
        printf("%d ", a[i]);
    }
    return 0;
}

void insert_sort(int s[], int len){
    int temp, i, j;
    for (i = 1; i < len; i++){
        if (s[i - 1] > s[i]){
            temp = s[i];
            j = i;
            while (j > 0 && s[j - 1] > temp)
            {
                s[j] = s[j - 1];
                j--;
            }
            s[j] = temp;
        }
    }
}
