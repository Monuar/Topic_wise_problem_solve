#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define endl "\n"
int main()
{
	IOS;
	list<int>li;
	li.push_back(1);
	li.push_back(2);
	li.push_back(3);
	li.push_back(4);
	li.push_front(0);
	li.push_front(10);
	li.push_front(9);
	for(auto it:li){
        cout<<it<<" ";
	}
	cout<<endl;
	cout<<li.front()<<endl;
	cout<<li.back()<<endl;
	cout<<li.size()<<endl;
	if(li.empty()) cout<<"empty"<<endl;
	else cout<<"not empty"<<endl;
	list<int>::iterator it,it1;
	it=li.begin();
	it1=li.begin();
	advance(it,3);
	advance(it1,5);
	li.erase(it,it1);
	li.insert(it,6);
	for(auto it:li){
        cout<<it<<" ";
	}
	cout<<endl;
	list<int>li1={1,2,3,4};
	list<int>li2={5,6,7,8,9,10,1};
	//li.remove(2);
	//li.sort();
	//li.reverse();
	//li.unique();//adjacent duplicate value will be deleted
	//li.swap(li1);
	li1.merge(li2);//two lists must be sorted
	for(auto it:li1){
        cout<<it<<" ";
	}
	cout<<endl;
	cout<<li2.size()<<endl;

}
