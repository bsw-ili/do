//ѧ����Ϣ����ϵͳ
#include <stdio.h>
#include <string.h>
#define N 100
struct student
{
    long ID;
    char name[30];
    char sex;
    int score[4];
    int he;
    int paiming;
};
void print();
int main()
{
    int i = 0,j,c,t;
    int sum[4] = { '\0' };
    double ave[4] = { '\0' };
    int a;
    print();
    student temp = { '\0' };
    student stu[N];
    student* b = stu;
    while (1)
    {
        scanf_s("%d", &a);
        if (a == 1)
        {
            for (; i < N; )
            {
                printf("������ID��");
                scanf_s("%d", &stu[i].ID);
                printf("������������");
                scanf_s("%s", stu[i].name,50);
                getchar();
                printf("�������Ա�");
                scanf_s("%c", &stu[i].sex);
                printf("�ֱ�����ɼ���\n");
                for (int j = 0; j < 4; j++)
                {
                    scanf_s("%d", &stu[i].score[j]);
                }
                i++;
                break;
            }
        }
        if (a == 3)
        {
            for (int m = 0; m < i-1; m++)
            {
                for (int n = m + 1; n < i; n++)
                {
                    if (b[m].ID > b[n].ID)
                    {
                        temp = b[m];
                        b[m] = b[n];
                        b[n] = temp;
                    }
                }
            }
            for (int m= 0; m < i; m++)
            {
                stu[m].he = 0;
                printf("%d\t", stu[m].ID);
                printf("%s\t", stu[m].name);
                printf("%c\t", stu[m].sex);
                for (int j = 0; j < 4; j++)
                {
                    stu[m].he += stu[m].score[j];
                    printf("%d\t", stu[m].score[j]);
                }
                printf("%d", stu[m].he);
                printf("\n");
            }
            printf("\n");
        }
        if (a == 2)
        {
            printf("������Ҫɾ����ѧ��ѧ��");
            scanf_s("%d", &c);
            for (j = 0; j < i; j++)
            {
                if (stu[j].ID == c)
                {
                    stu[j] = { '\0' }; 
                }
            }
        }
        if (a == 4)
        {
            for (int m = 0; m < 4; m++)
            {
                for (j = 0; j < i; j++)
                {
                    sum[m] += stu[j].score[m];
                }
                printf("%d", i);
                ave[m] = sum[m]*1.0 / i;
                printf("ave:score[%d]=%f\t",m, ave[m]);
                printf("\n");
            }
            printf("\n");
        }
        if (a == 5)
        {
            for (int m = 0; m < i; m++)
            {
                stu[m].paiming = m + 1;
                stu[m].he = 0;
                for (int j = 0; j < 4; j++)
                {
                    stu[m].he += stu[m].score[j];
                }
            }
            for (int m = 0; m < i - 1; m++)
            {
                for (int n = m + 1; n < i; n++)
                {
                    if (b[m].he < b[n].he)
                    {
                        temp.paiming = stu[m].paiming;
                        stu[m].paiming = stu[n].paiming;
                        stu[n].paiming = temp.paiming;
                        temp = b[m];
                        b[m] = b[n];
                        b[n] = temp;
                    }
                }
            }
            for (int m = 0; m < i; m++)
            {
                printf("������%d\t", stu[m].paiming);
                printf("%d\t", stu[m].he);
                printf("%d\t", stu[m].ID);
                printf("%s\t", stu[m].name);
                printf("%c\t", stu[m].sex);
                for (int j = 0; j < 4; j++)
                {
                    printf("%d\t", stu[m].score[j]);
                }
                printf("\n");
            }
            printf("\n");
        }
        if (a == 6)
        {
            printf("��������a=5");
            printf("��������Ҫ���ҵ�ѧ�ţ�");
            scanf_s("%d", &t);
            for (j = 0; j < i; j++)
            {
                if (stu[j].ID == t)
                {
                    printf("������%d\t", stu[j].paiming);
                    printf("%d\t", stu[j].he);
                    printf("%d\t", stu[j].ID);
                    printf("%s\t", stu[j].name);
                    printf("%c\t", stu[j].sex);
                    for (int m = 0; m < 4; m++)
                    {
                        printf("%d\t", stu[j].score[m]);
                    }
                    printf("\n");
                    break;
                }
            }
        }
        printf("������1 ��2 ��3, 4, 5 ,6\n");
    }
    return 0;
}
void print()
{
    printf("ѧ������ϵͳ\n");
    printf("1.����һ���˵���Ϣ\n");
    printf("2.ɾ��һ���˵���Ϣ\n");
    printf("3.��ѧ��չʾ��Ϣ\n");
    printf("4.����ƽ��ֵ\n");
    printf("5.���ɼ�չʾ������Ϣ\n");
    printf("6.��ѧ�Ų��Ҹ�����Ϣ\n");
    printf("������1��2��3, 4 ,5 ,6\n");
}
   