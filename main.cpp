#include <iostream>
using namespace std;


class person{
    private:
        int wight; 
    protected:
        int age = 0;
    
    public:
        string name;
        string address;
        int high;

    void set_wight(int x)
    {
        if(x > 3 && x < 150 )
            this->wight = x;
    }

    int get_wight()
    {
        return this->wight;
    }

};

class male : public person{
    
    public:
     string phone;

    void set_age(int x)
    {
        this->age = x;
    }
    int get_age()
    {
        return this->age;
    }
};

int main(){

    person person1;
    person1.name = "Ahmed";
    person1.address = "1st el abyad road";
    person1.high = 185;
    person1.set_wight(200);
    cout<<"persone1 = "<<person1.get_wight()<<endl;
    
    
    person person2;
    person2.name = "mohamed";
    person2.address = "1st el abyad road";
    person2.high = 185;
    person2.set_wight(50);
    cout<<"persone2 = "<<person2.get_wight()<<endl;
    
    male male1;
    male1.phone = "015101010";
    male1.set_age(50);
    cout<<male1.get_age()<<endl;
    return 0 ;
}