#include "Student.hpp"
#include <typeinfo>

int main()
{
	Student* v = new Student[10];

	int nota1[4] = {5, 9, 10, 7};
	int nota2[4] = {7, 3, 6, 8};
	int nota3[3] = {9, 9, 8 };
	int nota4[4] = {10, 10, 8, 7};
	int nota5[4] = {10, 9, 7, 2};
	int nota6[4] = {6, 6, 5, 9};
	int nota7[3] = {2, 5, 3};
	int nota8[4] = {8, 7, 10, 9};
	int nota9[3] = {10, 4, 7};
	int nota10[3] = {7, 4, 3};
	
	v[0] = Student(nota1,4,"Dna Lenuta","323AB",10,"Octav");
	v[1] = Student(nota2,4,"Dna Lenuta","323AB",10,"Marian");
	v[2] = Student(nota3,3,"Dna Lenuta","323AB",10,"Lorena");
	v[3] = Student(nota4,4,"Dna Lenuta","323AB",10,"Andrei");
	v[4] = Student(nota5,4,"Dna Lenuta","323AB",10,"Irina");
	v[5] = Student(nota6,4,"Dna Lenuta","323AB",10,"Catalin");
	v[6] = Student(nota7,3,"Dna Lenuta","323AB",10,"Jessica");
	v[7] = Student(nota8,4,"Dna Lenuta","323AB",10,"Daniel");
	v[8] = Student(nota9,3,"Dna Lenuta","323AB",10,"Catalina");
	v[9] = Student(nota10,3,"Dna Lenuta","323AB",10,"Raluca");

Clasa clasa(10);
	cout << " Clasa" << endl;
    //for(int i=0; i<10; i++)
        //cout << v[i] << endl;


for (int i = 0; i < 1; i++)
        for (int j = i + 1; j < 3; j++)
            if (v[i].getMedie() < v[j].getMedie())
                v[i].interschimbare(v[j]);

//for(int i=0; i<10; i++)
        //cout << v[i] << endl; 

char diriginte_nou[15] = {"Dna Alina"};
	
	v->schimbare_numeD(diriginte_nou);
	cout <<" Schimbare diriginte" << endl;

//for(int i=0; i<10; i++)
        //cout << v[i] << endl; 



int x=6;
	int nota[3]={3, 7, 9};
	Student std= Student(nota,3,"Dna Lenuta","323AB",11,"Dragos") ;

Student *s= new Student[11];
	
	for(int i=0; i<11;i++)
	{
		if(i<x)
			s[i]=v[i];
		if(i==x)
			s[i]=std;
		if(i>x)
			s[i]=v[i-1];
		
	}
	
	for(int i=0; i<11;i++)
	{
		cout<< s[i]<< endl;
	}
    
return 0;
}