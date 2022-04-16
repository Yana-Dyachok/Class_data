﻿/*Написати клас Data (дата), що містить поля - день, місяць, рік.Реалізувати конструктори:
конструктор по замовчуванню, що надає даті значення 01.01.1900;
конструктор з параметрами, що отримує три цілі значення типу int(день, місяць, рік) і ініціалізує відповідні поля.
Якщо під час ініціалізації дата не відповідає дійсності вивести "Error data..." і перехід на новий рядок. Якщо дата не правильна надає значення 01.01.1900;(Рік можливий від 0 до 2050 ).
Реалізувати методи які:
void setDay(int) - який змінює значення дати класу;
void setMonth(int) - який змінює значення місяця;
void setYear(int) - який змінює значення року класу;
bool verifikation() - яка перевіряє коректність дати і повертає (true/false) відповідно (правильна/ неправильна). І якщо дата не правильна надає значення 01.01.1900;
void OutDataddmmyy() - виводить дату у форматі дд.мм.рр, наприклад 02.03.19;
void OutDataddmmyyyy() - виводить дату у форматі дд.мм.рррр, наприклад 02.03.2019;
void OutDataddMonthyyyy() - виводить дату у форматі дд місяць рррр, наприклад 02 March 2019.
Місяці виводити англійською мовою відповідно:
January, February, March, April, May, June, July, August, September, October, November, December.*/
#include <iostream>
#include "Data.h"
#include <string>
using namespace std;
int main()
{ 
	Data Date(31,3,1923);
	Date.setDay(30);// метод, який змінює значення дати класу;
	Date.setMonth(5);// метод, який змінює значення місяця;
	Date.setYear(1887);// метод, який змінює значення року класу;
	cout << Date.verifikation() << endl;//  метод, який перевіряє коректність дати і повертає(true / false) відповідно(правильна / неправильна).І якщо дата не правильна надає значення 01.01.1900;
	Date.OutDataddmmyy();// метод виводить дату у форматі дд.мм.рр, наприклад 02.03.19;
	Date.OutDataddmmyyyy();// метод виводить дату у форматі дд.мм.рррр, наприклад 02.03.2019;
	Date.OutDataddMonthyyyy();// метод виводить дату у форматі дд місяць рррр, наприклад 02 March 2019.
}