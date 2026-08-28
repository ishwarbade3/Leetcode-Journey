public class Solution {
    public string TrafficSignal(int t) {
        if(t==0)
        return "Green";
        else if(t==30)
        return "Orange";
        else if(t >= 30 && t <= 90)
        return "Red";
        else
        return "Invalid";
    }
}