    int maxProfit(vector<int>& pri) {
        
        int b=0;
        int s=1;
        int maxi=0;
        while(s<pri.size()){
            if(pri[b]<pri[s]){
                maxi=max(maxi,(pri[s]-pri[b]));
                s++;
            }
            else{
                b=s;
                s++;
            }
        }
        return maxi;
    }