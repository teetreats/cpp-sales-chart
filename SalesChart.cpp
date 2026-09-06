//Alexa Thompson
#include <iostream>
using namespace std;
int main()

{
    const int num_Of_Stores = 6, //number of stores
        min_Number = 0,          //starting value
        fifthy = 50;             //the value for sales

    int store_1, store_2,        //the amount for the stores
        store_3, store_4,
        store_5, store_6,

        store_1_50s, store_2_50s,           //calculations for the stores
        store_3_50s, store_4_50s,
        store_5_50s, store_6_50s; 

    cout << "Enter today's sales for store 1: ";  //get sales input from the user
    cin >> store_1;
    store_1_50s = store_1 / fifthy;               //represent the calcuations number of asterisks for each store

    cout << "Enter today's sales for store 2: ";
    cin >> store_2;
    store_2_50s = store_2 / fifthy;

    cout << "Enter today's sales for store 3: ";
    cin >> store_3;
    store_3_50s = store_3 / fifthy;

    cout << "Enter today's sales for store 4: ";
    cin >> store_4;
    store_4_50s = store_4 / fifthy;

    cout << "Enter today's sales for store 5: ";
    cin >> store_5;
    store_5_50s = store_5 / fifthy;

    cout << "Enter today's sales for store 6: ";
    cin >> store_6;
    store_6_50s = store_6 / fifthy;

    cout << "\nSALES BAR CHART" << endl;
    cout << "(Each * = $50)" << endl;              //each astrisk is $50 dollars

    cout << "Store 1: ";
    for (int x = min_Number; x < store_1_50s; x++)        //initalization expression of the for Loop
        cout << '*';                                      //and post-fix increment operator
    cout << endl;

    cout << "Store 2: ";
    for (int x = min_Number; x < store_2_50s; x++)
        cout << '*';
    cout << endl;

    cout << "Store 3: ";
    for (int x = min_Number; x < store_3_50s; x++)
        cout << '*';
    cout << endl;

    cout << "Store 4: ";
    for (int x = min_Number; x < store_4_50s; x++)
        cout << '*';
    cout << endl;

    cout << "Store 5: ";
    for (int x = min_Number; x < store_5_50s; x++)
        cout << '*';
    cout << endl;

    cout << "Store 6: ";
    for (int x = min_Number; x < store_6_50s; x++)
        cout << '*';
    cout << endl;

    return 0;                                        //end command
}