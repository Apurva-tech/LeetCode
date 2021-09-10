class MyCalendar {
    unordered_map<int, int>bookings;
public:    
    bool book(int s1, int e1) {
        for(auto& [s2, e2] : bookings) 
            if( !(s1 >= e2 || s2 >= e1) )   // if neither of above condition is satisfied, there exists an intersection
			    return false; 
        bookings[s1] = e1;                 // no intersection found, so insert the new slot and return true
        return true;
    }
};