#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    string arr[N];

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < arr[i].length(); j++) {
            if (j < arr[i].length() - 1) {
                if (arr[i][j] == 'c') {
                    if (arr[i][j+1] == 'a' || arr[i][j+1] == 'o' || arr[i][j+1] == 'u'){
                        arr[i][j] = 'k';
                    } else if (arr[i][j+1] == 'e' || arr[i][j+1] == 'i' || arr[i][j+1] == 'y'){
                        arr[i][j] = 's';
                    } else if (arr[i][j+1] == 'h'){
                        for (int k = j+1; k < arr[i].length(); k++){
                            arr[i][k] = arr[i][k+1];
                        }
                    } else if (arr[i][j+1] != 'h' || arr[i][j+1] != 'o'){
                        arr[i][j] = 'k';
                    }
                }
            }
            
            if (j == arr[i].length()-1 && arr[i][j] == 'c') {
                arr[i][j] = 'k';
            }
        }
    }

    for (int i = 0; i < N; i++) {
        cout << arr[i] << endl;
    }
    
    return 0;
}