#include <stdio.h>
int main()
{
	printf("Calculator in C by ImKool-Gitch \n");
	printf("Select Options \n");
	printf("[1] Add \n");
	printf("[2] Subtract \n");
	printf("[3] Multiplication \n");
	printf("[4] Divide \n");
	int calc;
	scanf("%d", &calc);
	if (calc==1)
	{
		int onum;
		int tnum;
		printf("Enter the first number: ");
		scanf("%d", &onum);
		printf("Enter the second number: ");
		scanf("%d", &tnum);
		int sum = onum + tnum;
		printf("%d + %d = %d", onum, tnum, sum);
		return 0;
	}
	else if (calc==2)
	{
		int inum;
		int itnum;
		printf("Enter the first number: ");
		scanf("%d", &inum);
		printf("Enter the second number: ");
		scanf("%d", &itnum);
		int sumi = inum - itnum;
		printf("%d - %d = %d", inum, itnum, sumi);
		return 0;
	}
	if (calc==3)
        {
                int rnum;
                int rtnum;
                printf("Enter the first number: ");
                scanf("%d", &rnum);
                printf("Enter the second number: ");
                scanf("%d", &rtnum);
                int rsum = rnum * rtnum;
                printf("%d * %d = %d", rnum, rtnum, rsum);
                return 0;
        }
	else if (calc==4)
        {
                int snum;
                int stnum;
                printf("Enter the first number: ");
                scanf("%d", &snum);
                printf("Enter the second number: ");
                scanf("%d", &stnum);
                int stum = snum / stnum;
                printf("%d / %d = %d", snum, stnum, stum);
                return 0;
	}
}
