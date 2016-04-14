#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    int counter = 0;
    double factorial = 1;

    cout << "Please enter a nonnegative integer number: ";
    cin >> n;
    while(n < 0) {
    cout << "Invalid integer, please try again: ";
    cin >> n;
    }
    int temp = n;
    while(counter < n) {
        if(n == 0)
            factorial = factorial;
        factorial = factorial * temp;
        temp--;
        counter++;

}
    //avoid scientific notation
    cout << fixed << setprecision(0) << n << "! = " << factorial << endl;


    return 0;
}

