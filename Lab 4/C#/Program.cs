using System;

namespace Artem
{
    public class StringBegin
    {
        private string _str;

        public StringBegin(string value_ = "")
        {
            _str = value_;
        }

        public int GetLength()
        {
            return _str.Length;
        }
        public string GetValue()
        {
            return _str;
        }
        protected void SetValue(string value_)
        {
            _str = value_;
        }
    }

}
