#include<iostream> // cout cin
#include <cmath> // abs
#include <math.h> //pow

using namespace std;
double manDist (double x1, double x2, double y1, double y2);
double eudDist (double x1, double x2, double y1, double y2);

double abs1 = 0;
double abs2 = 0;

int main(){
  double x1;
  double x2;
  double y1;
  double y2;

  double ManhattanDistance;
  double EuclideanDistance;
  cout << "Enter X 1 \n";
  cin >> x1;
  cout << "Enter Y 1 \n";
  cin >> y1;
  cout << "Enter X 2 \n ";
  cin >> x2;
  cout << "Enter Y 2 \n";
  cin >> y2;

  ManhattanDistance = manDist(x1, x2, y1, y2);
  EuclideanDistance = eudDist(x1, x2, y1, y2);


  cout << "Your man distance is: " << ManhattanDistance << "\n";
  cout << "Your eud distance is: " << EuclideanDistance;

  return 0;
}

  double manDist (double x1, double x2, double y1, double y2)
  {
    double absoulute = abs((x2-x1)) + abs((y2 -y1));
    return absoulute;
  }

  double eudDist (double x1, double x2, double y1, double y2)
  {
    double firstSquared = pow(x2-x1, 2);
    double secondSquared = pow(y2-y1, 2);
    double absoulute = sqrt(firstSquared + secondSquared);
    return absoulute;
  }
