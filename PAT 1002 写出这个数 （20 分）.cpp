

#include<iostream>
#include<string>
using namespace std;
int main()
{
	long long sum = 0;
	string trans[10] = { "ling","yi","er","san","si","wu","liu","qi","ba","jiu" };
	char ch;
	while (1) {
		ch = getchar();
		if (ch == '\n')break;
		sum += ch - '0';
	}
	string cs = to_string(sum);
	for (int i = 0; i < cs.length(); i++) {
		cout << trans[cs[i]-'0'];
		if (i != cs.length() - 1)
			cout << " ";
	}
	return 0;
}
