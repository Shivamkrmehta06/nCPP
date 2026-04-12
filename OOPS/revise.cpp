#include <iostream>
using namespace std;

/* 
🤯 Then why not 105? Why 108?
Because of padding at the end (structure alignment)
👉 The compiler ensures the total size of object is a multiple of the largest data type alignment
Largest here = int (4 bytes)
👉 So total size must be multiple of 4
Current size = 105
Next multiple of 4 = 108
👉 So compiler adds 3 bytes padding at the end
*/

class Hero{
    public:
    char name[100];
    int health;
    private:
    char level;
    public:
    void setLev(int data){
        //this basically current object ka address hold karta hai
        this->level=data;
        cout<<this<<endl;
    }
    void lev(){
        cout<<level<<endl;
    }

};


/* 
The size of empty class will be 1 byte because to keep the track or for the identification purpose.
 */
class Empty{
    //there is nothing
};


int main() {
    // Hero h1;
    // cout<<sizeof(h1)<<endl;
    // Empty e1;
    // cout<<sizeof(e1)<<endl;
    
    Hero h1;
    h1.health = 90;
    cout<<h1.health<<endl; 
    h1.setLev(65);
    cout<<&h1<<endl;
    h1.lev();
    return 0;
}
