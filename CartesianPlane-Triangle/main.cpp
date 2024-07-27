#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    // Variable Declaration //

    float xa,ya,xb,yb,xc,yc,dxab,dyab,dxbc,dybc,dxac,dyac,ab,bc,ac,p,sp,a,q;
    string choice;



    // Title & Variable Assignments //

    std::cout << "Calculator of the perimeter and area of a triangle on a cartesian plane!" << std::endl;
    std::cout << "" << endl;

    std::cout << "Enter the coordinates of point A (x,y):" << std::endl;
    std::cin >> xa >> ya;

    std::cout << "Enter the coordinates of point B (x,y):" << std::endl;
    std::cin >> xb >> yb;

    std::cout << "Enter the coordinates of point C (x,y):" << std::endl;
    std::cin >> xc >> yc;



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

    std::cout << "" << endl;

    if (((xa == xb) && (ya == yb)) || ((xb == xc) && (yb == yc)) || ((xa == xc) && (ya == yc))){
     std::cout << "The triangle does not exist: 2 or 3 vertices are on the same point." << std::endl;
     return 0;
    }

    else if (a == 0){
     std::cout << "The triangle does not exist: all vertices are aligned with each other." << std::endl;
     return 0;
    }

    else {
     std::cout << "The perimeter is: " << fixed << setprecision(2) << p << std::endl;
     std::cout << "The area is: " << fixed << setprecision(2) << a << std::endl;
    }

    std::cout << "" << std::endl;



    // Willingness to show the process carried out //

    std::cout << "Want to see the process?" << std::endl;
    std::cin >> choice;
    std::cout << "" << std::endl;

    if (choice == "yes" || choice == "Yes" || choice == "YES"){
     std::cout << "Calculation of Delta's, the difference of 2 points on the same axis:" << std::endl;
     std::cout << "" << std::endl;
     std::cout << "Dxab = xa - xb = " << xa << " - " << xb << " = " << dxab << std::endl;
     std::cout << "Dyab = ya - yb = " << ya << " - " << yb << " = " << dyab << std::endl;
     std::cout << "Dxbc = xb - xc = " << xb << " - " << xc << " = " << dxbc << std::endl;
     std::cout << "Dybc = yb - yc = " << yb << " - " << yc << " = " << dybc << std::endl;
     std::cout << "Dxac = xa - xc = " << xa << " - " << xc << " = " << dxac << std::endl;
     std::cout << "Dyac = ya - yc = " << ya << " - " << yc << " = " << dyac << std::endl;

     std::cout << "" << std::endl;
     std::cout << "" << std::endl;

     std::cout << "" << std::endl;
     std::cout << "Calculation of the distances AB, BC and AC:" << endl;
     std::cout << "sqrt = square root" << endl;
     std::cout << "" << endl;
     std::cout << "AB = sqrt(Dxab^2 + Dyab^2) = " << "sqrt((" << dxab << ")^2" << " + " << "(" << dyab << ")^2)" << " = " << "sqrt(" << pow(dxab,2) << " + " << pow(dyab,2) << ")" << " = " << "sqrt(" << pow(dxab,2) + pow(dyab,2) << ")" << " = " << ab << std::endl;
     std::cout << "" << endl;
     std::cout << "BC = sqrt(Dxbc^2 + Dybc^2) = " << "sqrt((" << dxbc << ")^2" << " + " << "(" << dybc << ")^2)" << " = " << "sqrt(" << pow(dxbc,2) << " + " << pow(dybc,2) << ")" << " = " << "sqrt(" << pow(dxbc,2) + pow(dybc,2) << ")" << " = " << bc << std::endl;
     std::cout << "" << endl;
     std::cout << "AC = sqrt(Dxac^2 + Dyac^2) = " << "sqrt((" << dxac << ")^2" << " + " << "(" << dyac << ")^2)" << " = " << "sqrt(" << pow(dxac,2) << " + " << pow(dyac,2) << ")" << " = " << "sqrt(" << pow(dxac,2) + pow(dyac,2) << ")" << " = " << ac << std::endl;

     std::cout << "" << std::endl;
     std::cout << "" << std::endl;
     std::cout << "" << std::endl;

     std::cout << "Calculation of the triangle's perimeter:" << std::endl;
     std::cout << "" << std::endl;
     std::cout << "P = AB + BC + AC = " << ab << " + " << bc << " + " << ac << " = " << p << std::endl;

     std::cout << "" << std::endl;
     std::cout << "" << std::endl;
     std::cout << "" << std::endl;

     std::cout << "Calculation of the triangle's area using Heron's Theorem:" << std::endl;
     std::cout << "SP = semi perimeter" << std::endl;
     std::cout << "" << std::endl;
     std::cout << "A = sqrt[SP*(SP-AB)*(SP-BC)*(SP-AC)] = " << "sqrt[" << sp << "*" << "(" << sp << "-" << ab << ")" << "*" << "(" << sp << "-" << bc << ")" << "*" << "(" << sp << "-" << ac << ")" << "]" << " = " << "sqrt(" << sp << "*" << sp-ab << "*" << sp-bc << "*" << sp-ac << ")" << " = " << "sqrt(" << sp*(sp-ab)*(sp-bc)*(sp-ac) << ")" << " = " << sqrt(sp*(sp-ab)*(sp-bc)*(sp-ac)) << std::endl;

     std::cout << "" << std::endl;
     std::cout << "" << std::endl;
     std::cout << "" << std::endl;
    }

    std::cout << "Press the 'X' button to close the program." << std::endl;

    while (true)
    {
        std::cin.get();
    }

    return 0;
}




