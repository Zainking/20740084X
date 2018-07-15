#include <iostream>
using namespace std;
int main() {
    int line, space;
    cout << "请输入打印行数: ";
    cin >> line;
    if (line <= 0) {
        cout << "行数错误" << endl;
        return 1;
    }

    cout << "请输入空格数: ";
    cin >> space;
    if (space < 0) {
        cout << "空格数错误";
        return 1;
    }

    for (int i = 0; i < line; i++) {
        for (int j = 0; j < line - i - 1; j++) {
            cout << " ";
        }
        for (int j = 0; j < i * 2 + 1; j++) {
            cout << "*";
        }
        for (int j = 0; j < space; j++) {
            cout << " ";
        }
        for (int j = 0; j < (line - i - 1) * 2 + 1; j++) {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}