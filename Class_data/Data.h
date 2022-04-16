#pragma once
using namespace std;
class Data
{private:
	int day, month, year;
 public:
	 Data();
	 Data(int, int,int);
	 void setDay(int a);// €кий зм≥нюЇ значенн€ дати класу;
	 void setMonth(int a);// €кий зм≥нюЇ значенн€ м≥с€ц€
	 void setYear(int a); //€кий зм≥нюЇ значенн€ року класу;
	 bool verifikation();// €ка перев≥р€Ї коректн≥сть дати ≥ повертаЇ(true / false) в≥дпов≥дно(правильна / неправильна).≤ €кщо дата не правильна надаЇ значенн€ 01.01.1900;
	 void check();
	 void OutDataddmmyy();// виводить дату у формат≥ дд.мм.рр, наприклад 02.03.19;
	 void OutDataddmmyyyy();// виводить дату у формат≥ дд.мм.рррр, наприклад 02.03.2019;
	 void OutDataddMonthyyyy();// виводить дату у формат≥ дд м≥с€ць рррр, наприклад 02 March 2019.
	 ~Data();
};