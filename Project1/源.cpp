//学生信息管理系统
#include <stdio.h>
#include <string.h>
#define N 100
struct student
{
    long ID;
    char name[30];
    char sex;
    int score[4];
};
void print();
int main()
{
    int i = 0,j,c;
    float sum[4] = { '\0' };
    float ave[4] = { '\0' };
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
                printf("请输入ID：");
                scanf_s("%d", &stu[i].ID);
                printf("请输入姓名：");
                scanf_s("%s", stu[i].name,50);
                getchar();
                printf("请输入性别：");
                scanf_s("%c", &stu[i].sex);
                printf("分别输入成绩：\n");
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
        if (a == 2)
        {
            printf("请输入要删除的学生学号");
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
            printf("\n");//
        }
        printf("请输入1 ，2 ，3, 4\n");
    }
    return 0;
}
void print()
{
    printf("学生管理系统\n");
    printf("1.增加一个人的信息\n");
    printf("2.删除一个人的信息\n");
    printf("3.展示信息\n");
    printf("4.各科平均值\n");
    printf("请输入1，2，3, 4\n");
}
   