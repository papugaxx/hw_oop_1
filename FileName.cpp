#include <iostream>
using namespace std;

class Rectangle
{
private:
    int x;     
    int y;      
    int height; 
    int width;  

public:

    int getX() 
    { 
        return x;
    }
    int getY() 
    {
        return y;
    }
    int getHeight() 
    {
        return height;
    }
    int getWidth()
    {
        return width;
    }
    void setX(int value) 
    {
        x = value;
    }
    void setY(int value) 
    { 
        y = value;
    }
    void setHeight(int value) 
    { 
        height = value;
    }
    void setWidth(int value) 
    {
        width = value;
    }
    void show()
    {
        cout << "Rect" << endl;
        cout << "X " << getX() << endl;
        cout << "Y " << getY() << endl;
        cout << "Height " << getHeight() << endl;
        cout << "Width " << getWidth() << endl;
    }

    void input()
    {
        cout << "Enter X ";
        cin >> x;
        cout << "Enter Y ";
        cin >> y;
        cout << "Enter Height ";
        cin >> height;
        cout << "Enter Width ";
        cin >> width;
    }
};

int main()
{
    Rectangle rect;
    rect.input();
    rect.show();
    cout<<rect.getX();

    return 0;
}
