// Copyright (C) 2024 BlazeSnow
// 保留所有权利
// 本程序以GNU General Public License v3.0的条款发布
#include <iostream>
#include <cstdlib>

using namespace std;
#define PASSWORD 5

void bianma(char *p, int number)
{
    for (int i = 0; i <= number - 1; i++, p++)
    {
        *p = (char)((int)*p + PASSWORD);
        cout << *p;
    }
    cout << endl;
}

void jiema(char *p, int number)
{
    for (int i = 0; i <= number - 1; i++, p++)
    {
        *p = (char)((int)*p - PASSWORD * 2);
        cout << *p;
    }
    cout << endl;
}

int main()
{
    system("chcp 65001");
    cout << "Copyright (C) 2024 BlazeSnow.保留所有权利。" << endl;
    cout << "本程序以GNU General Public License v3.0的条款发布。" << endl;
    cout << "当前程序版本号：v1.0.0" << endl;
    cout << "https://github.com/BlazeSnow/displacement-cipher" << endl
         << endl;
    int number = 1000;
    char *p = (char *)malloc(sizeof(char) * number);
    // 检查p的NULL
    if (!p)
    {
        cout << "ERROR:malloc" << endl;
        system("pause");
        return -1;
    }
    // 输入
    cout << "移位密码移位距离：" << PASSWORD << endl;
    cout << "请输入内容：" << endl;
    for (int i = 0; i <= number; i++)
    {
        *(p + i) = (char)cin.get();
        if (*(p + i) == '\n')
        {
            number = i;
            break;
        }
    }
    // 输出PASSWORD的值
    cout << endl;
    cout << "移位密码移位距离：" << PASSWORD << endl;
    // 编码
    cout << "编码的结果为:" << endl;
    bianma(p, number);
    // 解码
    cout << "解码的结果为:" << endl;
    jiema(p, number);
    // 释放p
    delete p;
    system("pause");
    return 0;
}
