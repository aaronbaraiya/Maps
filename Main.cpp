#include <iostream>
#include <string>
#include <iomanip>
#include "Map.h"


using namespace std;

int main() {
  double longi, lati;
  Map<string, Pair<double, double>> earth_map;
  string capital;
  Pair<double, double> coords;
  cout << "Enter 5 world captials with longitude and latitude: " << endl << endl;
  for(int i = 0; i < 5; i++) {
    cout << setw(15) << left << "Capital:";
    cin >> capital;
    cout << setw(15) << left << "Longitude:";
    cin >> coords.first;
    cout << setw(15) << left << "Latitude:";
    cin >> coords.second;
    earth_map[capital] = coords;
    cout << endl;
  }

  cout << endl << endl << "Longitudes and latitudes were entered for these capitals:" << endl;
  Set<string> capitals = earth_map.keys();
  Set<string>::iterator itr = capitals.begin();
  cout << fixed << setprecision(2);
  while(itr != capitals.end()) {
    cout << setw(25) << left << *itr <<
            setw(8)  << right << earth_map[*itr].first <<
            setw(8)  << right << earth_map[*itr].second << endl;

    itr++;
  }

  return 0;
}
