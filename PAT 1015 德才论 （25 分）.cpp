


#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
struct student {  //这道题要我们对考生进行分类，在各个类里面按总分排序（相同时比较下一关键值）
	int id;       //输入数据->分类存储->各类排序->按顺序输出
	int D;        //这里排序我们用的STL库中的排序函数，普通的排序方法时间复杂度较高。（cmp是比较函数
	int C;        //注意不低于(>=)等字眼，别再细节上面出错、
};
bool cmp(student a, student b) {
	if (a.C + a.D != b.C + b.D)
		return a.C + a.D > b.C + b.D;
	else {
		if (a.D != b.D)
			return a.D > b.D;
		else
			return a.id < b.id;
	}
	return false;
}
void classify(vector<student> a[], int name, int d, int c, int L, int H) {  //对考生分类
	if (c >= H && d >= H)
		a[0].push_back({ name, d, c });
	else if (d >= H)
		a[1].push_back({ name, d, c });
	else if (c < H&&d<H&&d>=c)
		a[2].push_back({ name, d, c });
	else
		a[3].push_back({ name, d, c });
}
int main() {
	int N, H, L;
	scanf("%d %d %d", &N, &L, &H);
	int name;
	vector<student> s[4];
	int d, c;
	int count = 0;
	for (int i = 0; i<N; i++) {
		scanf("%d%d%d", &name, &d, &c);
		if (d >= L && c >= L) {
			count++;
			classify(s, name, d, c, L, H);
		}
	}
	sort(s[0].begin(), s[0].end(), cmp);
	sort(s[1].begin(), s[1].end(), cmp);
	sort(s[2].begin(), s[2].end(), cmp);
	sort(s[3].begin(), s[3].end(), cmp);
	cout << count << endl;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < s[i].size(); j++) {
			printf("%08d %d %d\n", s[i][j].id, s[i][j].D, s[i][j].C);
		}
	}
	return 0;
}