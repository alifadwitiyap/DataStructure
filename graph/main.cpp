#include "graph.cpp"

int main(){
    insertParent(1);
    insertParent(2);
    Connect(1,2);
    insertParent(3);
    Connect(1,3);
    insertParent(4);
    Connect(1,4);
    insertParent(5);
    Connect(3,5);
    insertParent(6);
    Connect(4,6);
    view();

    cout<<"DFS :";DeepFirstSearch();
    cout<<endl;
    cout<<"BFS :";BreadhFirstSearch();

}