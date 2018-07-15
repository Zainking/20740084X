#include <iostream>
#include <iomanip>
using namespace std;

typedef enum { SUN, MON, TUE, WED, THU, FRI, SAT } WEEKDAY;

int main() {
    const WEEKDAY date_1 = FRI;
    const int WEEKDAY_NUM = 7;
    const int MONTHDAY_NUM = 31;

    cout << "Calendar 2016-01\n";
    cout << "--------------------------\n";
    cout << "Su  Mo  Tu  We  Th  Fr  Sa\n";
    cout << "--------------------------\n";

    for (int i = 0; i < MONTHDAY_NUM; i++) {
        const bool isFirstDay = i == 0;
        const WEEKDAY today = (WEEKDAY)((date_1 + i) % WEEKDAY_NUM);
        if (isFirstDay) {
            switch (today) {
                case SUN:
                    cout << setw(2) << i + 1;
                    break;
                case MON:
                    cout << setw(6) << i + 1;
                    break;
                case TUE:
                    cout << setw(10) << i + 1;
                    break;
                case WED:
                    cout << setw(14) << i + 1;
                    break;
                case THU:
                    cout << setw(18) << i + 1;
                    break;
                case FRI:
                    cout << setw(22) << i + 1;
                    break;
                case SAT:
                    cout << setw(26) << i + 1 << "\n";
                    break;
                default:
                    cout << "未知的星期" << endl;
                    return 1;
            }
        } else {
            if (i + 1 < 10) {
                cout << " ";
            }
            switch (today) {
                case SUN:
                    cout << i + 1;
                    break;
                case MON:
                case TUE:
                case WED:
                case THU:
                case FRI:
                    cout << "  " << i + 1;
                    break;
                case SAT:
                    cout << "  " << i + 1 << "\n";
                    break;
                default:
                    cout << "未知的星期" << endl;
                    return 1;
            }
        }
    }

    cout << "\n--------------------------\n";
    return 0;
}