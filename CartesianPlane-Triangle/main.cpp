#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    // Variable Declaration //

    float xa,ya,xb,yb,xc,yc,dxab,dyab,dxbc,dybc,dxac,dyac,ab,bc,ac,p,sp,a,q;
    string choice;



    // Title & Variable Assignments //

    cout << "Calculator of the perimeter and area of a triangle on a cartesian plane!" << endl;
    cout << "" << endl;

    cout << "Enter the coordinates of point A (x,y):" << endl;
    cin >> xa >> ya;

    cout << "Enter the coordinates of point B (x,y):" << endl;
    cin >> xb >> yb;

    cout << "Enter the coordinates of point C (x,y):" << endl;
    cin >> xc >> yc;



    // Delta calculation of AB, BC and AC /

    dxab = xa-xb;
    dyab = ya-yb;

    dxbc = xb-xc;
    dybc = yb-yc;

    dxac = xa-xc;
    dyac = ya-yc;



    // Distance calculation of AB, BC, and AC //

    ab = sqrt(pow(dxab,2)+pow(dyab,2));

    bc = sqrt(pow(dxbc,2)+pow(dybc,2));

    ac = sqrt(pow(dxac,2)+pow(dyac,2));



    // Perimeter calculation of the ABC triangle //

    p = ab+bc+ac;



    // Declaration of the semiperimeter //

    sp = p/2;



    // Area calculation of the ABC triangle with Heron's Theorem //

    a = sqrt(sp*(sp-ab)*(sp-bc)*(sp-ac));




    // Unknowns' Result & Triangle C.E.//

    cout << "" << endl;

    if (((xa == xb) && (ya == yb)) || ((xb == xc) && (yb == yc)) || ((xa == xc) && (ya == yc)))
    {
     cout << "The triangle does not exist: 2 or 3 vertices are on the same point." << endl;
     return 0;
    }

    else if (a == 0)
    {
     cout << "The triangle does not exist: all vertices are aligned with each other." << endl;
     return 0;
    }

    else
    {
     cout << "The perimeter is: " << fixed << setprecision(2) << p << endl;
     cout << "The area is: " << fixed << setprecision(2) << a << endl;
    }

    cout << "" << endl;



    // Willingness to show the process carried out //

    cout << "Want to see the process?" << endl;
    cin >> choice;
    cout << "" << endl;

    if (choice == "yes" || choice == "Yes" || choice == "YES")
    {
     cout << "Calculation of Delta's, the difference of 2 points on the same axis:" << endl;
     cout << "" << endl;
     cout << "Dxab = xa - xb = " << xa << " - " << xb << " = " << dxab << endl;
     cout << "Dyab = ya - yb = " << ya << " - " << yb << " = " << dyab << endl;
     cout << "Dxbc = xb - xc = " << xb << " - " << xc << " = " << dxbc << endl;
     cout << "Dybc = yb - yc = " << yb << " - " << yc << " = " << dybc << endl;
     cout << "Dxac = xa - xc = " << xa << " - " << xc << " = " << dxac << endl;
     cout << "Dyac = ya - yc = " << ya << " - " << yc << " = " << dyac << endl;

     cout << "" << endl;
     cout << "" << endl;

     cout << "" << endl;
     cout << "Calculation of the distances AB, BC and AC:" << endl;
     cout << "sqrt = square root" << endl;
     cout << "" << endl;
     cout << "AB = sqrt(Dxab^2 + Dyab^2) = " << "sqrt((" << dxab << ")^2" << " + " << "(" << dyab << ")^2)" << " = " << "sqrt(" << pow(dxab,2) << " + " << pow(dyab,2) << ")" << " = " << "sqrt(" << pow(dxab,2) + pow(dyab,2) << ")" << " = " << ab << endl;
     cout << "" << endl;
     cout << "BC = sqrt(Dxbc^2 + Dybc^2) = " << "sqrt((" << dxbc << ")^2" << " + " << "(" << dybc << ")^2)" << " = " << "sqrt(" << pow(dxbc,2) << " + " << pow(dybc,2) << ")" << " = " << "sqrt(" << pow(dxbc,2) + pow(dybc,2) << ")" << " = " << bc << endl;
     cout << "" << endl;
     cout << "AC = sqrt(Dxac^2 + Dyac^2) = " << "sqrt((" << dxac << ")^2" << " + " << "(" << dyac << ")^2)" << " = " << "sqrt(" << pow(dxac,2) << " + " << pow(dyac,2) << ")" << " = " << "sqrt(" << pow(dxac,2) + pow(dyac,2) << ")" << " = " << ac << endl;

     cout << "" << endl;
     cout << "" << endl;
     cout << "" << endl;

     cout << "Calculation of the triangle's perimeter:" << endl;
     cout << "" << endl;
     cout << "P = AB + BC + AC = " << ab << " + " << bc << " + " << ac << " = " << p << endl;

     cout << "" << endl;
     cout << "" << endl;
     cout << "" << endl;

     cout << "Calculation of the triangle's area using Heron's Theorem:" << endl;
     cout << "SP = semi perimeter" << endl;
     cout << "" << endl;
     cout << "A = sqrt[SP*(SP-AB)*(SP-BC)*(SP-AC)] = " << "sqrt[" << sp << "*" << "(" << sp << "-" << ab << ")" << "*" << "(" << sp << "-" << bc << ")" << "*" << "(" << sp << "-" << ac << ")" << "]" << " = " << "sqrt(" << sp << "*" << sp-ab << "*" << sp-bc << "*" << sp-ac << ")" << " = " << "sqrt(" << sp*(sp-ab)*(sp-bc)*(sp-ac) << ")" << " = " << sqrt(sp*(sp-ab)*(sp-bc)*(sp-ac)) << endl;

     cout << "" << endl;
     cout << "" << endl;
     cout << "" << endl;
    }

    cout << "Press the 'X' button to close the program." << endl;

    while (true)
    {
        cin.get();
    }

    return 0;
}




