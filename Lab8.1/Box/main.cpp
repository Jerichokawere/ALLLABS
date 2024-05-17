//main function for the program
int main (){
    Box Box1;  //Declare Box1 of the type Box
    Box Box2; //Declare Box2 of the type Box
    box box3; //Declare Box3 of the type Box
    double volume = 0.0;
    //box 1 specification
    Box1.SetLength(6.0);
    Box2.SetBreadth(7.0);
    Box3.SetHeight(5.0);
    //box2 specification
    Box2.SetLength(12.0);
    Box2.SetBreadth(13.0);
    Box2.SetHeight(10.0);
    // volume of the box 1
    volume = Box1.Getvolume();
    cout<<"Volume of Box1: "<< volume << endl;
    //volume of the box2
    volume = Box2.GetVolume();
    cout << "Volume of the Box2: " << volume<< endl;
    //add two objects as follows:
    Box3 = Box1 + Box2;
    //volume of box3
    volume = Box3.GetVolume();
    cout << "Volume of Box3 :" << volume << endl;
    return 0;
}