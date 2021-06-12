class Solution {
    public int evalRPN(String[] tokens) {
        Stack<String> stack = new Stack<String>();
        String operations = "+-*/"; 
        Integer ans = 0; 
        for(String t : tokens){
            
            if(operations.contains(t)) {
                
                int n2 = Integer.valueOf(stack.pop());
                int n1 = Integer.valueOf(stack.pop()); 
                
                switch(t){
                case "+":
                    ans = n1+n2; 
                    break; 
                case "-":
                    ans = n1-n2;
                    break; 
                case "*":
                    ans = n1*n2;
                    break; 
                case "/":
                    ans = n1/n2;
                    break;
                default: 
                    break; 
            }
            stack.push(Integer.toString(ans)); 
            }
            else{
            stack.push(t); 
        }
        }
        ans = Integer.valueOf(stack.pop());
        return ans; 
    }
}