#include<iostream>
#include<queue>

using namespace std;

class Fuel
{
protected :

	string fueltype;

public:

	Fuel(string fuel)
	{
		fueltype=fuel;

	}

	void displayfuel()const
	{
		cout<<"fuel type :"<<fueltype<<endl;
	}

};


class Brand
{
protected:

	string brandname;

public:

	Brand(string brand)
	{
		brandname=brand;

	}

	void displaybrand()const
	{
		cout<<"brand name :"<<brandname<<endl;
	}


};
class Car : public Fuel, public Brand
{
private :

	string model;

public:

	Car(string fuel,string brand,string mdl):Fuel(fuel),Brand(brand)
	{

		model=mdl;

	}

	void displaycar()const
	{
		displaybrand();
		displayfuel();
		cout<<"model :"<<model<<endl;
	}
};


int main()
{
	queue<Car>cq; //for user input

	cq.push(Car("petrol","toyota","corolla"));//string f,b,m;     //loop //cin  //push(car(f,b,m)

	cq.push(Car("diesel","ford","f150"));
	cq.push(Car("cng","tesla","model-s"));

	cout<<endl<<"using stl approch"<<endl;
	while(!cq.empty())
	{
		Car c=cq.front();
		c.displaycar();
		cout<<"-----------------------"<<endl;
		cq.pop();
	}



//using vectors


	/*

	  vector<Car> cars;
	    int n;

	    cout << "Enter number of cars: ";
	    cin >> n;

	    for (int i = 0; i < n; ++i) {
	        string fuel, brand, model;

	        cout << "\nEnter details for Car " << i + 1 << ":\n";

	        cout << "Fuel Type (no spaces): ";
	        cin >> fuel;

	        cout << "Brand Name (no spaces): ";
	        cin >> brand;

	        cout << "Model Name (no spaces): ";
	        cin >> model;

	        // Add car to the vector
	        cars.push_back(Car(fuel, brand, model));
	    }

	    // Display car details
	    cout << "\n--- Car Details ---\n";
	    for (size_t i = 0; i < cars.size(); ++i) {
	        cout << "\nCar " << i + 1 << ":\n";
	        cars[i].displaycar();
	        cout << "-----------------------" << endl;
	    }
	*/


	cout<<endl<<endl<<"24ce140_pallavi";

}
