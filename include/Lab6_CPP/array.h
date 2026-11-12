#include<vector>

template <typename T> 
class Array{
    private:
        std::vector<T> values;

        bool contains(const T& value) const{
            return std::find(values.begin(), values.end(), value) != values.end();
        }
    public:
        Array() = default;
        Array(const T& value) const{
            values.push_back(value);
        }

        Array(const std::vector<T>& initalValues){
            for (const auto& item : initalValues){
                append(item);
            }
        }

        ~Array()=default;

        T union(T[] value1, T[] value2);
        T intersection(T[] value1, T[] value2);
        T difference(T[] value1, T[] value2);
        T compraison(T[] value1, T[] value2);
        
};  