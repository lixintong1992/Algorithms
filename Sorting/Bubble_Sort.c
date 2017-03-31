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
    for (i = 0; i < len; i++)
    {
        for (j = i + 1; j < len; j++)
        {
            if (s[i] > s[j])
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}
