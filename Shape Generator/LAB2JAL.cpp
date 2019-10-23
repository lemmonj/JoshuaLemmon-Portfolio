#include <iostream>
using namespace std;

/* Name: Joshua lemmon			Course:	Computer Programming 1	Lab # 2		*/
/* File name:LABJAL						Date:1/31/18		*/
/* allows the user to make shapes of any size until the user wishes to stop */


int main() {
	while(char start = 'y'){											// While loop that keeps the programming goin untill the user wishes to stop
		cout <<"Do you want a shape(y/n): ";cin>>start;					// asking if the user wishes to make a shape
		switch(start)													// switch starts the shape maker or ends the program
		case('y'):{															
			char shape;
			cout << "What shape(b,d,t): "; cin >> shape;				// ask you what shape the user wants to make from given options
			switch (shape){
			case ('b'):													// case for the box shape
				{
				
				int size = 0;
				cout << "Size: "; cin >> size;							// asks for the size of the box
				for (int length = 1; length<=size; length++){			// the for loops makes the length
					for (int width = 1; width<= size; width++){			// this for loop makes the width
						cout << "*";
						}
					cout << endl;
				}
				break;
				}
			case ('d'):													// case for diagonal line
				{
				int size = 0;
				cout << "Size: "; cin >> size;							// asking for the size
				int row = 1 ;
				while (row <= size){									//while loop for the shape
					int col = 1;
					while (col < row){									//while loop for the spaces
						cout << " ";
						col++;
						}
					cout << "*" << '\n'; 
					row++;
					}
			
				break;
				}
			case ('t'):													// case for the triangle shape
				int size = 0;
				int space;
				cout << "Size: "; cin >> size;							// asking for size of shape
				for ( int i = 1 , k = 0; i<= size; i++, k = 0){			// for loop for the shape
					for(space = 1; space <= size - i; space++){			// for loop for spaces
						cout << " ";
					}
					while(k != 2*i-1){									// for loop for the stars
						cout << "*";
						++k;
					}
					cout<<endl;
				}
				
				break;
			}
		break;
		case('n'):													   // case for ending the programming
			return 'n';
		}
	}
}

