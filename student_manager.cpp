/*
*App Name: student manager
*IDE		 : Dev-c++ 
*Description : This program is for storing student record and adding new record in a file called student_record.txt
*auther		 : tauseed zaman
*/
#include<iostream>
#include<fstream>
#include<string>
#include<conio.h>
#include <windows.h>

using namespace std;
void add_record(){
	system("cls");
	char name[200];
		int rollno;
		cout<<"\n\t\tAdding Student Record!\n";
		cout<<"\n\tEnter Student Name:";
		cin>>name;
		cout<<"\n\tEnter Student RollNo:";
		cin>>rollno;
		ofstream file("student_record.txt",ios::app);	//open file with append mode
		file<<"\n";
		file<<name<<" : "<<rollno;
		cout<<"\tRecord Added Closing File.\n";
		file.close();
}
void show_record(){
	system("cls");
		cout<<"\n\n\tShowing All Student Record!\n\n";
		int x =0;
		ifstream readfile("student_record.txt"); 	//open file with reading mode
		string tp;
		cout<<"\n\t\t\tAll Records\n";
		cout<<"\t\t----------------------\n";
		while(getline(readfile, tp)) {
			x++;
			cout <<"\t\t"<<x<<"|"<< tp << "\n";
			cout<<"\t\t -------------------------\n";
		}
		cout<<"\n\n";
}
int main() {
	char option;
	cout<<"\t\t____________________Welcome to Student Manager__________________________\n\n";
	do {
		system("Color 0"); //change color
		cout<"\n\n";
		cout<<"\t**Select one of the following options**\n\n\ta ==> Show All Students Record \t\t\t b ==> Add New Record \n\tx ==> Exit ";
		cin>>option;
		if(option == 'b'){
			add_record();
			//system("cls");
		}
		else if(option == 'a'){
		show_record();
		
		}
		
	} while(option != 'x');
}


