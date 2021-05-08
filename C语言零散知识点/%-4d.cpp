#include <stdio.h>
int main(){
    int i=1, j;
    while(1){  // 外层循环
        j=1;
        while(1){  // 内层循环
            printf("%-4d", i*j);       /*C语言中%4d和%-4d解释：显示位宽为4的整数（就是数字个数为4，不够4的会空出来凑4个，多了就不管了，照原数据输出）
                                        而“-”使得数据从左边被输出（左对齐）*/
            j++;
            if(j>4) break;  //跳出内层循环
        }
        printf("\n");
        i++;
        if(i>4) break;  // 跳出外层循环
    }

    return 0;
}
