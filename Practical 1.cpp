#include <iostream>
using namespace std;

int main() {
    cout << "Name : Shlok Bakare\n";
    int n;       
    cout << "\nEnter number of rows: ";
    cin >> n;
    for (int i = 0; i < n; i++) { 
        int num = 1;    
        // Print spaces          
        for (int j = 0; j < n - i - 1; j++) {              
            cout << " ";          
        }           
        // Print numbers          
        for (int j = 0; j <= i; j++) { 
            cout << num << " ";              
            num = num * (i - j) / (j + 1);          
        }           
        cout << endl;      
    }      
    return 0;  
} 