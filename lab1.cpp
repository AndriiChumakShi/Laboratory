#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

// Обчислити значення виразу при різних дійсних типах даних
int main() {
    cout << "Please, enter your numbers \n";
    double a;
    double b;
    cin >> a >> b;
    double result = ( ( pow((a + b), 3) ) - ( pow(a, 3) + 3 * pow(a, 2) * b ) )/( 3 * a * pow(b, 2) + pow(b, 3)); // функція pow() зводить число до будь-якого ступеня
    cout << result; 
}