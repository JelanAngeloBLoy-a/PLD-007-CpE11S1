#include <iostream>
using namespace std;

const int RESPONSE_SIZE = 40; // Size of the responses array
const int MAX_RESPONSE_VALUE = 10; // Assuming responses range from 1 to 10

int main() {
    int responses[RESPONSE_SIZE] = { 
        1, 2, 6, 4, 8, 5, 9, 7, 8, 10, 
        1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 
        6, 5, 7, 6, 8, 6, 7, 5, 6, 6, 
        5, 6, 7, 5, 6, 4, 8, 6, 8, 10 
    };
    
    // Array to count responses
    int counts[MAX_RESPONSE_VALUE + 1] = {0}; // Index 0 will remain unused

    // Count each response
    for (int i = 0; i < RESPONSE_SIZE; i++) {
        counts[responses[i]]++;
    }

    // Display the summary
    cout << "Response Summary:" << endl;
    cout << "Response Type\tCount" << endl;
    cout << "---------------------" << endl;
    
    for (int i = 1; i <= MAX_RESPONSE_VALUE; i++) {
        cout << "      " << i << "\t\t" << counts[i] << endl;
    }

    return 0;
}
