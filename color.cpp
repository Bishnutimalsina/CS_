#include <iostream>
using namespace std;

int count1;
int count2;

// Declare the color class here...
class color{
    private:
    int r;
    int g;
    int b;
    public:
    color();
    color(int red, int green, int blue);
    void set(int red, int green, int blue);
    void add(const color &sum) ;
    void mix(const color &mix) ;
    int max(int n1, int n2);
    int R() const;
    int G() const;
    int B() const;

    
};


////////////////////////////////////////////////
///////////////////////////////////////////////

// Put definitions for the color class methods here...
color::color(){
    int r = 0;
    int g = 0;
    int b = 0;
    count1++;
}



color::color(int red, int green, int blue){
    r = red;
    g = green;
    b = blue;
    count2++;
}


void color::set(int red, int green, int blue)
{
    this->r = red;
    this->g = green;
    this->b = blue;
}

 int color::R()const{
    return r;
}

 int color::G()const{
    return g;
}

 int color::B()const{
    return b;
}

int color::max(int n1, int n2){
    if (n1 > n2)
        return n1;

    

    else
        return n2; 
    
    
}
void color::add(const color &c){
    r = max(r,c.r);
    g = max(g,c.g);
    b = max(b,c.b);
}

void color::mix(const color &c){
    //cout << r<<endl;
    r = (r + c.r) / 2;
    g = (g + c.g) / 2;
    b = (b + c.b) / 2;
    //cout <<r<<endl;
    //cout << c.r<<endl;
}


////////////////////////////////////////////////////
///////////////////////////////////////////////////
int main() {
const color Black;
const color White( 255, 255, 255 );
const color SkyBlue( 135, 206, 235 );
const color SeaGreen( 46, 139, 87 );
const color Gold( 255, 215, 0 );
const color Chocolate( 210, 105, 30 );
const color DarkGrey( 75, 75, 75 );
color Custom( White );
Custom.mix( DarkGrey );
Custom.mix( SkyBlue );
color CreamyMix( White );
CreamyMix.mix( SkyBlue );
CreamyMix.mix( SeaGreen );
CreamyMix.mix( White );
CreamyMix.mix( White );
color mixes[5];
mixes[0] = SkyBlue;
mixes[0].add( SeaGreen );
mixes[0].mix( Black );
mixes[1].set( Chocolate.B(), SeaGreen.R(), DarkGrey.G() );
mixes[1].mix( Gold );
mixes[2] = White;
mixes[2].add( Black );
mixes[2].add( Gold );
mixes[3].set( Chocolate.R(), Gold.G(), SeaGreen.B() );
mixes[3].add( SkyBlue );
mixes[4] = mixes[3];
mixes[4].mix( Black );
mixes[4].mix( Black );
cout << Black.R()<<" "<<Black.G()<<" "<<Black.B()<<endl;
cout << Gold.R()<<" "<<Gold.G()<<" "<<Gold.B()<<endl;
cout << Custom.R()<<" "<<Custom.G()<<" "<<Custom.B()<<endl;
cout << CreamyMix.R()<<" "<<CreamyMix.G()<<" "<<CreamyMix.B()<<endl;
cout << mixes[0].R()<<" "<<mixes[0].G()<<" "<<mixes[0].B()<<endl;
cout << mixes[1].R()<<" "<<mixes[1].G()<<" "<<mixes[1].B()<<endl;
cout << mixes[2].R()<<" "<<mixes[2].G()<<" "<<mixes[2].B()<<endl;
cout << mixes[3].R()<<" "<<mixes[3].G()<<" "<<mixes[3].B()<<endl;

cout <<"Default constructor is called "<< count1<<" "<< "times"<<endl;
cout <<"Color class constructor with 3 arguments is called " << count2<<"times"<< endl;


return Black.R();
}