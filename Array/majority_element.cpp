int majorityElement(vector<int> v) {
	int vote = 0, currentEle = v[0];
	for(int i=0; i<v.size(); i++) {
		if(!vote) {
			vote = 1;
			currentEle = v[i];
		} else {
			if(currentEle == v[i])
				vote++;
			else 
				vote--;
		}
	}
	return currentEle;
}