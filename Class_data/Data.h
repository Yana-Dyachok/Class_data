#pragma once
using namespace std;
class Data
{private:
	int day, month, year;
 public:
	 Data();
	 Data(int, int,int);
	 void setDay(int a);// ���� ����� �������� ���� �����;
	 void setMonth(int a);// ���� ����� �������� �����
	 void setYear(int a); //���� ����� �������� ���� �����;
	 bool verifikation();// ��� �������� ���������� ���� � �������(true / false) ��������(��������� / �����������).� ���� ���� �� ��������� ���� �������� 01.01.1900;
	 void check();
	 void OutDataddmmyy();// �������� ���� � ������ ��.��.��, ��������� 02.03.19;
	 void OutDataddmmyyyy();// �������� ���� � ������ ��.��.����, ��������� 02.03.2019;
	 void OutDataddMonthyyyy();// �������� ���� � ������ �� ����� ����, ��������� 02 March 2019.
	 ~Data();
};