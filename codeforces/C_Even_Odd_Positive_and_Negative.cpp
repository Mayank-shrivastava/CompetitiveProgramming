#include<iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int even=0,odd=0,positive=0,negative=0;
    int val;
    while(n--) {
        cin >> val;
        if (val == 0) 
        {
            even++;    
        }
        else if (val > 0) 
        {
            positive++;
            if (val % 2 == 0)
            {
                even++;
            }
            else 
            {
                odd++;
            }
        }
        else
        {
            negative++;
            val = -val;
            if (val % 2 == 0)
            {
                even++;
            }
            else 
            {
                odd++;
            }
        }
    }
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << positive << endl;
    cout << "Negative: " << negative << endl;

    return 0;
}