#include<iostream>
using namespace std;

// int main(){
// 	int count[5] = {}; 
// 	cout << "Please input grade of each student (A-F) or input 0 to exit.";
// 	do{
// 		cout << "Student [" << "]: ";
// 		cin >> grade; //The loop must be terminated when grade = '0'
// 		if(true) // if grade is A
// 			//Do something
// 		}else if(true) // if grade is B
// 			//Do something
// 		//and so on ... for grade = C, D, F	
// 		}else{ // grade is wrong input
// 			//Do something
// 		} 
// 	}while(true);
	
	
// 	cout << "In total ? students.";
// 	cout << "A = " << count[0] <<", ";
// 	cout << "B = " << count[1] <<", ";	
// 	//	and so on ... for grade = C, D, F	
	
// 	return 0;
// }

int main()
{
	int count [5] ={0,0,0,0,0};
	int st = 0; //student 
	cout << "Please input grade of each student (A-F) or input 0 to exit." << endl;
	char grade; // grade

	do
	{
		cout << "Student [" << st+1 << "]: ";
		cin >> grade; 
		//bool A = (), B = ( ), C = (), D = ( ), F = ( ), _0 = ();

		if (grade == 'A')
		{
			count[0]++; st++;
		}
		else if (grade == 'B')
		{
			count[1]++; st++;
		}
		else if (grade == 'C')
		{
			count[2]++; st++;
		}
		else if (grade == 'D')
		{
			count[3]++; st++;
		}
		else if (grade == 'F')
		{
			count[4]++; st++;
		}
		else if (grade == '0')
		{
			break;
		}
		else cout << "Wrong input. Please input again." << endl;
	}
	while(true);
	
	
	cout << "In total "<< st <<" students." << endl;
	cout << "A = " << count[0] <<", "<< "B = " << count[1] <<", "<< "C = " << count[2] <<", "<< "D = " << count[3] <<", "<< "F = " << count[4];

	
	return 0;
}

