#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of random integers to generate: ";
    cin >> n;

    ofstream outFile("random_ints.txt");
    
    if (!outFile.is_open()) {
        cerr << "Error: could not open file for writing." << endl;
        return 1;
    }

    srand(time(nullptr));
    
    for (int i = 0; i < n; i++) {
        outFile << rand() << " ";
    }
    outFile << endl;
    outFile.close();
    
    return 0;
}
