#include"numop.h"
#include<cmath>
#include<vector>

using namespace std;

int number_of_digits(int a){
    int no_of_digits = 0;
    while(a/10!=0){
        no_of_digits++;
        a = a/10;
    }
    no_of_digits++;
    return no_of_digits;
}

int number_of_digits(long a){
    int no_of_digits = 0;
    while(a/10!=0){
        no_of_digits++;
        a = a/10;
    }
    no_of_digits++;
    return no_of_digits;
}

int number_of_digits(long long a){
    int no_of_digits = 0;
    while(a/10!=0){
        no_of_digits++;
        a = a/10;
    }
    no_of_digits++;
    return no_of_digits;
}

int ifpallin(int a){
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

int ifpallin(long a){
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

int ifpallin(long long a){
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

vector<int> dig(int a){
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

vector<int> dig(long a){
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

vector<int> dig(long long a){
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

vector<int> digrev(int a){
    vector<int> v;
    while(a>9){
        v.push_back(a%10);
        a = a/10;
    }
    v.push_back(a);

    return v;
}

vector<int> digrev(long a){
    vector<int> v;
    while(a>9){
        v.push_back(a%10);
        a = a/10;
    }
    v.push_back(a);

    return v;
}

vector<int> digrev(long long a){
    vector<int> v;
    while(a>9){
        v.push_back(a%10);
        a = a/10;
    }
    v.push_back(a);

    return v;
}

int maxdigit(int a){
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

int maxdigit(long a){
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

int maxdigit(long long a){
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

int mindig(int a){
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

int mindig(long a){
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

int mindig(long long a){
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

vector<int> bincal(int a){
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

vector<int> bincal(long a){
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

vector<int> bincal(long long a){
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

int oddeven(int a){
    if(a&1){
        return 1;
    }else return 0;
}

int oddeven(long a){
    if(a&1){
        return 1;
    }else return 0;
}

int oddeven(long long a){
    if(a&1){
        return 1;
    }else return 0;
}

int prime_check(int a){
    int root = sqrt((a));
   while(root>1){
       if(a%root==0){
        return 0;}
        root--;
   }
    return 1;
}

int prime_check(long a){
    int root = sqrt((a));
   while(root>1){
       if(a%root==0){
        return 0;}
        root--;
   }
    return 1;
}

int prime_check(long long a){
    int root = sqrt((a));
   while(root>1){
       if(a%root==0){
        return 0;}
        root--;
   }
    return 1;
}