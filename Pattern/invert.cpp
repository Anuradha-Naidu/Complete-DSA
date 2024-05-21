#include <iostream>
using namespace std;

void pattern1(int N)
{
    for(int i=1;i<N;i++){
        for(int j =N; j>i;j--){
            cout << "*";
        }
        cout << endl;
    }
    
}
int main() {
    // Write C++ code here
    int N;
    cin >> N;
    pattern1 (N);  //calling function;

    return 0;
}

* * * * *
* * * *
* * *
* *
*
