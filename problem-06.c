/* 
Kiểm tra xem mảng đã cho có tăng chặt hay không, tức là các phần tử đứng sau luôn lớn hơn phần tử đứng trước nó.

Gợi ý : Xét N - 1 cặp số đứng cạnh nhau, nếu cả N - 1 cặp đều thỏa mãn số đứng sau lớn hơn số đứng trước thì mảng tăng dần.
Lưu ý là đừng có xét a[0] với số đứng trước nó, việc này sẽ so sánh a[0] với a[-1].
Độ phức tạp mong muốn : O(N)

Ngoài ra bạn có thể tìm hiểu thêm hàm có sẵn là is_sorted(a, a + n) để sử dụng khi đã tự code được.

Đầu vào
Dòng đầu tiên là số lượng phần tử trong mảng.

Dòng thứ 2 là N phần tử trong mảng.

Giới hạn
1≤n≤10^6
1≤ai≤10^9

Đầu ra
In YES nếu các phần tử trong mảng tăng dần, ngược lại in NO.
*/


#include <stdio.h>


int main() {
    int n; 
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    // insertionSort(a, n);
    // int isSorted = 1;
    for(int i = 1; i < n; i++){
        if(a[i] <= a[i - 1]){
            printf("NO\n");
            // isSorted = 0;
            // break;
        }
    }
    printf("YES\n");
    return 0;
    // if(isSorted){
    //     printf("YES\n");
    // } else {
    //     printf("NO\n");
    // }
}



// void insertionSort(int a[], int n){
//     for(int i = 1; i < n; i++){
//         int value = a[i];
//         int pos = i - 1;
//         while(pos >= 0 && a[pos] > value){
//             a[pos + 1] = a[pos];
//             pos--;
//         }
//         a[pos + 1] = value;
//     }
// }