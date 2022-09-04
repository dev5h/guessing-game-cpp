/*
* Beginner Friendly C++ Practice
* Made for a beginner level practice with C++
* Created in 10 mins by Shazin
*/
#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

int randInt(int min, int max){
	return (min + rand()%max);
}

int main(int argc, char const *argv[])
{
	srand(time(0));
	int min , max, target;
	min = 1;
	max = 100;
	target = randInt(min, max);


	string hints = "Possible Hints:";
	if (target%2==0 || (target%3==0 && target !=3) || (target%5==0 && target != 5) || (target%7==0 && target!=7)) {

		if (target !=1){

		hints.append("\n* Number is composit");

		 if (target%2 ==0) {

		hints.append("\n* Number is divisible by 2 ");

		}
		if (target%3 ==0) {
	
			hints.append("\n* Number is divisible by 3 ");
		}

		if (target%5 ==0) {

			hints.append("\n* Number is divisible by 5 ");
		}

		if (target%7 ==0) {

			hints.append("\n* Number is divisible by 7 ");
		}

	}

	}
	else if (target%2!=0 && target%3!=0 && target%5!=0 && target%7!=0){

		hints.append("\n* Number is prime");

	}

	
	int usr_input;
	cout << "Your target number is between 1-100 (inclusive)." << endl;
	cout << hints << "\n \n" ;

	int i_buffer = 1;

	while (true){
		
		cout << "<#" << i_buffer << "> " ;
		cin >> usr_input;
		i_buffer++;
		if (usr_input == target) {
			cout << "Target Found" << endl;
			cout << "Congratulations! You have guessed it in " << i_buffer << " moves." << endl;
			break;

		}
		else {
			
			if (usr_input > target){
				cout << "Too high" << endl;
			}else {
				cout << "Too low" << endl;
			}
		}
	}
	
	return 0;
}
