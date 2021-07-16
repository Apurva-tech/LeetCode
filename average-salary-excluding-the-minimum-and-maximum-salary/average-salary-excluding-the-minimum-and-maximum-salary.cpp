class Solution {
public:
    double average(vector<int>& arr) {
        int min, max; 
        if(arr.size() == 1) return arr[0]; 
        
        
        if(arr[0] > arr[1]){
            max = arr[0]; 
            min = arr[1]; 
        }
        else{
            max = arr[1]; 
            min = arr[0]; 
        }
        for(int i = 2; i < arr.size(); i++){
            if(arr[i] > max) max = arr[i]; 
            else if(arr[i] < min) min = arr[i]; 
        }
        
        double avg = 0; 
        
        for(int i = 0; i < arr.size(); i++){
            avg += arr[i]; 
        }
        
        cout << max << " " << min << " " << avg; 
        
        avg = avg - min - max; 
        
        cout << max << " " << min << " " << avg; 
        avg = avg/(arr.size() - 2); 
        cout << max << " " << min << " " << avg; 
        return avg; 
        
    }
};