public class belajar {
    public static void main(String[] args) {
        // Main Program
        int num; // Variabel
        num = 5; // Assign nilai ke variabel t
        int[] arr = {1, 2, 3, 4, 5}; // Array satu dimensi

        for (int i = 0; i < num; i++) { // For loop
            if (arr[i] % 2 == 0) { // If statement
                System.out.println(arr[i] + " adalah angka genap."); // Output
            }
            else {
                System.out.println(arr[i] + " adalah angka ganjil.");
            }
        }

        int[][] twoDimArray = {{1, 2, 3}, {4, 5, 6}}; // Array multidimensi

        int j = 0;
        while (j < 2) { // While loop
            int k = 0;
            do { // Do-while loop
                System.out.print(twoDimArray[j][k] + " ");
                k++;
            } while (k < 3);
            System.out.println();
            j++;
        }
    }
}
