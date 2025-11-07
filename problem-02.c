/*
Theo Goldbach conjecture, một số nguyên dương chẵn >=4 đều có thể biểu diễn dưới dạng tổng của 2 số nguyên tố.
Cho số nguyên dương chẵn N >=4 .
Hãy liệt kê các cặp số nguyên tố p, q có tổng đúng bằng N.
Ví dụ N = 6 ta có 1 cặp số nguyên tố là 3 + 3 = 6.

Đầu vào
Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một số chẵn N.

Giới hạn
1≤T≤1000
4≤N≤1000000

Đầu ra
Đưa ra kết quả mỗi test theo từng dòng, mỗi dòng là một cặp số thỏa mãn. Chú ý mỗi cặp chỉ liệt kê một lần, không xét đến thứ tự.
*/

#include <stdio.h>
#include <math.h>

int n = 1000000;
int prime[1000001];

void sang(){
    for(int i = 0; i <= n; i++){
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for(int i = 2; i <= sqrt(n) ;i++){
        if(prime[i] == 1){
            for(int j = i * i; j <= n; j += i){
                prime[j] = 0;
            }
        }
    }
}

void goldBach(int n){
    for(int i = 2; i <= n/2; i++){
        if(prime[i] && prime[n - i]){
            printf("%d %d\n", i, n - i);
        }
    }
}

int main() {
    sang();
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        goldBach(n);
    }
    return 0;
}