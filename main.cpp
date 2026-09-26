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
        void set_red(int r)   { red = r; }
        void set_green(int g) { green = g; }
        void set_blue(int b)  { blue = b; }

        //getters
        int get_red()  { return red; }
        int get_green()  { return green; }
        int get_blue()  { return blue; }

        //print method
        void print(){
            cout << "Red: " << red << endl;
            cout << "Green: " << green << endl;
            cout << "Blue: " << blue << endl;
            cout << "-----------------" << endl;
        }
};


int main(){
    //Color object 1
    Color Black;
    Black.set_red(0);
    Black.set_green(0);
    Black.set_blue(0);
    cout << "--- Color: Black ---" << endl;
    Black.print();

    //Color object 2
    Color Red;
    Red.set_red(100);
    Red.set_green(0);
    Red.set_blue(0);
    cout << "--- Color: Red ---" << endl;
    Red.print();

    //Color object 3
    Color SaddleBrown;
    SaddleBrown.set_red(139);
    SaddleBrown.set_green(69);
    SaddleBrown.set_blue(19);
    cout << "--- Color: Saddle Brown ---" << endl;
    SaddleBrown.print();

    //Color object 4
    Color Violet;
    Violet.set_red(143);
    Violet.set_green(0);
    Violet.set_blue(255);
    cout << "--- Color: Violet ---" << endl;
    Violet.print();



    return 0;
}