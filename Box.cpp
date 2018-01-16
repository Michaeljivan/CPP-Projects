#include <iostream>
using namespace std;

//Box class
class Box
{
    protected:      
        double width;
        double height;
        
    private:
        double id;
        double serial_number;
};

//smallerBox is the derived class of Box
class smallerBox:Box                
{
    public:
        void setSmallWidth(double wid);
        double getSmallWidth(void);
        void setSmallHeight(double ht);
        double getSmallHeight(void);
};

//getters and setters   datatype [class]::[method-name](parameter) 
double smallerBox::getSmallWidth(void)
{
    return width;
}

void smallerBox::setSmallWidth(double wid)
{
    width = wid;
}

double smallerBox::getSmallHeight(void)
{
    return width;
}

void smallerBox::setSmallHeight(double wid)
{
    width = wid;
}

//main program
int main()
{   
    //initialize a box from class smallerBox
    smallerBox box;
    
    //create the height and width of box using set methods
    box.setSmallWidth(5.90);
    box.setSmallHeight(10.50);   
    
    //print out the attributes of box using get methods
    cout << " width: " << box.getSmallWidth() << endl;
    cout << " height " << box.getSmallHeight() << endl;
    return 0;
}
