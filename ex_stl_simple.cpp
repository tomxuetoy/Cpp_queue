#include <iostream>
#include <queue>
using namespace std; 
 
int main()
{
    queue<int> Q;
    Q.push( 1 );
    Q.push( 2 );
    Q.push( 3 );
    cout << Q.front() << endl;
    Q.pop();
    cout << Q.front() << endl;
    Q.pop();
    cout << Q.front() << endl;
    Q.pop(); 
 
    return 0;
}
/* 
$ a.exe
1
2
3
 
 * */
