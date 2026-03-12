#include <iostream>
#include "order_book.h"

int main() {

    OrderBook book;

    Order o1{1, Side::Buy, 100, 10, 1};
    Order o2{2, Side::Sell, 105, 5, 2};

    book.addOrder(o1);
    book.addOrder(o2);

    std::cout << "Orders added successfully\n";

    return 0;
}