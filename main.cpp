#include <iostream>
#include <string>

using namespace std;

class Operators{
//private: int n1, n2, n3, n4, n5, n11, n21, n31, n41, n51;
public:
    int n1, n2, n3, n4, n5, n11=0, n21=0, n31=0, n41=0, n51=0;
    void proverka(string str){
        for (int i=0; i<str.length(); i++) {
            n1 = str.find("+", i); if (n1==i) n11++;
            n2 = str.find("-", i); if (n2==i) n21++;
            n3 = str.find("*", i); if (n3==i) n31++;
            n4 = str.find("/", i); if (n4==i) n41++;
            n5 = str.find("tg", i); if (n5==i) n51++;
        } }

    void vivod() {
        cout<<" '+' - "<<n11<<"\n";
        cout<<" '-' - "<<n21<<"\n";
        cout<<" '*' - "<<n31<<"\n";
        cout<<" '/' - "<<n41<<"\n";
        cout<<" 'tg' - "<<n51<<"\n";
    } };

int main() {
    string str("0-----0+++///***000tgtgtgtgt0");
    Operators ss;
    ss.proverka(str);
    ss.vivod();

}

