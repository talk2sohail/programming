// Complete the minimumBribes function below.
void minimumBribes(vector<int> q) {
    int ans = 0;
    for(int i=q.size() -1 ; i >=0; i--){

        //check if the person has gone beyound his position
        if( q[i] - (i+1) > 2){
            cout<<"Too chaotic"<<endl;
            return;
        }
            
        
        // now check fot each person not in its actual postion
        // how many other person has overtaken him by bribing
        for(int j=max(0, q[i] - 2); j<i; j++){
                if(q[j] > q[i]) ans++;
        }
    }

    cout<<ans<<endl;
}
