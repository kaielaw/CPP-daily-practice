#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N;
    cin >> N;
    int arr[3*N];

    for (int i = 0; i < 3*N; i++){
        cin >> arr[i];
    }

    sort(arr, arr+3*N);
    cout << arr[N];

    return 0;
}