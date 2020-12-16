#include<stdio.h>
int main() {

}
int leap_year() {
	int year=0,x=0;
	if(year%4==0 && year%100!=0 || year%400==0) {
		x=1;
	} else {
		x=0;
	}
}
int year_days() {
	int year=0,a=0,yeardays=0;
	for(a=1900; a<year; a++) {
		if(year%4==0 && year%100!=0 || year%400==0) {
			yeardays=yeardays+366;
		} else {
			yeardays=yeardays+365;
		}
	}
}
int month_days(){
	int c=0,month=0;
	
	
	
} 

