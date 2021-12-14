template <typename T>

class store
{
public:
    store<T> :: store(const T& item) : value(item)
    {
        // initialize value woth item or default object of thype t


        T  store <T> :: getValue() const;
        // retirve and return data vaue to the item

        void setValue(const T &item){
            value = item ;
        }
        // update the data member to the item

        friend ostream &operator<<(ostream &ostr, const store<T>& obj){
            ostr << " Value = " <<obj.getValue;
            return ostr ;
        }
        // display itrem in the form "Value "= value

    private:
        T value;
        

        

        //    data soteed by the object
    }
} ;