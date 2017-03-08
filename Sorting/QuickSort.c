#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[] = {1,6,3,2,5};
    quick_sort(a,0,5);
    int i = 0;
    for(i = 0;i < 5; i++){
        printf("%d ", a[i]);
    }
    return 0;
}

void quick_sort(int s[], int l, int r){
    if (l < r)
    {
        //Swap(s[l], s[(l + r) / 2]); //将中间的这个数和第一个数交换
        int i = l, j = r, x = s[l];
        while (i < j)
        {
            while(i < j && s[j] >= x) // 从右向左找第一个小于x的数
                j--;
            if(i < j)
                s[i++] = s[j];

            while(i < j && s[i] < x) // 从左向右找第一个大于等于x的数
                i++;
            if(i < j)
                s[j--] = s[i];
        }
        s[i] = x;
        quick_sort(s, l, i - 1); // 递归调用
        quick_sort(s, i + 1, r);
    }
}
