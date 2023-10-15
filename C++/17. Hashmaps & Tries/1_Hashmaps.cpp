#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    // creation
    unordered_map<string, int> m;

    // insertion
    pair<string, int> p("Scorpio", 1);
    // or
    m["XUV"] = 2;
    m.insert(p);

    // access
    cout << m["XUV"] << endl;
    cout << m.at("Scorpio") << endl; // throws error if key not present

    // search
    cout << m.count("Suzuki") << endl; // returns 0 or 1
    if(m.find("Scorpio") != m.end()){
        cout << "Present" << endl;
    }else{
        cout << "Not Present" << endl;
    }

    // Size
    cout << m.size() << endl;

    // Some important functions logic
    cout << m["hummer"] << endl; // throws error if key not present
    cout << m.size() << endl; // It increases the size by 1 and stores 0 in the corrresponding key
    m.erase("hummer");
    cout << m.size() << endl; // It decreases the size by 1


    // Printing all entries
    cout << "printing all entries: " << endl;
    for(auto i: m){
        cout << i.first << " --> " << i.second << endl;
    }

    return 0;
}