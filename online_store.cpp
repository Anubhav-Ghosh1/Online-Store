#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <ctime>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>

using namespace std;

struct Product
{
    int productId;
    string name;
    string category;
};

struct Order
{
    int orderId;
    int ProductId;
    int quantity;
    string customerId;
    time_t orderDate; // from c_time
};

int main()
{
    vector<Product> products = {
        {101, "Laptop", "Electronics"},
        {102, "Smart Phone", "Electronics"},
        {103, "Headphone", "Electronics"},
        {104, "Coffee", "Kitchen"},
        {105, "Lamp", "Home"},
    };

    deque<string> recentCustomers = {"C001",
                                     "C002",
                                     "C004"};

    list<Order> orderHistory;
    orderHistory.push_back({1, 101, 1, "C001", time(0)});
    orderHistory.push_back({2, 102, 2, "C002", time(0)});
    orderHistory.push_back({3, 104, 4, "C004", time(0)});

    set<string> categories;
    for (const auto product : products)
    {
        categories.insert(product.category);
    }

    unordered_map<int, int> product_stock = {
        {101, 10},
        {102, 20},
        {103, 40},
        {104, 60},
        {105, 10},
    };

    multimap<string,Order> customerOrder;
    for(const auto order:orderHistory)
    {
        customerOrder.insert({order.customerId,order});
    }

    unordered_map<string,string> customerData = {
        {"C001","Alice"},
        {"C002","Bob"},
        {"C004","Codechef"}
    };

    unordered_set<int> uniqueProductId;
    for(const auto product:products)
    {
        uniqueProductId.insert(product.productId);
    }

    return 0;
}