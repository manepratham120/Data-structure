public class Insertion {

    public static int[] convertToJava(int[] arr) {
        int resM = 0;
        int resm = 0;
        int n = arr.length;
        int[] res = new int[2];

        for (int i = 0; i < n - 1; i++) {
            resm += arr[i];
        }
        for (int j = 1; j < n; j++) {
            resM += arr[j];
        }

        res[0] = resm;
        res[1] = resM;

        return res;
    }

    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 4, 5};
        int[] result = convertToJava(arr);

        System.out.println(result[0]);
        System.out.println(result[1]);
    }
}

