#include <stdio.h>
#include <stdbool.h>

void BS(int num[], int num_len) {
    int i, j, temp, swap = 0;
    for (i = 0; i < num_len - 1; i++) {
        swap = 0;
        for (j = 0; j < num_len - 1 - i; j++) //��֤��
        {
            if (num[j] > num[j + 1])
            {
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
                swap = 1;
            }
        }
        if (swap == 0 )                    //����
            break;
    }
}

int main() {
    int num[] = { 79, 53, 29, 17, 23, 11, 91 };
    int num_len = sizeof(num) / sizeof(num[0]);

    printf("�Ƨǫe���}�C: ");
    for (int i = 0; i < num_len; i++)
        printf("%d ", num[i]);
    printf("\n");

    BS(num, num_len);

    printf("�Ƨǫ᪺�}�C: ");
    for (int i = 0; i < num_len; i++) {
        printf("%d ", num[i]);
    }
    printf("\n");

    return 0;
}

