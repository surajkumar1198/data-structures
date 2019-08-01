#include<iostream>
using namespace std;
class Player
{
public:
    char player_name[20];
    int age;
    char gender ;
    };
    class physique
    {
    public:
        float height;
        float weight;
    };
    class location
    {
    public:
        char state[20];
        char city[20];
    };
    class Game :public Player,physique,location
    {
        char game_name[20];
    public:
        void get();
        void display();
    };
    void Game::get(){
        cout<<"\nEnter player name =";
      cin>>player_name;
    cout<<"\nEnter age of player = ";
    cin>>age;
    cout<<"\nEnter gender = ";
    cin>>gender;
    cout<<"\nEnter height of player = ";
    cin>>height;
    cout<<"\nEnter weight of player = ";
    cin>>weight;
    cout<<"\nEnter state =  ";
    cin>>state;
    cout<<"\nEnter city =  ";
    cin>>city;
    cout<<"\nEnter game name = ";
    cin>>game_name;
}
void Game::display()
{
    cout<<"\n player name  =  "<<player_name;

    cout<<"\n age of player = "<<age;
    cout<<"\n gender = "<<gender;
    cout<<"\n height of player = "<<height;
    cout<<"\n weight of player = "<<weight;
    cout<<"\n state =  "<<state;
    cout<<"\n city =  "<<city;
    cout<<"\n game name = "<<game_name;

}
int main()
{
    int n,i;
    Game g[10];
    cout<<"\nEnter number of players =  ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        g[i].get();
    }
    for(i=0;i<n;i++)
    {
        g[i].display();
    }

}
