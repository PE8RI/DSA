#include <iostream>
using namespace std;

int main() {
    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = 6;

  int minprice=prices[0];
  int maxprofit=0;
  
  for(int i=1;i<n;i++){
  minprice=min(prices[i],minprice);
   int profit=prices[i]-minprice;
   maxprofit=max(maxprofit,profit);
  }

  cout<<maxprofit;
    return 0;
}
