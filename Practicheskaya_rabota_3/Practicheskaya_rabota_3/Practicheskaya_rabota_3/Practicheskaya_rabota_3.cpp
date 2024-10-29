#include <iostream>

using namespace std;

float byteToKiloByte(float);
float kiloByteToByte(float);


//Задание 1
/*
int main()
{
    setlocale(LC_ALL, "");
    
    const int masSize = 10;
    int mas[masSize] = {};
    int number;

    cout << "Введите число: ";
    cin >> number;

    cout << "Таблица умножения умноженная на ваше число:" << endl;

    for (int i = 0; i < masSize; i++)
    {
        cout << "\t" << number << " * " << i << " = " << number * i << endl;
    }
}
*/
//Задание 2
/*
int main()
{
    srand(time(0));
    setlocale(LC_ALL, "");

    const int masSize = 10;
    int mas[masSize] = {};
    int sumResult = 0;

    for (int i = 0; i < masSize; i++)
    {
        mas[i] = rand() % 101;
        cout << "[" << i << "] = " << mas[i] << endl;
        sumResult += mas[i];
    }

    cout << "Сумма элементов массива: " << sumResult;
}
*/
//Задание 3
/*
int main()
{
    srand(time(0));
    setlocale(LC_ALL, "");

    const int masSize = 10;
    int mas[masSize] = {};
    int minIndex, min = 0;

    for (int i = 0; i < masSize; i++)
    {
        mas[i] = (rand() % 202) - 101;
        cout << "[" << i << "] = " << mas[i] << endl;
        if (min > mas[i]) {
            min = mas[i];
            minIndex = i;
        }
    }
    cout << "Минимальный элемент массива [" << minIndex << "] = " << min;
}
*/
//Задание 4

int main()
{
    setlocale(LC_ALL, "");

    int choice = 0;
    float number;

    cout << "Введите число: ";
    cin >> number;

    

    while (choice != 1 && choice != 2) {
        
        cout << "Ваше число: " << number << endl;
        cout << "Введите 1 если хотите перевести число в из байтов в килобайты\nВведите 2 если хотите перевести число из килобайт в байты" << endl;
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Ваше число " << number << " байт = " << byteToKiloByte(number) << " килобайт";
            break;
        case 2:
            cout << "Ваше число " << number << " килобайт = " << kiloByteToByte(number) << " байт";
            break;
        default:
            system("cls");
            cout << "Ошибочный ввод, повторите попытку" << endl;
            break;
        }
    }
    
}

float byteToKiloByte(float byte) {
    return byte / 1024.0;
}

float kiloByteToByte(float kiloByte) {
    return kiloByte * 1024;
}

