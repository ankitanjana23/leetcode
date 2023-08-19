class UnionFind {
public: 
    vector<int> parent; 
    UnionFind(int n){
        parent.resize(n);
        for(int i=0;i<n;i++)
            parent[i] = i; 
    }
    
    int findParent(int p) {
        return parent[p] == p ? p : parent[p] = findParent(parent[p]); 
    }
    
    void Union(int u , int v) {
        int pu = findParent(u) , pv = findParent(v); 
        parent[pu] = pv;
    }    
};

class Solution {
public:    
    static bool cmp(vector<int>&a , vector<int>&b) {
        return a[2] < b[2]; 
    }
    
    vector<vector<int>> findCriticalAndPseudoCriticalEdges(int n, vector<vector<int>>& arr) {
        vector<int> v1 ,  v2 ;
        //1
        for(int i=0;i<arr.size();i++)
            arr[i].push_back(i); 
        
        //2 
        sort(arr.begin() , arr.end() , cmp) ;
        
        int mstwt = findMST(n,arr,-1,-1); //3
        for(int i=0;i<arr.size();i++){
            if(mstwt< findMST(n,arr,i,-1)) //5
                v1.push_back(arr[i][3]); 
            else if(mstwt == findMST(n,arr,-1,i))  //6
                v2.push_back(arr[i][3]);
        }
        return {v1 , v2};         
    }
    
private:
    int findMST(int &n ,  vector<vector<int>>& arr , int block , int e) {
        UnionFind uf(n); 
        int weight = 0 ;
        if(e != -1) {
            weight += arr[e][2]; 
            uf.Union(arr[e][0] , arr[e][1]); 
        }
        
        for(int i=0;i<arr.size();i++){
            if(i == block) 
                continue; 
            if(uf.findParent(arr[i][0]) == uf.findParent(arr[i][1])) //4
                continue; 
            uf.Union(arr[i][0] , arr[i][1]); 
            weight += arr[i][2]; 
        }
        
        //Check if all vertices are included then only it is MST. 
        for(int i=0;i<n;i++){
            if(uf.findParent(i) != uf.findParent(0))
                return INT_MAX;
        }    
        
        return weight; 
    }
    
};