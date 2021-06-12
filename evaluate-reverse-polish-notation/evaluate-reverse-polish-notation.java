class Solution {
    
    public boolean isOperator (String token) {
        
        return token.equals ("/") || token.equals ("*") || token.equals ("+") || token.equals ("-");
    }
    
    public int calculate (int a, int b, String token) {
        
        if (token.equals ("/")) {
            return a / b;
        }
        else if (token.equals ("*")) {
            return a * b;
        }
        else if (token.equals ("+")) {
            return a + b;
        }
        else {
            return a - b;
        }
    }
    
    public int evalRPN(String[] tokens) {
        
        Stack<Integer> stack  = new Stack<> ();
        
        for (String token : tokens) {
            if (isOperator (token)) {
                int b = stack.pop ();
                int a = stack.pop ();
                int val = calculate (a, b, token);
                stack.push (val);
            }
            else {
                stack.push (Integer.valueOf (token));
            }
        }
        
        return stack.pop ();
    }
}