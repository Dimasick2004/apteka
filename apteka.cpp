﻿#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct Lekarstva {
    string name; //название лекарства
    string cost; //цена лекарства
    string quanity; //количество товара на складе
};
int main()
{
    int countStr = 0; //инт для пересчёта в файле
    Lekarstva* lekar = new Lekarstva[countStr]; //с помощью lekar обращайся к стрингу Lekarstva
    setlocale(LC_ALL, "Russian");
    for (;;) { //бесконечный цикл фор
        cout << "Выберите категорию"<<endl;
        cout << "1. Средства для носа" << endl;
        cout << "2. Средства для горла" << endl;
        cout << "3. Средства для борьбы с вирусами" << endl;
        int choose = 0; //инт для выбора
        cin >> choose; //ввод выбора
        
        //текстовые файлы я засунул по пути source/repos/apteka/apteka

        switch (choose)
        {
        case 1: {
            //тут включаещь функцию открытия определённого файла файла
            //for (int i = 0; i < countStr; i++) { //пересчёт и заполнение в программу
                cout << "название: lekar[i].name | цена: lekar[i].count | количество: lekar[i].quanity" << endl;
            //}
            cout << "Желаете редактировать колиество товара на складе? 0 нет, 1 да" << endl;
            bool reduct; //бул для выбора
            cin >> reduct;
            if (reduct) {
                cout << "начало редактирования" << endl;
                //вот тут включаешь функцию редактирования
                cout << "Редактриование успешно завершено!"<< endl;
            }
            break;
        }
        
        case 2: {
            //for (int i = 0; i < countStr; i++) { 
                cout << "название: lekar[i].name | цена: lekar[i].count | количество: lekar[i].quanity" << endl;
            //}
            cout << "Желаете редактировать колиество товара на складе? 0 нет, 1 да" << endl;
            bool reduct; //бул для выбора
            cin >> reduct;
            if (reduct) {
                cout << "начало редактирования" << endl;
                cout << "Редактриование успешно завершено!" << endl;
            }
            break;
        }

        case 3: {
            //for (int i = 0; i < countStr; i++) {
                cout << "название: lekar[i].name | цена: lekar[i].count | количество: lekar[i].quanity" << endl;
            //}
            cout << "Желаете редактировать колиество товара на складе? 0 нет, 1 да" << endl;
            bool reduct; 
            cin >> reduct;
            if (reduct) {
                cout << "начало редактирования" << endl;
                cout << "Редактриование успешно завершено!" << endl;
            }
            break;
        }
        default:
            break;
        }
    }
    
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
