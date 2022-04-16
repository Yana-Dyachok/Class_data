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


void Data::setDay(int a) {// ìåòîä, ÿêèé çì³íþº çíà÷åííÿ äàòè êëàñó;
	this->day = a;
}


void Data:: setMonth( int a) {// ìåòîä, ÿêèé çì³íþº çíà÷åííÿ ì³ñÿöÿ;
	this->month = a;
}


void Data::setYear(int a) {// ìåòîä, ÿêèé çì³íþº çíà÷åííÿ ðîêó êëàñó;
	this->year = a;
}


bool Data::verifikation() {//  ìåòîä, ÿêèé ïåðåâ³ðÿº êîðåêòí³ñòü äàòè ³ ïîâåðòàº(true / false) â³äïîâ³äíî(ïðàâèëüíà / íåïðàâèëüíà).² ÿêùî äàòà íå ïðàâèëüíà íàäàº çíà÷åííÿ 01.01.1900;
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


void Data::OutDataddmmyy() {// ìåòîä âèâîäèòü äàòó ó ôîðìàò³ ää.ìì.ðð, íàïðèêëàä 02.03.19;
	check();
	if (this->year > 1000) {
		int Y = this->year % 100;
		std::cout << this->day << "." << this->month << "." << Y << std::endl;
	}
	}


void Data::OutDataddmmyyyy() {// ìåòîä âèâîäèòü äàòó ó ôîðìàò³ ää.ìì.ðððð, íàïðèêëàä 02.03.2019;
	check();
	std::cout<< this->day<<"."<< this->month<<"."<< this->year<<std::endl;
}


void Data::OutDataddMonthyyyy() {// ìåòîä âèâîäèòü äàòó ó ôîðìàò³ ää ì³ñÿöü ðððð, íàïðèêëàä 02 March 2019.
	check();
	std::cout << this->day;
	string Month[] = {"January","February","March"," April","May","June","July","August","September","October","November","December"};
	std::cout << Month[this->month-1] << ' ';
	std::cout << this->year;	
}


Data::~Data() {}
