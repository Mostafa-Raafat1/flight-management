#include "flight.h"
#include"Passenger.h"
#include <iostream>
using namespace std;

void flight::add_pass(Passenger* array_, int num_pa) {
	for (int i = 0; i < num_pa; i++)
	{
		if (current_Booked_seats <= seating_capacity) {
			Passengar_names[current_Booked_seats] = array_[i].name;
			current_Booked_seats++;
		}
		else {
			cout << "No avalible seats...\n";
			break;
		}
	}
}

string flight::search_by_name(string n) {
	for (int i = 0; i < current_Booked_seats; i++){
		if (n == Passengar_names[i]) {
			return "Found !!";
		}
		else {
			return "Not Found!!";
		}
	}
}
string flight::search_seat_num(int seat_num) {
	//since searching is done by seat numbmer we will need to convert it to rows and colmuns
	int r, c;
	if (seat_num % 6 == 0 ) {
		r = (seat_num / 6) - 1 ;			//  we begin counting indexes with 0 so we subtract 1 from the row
		c = 5;			//since no remainder the seat will always be at the last column
	}
	else {
		r = seat_num / 6;
		c = seat_num % 6;			// since we begin indexes with 0 we will always subtract 1 from the remaining
		c -= 1;
	}
	if (seating_plan[r][c] = true) {
		return "Booked !!";
	}
	else {
		return"Not booked !!";
	}
}




