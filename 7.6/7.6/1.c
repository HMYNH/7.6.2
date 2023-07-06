#include<stdio.h>
#define max 3
//int main()
//{
//	/*int sb[10];
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		sb[i] = i;
//		printf("sb[%d]=%d\n",i+1, sb[i]);
//	}*/
//	/*int ab[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		printf("ab[%d]=%d\n", i + 1, ab[i]);
//	}*/
//	/*int sd[5] = {5,3,4,2,1};
//	printf("%p\n",&sd);
//	printf("%p\n", &sd+1);//增加一个数组的大小
//	printf("%p\n", &sd -1);
//	printf("%p\n", &sd[0]);
//	printf("%d\n", *&sd[0]);
//	printf("%d\n", *sd+1);
//	printf("%d\n", *sd -1);
//	printf("%d\n", *(sd + 1));
//	printf("%p\n", &sd[0]+1);//增加一个类型的大小，例如int型就增加四个字节
//	printf("%p\n", sd + 1);//同上
//	printf("%p\n", &sd[1]);
//	printf("%p\n", &sd[2]);
//	printf("%p\n", &sd[3]);
//	printf("%p\n", &sd[4]);*/
//	/*int ad[10];
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		*(ad + i) = i+1;
//		printf("ad[%d]=%d\n", i + 1, ad[i]);
//	}*/
//	/*int a;
//	int as[5] = { 5,4,3,2,1 };
//	a = *(&as[4]) - *(&as[0]);
//	printf("a=%d\n", a);*/
//}
//int main()
//{
//	/*int a,b;
//	int array[4];
//	a = sizeof(array);
//	b = sizeof(array) / sizeof(array[0]);
//	printf("%d %d\n", a,b);*/
	/*int a[4] = { 23,1,45,3 };
	int i,j,k;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3-i; j++)
		{
			if (a[j]  >a[j + 1])
			{
				k = a[j];
				a[j] = a[j + 1];
				a[j + 1] = k;
			
			}
		}
		printf("a[%d]=%d\n", i + 1, a[i]);
	}*/
//
//
//}
/*void abs(int* a, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d\n", a[i]);
	}
}
int main()
{
	int a[] = { 1,2,3,4,5,6,7,8,9 };
	abs(a,5);
}*/
//int main()
//{
//	int i, j;
//	int asd[3][2] = { {1,2},{3,4} ,{5,6} };
//	/*for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 2; j++)
//		{`	
//			printf("%d ", asd[i][j]);
//		}
//		printf("\n");
//	}*/
//
//
//
//}
/*float chengji(float a[max])
{
	int i;
	float j = 0;
	for (i = 0; i < max; i++)
	{
		j = j + a[i];
	}
	j = j / max;
	return j;
}
int main()
{
	float a[max];
	int i;
	float j;
	printf("请输入五个人的成绩=>");
	for (i = 0; i < max; i++)
	{
		scanf("%f",&a[i]);
	}
	 j=chengji(a);
	printf("平均成绩=>%.2f", j);

}*/
/*int main()
{
	int i,j,k=0;
	int a[100];
	for (i = 0; i < 10; i++)
	{
		for(j=0;j<10;j++)
		{
			k++;
			if (k % 2 != 0)
			{
				a[k] = k;
				printf("%3d", a[k]);
			}
		}
		printf("\n");
	}
}*/

/*int chengji(int a[max])
{
	int i;
	int j = 0;
	for (i = 0; i < max; i++)
	{
		j = j + a[i];
	}
	j = j ;
	return j;
}
void daxiao(int a[max])
{
	int i, j, k;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 9 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				k = a[j];
				a[j] = a[j + 1];
				a[j + 1] = k;

			}
		}
	}
	printf("最大值=>%d\n", a[0]);
	printf("最小值=>%d\n", a[max-1]);
}
void jioushu(int a[])
{
	int i;
	for (i = 0; i < max; i++)
	{
		if ((a[i] % 2) != 0)
		{
			printf(" 奇数%d ", a[i]);
		}
		
		if (a[i] % 2 == 0)
		{
			printf(" 偶数%d ", a[i]);
		}
		printf("\n");
	}
}

int main()
{
	int   a[max];
	int i;
	int  j;
	printf("请输入十个数=>");
	for (i = 0; i < max; i++)
	{
		scanf("%d", &a[i]);
	}
	j = chengji(a);
	 daxiao(a);
	 jioushu(a);
	printf("总值=>%.2f",(float) j);
	printf("平均值=>%.2f", (float)j/max);


}*/
/*int main()
{
	int a[5] = { 3,1,5,4,6};
	int i,j,k;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5-i; j++)
		{
			if (a[j]  < a[j + 1])
			{
				k = a[j];
				a[j] = a[j + 1];
				a[j + 1] = k;
			}
		}
	}
	for(j = 0; j < 5; j++)
	{     
		printf("a[%d]=%d\n", j, a[j]);
	}
}*/
/*void asd(float* a)
{
	int i;
	for (i = 0; i < max; i++)
	{
		printf("%.2f\n", a[i]);
	}
}
int main()
{
	float a[max];
	int i;
	for (i = 0; i < max; i++)
	{
		scanf("%f", &a[i]);
	}
	asd(a);
}*/
int main()
{
	int i,j;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("*");
		}
		printf("\n");
		for (j = 0; j < i+1; j++)
		{
			printf(" ");
		}
	
	}
}