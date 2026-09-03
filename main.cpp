#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <vector>

#ifdef _WIN32
#include <windows.h>
#endif

using namespace std;

// 定义密码偏移量
#define PASSWORD 5

void clearConsole() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void enterToContinue() {
    printf("按回车键继续...");
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
    }
    getchar();
}

// 定义数组
vector<char> p;

// 编码密码
void bianma() {
    for (auto i: p) {
        printf("%c", (char) ((int) i + PASSWORD));
    }
}

// 解码密码
void jiema() {
    for (auto i: p) {
        printf("%c", (char) ((int) i - PASSWORD));
    }
}

int main() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
#endif

    clearConsole();
    printf("Copyright (C) 2024-2026 BlazeSnow. 保留所有权利。\n");
    printf("https://github.com/BlazeSnow/displacement-cipher\n\n");
    // 输入
    printf("移位密码移位距离：%d\n", PASSWORD);
    printf("请输入内容：\n");
    char input[1024];
    scanf(" %[^\n]", input);
    p = vector<char>(input, input + strlen(input));
    // 输出PASSWORD的值
    printf("\n");
    printf("移位密码移位距离：%d\n\n", PASSWORD);
    // 编码
    printf("编码的结果为:\n");
    bianma();
    printf("\n\n");
    // 解码
    printf("解码的结果为:\n");
    jiema();
    printf("\n\n");
    // 结束前暂停
    enterToContinue();
    return 0;
}
