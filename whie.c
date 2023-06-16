#include <stdio.h>

// 被積函數
double function(double x) {
    return x * x;  // 在這裡換成你想要積分的函數
}

// 矩形法積分函數
double integrate(double a, double b, int n) {
    double sum = 0.0;
    double dx = (b - a) / n;  // 決定每個矩形的寬度

    for (int i = 0; i < n; i++) {
        double x = a + (i + 0.5) * dx;  // 矩形的中心點
        sum += function(x) * dx;  // 矩形面積加總
    }

    return sum;
}

int main() {
    double a = 0.0;  // 積分下界
    double b = 1.0;  // 積分上界
    int n = 1000;    // 矩形數量

    double result = integrate(a, b, n);
    printf("積分結果: %f\n", result);

    return 0;
}
