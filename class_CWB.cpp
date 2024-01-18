#include<iostream>
using namespace std;
class yc
{
    public:
    string name;
    string owner_name;
    int count;
    public:
    void read(void);
    void oread(void);
    void cread(void);
  //  void display(void);

};
void yc :: read(void)
{
    cout<<"enter name"<<endl;
    cin>>name;
    cout<<"adress is "<<&name<<endl;
}
void yc :: oread(void)
{
    cout<<"enter owner name"<<endl;
    cin>>owner_name;
}
void yc::cread(void)
{
    cout<<"no.of users"<<endl;
    cin>>count;
}


int main()
{
    // youtubechannel ytchannel;
    // ytchannel.name = "anurag";
    // ytchannel.owner_name = "anurag";
    // ytchannel.count = 777;
    // cout<<"name :"<<ytchannel.name<<endl;
    // cout<<"owner_name"<<ytchannel.owner_name<<endl;
    // cout<<"count "<<ytchannel.count<<endl;
    yc beauty;
    beauty.read();
    beauty.oread();
    beauty.cread();
    cout<<beauty.name<<"," <<beauty.owner_name<<","<<beauty.count<<","<<endl;

}