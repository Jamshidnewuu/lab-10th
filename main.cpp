#include <iostream>
#include <algorithm>
#include <ctime>
using namespace std;
//problem 1
/*int main() {
    int n, sum = 0;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "sum=" << sum;
    return 0;
}*/

//problem 2
/*double findAverage(int arr[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    return sum / size;
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Output: " << findAverage(arr, n);
    return 0;
}*/

//problem 3
/*int findMin(int arr[], int size) {
    int minVal = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] < minVal)
            minVal = arr[i];
    return minVal;
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Min=" << findMin(arr, n);
    return 0;
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

    if (strictlyEqual(list1, list2, n))
        cout << "Two lists are strictly identical";
    else
        cout << "Two lists are not strictly identical";
    return 0;
}*/


//problem 6
/*int main() {
    int freq[26] = {0};
    char ch;

    while (cin >> ch && ch != '0') {
        if (ch >= 'a' && ch <= 'z')
            freq[ch - 'a']++;
    }

    for (int i = 0; i < 26; i++)
        if (freq[i] > 0)
            cout << char('a' + i) << ": " << freq[i] << endl;

    return 0;
}*/


//problem 7
/*int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}*/


//problem 8
/*int main() {
    srand(time(0));
    int freq[6] = {0};

    for (int i = 0; i < 10000; i++)
        freq[rand() % 6]++;

    for (int i = 0; i < 6; i++)
        cout << i + 1 << ": " << freq[i] << endl;

    return 0;
}*/

//problem 9
/*void reverseArray(int arr[], int start, int end) {
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    reverseArray(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}*/


//10 Problem
/*bool isSorted(int arr[], int size) {
    for (int i = 1; i < size; i++)
        if (arr[i] < arr[i - 1])
            return false;
    return true;
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << (isSorted(arr, n) ? "YES" : "NO");
    return 0;
}*/

