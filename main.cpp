#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	const int size = 15;
	int a[size], i, n;
    int arlength = 2;
    int mx_arlength = 2;
    int last_number = 0;

	cout << "Введите элементы целочисленного массива:" "\n" << endl;
	for (i = 0; i < size; i++){
        cout << "a[" << i << "] = ";
		cin >> a[i];}

    for (i = 0; i < size; i++){
        int raznost = a[i+1] - a[i]; //считаем разность предполагаемой прогрессии
        if ((a[i+2] - a[i+1]) == raznost){ //если для 3 элемента предполагаемой прогрессии выполняется условие существования прогрессии:
            arlength++; //длина текущего фрагмента +1
            if (arlength > mx_arlength) last_number = i+2;} //в last_number записываем номер этого элемента
        else{
            if (arlength > mx_arlength) mx_arlength = arlength; //если длина текущего фрагмента больше длины ранее найденного фрагмента: перезаписываем mx_arlength
            arlength = 2;//длину текущего фрагмента сбрасываем
        }
    }
cout << "\n";
if (mx_arlength > 2) {
    cout << "Длина самого длинного фрагмента равна: " << mx_arlength << endl;
    cout << "Номер последнего элемента этой арифметической прогрессии равен: " << last_number << endl;}
else cout << "Арифметической прогрессии в массиве не найдено" << endl;

}