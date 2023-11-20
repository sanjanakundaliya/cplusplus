#include <iostream>
using namespace std;
int MAX=1000;
vector<int> least_prime(MAX+1,0);
void printPf(int n)
{
    for (int i = 2; i * i <= n; i++)
    {

        while ((n % i) == 0)
        {
            cout << i << " ";
            n = n / i;
        }
    }
    if(n>1)cout<<n<<" ";
}
void smallestPrimeSeive(int n){
    cout<<1<<" ";
    for(int i=2;i<=n;i++){
        if(least_prime[i]==0){
            cout<<i<<" ";
            for(int j=i*i;j<=n;j+=i){
                if(j%i==0){
                    least_prime[j]=i;
                }
            }

        }else{
           cout<< least_prime[i]<<" ";
        }
    }
}
void queries(){
    int t;
    cout<<"enter the number of test cases";
    cin>>t;
    while(t-->0){
        int x;
        cout<<"enter the number to find prime factors ";
        cin>>x;
        while(x>1){
            cout<<least_prime[x]<<" ";
            x=x/least_prime[x];
        }
    }
}
int main()
{
    int n;
    cout << "enter the number ";
    cin >> n;
    printPf(n);
    smallestPrimeSeive(n);
    queries();
}
