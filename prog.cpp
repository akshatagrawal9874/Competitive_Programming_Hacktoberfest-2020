 //A retailer is having a store-wide "buy 3, get 1 free" sale. For legal reasons, they can't charge their customers $0 for an article so a discount is applied to all products instead. For example, if a customer gets three products a, b and c: Product A Product B Product C $15.99 $23.50 $10.75 She gets the cheapest one for free, so she ends up paying $15.99 + $23.50 = $39.49, but what her receipt says is: Product A: $15.99 − Special Discount = $12.57 Product B: $23.50 − Special Discount = $18.47 Product C: $10.75 − Special Discount = $8.45 Total: $39.49 Create a function that takes in a list of prices for a customer's shopping cart and returns the prices with the discount applied. Round all prices to the cent.
#include<bits/stdc++.h>
using namespace std;
float y[50];
float* bill(float a[], int n){
	
	float temp = a[0];
	for(int i=0; i<n; i++) {
      if(temp>a[i]) {
         temp=a[i];
      }
   }
	float cheapest = temp;
	
	float sum=0;
	for(int i=0; i<n;i++){
		sum+=a[i];
	}
	
	for(int i=0;i<n;i++){
		y[i]=(a[i]/sum)*cheapest;
		y[i]=a[i]-y[i];
	}
	return y;
}

int main()
{
	float a[50];
	int n;
	cout<<"Enter the number of items:";
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	float* y =bill(a,n);
	cout<<"The net price of items are:"<<endl;
	for(int i=0;i<n;i++){
		cout<<round(y[i])<<endl;
	}
	
	return 0;
}