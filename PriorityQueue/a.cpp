#include<bits/stdc++.h>
using namespace std;

struct item{
	string data;
	int priority;
};

item pq[100000];
int sz = -1;


void enqueue(string str, int pr){
	sz++;
	pq[sz].data = str;
	pq[sz].priority = pr;
}

int top(){
	int hP = pq[0].priority;
	int hInd = 0;

	for(int i =0; i<=sz;i++){
		if(pq[i].priority > hP){
			hP = pq[i].priority;
			hInd = i;
		}else if(pq[i].priority == hP){
			if(pq[i].data > pq[hInd].data){
				hP = pq[i].priority;
				hInd = i;
			}
		}
	}
	return hInd;
}


void dequeue(){
	int ind = top();
	for(int i =ind;i<sz;i++){
		pq[i] = pq[i+1];
	}
	sz--;
}
int main(){
	
}
