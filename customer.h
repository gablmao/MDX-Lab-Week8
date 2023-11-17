#ifndef _CUSTOMER_H_
#define _CUSTOMER_H_

#include <string>

class CustomerCounter {
    private:
        int maximum_customers;
    public:
        CustomerCounter(int maximum_customers);
        int customer_count = 0;
        int add();
        int subtract();
};


#endif