#include <iostream>
using namespace std;


class Counter {
public:

    Counter()
        : m_counter(0){};

    Counter(const Counter&) = delete;
    Counter& operator=(const Counter&) = delete;


    ~Counter()
    {
    }

    void reset()
    {
        m_counter = 0;
    }

    unsigned int get()
    {
        return m_counter;
    }


    void operator++()
    {
        m_counter++;
    }

    void operator++(int)
    {
        m_counter++;
    }


    void operator--()
    {
        m_counter--;
    }
    void operator--(int)
    {
        m_counter--;
    }


    friend ostream& operator<<(ostream& os, const Counter& counter)
    {
        os << "Counter Value : "
           << counter.m_counter << endl;
    }

private:
    unsigned int m_counter{};
};


template <typename T>

class Shared_ptr {
public:

    explicit Shared_ptr(T* ptr = nullptr)
    {
        m_ptr = ptr;
        m_counter = new Counter();
        if (ptr) {
            (*m_counter)++;
        }
    }


    Shared_ptr(Shared_ptr<T>& sp)
    {
        m_ptr = sp.m_ptr;
        m_counter = sp.m_counter;
        (*m_counter)++;
    }


    unsigned int use_count()
    {
        return m_counter->get();
    }

m_counter
    T* get()
    {
        return m_ptr;
    }


    ~Shared_ptr()
    {
        (*m_counter)--;
        if (m_counter->get() == 0) {
            delete m_counter;
            delete m_ptr;
        }
    }

    friend ostream& operator<<(ostream& os, Shared_ptr<T>& sp)
    {
        os << "Address pointed : "
           << sp.get() << endl;
        cout << *(sp.m_counter) << endl;
    }

private:

    Counter* m_counter;


    T* m_ptr;
};

int main()
{
    int* p = new int;
    *p=10;
    Shared_ptr<int> obj(p);

    cout<<obj;



    return 0;
}
