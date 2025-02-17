#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// 定义密码偏移量
#define PASSWORD 5

// 定义数组
vector<char> p;

// 编码密码
void bianma() {
  for (auto i : p) {
    cout << (char)((int)i + PASSWORD);
  }
}

// 解码密码
void jiema() {
  for (auto i : p) {
    cout << (char)((int)i - PASSWORD);
  }
}

int main() {
  system("chcp 65001");
  system("cls");
  cout << "Copyright (C) 2024-2025 BlazeSnow. 保留所有权利。" << endl;
  cout << "当前程序版本号：v1.0.2" << endl;
  cout << "https://github.com/BlazeSnow/displacement-cipher" << endl << endl;
  // 输入
  cout << "移位密码移位距离：" << PASSWORD << endl;
  cout << "请输入内容：" << endl;
  string input;
  getline(cin, input);
  p = vector<char>(input.begin(), input.end());
  // 输出PASSWORD的值
  cout << endl;
  cout << "移位密码移位距离：" << PASSWORD << endl << endl;
  // 编码
  cout << "编码的结果为:" << endl;
  bianma();
  cout << endl << endl;
  // 解码
  cout << "解码的结果为:" << endl;
  jiema();
  cout << endl << endl;
  // 结束前暂停
  system("pause");
  return 0;
}
