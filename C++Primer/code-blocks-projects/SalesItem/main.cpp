#include <iostream>
#include "Sales_item.h"

using namespace std;

unsigned Sales_item::units_sold = 0;
double Sales_item::revenue = 0.0;

int main()
{


    Sales_item total;

	// read transaction
	if (std::cin >> total) {
		Sales_item trans;  // stack variable to hold running sum

		while (std::cin >> trans) {
            // 1st time through - process this isbn
            if (total.isbn() == trans.isbn() )
                total += trans; // update total running
            else {
                // print result of previous book
                std::cout << total << std::endl;
                total = trans;  // update total
            }
		}
		std::cout << total << std::endl; // print last transaction
	} else {
        // no input !
        std::cerr << "No data?  !!! "  << std::endl;
        return -1;

    }

    return 0;
}
