/*һ��ѧϰС���� 5 ���ˣ�ÿ������ 3 �ſγ̵Ŀ��Գɼ������С����Ƶ�ƽ���ֺ���ƽ���֡�*/


#include <stdio.h>
int main(){
    int i, j;  //��ά�����±�
    int sum = 0;  //��ǰ��Ŀ���ܳɼ�
    int average;  //��ƽ����
    int v[3];  //����ƽ����
    int a[5][3];  //��������ÿ��ͬѧ���Ƴɼ��Ķ�ά����
    printf("Input score:\n");
    for(i=0; i<3; i++){
        for(j=0; j<5; j++){
            scanf("%d", &a[j][i]);  //����ÿ��ͬѧ�ĸ��Ƴɼ�
            sum += a[j][i];  //���㵱ǰ��Ŀ���ܳɼ�
        }
        v[i]=sum/5;  // ��ǰ��Ŀ��ƽ����
        sum=0;
    }
    average = (v[0] + v[1] + v[2]) / 3;
    printf("Math: %d\nC Languag: %d\nEnglish: %d\n", v[0], v[1], v[2]);
    printf("Total: %d\n", average);
    return 0;
}


