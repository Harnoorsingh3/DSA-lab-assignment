#include <iostream>
using namespace std;
int n=0;
int arr[100];
 void create();
 void display();
 void delete1(int x);
 void insert(int x);
 void  ls();
 int aa=0;

int main() {
    
    int c;
    int bb=1;
    while(bb==1){
        cout<<"Which function you want to use:- "<<endl;
        cout<<"1.Create"<<endl;
        cout<<"2.Display"<<endl;
        cout<<"3.Insert"<<endl;
        cout<<"4.Delete"<<endl;
        cout<<"5.Linear Search"<<endl;
        cout<<"6.Exit"<<endl;
        
        cin>>c;
        
        switch(c){
            
            case 1:
            create();
            break;
            
            case 2:
            if(n==0){
                cout<<"Create an array first"<<endl;
        }
        else {
            display();
        }
        break;
        
        
        case 3:
        if(n==0){
                cout<<"Create an array first"<<endl;
        }
        
        else{
            cout<<"At which index do you want to insert:- "<<endl;
         int d;
        cin>>d;
        insert(d);
        }
       
        break;
        
        
        case 4:
        if(n==0){
                cout<<"Create an array first"<<endl;
        }
        else{
            cout<<"At which index do you want to delete:- "<<endl;
            int e;
            cin>>e;
            delete1(e);
            
            
            
        }
        break;
        
        case 5:
        if(n==0){
            cout<<"Create an array first:- "<<endl;
        }
        else{
            ls();
        }
        break;
        
        case 6:
        bb=0;
        
        break;
        
        
        default:
        cout<<"Enter a number between 1 and 6"<<endl;
        
        break;
        
    }

    
}return 0;}


void create(){
    
    cout<<"Enter the number of elements you want in the array: "<<endl;
    cin>>n;
    
    
    cout<<"Array created with "<<n<<" elements and defaukt initial elements as  0."<<endl;
}



void delete1(int x){
    if (x < 0 || x >= n) {
        cout << "Invalid index.\n";
        return;
    }
    for (int i=x;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
    cout << "Element at index " << x << " deleted.\n";
}

void display(){
    cout<<"Elements in the array are:- "<<endl;
    for (int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}

void shift(int x){
    
    aa++;
    if(aa>n){
    n++;}
    for(int i=n-1;i>x;i--){
        arr[i]=arr[i-1];
    }
    
    
    
}
void insert(int x){
    
    int a;
    cout<<"What value is to be inserted:- "<<endl;
    cin>>a;
    shift(x);
    arr[x]=a;
}

void ls(){
    cout<<"Which element do you want to find:- "<<endl;
    int a,b;
    b=-1;
    cin>>a;
    for(int i=0;i<n;i++){
        if(arr[i]==a){
            b=i;
            cout<<a<<" is at index "<<b<<endl;
        }
    }
    if (b==-1){
        cout<<"There is no "<<a<<" in the array";
    }
}
