// Cho một dãy số nguyên dương có N phần tử. Hãy liệt kê số các phần tử trong dãy lớn hơn tất cả các số đứng trước nó (Phần tử đầu tiên được coi là một phần tử thỏa mãn).
#include <stdio.h>
int main() {
    int n; 
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int max = a[0]; // Giả sử phần tử đầu tiên là lớn nhất
    printf("%d ", a[0]);  // Phần tử đầu tiên luôn thỏa mãn
    for(int i = 1; i < n; i++){
        if(a[i] > max){
            printf("%d ", a[i]);
            max = a[i];
        }
    }
    return 0;
}