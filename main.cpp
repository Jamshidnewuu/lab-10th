#include <iostream>
#include <algorithm>
#include <ctime>
using namespace std;
//problem 1
/*void doMath (int arr [], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    cout << sum;
}
int main () {
    int arr[5] = {8, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    doMath(arr, size);
    return 0;
}*/

//problem 2
/*void doMath (int arr [], int size) {
    float sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    float avg = sum / size;
    cout << avg;
}
int main () {
    int arr[4] = {2, 3, 3, 3};
    int size = sizeof(arr) / sizeof arr[0];
    doMath(arr, size);
}*/

//problem 3
/*void Print (int arr [], int size) {
    int min = arr[0];
    int i = 1;
    while (i < size) {
        if (arr[i] < min) {
            min = arr[i];
        }
        i++;
    }
    cout << "Minimum is: " << min;
}
int main () {
    int arr[4] = {8, 3, 1, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    Print(arr, size);
}*/

//problem 4
/*int indexOfLargestElement(double array[], int size) {
    if (size <= 0) return -1;
    int maxIndex = 0;
    for (int i = 1; i < size; i++)
        if (array[i] >= array[maxIndex])
            maxIndex = i;
    return maxIndex;
}
int main() {
    double arr[15];
    for (int i = 0; i < 15; i++)
        cin >> arr[i];
    cout << "Largest Index: " << indexOfLargestElement(arr, 15);
    return 0;
}*/

//problem 5
/*bool strictlyEqual(const int list1[], const int list2[], int size) {
    for (int i = 0; i < size; i++)
        if (list1[i] != list2[i])
            return false;
    return true;
}
int main() {
    int n;
    cin >> n;
    int list1[n], list2[n];
    for (int i = 0; i < n; i++) cin >> list1[i];
    for (int i = 0; i < n; i++) cin >> list2[i];
    if (strictlyEqual(list1, list2, n)) {
        cout << "Two lists are strictly identical";
    } else {
        cout << "Two lists are not strictly identical";
        }
    return 0;
}*/


//problem 6
/*int main() {
    char ch;
    int arr [26];
    for (int i = 0; i < 26; i++) {
        arr [i] = 0;
    }
    cout << "Enter characters: ";
    while (true) {
        cin >> ch;
        if (ch >= 'a' && ch <= 'z') {
            arr ++;
        }
    }
    for (int i = 0; i < 26; i++) {
        if (arr[i] > 0) {
            cout << char('a' + i) << ": " << arr [i] << endl;
        }
    }
    return 0;
}*/

//problem 7
/*void Print (int arr [], int size) {
    sort(arr, arr + size);
    int i = 0;
    while (i < size) {
        cout << arr[i] << " ";
        i++;
    }
}
int main () {
    int arr[4] = {8, 1, 3, 3};
    int size = sizeof(arr) / sizeof arr[0];
    Print(arr, size);
}*/


//problem 8
/*int main() {
    int arr[6] = {0};
    srand(time(0));
    for (int i = 0; i < 10000; i++) {
    int roll = rand() % 6 + 1; 
        arr[roll - 1]++; 
    }
    for (int i = 0; i < 6; i++) {
        cout << (i + 1)<< arr[i] << endl;
    }
    return 0;
}*/

//problem 9
/*void reverseArray(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
int main() {
    int arr[3] = {1, 2, 3};
    reverseArray(arr, 0, 2);
    for (int i = 0; i < 3; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}*/


//10 Problem
/*int main() {
    int n;
    cin >> n;
    int arr[100]; 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    bool sorted = true;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            sorted = false;
            break;
        }
    }
    if (sorted) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}*/


