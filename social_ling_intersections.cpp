#include <iostream>
#include <string>
#include <array>
#include <fstream>
#include <cstdlib>
#include <time.h>
using namespace std; // include necessary C++ libraries

// define functions outside of main()
string intersection_maker(string street1, string street2);

void fill_array(string intersection_arr[],string ns_streets[], string we_streets[], int rows, int columns);

void print_array(string arr[], int size);

void selector(string arr[], int arr_size, int select_size, int seed, string selections[]);


int main() {
    // Listed from West to East:
    string northsouth_west[4] = {"Kipling", "Wadsworth", "Sheridan",
                                 "Federal"}; // four north/south streets West of Platte
    string northsouth_east[4] = {"Broadway", "University", "Colorado",
                                 "Havana"}; // four north/south streets East of Platte

    // Listed from North to South:
    string west_east[6] = {"Colfax", "Sixth", "Alameda", "Mississippi", "Jewell", "Hampden/285"};

    const int ROWS = 4;
    const int COLUMNS = 6;
    const int arr_size = ROWS * COLUMNS;


    // array for intersections West of the Platte:
    string intersections_west[arr_size];

    // array for intersections East of the Platte:
    string intersections_east[arr_size];

    // fill array with intersections West of the Platte
    fill_array(intersections_west, northsouth_west, west_east, ROWS, COLUMNS);

    // fill array with intersections East of the Platte
    fill_array(intersections_east, northsouth_east, west_east, ROWS, COLUMNS);

    // print the arrays to console output
    cout << "All intersections West of the Platte:" << endl;
    print_array(intersections_west, arr_size);
    cout << endl;
    cout << "All intersections East of the Platte:" << endl;
    print_array(intersections_east, arr_size);
    cout<< endl;

    // define arrays that will be used to store the randomly selected intersections
    const int select_size = 7;
    string select_west[select_size];
    string select_east[select_size];

    // fill the select_west array with 7 random intersections West of the platte
    selector(intersections_west, arr_size, select_size, 9, select_west);
    cout << "Selections West of the Platte:" << endl;
    print_array(select_west, select_size);
    cout << endl;

    // fill the select_east array with 7 random intersections East of the platte
    selector(intersections_east, arr_size, select_size, 9, select_east);
    cout << "Selections East of the Platte:" << endl;
    print_array(select_east, select_size);
    cout << endl;

    // write the selected intersections West of the Platte to a file
    ofstream west("intersections_west.txt", ios::out);
    if (west.is_open())
    {
        for(int i = 0; i < select_size; i++){
            west << select_west[i] << ", \n";
        }
        west.close();
    }
    else cout << "Unable to open file";

    // write the selected intersections East of the Platte to a file
    ofstream east("intersections_east.txt", ios::out);
    if (east.is_open())
    {
        for(int i = 0; i < select_size; i++){
            east << select_east[i] << ", \n";
        }
        east.close();
    }
    else cout << "Unable to open file";




    return 0;
}





string intersection_maker(string street1, string street2) {
    // takes two streets (one West-->East & one North-->South) and concats them into one intersection string
    string intersection;
    intersection = street1 + "_&_" + street2;
    return intersection;
}

void fill_array(string intersection_arr[],string ns_streets[], string we_streets[], int rows, int columns){
    // build an array that contains all of the intersections given the [intersecting] streets West-->East
    // and North-->South.
    for (int i = 0; i < rows; i++) { // use a nested for loop to assure that every combination is met
        string ns = ns_streets[i];
        for (int j = 0; j < columns; j++) {
            string we = we_streets[j];
            string intersection = intersection_maker(ns,we);
            int index = (columns * i) + j;
            intersection_arr[index] = intersection;
        }
    }
}

void print_array(string arr[], int arr_size) {
    // print array to the console output
    for (int i = 0; i < arr_size; i++) {
        cout << arr[i] << endl;
    }
}

void selector(string arr[], int arr_size, int select_size, int seed, string selections[]){
    // select (by index) intersections in the array utilizing a random number generator within the bounds of the
    // index size
    for(int i = 0; i < select_size; i++){
        srand(seed + i);
        int select = rand()%arr_size;
        selections[i] = arr[select];
    }
}

