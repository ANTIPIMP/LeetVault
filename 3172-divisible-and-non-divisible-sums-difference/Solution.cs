public class Solution {
    public int DifferenceOfSums(int n, int m) {
        int number=n/m;

        return (n*(n+1)/2)-number*(m*(1+number));  //vedant
    }
}