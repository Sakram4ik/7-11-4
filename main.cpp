#include <iostream>
#include <time.h>//для бібліотеки time
#include <cstdlib>//для бібліотеки random
using namespace std;
int main() {
	int value;
	int counter=0;
	int arr[7];
  cout << " Enter any number: ";
	cin >> value;
	srand(time(NULL));//отримує у вигляді параметра поточний системний час, який при кожному запуску програми буде різним
	for (int i = 0; i <7; i++) {//генерація та запис чисел у масив
		arr[i]=rand() %50;
	}
  
  cout<<"New array is\n";
  for(int i=0;i<7;i++){
    cout<<arr[i]<<' ';
  }
  
	for (int i = 0; i < 7; i++) {//цикл для перевірки й підрахунку кількості 
		if (value < arr[i])//елементів більших за задане число
			counter++;
	}
	cout << "\nAmount of elements greater than value -  " << counter << endl;
}
