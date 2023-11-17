#include <iostream>
#include "customer.h"

using namespace std;

//initialise parent class
CustomerCounter::CustomerCounter(int maximum_customers) {
    this->maximum_customers = maximum_customers;

}


int CustomerCounter::add() {
    //less current # customers than max # customers it can hold
    if (maximum_customers > customer_count){
        return customer_count++;
    } else {
        cout << "Shop is full.";
    }
}

int CustomerCounter::subtract() {
    //if there is still customers in shop
    if (!(customer_count < 0)){
        return customer_count--;
    } else if (customer_count == 0) {
        cout << "Shop is empty.";
    }
}


int main(){
    //create object from class CustomerCounter
    CustomerCounter shop(10);  //maximum_customers = 10

    return 0;
}