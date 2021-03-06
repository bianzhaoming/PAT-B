
#include <iostream>
#include<string>
using namespace std;
int pd(string s) {
string ks = "PAT";
for (int i = 0; i < s.length(); i++)    //确保只有PAT三种字符
if (ks.find(s[i]) == string::npos)  //找不到 
return 0;
int lc = s.find('P'),
mc = s.find('T') - s.find('P') - 1,
rc = s.length() - s.find('T') - 1;
if (lc*mc == rc && (rc || mc || lc)) //满足条件
return 1;
return 0;
}
int main()
{
int n;
cin >> n;
string str;
while (n--) {
cin >> str;
if (pd(str))
cout << "YES" << endl;
else
cout << "NO" << endl;
}
return 0;
}
//P左边A的个数*中间A的个数==T右边A的个数（但要保证只有存在A）
//注意：要保证只有PAT三种字符，并且三种字符都要有 ，满足条件即可。