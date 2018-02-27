/**
 * This program demonstrates the SerialNumber class.
 */
public class SerialNumberTester {
    public static void main(String[] args){
        String serial1 = "GHTRJ-8975-AQWR"; // Valid
        String serial2 = "GHT7J-8975-AQWR"; // Invalid
        String serial3 = "GHTRJ-8J75-AQWR"; // Invalid
        String serial4 = "GHTRJ-8975-AQ2R"; // Invalid

        // Validate each serial number.
        testIt(new SerialNumber(serial1));
        testIt(new SerialNumber(serial2));
        testIt(new SerialNumber(serial3));
        testIt(new SerialNumber(serial4));
    }

    /**
     * This method takes a SerialNumber object and reports
     * whether or not it is a valid serial number.
     * @param sn
     */
    private static void testIt(SerialNumber sn) {
        //TODO: Implement your code for this method here
        if (sn.isValid()) {
            System.out.println(sn + " is valid.");
        } else {
            System.out.println(sn + " is invalid.");
        }

    }
}
