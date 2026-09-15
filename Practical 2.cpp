#include <iostream> 
using namespace std; 

class NumberSum { 
    private: 
    int i, start, end, oddsum=0, evensum=0; 
    
    public: 
    void range() {
    cout << "Name : Shlok Bakare\n"; 
    cout << "\nEnter the start range : "; 
    cin >> start; 
    cout << "Enter the end range : "; 
    cin >> end; 
} 
        
    void sum() { 
        for(i=start; i<=end; i++) { 
            if(i%2 == 0) { 
                evensum += i;
            } 
            if(i%2 == 1) {
                oddsum += i;
            }
        } 
    } 

    void display() {
        cout << "Sum of even Numbers = " << evensum << endl; 
        cout << "Sum of odd Numbers = " << oddsum << endl; 
    } 
}; 

int main() { 
    NumberSum N; 
    N.range(); 
    N.sum(); 
    N.display(); 
    return 0; 
} 