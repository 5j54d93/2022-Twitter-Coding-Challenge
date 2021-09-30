#include <bits/stdc++.h> // other #include has already been typed

/*
 * Complete the 'fizzBuzz' function below.
 *
 * The function accepts INTEGER n as parameter.
 */

void fizzBuzz(int n) {
    for(int i=1; i<=n; i++)
    {
        if(i%3 == 0)
            if(i%5 == 0) {
                cout << "FizzBuzz" << endl;
                continue;
            }
            else {
                cout << "Fizz" << endl;
                continue;
            }
        else if(i%5 == 0) {
            cout << "Buzz" << endl;
            continue;
        }
        cout << i << endl;
    }
}

int main() {
    // code has already been typed
}
