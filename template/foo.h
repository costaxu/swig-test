//file: foo.h

template<class Type>
class Queue{
    public:
    Type& Remove()
    {
        printf("Get a Type\n");
        Type a;
        return a;
    }
    void  Add(const Type&)
    {
        printf("Add a type\n");
    }
};

