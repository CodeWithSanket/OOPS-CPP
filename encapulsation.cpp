#include <iostream>
using namespace std;

// Encapsulation: Means Binding of Data Members and Member function inside one class.

class Product
{
private:
    string productName;
    int productPrice;

public:
    void setProductPrice(int price)
    {
        if (price > 0)
        {
            productPrice = price;
        }
        else
        {
            cout << "Invalid Price Entered" << endl;
        }
    }
    void setProductName(string pName)
    {
        if (pName != "")
        {
            productName = pName;
        }
        else
        {
            cout << "Invalid Product Name Entered" << endl;
        }
    }
    int getProductPrice()
    {
        return productPrice;
    }
    string getProductName()
    {
        return productName;
    }
};

int main()
{
    Product p1;
    p1.setProductName("Iphone");
    p1.setProductPrice(100000);
    cout << "Product Name: " << p1.getProductName() << endl;
    cout << "Product Price: " << p1.getProductPrice() << endl;
    return 0;
}