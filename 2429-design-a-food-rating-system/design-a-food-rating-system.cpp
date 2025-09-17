class FoodRatings {

   struct Food
   {
    string name;
    int rating;
    bool operator<(const Food &other) const
    {
        if(rating!=other.rating) return rating>other.rating;
        return name<other.name;
    }
   };
   unordered_map<string,pair<string,int>> foodInfo;
   unordered_map<string,set<Food>> cuisineFood;
   public:
    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        
        for(int i=0;i<foods.size();i++)
        {
        string food=foods[i];
        string cuisine=cuisines[i];
        int rating=ratings[i];
        foodInfo[food]={cuisine,rating};
        cuisineFood[cuisine].insert({food,rating});
        }
    }
    
    void changeRating(string food, int newRating) {
        auto [cuisine,oldRating]=foodInfo[food];
        cuisineFood[cuisine].erase({food,oldRating});
        cuisineFood[cuisine].insert({food,newRating});
        foodInfo[food]={cuisine,newRating};
    }
    
    string highestRated(string cuisine) {
        return cuisineFood[cuisine].begin()->name;
    }
};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */