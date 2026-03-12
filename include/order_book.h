#pragma once

#include <map>
#include <list>
#include <unordered_map>
#include "order.h"

class OrderBook {
public:
    void addOrder(const Order& order);
    void cancelOrder(uint64_t orderId);

private:
    std::map<int, std::list<Order>, std::greater<int>> bids;
    std::map<int, std::list<Order>> asks;
};