/*Write a program in C++ to use map associative container. 
The keys will be the names of states and the values will be the populations of the states. 
When the program runs, the user is prompted to type the name of a state. 
The program then looks in the map, using the state name as an index and returns the 
population of the state.*/


#include <iostream> 
#include <map> 
#include <string> 

using namespace std; 


int main()
{
    map <string, int> pmap;
    pmap.insert(pair<string, int>("MH",123));
    pmap.insert(pair<string, int>("UP",345));
    pmap.insert(pair<string, int>("MP",567));
    pmap.insert(pair<string, int>("KR",789));
   
    map <string, int>:: iterator iter = pmap.end();

    cout<<"Size of population Map: "<<pmap.size()<<endl;

    for(iter=pmap.begin();iter!=pmap.end();++iter)
    {
        cout<<iter->first<<" : "<<iter->second<<" million \n";

    }
    
    string state;
    cout<<"\n Enter the state: ";
    cin>>state;

    iter = pmap.find(state);

    if(iter!=pmap.end())
    {
        cout<<state<<" population is "<<iter->second<<" million \n";
    }
    else{
        cout<<"Key is not in populationMap"; 
    }

    pmap.clear();
    return 0;
}


// O/P:

// (base) trushantramdasjadhav@Trushants-MacBook-Air OOP Practical % cd "/Users/trushantramdasjadhav/Desktop/SEM-3(en
// dsem)/OOP Practical/" && g++ Pract7.cpp -o Pract7 && "/Users/trushantramdasjadhav/Desktop/SEM-3(endsem)/OOP Practi
// cal/"Pract7
// Size of population Map: 4
// KR : 789 million 
// MH : 123 million 
// MP : 567 million 
// UP : 345 million 

//  Enter the state: MH
// MH population is 123 million 
// (base) trushantramdasjadhav@Trushants-MacBook-Air OOP Practical % 


