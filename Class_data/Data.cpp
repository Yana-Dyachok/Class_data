#include "Data.h"
#include <string>
#include <iostream>
using namespace std;
Data::Data(){
 day = 01;  month = 01; year = 1990;
}


Data::Data(int D, int M, int Y){
	this->day = D;
	this->month = M;
	this->year = Y;
	check();
}


void Data::setDay(int a) {// �����, ���� ����� �������� ���� �����;
	this->day = a;
}


void Data:: setMonth( int a) {// �����, ���� ����� �������� �����;
	this->month = a;
}


void Data::setYear(int a) {// �����, ���� ����� �������� ���� �����;
	this->year = a;
}


bool Data::verifikation() {//  �����, ���� �������� ���������� ���� � �������(true / false) ��������(��������� / �����������).� ���� ���� �� ��������� ���� �������� 01.01.1900;
	if ((this->day < 1 or this->day>31) or (this->month < 1 or this->month>12) or (this->year < 1 or this->year>2050)or(this->day == 31 and (this->month==4 or this->month == 6 or this->month ==9 or this->month == 11)) or (this->month == 2 and this->day >29)){
		return false;
		check(); 		
	}
	else return true;
}


void Data::check() {
	if (!verifikation()) {
		std::cout << "Error data" << std::endl;
		this->day = 01;
		this->month = 01;
		this->year =1900;
	}
}


void Data::OutDataddmmyy() {// ����� �������� ���� � ������ ��.��.��, ��������� 02.03.19;

	check();
	if (this->year > 1000) {
		int Y = this->year % 100;
		std::cout << this->day << "." << this->month << "." << Y << std::endl;
	}
	}


void Data::OutDataddmmyyyy() {// ����� �������� ���� � ������ ��.��.����, ��������� 02.03.2019;
	check();
	std::cout<< this->day<<"."<< this->month<<"."<< this->year<<std::endl;
}


void Data::OutDataddMonthyyyy() {// ����� �������� ���� � ������ �� ����� ����, ��������� 02 March 2019.
	check();
	std::cout << this->day<<' ';
	string Month[] = {"January","February","March"," April","May","June","July","August","September","October","November","December"};
	std::cout << Month[this->month-1] << ' ';
	std::cout << this->year;	
}


Data::~Data() {}