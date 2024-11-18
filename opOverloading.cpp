#include <iostream>
#include <cassert>
using namespace std;

class Point{
private:
float x;
float y;

public:
Point(float x, float y){
    this->x = x;
    this->y = y;
}

void print(){
    cout << "(" << x << "," << y << ")" << endl;
}






float operator-(Point &p2){
float distance;
distance = sqrt(pow(p2.x - x, 2) + pow(p2.y - y, 2));
return distance;
}

bool operator==(Point &p2){

return (p2.x == x && p2.y == y);
}

bool operator!=(Point &p2){

return (p2.x != x || p2.y != y);
}

Point operator/(Point &p2){
Point p3(0,0);
p3.x = ((p2.x + x)/2);
p3.y = ((p2.y + y)/2);
p3.print();
return p3;
}





};

int main(){

Point p1(3.2,9.8);
Point p2(5.5,-1.2);
Point midpointAssert(4.35,4.3);

cout << p1 - p2 << endl;
assert((p1-p2) > 11.236 && (p1-p2) < 11.238);
cout << (p1 == p2) << endl;
assert((p1==p2) == 0);
cout << (p1 != p2) << endl;
assert((p1!=p2) == 1);
(p1/p2);
assert((p1/p2) == midpointAssert);




    return 0;
}