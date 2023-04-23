#include<iostream>
using namespace std;
 
    class Beverage{
    	protected:
    		int a;
    		int price;
    		
    	public:
    	 void set_beverageprice(int a){
    			price =a;
    			
				}
				
		  void print_beverageprice(void){
		  //	cout<<"The price is: "<<price<<endl;
		  	cout<<"The types of beverage are available in our restaurant is:"<<endl;
		  	
         cout<<"1. Tea "<<price<<endl
    	     <<"2. Cofee "<<price<<endl
		     <<"3. Black tea "<<price<<endl
			 <<"4. Green tea "<<price<<endl
			 <<"5. Mohjito "<<price<<endl
			 <<"6. Herbal tea "<<price<<endl;
		  }
	};
	 
	  class Breakfast{
    	protected:
    		int a;
    		int price;
    		
    	public:
    	 void set_breakfastprice(int a){
    			price =a;
    			
				}
				
		  void print_breakfastprice(void){
		  	//cout<<"The price is "<<price<<endl;
		  	cout<<"The types of breakfast are available in our restaurant is:"<<endl;
	         cout<<"1. (4)kachori "<<price<<endl
    	         <<"2. (2)idli , (1)dosa "<<price<<endl
		         <<"3. (2)jalebi , (2)singhara  "<<price <<endl
			     <<"4. (6)paneer pakora with sauce "<<price <<endl
			     <<"5. (2)upma "<<endl
			     <<"6. fresh veggies pakora(6) "<<price<<endl;
		  }
};
      
       class Maincourse{
       	protected:
    		int a;
    		int price;
    		
    	public:
    	 void set_maincourseprice(int a){
    			price =a;
    			
				}
				
		  void print_maincourseprice(void){
		  //	cout<<"The price is "<<price<<endl;
		  	
		  	cout<<"The types of Maincourse are available in our restaurant is:"<<endl;
	         cout<<"1. Thali(chawal,dal, sabji and papad) "<<price<<endl
    	         <<"2. chicken biryani "   <<price<<endl
		         <<"3. Mutton biryani  "   <<price<<endl
			     <<"4. chicken kofta "     <<price <<endl
			     <<"5. Handi chicken dum biryani "<<price<<endl
			     <<"6. veg soyabean biryani "<<price<<endl;
		  }
};

  class Restaurant : virtual public Beverage, virtual public Breakfast, virtual public Maincourse{
  	public:
  		void display(){
  			cout<<"Thank you for ordering food "<<endl;
		  }
  };
       	
	
int main(){
	
		char startvalue;
    		cout<<" press S to start ordering food "<<endl;
    		start:
            cin>>startvalue;
            if (startvalue=='S' || startvalue=='s'){
            	
            	}
            else{
            	cout<<"You have entered wrong option, please s" <<endl;
            	goto start;
			}
        
         Restaurant Manish;
        Manish.set_beverageprice(20);
		Manish.print_beverageprice();
		Manish.set_breakfastprice(50) ;
		Manish.print_breakfastprice();
		Manish.set_maincourseprice(100) ;
		Manish.print_maincourseprice();
		Manish.display();  
	
}

