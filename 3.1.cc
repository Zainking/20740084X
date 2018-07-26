using namespace std;
bool IsPrime(int num);
int main()
{
   cout << IsPrime(1) << endl;
   cout << IsPrime(4) << endl;
   cout << IsPrime(5) << endl;
   return 0;
}
bool IsPrime(int num) {
	if (num <= 2) {
		cout << "你的输入小于或等于2" << endl;
		return false;
	}
	for (int i = 2; i < num; i++ ) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}