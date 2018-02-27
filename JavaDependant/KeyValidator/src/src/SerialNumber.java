import java.util.StringTokenizer;

/**
 * The SerialNumber class takes a software serial number in
 * the form of LLLLL-DDDD-LLLL where each L is a letter and
 * each D is a digit. The serial number has three groups of
 * characters, separated by hyphens. The class extracts the
 * three groups of characters and validates them.
 */

public class SerialNumber {
    // Declare class member variables/fields here. Refer
    // to the UML diagram provided in the project PDF
    private String first = "";
    private String second = "";
    private String third = "";
    private boolean valid = false;




    /**
     * The constructor breaks a serial number into three
     * groups and each group is validated.
     * @param sn A serial number.
     */
    public SerialNumber(String sn) {
        //TODO: fully implement the constructor as described
        //use a "StringTokenizer" - which breaks the string into 3 seperations.

        StringTokenizer tokenize = new StringTokenizer(sn.trim(), "-");

        if (tokenize.countTokens() != 3) {
            valid = false;
        } else {
            first = tokenize.nextToken();
            second = tokenize.nextToken();
            third = tokenize.nextToken();
        }

    }


    /**
     * The isValid method returns a boolean value indicating
     * whether the serial number is valid.
     *
     * @return true if the serial number is valid, false if not.
     */
    public boolean isValid()
    {
        //TODO: replace this return statement with what's required
        return valid;
    }


    /**
     * The validate method sets the valid field to true if the serial
     * number is valid. Otherwise it sets valid to false. HINT: this
     * method will be used in the constructor
     */
    private void validate() {
        //TODO: fully implement this method as described

        if (isFirstGroupValid() && isSecondGroupValid() && isThirdGroupValid()) {
            valid = true;
        } else {
            valid = false;
        }
    }


    /**
     * The isFirstGroupValid method validates the first group of
     * characters.
     *
     * @return true if the group is valid, false if not.
     */
    private boolean isFirstGroupValid() {
        //TODO: replace this return statement with what's required
        //Group one must be 5 chars, all letters. Test length and letters. If neither test set to false.

        boolean validGroup = true;
        int i = 0;

        if (first.length() !=5) {
            validGroup = false;
        } while (validGroup && i < first.length()) {
            if (!Character.isLetter(first.charAt(i))) {
                validGroup = false;
                i++;
            }
        }

        return validGroup;
    }


    /**
      * The isSecondGroupValid method validates the second group of
      * characters.
      *
      * @return true if the group is valid, false if not.
      */
     private boolean isSecondGroupValid() {
         //TODO: replace this return statement with what's required
         //Second group must be 4 numbers. Check frist for chars, then for digits.

         boolean validGroup = true;
         int i = 0;

         if (second.length() !=4) {
             validGroup = false;
         } while (validGroup && i < second.length()) {
             if (!Character.isDigit(second.charAt(i))) {
                 validGroup = false;
                 i++;
             }
         }

         return validGroup;
     }


	/**
	  * The isThirdGroupValid method validates the third group of
	  * characters.
	  *
	  * @return true if the group is valid, false if not.
	  */
	 private boolean isThirdGroupValid() {
	     //TODO: replace this return statement with what's required
         //Group 3 must be 4 Letters. First check size then character type.

         boolean validGroup = true;
         int i = 0;

         if (third.length() !=4) {
             validGroup = false;
         } while (validGroup && i < third.length()) {
             if (!Character.isLetter(third.charAt(i))) {
                 validGroup = false;
                 i++;
             }
         }

         return validGroup;
	 }


}
