import java.util.HashMap;
import java.util.List;
import java.util.Collections;

class Solution {
    public int beautifulNumber(List<Integer> vec) {
        if (vec.size() < 2)
            return -1;

        int mn = Collections.min(vec);
        if (mn == 1)
            return 1;

        HashMap<Integer, Integer> hashmap = new HashMap<>();
        for (int num : vec) {
            while ((num & 1) == 0) {
                hashmap.put(2, hashmap.getOrDefault(2, 0) + 1);
                num >>= 1;
            }

            for (int i = 3; i * i <= num; i += 2) {
                while (num % i == 0) {
                    hashmap.put(i, hashmap.getOrDefault(i, 0) + 1);
                    num /= i;
                }
            }

            if (num > 2) {
                hashmap.put(num, hashmap.getOrDefault(num, 0) + 1);
            }
        }

        int ans = Integer.MAX_VALUE;
        for (int num : vec) {
            int originalNum = num;
            int count = 0;
            while ((num & 1) == 0) {
                count++;
                num >>= 1;
            }

            if (count > 0 && hashmap.get(2) > count) {
                continue;
            }

            boolean flg = false;
            for (int i = 3; i * i <= num; i += 2) {
                count = 0;
                while (num % i == 0) {
                    count++;
                    num /= i;
                }

                if (count > 0 && hashmap.get(i) > count) {
                    flg = true;
                    break;
                }
            }
            if (flg) {
                continue;
            }

            if (num > 2 && hashmap.get(num) > 1) {
                continue;
            }

            ans = Math.min(ans, originalNum);
        }

        return ans == Integer.MAX_VALUE ? -1 : ans;
    }
}

public class q2{
    public static void main(String args[]){
        Solution sol = new Solution();
        List<Integer> l = List.of(1);
        int ans = sol.beautifulNumber(l);
        System.out.println(ans);
    }
}