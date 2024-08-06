# include <iostream>
using namespace std;
int main(){
	int i, low, high, mid, n, key, arr[100];
	cout << "Enter size of array: ";
	cin >> n;
	cout << "Enter array elements: ";
	for(i=0;i<n;i++){
		
		cin >> arr[i];
	}
	cout << "Enter search element: ";
	cin >> key;
	low = 0;
	high = n-1;
	mid = (low+high)/2;
	while (low <= high)
    {
        if(arr[mid] < key){
        	    low = mid + 1;
		}
        else if (arr[mid] == key) {
            cout << key << " found at location " << mid << ".\n";
            break;
        }
        else
            high = mid - 1;
        
        mid = (low + high) / 2;
    }
    
    if(low > high)
        cout << "Not found! " << key << " isn't present in the list.\n";
    
    return 0;	
}
