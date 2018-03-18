/*
 Design a logistic system

 where a client can place an order to get his/her items delivered to a give destination.
 keep track of status of all the orders. The admin of logistics charnes some amount for delivering the orders (items)
 */

class Order {
    int order_id;
    OrderPriority priority_of_order;

    Client ower_of_order;
    Location destination;
    int amount_of_charge;
    List<Item> items;
    int total_weight;
    OrderStatus current_status;
    PaymentStatus status_of_payment;
    Time time_of_order_placed;
    Time time_of_delivery;
}


class Item {
    String name;
    int price;
    int volume;
    int weight;
}

class Client {
    int client_id;
    String name;
    Location address;
}

class Admin {
    void take_order (Order order);
    void process_order(Order order);
    Location track_order(int order_id);
}


