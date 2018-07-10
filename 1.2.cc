#include <iostream>
#include <iomanip> // 输入/输出操纵符库的一部分
using namespace std;

int main() {
    float rate, principal;
    cout << "请输入你的本金: ";
    cin >> principal;
    cout << "请输入银行利率(%): ";
    cin >> rate;

    cout << "你在一年后会获得: " << setiosflags(ios::fixed) << setprecision(2) << principal + principal * rate * 0.01 << "元" << endl;
/*
    std::setiosflags
        setiosflags (ios_base::fmtflags mask);
        Set format flags
        Sets the format flags specified by parameter mask.
        Behaves as if member setf were called with mask as argument on the stream on which it is inserted/extracted as a manipulator (it can be inserted/extracted on input streams or output streams).
        See ios_base::fmtflags for more information on the particular flags that can be modified with this manipulator function.
        This manipulator is declared in header <iomanip>.

    std::setprecision
        setprecision (int n);
        Set decimal precision
        Sets the decimal precision to be used to format floating-point values on output operations.
        Behaves as if member precision were called with n as argument on the stream on which it is inserted/extracted as a manipulator (it can be inserted/extracted on input streams or output streams).
        This manipulator is declared in header <iomanip>.
*/
    return 0;
}