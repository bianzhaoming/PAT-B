
#include<iostream>
#include<string>
using namespace std;
struct list {
string name, id;
int mark;
};
int main() {
list t, max{ "","",0 }, min{ "","",100 };  //t为临时学生信息，max记录最大值，min记录最小值
int n;
cin >> n;
while (n--) {
cin >>t.name >> t.id >> t.mark;
max = t.mark > max.mark ? t : max;  //比较，更新最大值
min = t.mark < min.mark ? t : min;  //比较，更新最小值
}
cout << max.name << " " << max.id << endl;
cout << min.name << " " << min.id << endl;
return 0;
}