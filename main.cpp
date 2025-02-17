#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

// 定义密码偏移量
#define PASSWORD 5

// 定义数组
vector<char> p;

// 编码密码
void bianma() {
  for (int i = 0; i <= p.size(); i++) {
    p[i] = (char)((int)p[i] + PASSWORD);
    cout << p[i];
  }
}

// 解码密码
void jiema() {
  for (int i = 0; i <= p.size(); i++) {
    p[i] = (char)((int)p[i] - PASSWORD * 2);
    cout << p[i];
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
  while (true) {
    char temp = (char)cin.get();
    if (temp == '\n') {
      break;
    }
    p.push_back(temp);
  }
  // 输出PASSWORD的值
  cout << endl;
  cout << "移位密码移位距离：" << PASSWORD << endl;
  // 编码
  cout << "编码的结果为:" << endl;
  bianma();
  cout << endl;
  // 解码
  cout << "解码的结果为:" << endl;
  jiema();
  cout << endl;
  // 结束前暂停
  system("pause");
  return 0;
}
