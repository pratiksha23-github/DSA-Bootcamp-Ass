//Write a program to display Fibonacci Series upto nth term. (Using loops)

#include <iostream>
using namespace std;
int main()
{
    int prv = 0, pre = 1, trm, i, n;
    cout << " Display the first n terms of Fibonacci series:\n";
    cout << " Input number of terms to  display: ";
    cin >> n;
    cout << " Here is the Fibonacci series upto  to " << n << " terms: "<<endl;
    cout << prv << " " << pre;
    for (i = 3; i <= n; i++) 
    {
        trm = prv + pre;
        cout << " " << trm;
        prv = pre;
        pre = trm;
    }
    cout << endl;
}
