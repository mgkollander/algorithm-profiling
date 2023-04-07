#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void bubbleSort(vector<int>& arr, int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main() {
    ifstream inputFile("random_ints.txt");
    vector<int> arr;
    int num;
    while(inputFile >> num) {
        arr.push_back(num);
    }
    inputFile.close();

    int n = arr.size();

    bubbleSort(arr, n);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
