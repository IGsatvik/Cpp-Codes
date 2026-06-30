#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    double arr[n], sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "Average: " << sum / n;
    return 0;
}
