import java.util.*;

public class contains_duplicate {

  public static int duplicateCheck(int[] nums) {
    int n=nums.length;
    HashSet<Integer>freq=new HashSet<>();
    for(int i=0;i<n;i++) {
      freq.add(nums[i]);
    }
    if(freq.size() == n) {
      return 0;
    }
    else {
      return 1;
    }
  }

  public static void main(String[] args) {
    int[] arr={1,3,4,5,1};
    int result=duplicateCheck(arr);
    if(result == 1) {
      System.out.print("This array contains duplicate");
    }
    else {
      System.out.print("This array doesn't have any duplicate");
    }
  }
}