/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n = 243;
    int count = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            for (int k = 1; k <= j*j; ++k) {
                count++;
            }
        }
    }
		cout<<endl;
		cout<<endl;
    cout<<count<<endl;

    return 0;
}
