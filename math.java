public class math {

    static Boolean isPrime(int num) {
        if(num <= 1) {
            return false;
        } else{
            for(int i = 2; i < num-1; i++) {
                if(num % i == 0) {
                    System.out.println(i);
                    return false;
                }
            }
        }
        
        return true;
    }
    public static void main(String[] args) {
        System.out.println(isPrime(23));
    }
}