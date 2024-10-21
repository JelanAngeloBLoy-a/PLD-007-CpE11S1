
#include <iostream>
using namespace std;

int main() {
    const int size = 10; 
    int arr[size] = {19, 3, 15, 7, 11, 9, 13, 5, 17, 1};

    
    cout << "Element     Value     Histogram" << endl;
    cout << "-----------------------------" << endl;

   
    for (int i = 0; i < size; i++) {
        cout << "   " << i << "         " << arr[i] << "         ";
        
        
        for (int j = 0; j < arr[i]; j++) {
            cout << "*";
        }

        cout << endl; 
    }

    return 0;
}
