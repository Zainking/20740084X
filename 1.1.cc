#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        cout << "请输入第" << i + 1 << "个数: ";
        int num;
        cin >> num;
        sum += num;
    }
    cout << "10个数之和为: " << sum << endl;
    return 0;
}