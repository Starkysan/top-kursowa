
#include <vector>
#include <cstring>
#include <iostream>

using namespace std;

class Furniture
{
public:
    Furniture() {};
    
    ~Furniture () {};
    
    virtual void give_info() = 0;
    
    virtual double get_price() = 0;
    
    /*virtual void remove_item() = 0;
    
    virtual void insert_item() = 0;*/
    
    
protected:
    
    string ID;
    
};
class Beds:public Furniture

{
public:
    
    Beds(string name,double price,int q){ID = name;cprice = price;qua=q;};
    
    ~Beds(){};
    
    
    
    virtual void give_info()
    {
        cout << "Name" << ID << "Price" << cprice << "DDS" << get_price();
    }
    
    
    virtual double get_price(){return (cprice + cprice * 0.2)*qua;};
private:
    
    double cprice;
    int qua;
    
    
};


int main()

{
   
}
