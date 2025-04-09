#include<iostream>
using namespace std;

struct Product
{
  int id;
  string name;
  int quantity;
  int price;
};

void add_product(Product &product);
void update_quantity(int,int);
void calculate_total();

Product p[10];
int product_count=0;

int main()
{
 int c;
while(true)
{
    cout<<"Enter the details of the product"<<endl;
    cout<<"press 1 for add product"<<endl;
    cout<<"press 2 for update quantity"<<endl;
    cout<<"press 3 for calculate total"<<endl;
    cout<<"press 0 for end"<<endl;
    cin>>c;
    if(c==0)
    {
        break;
    }
    switch(c)
    {
     case 1:
         if(product_count<10)
         {
           Product new_pro;
           add_product(new_pro);
           p[product_count++]=new_pro;
         }
         else{
            cout<<"stop";
         }
        break;
     case 2:
         int pro_id,pro_quantity;
         cout<<"Enter id:";
         cin>>pro_id;
         cout<<"Quantity:";
         cin>>pro_quantity;
         update_quantity(pro_id,pro_quantity);
         break;
     case 3:
         calculate_total();
         break;
     default:
          cout<<"Thank you!";

    }

}
}

 void add_product(Product &product)
 {
        cout<<"Enter id of the product:";
        cin>>product.id;
        cout<<"Enter the name of the product:";
        cin>>product.name;
        cout<<"Enter the quantity of the product:";
        cin>>product.quantity;
        cout<<"Enter the price of the product:";
        cin>>product.price;

 }


void update_quantity(int id, int quantity) {
    bool found = false;

    for (int i = 0; i < product_count; i++) {
        if (p[i].id == id) {
            p[i].quantity += quantity;
            cout << "Updated quantity of product " << p[i].name << " to " << p[i].quantity << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Product with ID " << id << " not found!" << endl;
    }
}



 void calculate_total()
 {
     int total=0;
     for(int i=0;i<product_count;i++)
    {
       total+=p[i].price*p[i].quantity;
    }
    cout<<"total amount:"<<total<<endl;
 }
