#include"numop.h"
#include<cmath>
#include<vector>

using namespace std;

template<typename t>
int number_of_digits(t a){
    int no_of_digits = 0;
    while(a/10!=0){
        no_of_digits++;
        a = a/10;
    }
    no_of_digits++;
    return no_of_digits;
}

template<typename t>
int ifpallin(t a){
    a = fabs(a);
    vector<int> v;
    vector<int>::iterator it;
    it=v.begin();
    while(a>9){
        it = v.begin();
        v.insert(it,(a%10));
        a/=10;
    }
    it=v.begin();
    v.insert(it,a);
    int c=0;
    int l = (v.size()-1)/2;
    for(int i=0,j= (v.size()-1);i<l;i++,j--){
        if(v[i]==v[j]){
            c=1;
        }
        else {c=0;
        break;
        }
    }
return c;
}

template<typename t>
vector<int> dig(t a){
    vector<int> v;
    vector<int>::iterator it;
    it = v.begin();

    while(a>9){
        v.insert(it,(a%10));
        it = v.begin();
        a = a/10;
    }
    it=v.begin();
    v.insert(it,a);

    return v;
}

template<typename t>
vector<int> digrev(t a){
    vector<int> v;
    while(a>9){
        v.push_back(a%10);
        a = a/10;
    }
    v.push_back(a);

    return v;
}

template<typename t>
int maxdigit(t a){
    int max=0;
    while(a>9){
        if(max<(a%10)){
            max = a%10;
        }
        a = a/10;
    }
    if(max<a){
        max = a;
    }
return max;
}

template<typename t>
int mindig(t a){
    int min=9,rem;
    while(a>9){
        rem = a%10;
        if(min>rem){
            min = rem;}
        a=a/10;
    }
    if(min>a){
        min = a;}
    return min;
}

template<typename t>
vector<int> bincal(t a){
    vector<int> v;
    vector<int>::iterator it;
    it=v.begin();
    while(a>1){
        int t;
        t = a%2;
        v.insert(it,t);
        it=v.begin();
        a=a/2;}
    it=v.begin();
    v.insert(it,a);
    return v;
}

template<typename t>
int oddeven(t a){
    if(a&1){
        return 1;
    }else return 0;
}

template<typename t>
int prime_check(t a){
    int root = sqrt((a));
   while(root>1){
       if(a%root==0){
        return 0;}
        root--;
   }
    return 1;
}
