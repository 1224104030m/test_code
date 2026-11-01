#define _CRT_SECURE_NO_WARNINGS
/*#include <stdio.h>

int main() {

	int a = 0;

	printf("请输入数字");
	scanf("%d", &a);
	printf("%d", a);
	return 0;
	}*/

/*#include <stdio.h>

int main() {
	int h = 12;
	float a = 65;
	printf("我的年龄是%d", h);
	printf("我的体重是%f		", a);
	return 0;
	}*/


#include <stdio.h>

int main() {
	int num_1 = 0;
	int num_2 = 0;
	printf("请输入两个数字");
	scanf("%d %d", &num_1, &num_2);
	int sun = num_1 + num_2;
	printf("%d +%d =%d", num_1,num_2,sun);
	return 0;
	}