using System;

namespace StringExample
{
    public class StringHandler
    {
        private string str;
        public StringHandler(string inputStr) 
        {
            str = inputStr;
        }
        
        public string String() 
        {
            return str;
        }
        public int Length()
        {
            return str.Length;
        }
        public string ReverseString() 
        {
            char[] arr = str.ToCharArray();
            Array.Reverse(arr);
            return new string(arr);
        }
    }
}
