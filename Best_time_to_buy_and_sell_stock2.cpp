 int maxProfit(vector<int>& pr) {
        int m=0;
        for(int l=1;l<pr.size();l++){
            if(pr[l]>pr[l-1]){
                m+=pr[l]-pr[l-1];
            }
        }
        return m;
    }
