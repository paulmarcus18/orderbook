#include "order_book.h"

void OrderBook::addOrder(const Order& order) {

    if (order.side == Side::Buy) {
        bids[order.price].push_back(order);
    } else {
        asks[order.price].push_back(order);
    }
}

void OrderBook::cancelOrder(uint64_t orderId){
    //later we can implement this function to remove an order from the order book based on its ID. For now, we will leave it unimplemented.
}