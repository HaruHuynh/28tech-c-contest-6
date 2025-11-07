/*
Cho số tự nhiên N. Nhiệm vụ của bạn là in ra ước số nguyên tố nhỏ nhất của các số từ 1 đến N.
Ước số nguyên tố nhỏ nhất của 1 là 1. Ước số nguyên tố nhỏ nhất của các số chẵn là 2. Ước số nguyên tố nhỏ nhất của các số nguyên tố là chính nó.

Gợi ý : Đối với số N duyệt từ 2 tới √N nếu gặp số mà N chia hết => Đây chính là ước nguyên tố nhỏ nhất, còn nếu không gặp thì N là số nguyên tố nên bạn return N

Đầu vào
Dòng duy nhất chứa số nguyên dương N

Giới hạn
1≤N≤100000

Đầu ra
Đưa ra kết quả theo từng dòng
*/

#include <stdio.h>
#include <math.h>

int p[100001];

void sang() {
    for(int i = 1; i <= 100000; i++){
        p[i] = i; // Giả sử tất cả các số đều là ước số nguyên tố nhỏ nhất của chính nó
    }
    for(int i = 2; i <= sqrt(100000); i++){
        if(p[i] == i){ // Nếu i là số nguyên tố
            for(int j = i * i; j <= 100000; j += i){ 
                if(p[j] == j){ // Nếu j chưa được gán ước số nguyên tố nhỏ nhất
                    p[j] = i; // Gán i là ước số nguyên tố nhỏ nhất của j
                }
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    sang();
    for(int i = 1; i <= n; i++){
        printf("%d\n", p[i]);
    }
    return 0;
}

// int solve(int n){
//     if(n == 1) return 1;
//     if(n % 2 == 0) return 2;
//     for(int i = 3; i <= sqrt(n); i += 2){
//         if(n % i == 0){
//             return i;
//         } 
//     }
//     return n;
// }