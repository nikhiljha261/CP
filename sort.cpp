int twoCitySchedCost(vector<vector<int>>& costs) {
        
        auto cmp = [](const vector<int>&l, const vector<int>& r){
            return abs(l[0] - l[1]) > abs(r[0] - r[1]);
        };
        
        sort(costs.begin(), costs.end(), cmp);
        
        int n = costs.size();
        
        int minCost = 0;
        
        int countA = 0;
        int countB = 0;
        
        for(int i = 0; i < n; i++)
        {
            if(countA >= n /2){
                minCost += costs[i][1];
                countB += 1;
            }
            else if(countB >= n /2){
                minCost += costs[i][0];
                countA += 1;
            }
            else if(costs[i][0] <= costs[i][1]){
                minCost += costs[i][0];
                countA += 1;
            }
            else{
                minCost += costs[i][1];
                countB += 1;
            }
        }
        
        return minCost;
    }
