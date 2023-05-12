//
// Created by chika on 2023-04-15.
//
#include <iostream>
using namespace std;
#include <fstream>
#include <string>

class Item{
private:
    float price;
    int quantity;
    string name;
public:
    Item(){};
    Item(float p, int q, string n);
    friend ostream & operator <<(ostream &os, Item &i);
    friend ofstream & operator <<(ofstream &ofs, Item &i);
    friend ifstream & operator >>(ifstream &ifs, Item &i);

};

int main(){
    int no_of_pro;
    string name;
    int quantity;
    float price;

    ofstream ofs("groceryList.txt",ios_base::app);
    cout<<"How many products would you like to purchase: "<<endl;
    cin >> no_of_pro;
    cin.ignore();
    for(int i = 0; i < no_of_pro; i++){
        cout<<"What's the name of the product: "<<endl;
        getline(cin,name);
        cout<<"How many of the products would you like to purchase: "<<endl;
        cin >> quantity;
        cin.ignore();
        cout<<"What is the cost per item"<<endl;
        cin >> price;
        price *= quantity;
        cin.ignore();
        Item item(price,quantity,name);
        ofs << item;
    }
    if(ofs.is_open()) cout<<"The grocery list is open and will be closed"<<endl;
    ofs.close();
}
Item::Item(float p, int q, string n) {
    price = p;
    quantity = q;
    name = n;
}
ostream & operator <<(ostream &os, Item &i){
    os<<i.name<<endl<<i.price<<endl<<i.quantity<<endl;
    return os;
}
ofstream & operator <<(ofstream &ofs, Item &i){
    ofs<<i.name<<endl<<i.quantity<<endl<<i.price<<endl;
    return ofs;
}
ifstream & operator >>(ifstream &ifs, Item &i){
    ifs>>i.name>>i.price>>i.quantity;
    return ifs;
}