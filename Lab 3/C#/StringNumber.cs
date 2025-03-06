using System;

namespace Artem
{
    public class StringNumber
    {
        private string value;

          ////////////////////
         //  Конструктори  //
        ////////////////////

        public StringNumber()
        {
            value = string.Empty;
        }
        
        public StringNumber(string val)
        {
            value = val;
        }

        public StringNumber(StringNumber other)
        {
            value = other.value;
        }

          //////////////
         //  Методи  //
        //////////////

        public int Length()
        {
            return value.Length;
        }       
        public string GetValue()
        {
            return value;
        }

          ////////////////////////
         //  Перенавантаження  //
        ////////////////////////

        public static StringNumber operator +(StringNumber sn1, StringNumber sn2)
        {
            return new StringNumber(sn1.value + sn2.value);
        }
        public static StringNumber operator -(StringNumber sn, char number)
        {
            string newValue = string.Empty;

            foreach (char c in sn.value)
            {
                if (c != number)
                {
                    newValue += c;
                }
            }

            return new StringNumber(newValue);
        }
    }
}
