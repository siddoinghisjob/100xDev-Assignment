import java.util.HashMap;

class Solution {
    public int findGoodPairs(String a, String b) {
        HashMap<String, Integer> hashmap = new HashMap<>();
        int ans = 1;

        for (int i = 0; i < a.length(); i++) {
            StringBuilder tmp = new StringBuilder();
            for (int j = i; j < a.length(); j++) {
                tmp.append(a.charAt(j));
                String key = tmp.toString();
                hashmap.put(key, hashmap.getOrDefault(key, 0) + 1);
            }
        }

        for (int i = 0; i < b.length(); i++) {
            StringBuilder tmp = new StringBuilder();
            for (int j = i; j < b.length(); j++) {
                tmp.append(b.charAt(j));
                String key = tmp.toString();
                ans += hashmap.getOrDefault(key, 0);
            }
        }

        return ans;
    }
}

public class q1{
    public static void main(String args[]){
        Solution sol = new Solution();
        String a = "abc", b = "abce";
        int ans = sol.findGoodPairs(a,b);
        System.out.println(ans);
    }
}