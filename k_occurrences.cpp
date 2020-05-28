// Function to find element with count more than n/k times
// arr: input array
int countOccurence(int arr[], int n, int k) {
    // Your code here
   
   unordered_map<int, int> hashMap(k);

   //iterate the arr to count the occurences of each element
   for(auto i=0; i<n; i++){
       //if the element is present in the hash inc the count
       if(hashMap.find(arr[i]) != hashMap.end()){
          hashMap[arr[i]] += 1;
       }
       else{
           hashMap.insert(make_pair(arr[i], 1));
       }
   }
   int expectedCount = n/k;
   int countElement = 0;
   //iterate over the hashMap to check which element is having the count greater than n/k
   
   auto it = hashMap.begin();
    while (it != hashMap.end())
	{
// 		std::cout << it->first << " :: " << it->second << std::endl;
        if(it->second > expectedCount) countElement++;
		it++;
	}
	
	return countElement;
}