

#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    double a[100001];
    double sum = 0.0;
    for (int i = 1; i <= n; i++) { 
        cin >> a[i];
        sum = sum + a[i] * i * (n - i + 1);
    }
    printf("%.2f", sum);
    return 0;
}
//每一个数的累加次数=序号*（右边元素个数+1）。