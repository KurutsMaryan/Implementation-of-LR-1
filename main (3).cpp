/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath> // для функції abs()

using namespace std;

int main() 
{
    cout << "\n________Begin 13_____" << endl;
    // Вхідні дані
    int A, B, C;
    cout << " Enter the coordinates of the points A, B, C: ";
    cin >> A >> B >> C;
    // Обчислення довжин відрізків
    int AC = abs(A - C); // Довжина відрізка AC
    int BC = abs(B - C); // Довжина відрізка BC
     // Сума довжин
    int Sum = AC + BC;
    // Виведення результатів
    cout << "The length of the segment AC: " << AC << endl;
    cout << "The length of the segment BC: " << BC << endl;
    cout << "The sum of segments AC і BC: " << Sum << endl;

    double TF, TC;
    cout << "\n________Begin 23_____"<< endl;
    // Введення температури в градусах Фаренгейта
    cout << "Enter the temperature in degrees Fahrenheit: ";
    cin >> TF;
    
    // Перетворення температури в градуси Цельсія
    TC = (TF - 32) * 5.0 / 9.0;
    
    // Виведення результату
    cout << "Temperature in degrees Celsius: " << TC << endl;
    
    return 0;
}



