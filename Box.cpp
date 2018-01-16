#include <iostream>
using namespace std;

class Box
{
    protected:
        double width;
        double height;
        
    private:
        double id;
        double serial_number;
};

class smallerBox:Box // smallerBox is the derived class
{
    public:
        void setSmallWidth(double wid);
        double getSmallWidth(void);
        void setSmallHeight(double ht);
        double getSmallHeight(void);
};

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

int main()
{
    smallerBox box;
    box.setSmallWidth(5.90);
    box.setSmallHeight(10.50);
    
    
    
    cout << " width: " << box.getSmallWidth() << endl;
    cout << " height " << box.getSmallHeight() << endl;
    return 0;
}
