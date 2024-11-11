#pragma once
#include <iostream>
#include "Passenger.h"
using namespace std;
class flight
{
private:
	int number;
	string destination;
	string departure_time_tz;
	double seating_capacity;
	int current_Booked_seats;
	bool** seating_plan;
	string* Passengar_names;

public:
	flight(int** sp, string* ps) {
		// allocating memory for the 2d seating plan , assumption number of seats per row is 6
		seating_plan = new bool*[ceil(seating_capacity/6.0)]; // use ceil function to force rounding up any decimals to get number of rows
		for (int i = 0; i < ceil(seating_capacity / 6.0) ; i++)
		{
			seating_plan[i] = new bool[6];
		}
		// allocating memory for passanger names
		Passengar_names = new string[seating_capacity];
		// passing the list to the passanger names array
		for (int i = 0; i < seating_capacity; i++)
		{
			if (current_Booked_seats <= seating_capacity) {
				Passengar_names[i] = ps[i];
			}
		}
	}

	void add_pass(Passenger* array_, int num_pa);
	string search_by_name(string n );
	string search_seat_num(int seat_num);




};

