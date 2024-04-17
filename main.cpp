#include <iostream>
#include <cstdlib>

using namespace std;
#define PASSWORD 5

void bianma(char *p, int number) {
    for (int i = 0; i <= number - 1; i++, p++) {
        *p = (char) ((int) *p + PASSWORD);
        cout << *p;
    }
    cout << endl;
}

void jiema(char *p, int number) {
    for (int i = 0; i <= number - 1; i++, p++) {
        *p = (char) ((int) *p - PASSWORD * 2);
        cout << *p;
    }
    cout << endl;
}

int main() {
    int number = 1000;
    char *p = (char *) malloc(sizeof(char) * number);
    //检查p的NULL
    if (!p) {
        cout << "ERROR:malloc" << endl;
        return -1;
    }
    //输入
    cout << "PASSWORD = " << PASSWORD << endl;
    cout << "请输入内容:" << endl;
    for (int i = 0; i <= number; i++) {
        *(p + i) = (char) cin.get();
        if (*(p + i) == '\n') {
            number = i;
            break;
        }
    }
    //输出PASSWORD的值
    cout << endl;
    cout << "PASSWORD=" << PASSWORD << endl;
    //编码
    cout << "编码的结果为:" << endl;
    bianma(p, number);
    //解码
    cout << "解码的结果为:" << endl;
    jiema(p, number);
    //释放p
    delete p;
    return 0;
}
