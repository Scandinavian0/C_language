// C_language.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
void first_c(void);
void two_func(void);
void bulter(void);
void a_and_b(void);
int main()
{
	/*std::cout << "Hello World!\n";*/
	first_c();
	printf("******************************* \n");
	two_func();
	printf("******************************* \n");
	a_and_b();
}


void first_c(void) {
	int num;
	num = 1;

	printf("I am a simple");
	printf("computer.\n");
	printf("My favorite number is %d beacuse it is first.\n", num);
}

// 引用多个函数
void two_func(void) {
	printf("I will summon the butler function. \n");
	bulter();
	printf("Yes . Bring me some tea and writeable DVDs . \n");
}
void bulter(void) {
	printf("You rang,sir? \n");
}

void a_and_b(void) {
	int a, b;
	a = 5;
	b = 2;
	b = a;
	a = b;
	printf("%d,%d", b, a);
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
