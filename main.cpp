#include <iostream>
using namespace std;

// Create Color class
class Color {
    private:
        int red;
        int green;
        int blue;

    public:
        // setters
        void set_red(int r)   {red = r;}
        void set_green(int g) {green = g;}
        void set_blue(int b)  {blue = b;}

        //getters
        int get_red()  {return red;}
        int get_green()  {return green;}
        int get_blue()  {return blue;}

        //print method
        void print(){
            cout << "Red: " << red << endl;
            cout << "Green: " << green << endl;
            cout << "Blue: " << blue << endl;
            cout << "------------" << endl;
        }
};


int main(){




    return 0;
}