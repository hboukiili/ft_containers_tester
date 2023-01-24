// #include "./vector/vector.hpp"
// // #include "iterator.hpp"
// // #include "iterator_traits.hpp"

struct hamza
{
    int s;
    hamza(int x) : s(x){}
};

// // int main()
// // {
// //     // ft::vector<int> second (4, 100);                  // four ints with value 100
// //     // std::cout << second.size() << std::endl;
// //     // std::cout << second.max_size() << std::endl;
// //     // second.resize(10, 0);
// //     // std::cout << second.size() << std::endl;
// //     // second.reserve(20);
// //     // std::cout << second.size() << std::endl;
// //     // std::cout << second.capacity() << std::endl;
// //     // std::cout << second.max_size() << std::endl;
// //     ft::vector<int> a;
// //     // ft::vector<int> j;
// //     // ft::vector<int>::iterator it0;
// //     // ft::vector<hamza> t;
// //     // t.push_back(hamza(100));
// //     // a.reserve(30);
// //     a.push_back(10);
// //     a.push_back(15);
// //     // a.push_back(1);
// //     // a.push_back(2);
// //     // a.push_back(3);
// //     a.resize(5, 99);
// //     // a.push_back(4);
// //     // a.push_back(4);
// //     // a.pop_back();
// //     // a.pop_back();
// //     ft::vector<int>::iterator it = a.begin();
// //     // it = a.erase(it, it + 2);
// //     // a.reserve(20);
// //     // a.insert(a.begin(), 5, 0);
// //     // it-=2;
// //     // std::cout << *it << std::endl;
// //     // it = a.begin();
// //     // j.reserve(30);
// //     // j.push_back(10);
// //     // j.push_back(15);
// //     // j.push_back(20);
// //     // j.push_back(24);
// //     // j.push_back(25);
// //     // j.insert()
// //     // if (j <= a)
// //     //     std::cout << 'a' << std::endl;
// //     // a.resize(30, 3);
// //     // std::cout << *it << std::endl;
// //     // it++;
// //     // std::cout << *it << std::endl;
// //     // s.assign(a.begin(), a.end());
// //     // it = a.begin();
// //     // it = a.begin();
// //     // it0 = it;
// //     // std ::cout << a.front() << std::endl;
// //     // it0 = s.begin();
// //     // ft::vector<int> lol;
// //     // lol.assign(5, 10);
// //     // it--;
// //     // std::cout << *it << std::endl;
// //     it = a.begin();
// //     while (it != a.end())
// //     {
// //         // if (it == a.begin())
// //         // {
// //         //     std::cout << "a" << std::endl;
// //         //     break ;
// //         // }
// //         // if (*it == 24)
// //         //     break ;
// //         std::cout << "dyeli " <<  *it << std::endl;
// //         it++;
// //     }
// //     std::cout <<  a.capacity() << "  " << a.size() << std::endl;
// //     // int a = 75;
// //     // a.push_back(12);
// //     // ft::vector<int>::iterator it;
// //     // it = a.begin();
// //     // a.push_back(2);
// //     // a.push_back(3);
// //     // a.push_back(4);
// //     // std::cout << *it++ << std::endl;
// //     // std::cout << *it << std::endl;
// //     // a.push_back(45);
// //     // a.push_back(45);
// //     // a.push_back(45);
// //     // a.push_back(45);
// //     // a.push_back(45);
// //     // a.pop_back();
// //     // a.pop_back();
// //     // ft::vector<int>::iterator it = a.begin();
// //     // *it = a;
// //     // it = a.begin();
// //     // ft::vector<int>::iterator it;
// //     //  = a.begin();
// //     // it = a.begin();
// //     // std::cout << "--" << *it++ << std::endl;
// //     // std::cout << "begin dyeli " << *it << " ";
// //     // it = a.end();
// //     // std::cout << "end dyeli "<< *it << " " << "catapacity " << a.capacity() << " size " << a.size() << std::endl;
// //     std::vector<int> b;
// //     // b.reserve(30);
// //     b.push_back(1);
// //     b.push_back(4);
// //     // b.push_back(3);
// //     // b.push_back(4);
// //     // b.push_back(4);
// //     // b.push_back(90);
// //     // b.push_back(4);
// //     // b.push_back(90);
// //     b.resize(5, 10);
// //     // std::vector<int>::iterator it4 = b.begin();
// //     // it4 = b.erase(it4, it4 + 2);
// //     // b.insert(b.begin(), 5, 0);
// //     // b.pop_back();
// //     // b.pop_back();
// //     // b.assign();
// //     std::vector<int>::iterator it4;
// //     // b.insert(it4, 3);
// //     // it4--;
// //     std::cout << "dyelhume " << b.capacity() << "  " << b.size() << std::endl;
// //     // it4++;
// //     // std::cout <<  *it4 << std::endl;
// //     // b.insert(it4, 1);
// //     // it4 = b.begin();
// //     it4 = b.begin();
// //     while(it4 != b.end())
// //     {
// //         std::cout << "--" << *it4 << std::endl;
// //         it4++;
// //     }
// //     // std::cout << b.capacity() << "   "  << b.size() << std::endl;
// //     // std::vector<hamza> w;
// //     // w.push_back(hamza(42));
// //     // std::vector<hamza>::iterator p = w.begin();
// //     // std::cout << p->s << std::endl;
// //     // b.push_back(5);

// //     // std::vector<int>::iterator it2 = b.begin();
// //     // std::vector<int>::iterator it3 = b.begin() + 1;
// //     // *it2 = a;
// //     // ++*it2;
// //     // it2 = b.at();
// //     // it2->first;
// //     // std::cout << "begin dyehlhume " << b.back() << " ";
// //     // it2 = b.end();
// //     // std::cout << it2 < 
// //     // std::cout << "end dyelhume " << *it2 << " " << "catapacity " << b.capacity() << " size " << b.size() << std::endl;;
// //     // b.push_back(45);
// //     // b.push_back(45);
// //     // b.push_back(45);
// //     // b.push_back(45);
// //     // b.push_back(45);
// //     // b.push_back(45);
// //     // b.push_back(45);
// //     // b.push_back(45);
// //     // b.pop_back();
// //     // b.pop_back();
// //     // std::cout << b.size() << std::endl << b.capacity() << std::endl;
// //     // ft::iterator<int> it;
// //     // system("leaks a.out");
// // }
// // #include <string>
// // #include "vector.hpp"
// // #include <vector>
// // #include "./ft_containers-terminator/ tests/ tests/vector/vector_prelude.hpp"


#include "vector.hpp"
#include <sstream>
#include <vector>
#include <ctime>
#include <unistd.h>
#include <sys/time.h>

#define TIME 3 // time could be modified until * 20;

template<typename T>
int check_out(ft::vector<T> ft, std::vector<T> std)
{
    typename ft::vector<T>::iterator ft_it = ft.begin();
    typename std::vector<T>::iterator std_it = std.begin();
    while(ft_it != ft.end() && std_it != std.end())
    {
        if (*ft_it != *std_it)
            return (0);
        ft_it++;
        std_it++;
    }
    if (ft_it != ft.end() || std_it != std.end())
        return (0);
    return (1);
}

time_t get_time(void)
{
    struct timeval time_now;

    gettimeofday(&time_now, NULL);
    time_t msecs_time = (time_now.tv_sec * 1e3) + (time_now.tv_usec / 1e3);
    return (msecs_time);
}

int main()
{
    time_t start, end, diff;
    time_t s_start, s_end, s_diff;

    std::cout << "\033[31m" << "-----------------constructor  tests----------------" << std::endl;
    {
        {

            std::cout << "========= test 1=========" << std::endl;
            ft::vector<int> v_f;
            std::vector<int> v_s;

            if (v_f.capacity() == v_s.capacity())
                std::cout << "\033[32m" <<  "capacity = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "capacity = ko ❌" << std::endl;
            if (v_f.size() == v_s.size())
                std::cout << "\033[32m" << "size     = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" <<  "size     = ko ❌" << std::endl;
        }

        {
            std::cout << "========= test 2=========" << std::endl;

            start = get_time();
            ft::vector<int> v_f(100000000, 10);
            end = get_time();
            s_start = get_time();
            std::vector<int> v_s(100000000, 10);
            s_end = get_time();

            diff = end - start  / CLOCKS_PER_SEC;
            s_diff = s_end - s_start  / CLOCKS_PER_SEC;           
            if (check_out(v_f, v_s))
                std::cout << "\033[32m" <<  "value    = ok 👍" << std::endl;
            else
                std::cout << "\033[3m" << "value    = ko ❌" << std::endl;
            if (v_f.capacity() == v_s.capacity())
                std::cout << "\033[32m" <<  "capacity = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "capacity = ko ❌" << std::endl;
            if (v_f.size() == v_s.size())
                std::cout << "\033[32m" << "size     = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "size     = ko ❌" << std::endl;
            if (diff <= s_diff * TIME)
                std::cout << "\033[32m" << "time     = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "time     = ko ❌" << std::endl;
        }

        {
            std::cout << "========= test 3=========" << std::endl;
            std::vector<int> a(100000000, 100);
            
            start = get_time();
            ft::vector<int> v_f(a.begin(), a.begin() + 10000000);
            end = get_time();
            s_start = get_time();
            std::vector<int> v_s(a.begin(), a.begin() + 10000000);
            s_end = get_time();

            diff = end - start / CLOCKS_PER_SEC;
            s_diff = s_end - s_start / CLOCKS_PER_SEC;
            if (check_out(v_f, v_s))
                std::cout << "\033[32m" <<  "value    = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "value    = ko ❌" << std::endl;
            if (v_f.capacity() == v_s.capacity())
                std::cout << "\033[32m" <<  "capacity = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "capacity = ko ❌" << std::endl;
            if (v_f.size() == v_s.size())
                std::cout << "\033[32m" << "size     = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "size     = ko ❌" << std::endl;
            if (diff <= s_diff * TIME)
                std::cout << "\033[32m" << "time     = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "time     = ko ❌" << std::endl;
        }

        {
            std::cout << "========= test 4=========" << std::endl;
            ft::vector<int> a(1000000, 100);
            std::vector<int> b(1000000, 100);

            start = get_time();
            ft::vector<int> v_f(a);
            end = get_time();
            s_start = get_time();
            std::vector<int> v_s(b);
            s_end = get_time();

            diff = end - start / CLOCKS_PER_SEC;
            s_diff = s_end - s_start / CLOCKS_PER_SEC;
            if (check_out(v_f, v_s))
                std::cout << "\033[32m" <<  "value    = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "value    = ko ❌" << std::endl;
            if (v_f.capacity() == v_s.capacity())
                std::cout << "\033[32m" <<  "capacity = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "capacity = ko ❌" << std::endl;
            if (v_f.size() == v_s.size())
                std::cout << "\033[32m" << "size     = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "size     = ko ❌" << std::endl;
            if (diff <= s_diff * TIME)
                std::cout << "\033[32m" << "time     = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "time     = ko ❌" << std::endl;
        }
    }
    {
        std::cout << "\033[31m" << "-----------------assignement operator----------------" << std::endl;
        {
            ft::vector<int> a(1000000, 100);
            std::vector<int> b(1000000, 100);

            ft::vector<int> v_f;
            std::vector<int> v_s;

            start = get_time();
            v_f = a;
            end = get_time();
            s_start = get_time();
            v_s = b;
            s_end = get_time();
    
            diff = end - start / CLOCKS_PER_SEC;
            s_diff = s_end - s_start / CLOCKS_PER_SEC;
            if (check_out(v_f, v_s))
                std::cout << "\033[32m" <<  "value    = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "value    = ko ❌" << std::endl;
            if (v_f.capacity() == v_s.capacity())
                std::cout << "\033[32m" <<  "capacity = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "capacity = ko ❌" << std::endl;
            if (v_f.size() == v_s.size())
                std::cout << "\033[32m" << "size     = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "size     = ko ❌" << std::endl;
            if (diff <= s_diff * TIME)
                std::cout << "\033[32m" << "time     = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "time     = ko ❌" << std::endl;
        }
    }

    {
        std::cout << "\033[31m" << "-----------------insert one element----------------" << std::endl;
        {
            std::cout << "========= test 1=========" << std::endl; // insert inside empty vector
            
            ft::vector<int> v_f;
            std::vector<int> v_s;

            start = get_time();
            v_f.insert(v_f.begin(), 10);
            end = get_time();
            s_start = get_time();
            v_s.insert(v_s.begin(), 10);
            s_end = get_time();
    
            diff = end - start / CLOCKS_PER_SEC;
            s_diff = s_end - s_start / CLOCKS_PER_SEC;
            if (check_out(v_f, v_s))
                std::cout << "\033[32m" <<  "value    = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "value    = ko ❌" << std::endl;
            if (v_f.capacity() == v_s.capacity())
                std::cout << "\033[32m" <<  "capacity = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "capacity = ko ❌" << std::endl;
            if (v_f.size() == v_s.size())
                std::cout << "\033[32m" << "size     = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "size     = ko ❌" << std::endl;
            if (diff <= s_diff * TIME)
                std::cout << "\033[32m" << "time     = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "time     = ko ❌" << std::endl;
        }

        {
            std::cout << "========= test 2=========" << std::endl; // insert at the middle
            
            ft::vector<int> v_f(5, 5);
            std::vector<int> v_s(5, 5);
    
            v_f.reserve(20);
            v_s.reserve(20);

            ft::vector<int>::iterator it = v_f.begin();
            ft::vector<int>::iterator it2;
            
            start = get_time();
            v_f.insert(v_f.begin() + 2, 10);
            end = get_time();
            s_start = get_time();
            v_s.insert(v_s.begin() + 2, 10);
            s_end = get_time();

            diff = end - start / CLOCKS_PER_SEC;
            s_diff = s_end - s_start / CLOCKS_PER_SEC;
            if (check_out(v_f, v_s))
                std::cout << "\033[32m" <<  "value    = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "value    = ko ❌" << std::endl;
            if (v_f.capacity() == v_s.capacity())
                std::cout << "\033[32m" <<  "capacity = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "capacity = ko ❌" << std::endl;
            if (v_f.size() == v_s.size())
                std::cout << "\033[32m" << "size     = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "size     = ko ❌" << std::endl;
            if (&(*it) == &v_f[0])
                std::cout << "\033[32m" << "mem      = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "mem      = ko ❌" << std::endl;
            if (diff <= s_diff * TIME)
                std::cout << "\033[32m" << "time     = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "time     = ko ❌" << std::endl;
        }
        {
            std::cout << "========= test 3=========" << std::endl; // insert at the end
            
            ft::vector<int> v_f(5, 5);
            std::vector<int> v_s(5, 5);
    
            v_f.reserve(20);
            v_s.reserve(20);

            ft::vector<int>::iterator it = v_f.begin();
            ft::vector<int>::iterator it2;
            start = get_time();
            v_f.insert(v_f.end(), 10);
            end = get_time();
            s_start = get_time();
            v_s.insert(v_s.end(), 10);
            s_end = get_time();

            diff = end - start / CLOCKS_PER_SEC;
            s_diff = s_end - s_start / CLOCKS_PER_SEC;
            if (check_out(v_f, v_s))
                std::cout << "\033[32m" <<  "value    = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "value    = ko ❌" << std::endl;
            if (v_f.capacity() == v_s.capacity())
                std::cout << "\033[32m" <<  "capacity = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "capacity = ko ❌" << std::endl;
            if (v_f.size() == v_s.size())
                std::cout << "\033[32m" << "size     = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "size     = ko ❌" << std::endl;
            if (&(*it) == &v_f[0])
                std::cout << "\033[32m" << "mem      = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "mem      = ko ❌" << std::endl;
            if (diff <= s_diff * TIME)
                std::cout << "\033[32m" << "time     = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "time     = ko ❌" << std::endl;               
        }

        {
            std::cout << "========= test 4=========" << std::endl; // insert when size == capacity
            
            ft::vector<int> v_f(40000, 5);
            std::vector<int> v_s(40000, 5);
    
            start = get_time();
            v_f.insert(v_f.end(), 10);
            end = get_time();
            s_start = get_time();
            v_s.insert(v_s.end(), 10);
            s_end = get_time();

            diff = end - start / CLOCKS_PER_SEC;
            s_diff = s_end - s_start / CLOCKS_PER_SEC;
            if (check_out(v_f, v_s))
                std::cout << "\033[32m" <<  "value    = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "value    = ko ❌" << std::endl;
            if (v_f.capacity() == v_s.capacity())
                std::cout << "\033[32m" <<  "capacity = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "capacity = ko ❌" << std::endl;
            if (v_f.size() == v_s.size())
                std::cout << "\033[32m" << "size     = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "size     = ko ❌" << std::endl;
            if (diff <= s_diff * TIME)
                std::cout << "\033[32m" << "time     = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "time     = ko ❌" << std::endl;
        }
    }
    {
        std::cout << "\033[31m" << "-----------------insert size----------------" << std::endl;
        {
            std::cout << "========= test 1=========" << std::endl; // insert in empty vector
            
            ft::vector<int> v_f;
            std::vector<int> v_s;

            start = get_time();
            v_f.insert(v_f.begin(), 1000000, 10);
            end = get_time();
            s_start = get_time();
            v_s.insert(v_s.begin(), 1000000, 10);
            s_end = get_time();

            diff = end - start / CLOCKS_PER_SEC;
            s_diff = s_end - s_start / CLOCKS_PER_SEC;
            if (check_out(v_f, v_s))
                std::cout << "\033[32m" <<  "value    = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "value    = ko ❌" << std::endl;
            if (v_f.capacity() == v_s.capacity())
                std::cout << "\033[32m" <<  "capacity = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "capacity = ko ❌" << std::endl;
            if (v_f.size() == v_s.size())
                std::cout << "\033[32m" << "size     = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "size     = ko ❌" << std::endl;
            if (diff <= s_diff * TIME)
                std::cout << "\033[32m" << "time     = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "time     = ko ❌" << std::endl;      
        }

        {
            std::cout << "========= test 2 =========" << std::endl; // insert in empty vector + capacity > size + n 
            
            ft::vector<int> v_f(10, 4);
            std::vector<int> v_s(10, 4);

            v_f.reserve(1000009);
            v_s.reserve(1000009);
            ft::vector<int>::iterator it2 = v_f.begin();
            start = get_time();
            v_f.insert(v_f.begin() + 3, 100000, 10);
            end = get_time();
            s_start = get_time();
            v_s.insert(v_s.begin() + 3, 100000, 10);
            s_end = get_time();

            diff = end - start / CLOCKS_PER_SEC;
            s_diff = s_end - s_start / CLOCKS_PER_SEC;
            if (check_out(v_f, v_s))
                std::cout << "\033[32m" <<  "value    = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "value    = ko ❌" << std::endl;
            if (v_f.capacity() == v_s.capacity())
                std::cout << "\033[32m" <<  "capacity = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "capacity = ko ❌" << std::endl;
            if (v_f.size() == v_s.size())
                std::cout << "\033[32m" << "size     = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "size     = ko ❌" << std::endl;
            if (&(*it2) == &v_f[0])
                std::cout << "\033[32m" << "mem      = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "mem      = ko ❌" << std::endl;
            if (diff <= s_diff * TIME)
                std::cout << "\033[32m" << "time     = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "time     = ko ❌" << std::endl;        
        }

        {
            std::cout << "========= test 3 =========" << std::endl; // capacity  * 2 < size + n
            
            ft::vector<int> v_f(10, 4);
            std::vector<int> v_s(10, 4);

            start = get_time();
            v_f.insert(v_f.begin() + 3, 10000000, 10);
            end = get_time();
            s_start = get_time();
            v_s.insert(v_s.begin() + 3, 10000000, 10);
            s_end = get_time();

            diff = end - start / CLOCKS_PER_SEC;
            s_diff = s_end - s_start / CLOCKS_PER_SEC;
            if (check_out(v_f, v_s))
                std::cout << "\033[32m" <<  "value    = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "value    = ko ❌" << std::endl;
            if (v_f.capacity() == v_s.capacity())
                std::cout << "\033[32m" <<  "capacity = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "capacity = ko ❌" << std::endl;
            if (v_f.size() == v_s.size())
                std::cout << "\033[32m" << "size     = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "size     = ko ❌" << std::endl;
            if (diff <= s_diff * TIME)
                std::cout << "\033[32m" << "time     = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "time     = ko ❌" << std::endl;
        }

        {
            {
                std::cout << "========= test 4 =========" << std::endl; // capacity * 2 => size + n
                
                ft::vector<int> v_f(5000000, 9);
                std::vector<int> v_s(5000000, 9);

                start = get_time();
                v_f.insert(v_f.begin() + 3, 9000000, 10);
                end = get_time();
                s_start = get_time();
                v_s.insert(v_s.begin() + 3, 9000000, 10);
                s_end = get_time();

                diff = end - start / CLOCKS_PER_SEC;
                s_diff = s_end - s_start / CLOCKS_PER_SEC;
                if (check_out(v_f, v_s))
                    std::cout << "\033[32m" <<  "value    = ok 👍" << std::endl;
                else
                    std::cout << "\033[31m" << "value    = ko ❌" << std::endl;
                if (v_f.capacity() == v_s.capacity())
                    std::cout << "\033[32m" <<  "capacity = ok 👍" << std::endl;
                else
                    std::cout << "\033[31m" << "capacity = ko ❌" << std::endl;
                if (v_f.size() == v_s.size())
                    std::cout << "\033[32m" << "size     = ok 👍" << std::endl;
                else
                    std::cout << "\033[31m" << "size     = ko ❌" << std::endl;
                if (diff <= s_diff * TIME)
                    std::cout << "\033[32m" << "time     = ok 👍" << std::endl;
                else
                    std::cout << "\033[31m" << "time     = ko ❌" << std::endl;
            }
        }

        {
            std::cout << "========= test 5 =========" << std::endl; //  insert at the end
            
            ft::vector<int> v_f(1000000, 4);
            std::vector<int> v_s(1000000, 4);

            start = get_time();
            v_f.insert(v_f.end(), 150000, 10);
            end = get_time();
            s_start = get_time();
            v_s.insert(v_s.end(), 150000, 10);
            s_end = get_time();

            diff = end - start / CLOCKS_PER_SEC;
            s_diff = s_end - s_start / CLOCKS_PER_SEC;
            if (check_out(v_f, v_s))
                std::cout << "\033[32m" <<  "value    = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "value    = ko ❌" << std::endl;
            if (v_f.capacity() == v_s.capacity())
                std::cout << "\033[32m" <<  "capacity = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "capacity = ko ❌" << std::endl;
            if (v_f.size() == v_s.size())
                std::cout << "\033[32m" << "size     = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "size     = ko ❌" << std::endl;
            if (diff <= s_diff * TIME)
                std::cout << "\033[32m" << "time     = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "time     = ko ❌" << std::endl;
        }
    }
    {
        {
            std::cout << "\033[31m" << "-----------------insert range----------------" << std::endl;
            {
                std::cout << "========= test 1 =========" << std::endl;

                ft::vector<int> a(100000000, 4);
                std::vector<int> b(100000000, 4);

                ft::vector<int> v_f(10, 4);
                std::vector<int> v_s(10, 4);

                start = get_time();
                v_f.insert(v_f.begin() + 5, a.begin(), a.end());
                end = get_time();
                s_start = get_time();
                v_s.insert(v_s.begin() + 5, b.begin(), b.end());
                s_end = get_time();

                diff = end - start / CLOCKS_PER_SEC;
                s_diff = s_end - s_start / CLOCKS_PER_SEC;
                if (check_out(v_f, v_s))
                std::cout << "\033[32m" <<  "value    = ok 👍" << std::endl;
                else
                    std::cout << "\033[31m" << "value    = ko ❌" << std::endl;
                if (v_f.capacity() == v_s.capacity())
                    std::cout << "\033[32m" <<  "capacity = ok 👍" << std::endl;
                else
                    std::cout << "\033[31m" << "capacity = ko ❌" << std::endl;
                if (v_f.size() == v_s.size())
                    std::cout << "\033[32m" << "size     = ok 👍" << std::endl;
                else
                    std::cout << "\033[31m" << "size     = ko ❌" << std::endl;
                if (diff <= s_diff * TIME)
                    std::cout << "\033[32m" << "time     = ok 👍" << std::endl;
                else
                    std::cout << "\033[31m" << "time     = ko ❌" << std::endl;
            }
            {
                std::cout << "========= test 2 =========" << std::endl;

                ft::vector<int> a(100, 4);
                std::vector<int> b(100, 4);

                ft::vector<int> v_f;
                std::vector<int> v_s;

                start = get_time();
                v_f.insert(v_f.begin(), a.begin(), a.begin() + 40);
                end = get_time();
                s_start = get_time();
                v_s.insert(v_s.begin(), b.begin(), b.begin() + 40);
                s_end = get_time();

                diff = end - start / CLOCKS_PER_SEC;
                s_diff = s_end - s_start / CLOCKS_PER_SEC;
                if (check_out(v_f, v_s))
                    std::cout << "\033[32m" <<  "value    = ok 👍" << std::endl;
                else
                    std::cout << "\033[31m" << "value    = ko ❌" << std::endl;
                if (v_f.capacity() == v_s.capacity())
                    std::cout << "\033[32m" <<  "capacity = ok 👍" << std::endl;
                else
                    std::cout << "\033[31m" << "capacity = ko ❌" << std::endl;
                if (v_f.size() == v_s.size())
                    std::cout << "\033[32m" << "size     = ok 👍" << std::endl;
                else
                    std::cout << "\033[31m" << "size     = ko ❌" << std::endl;
                if (diff <= s_diff * TIME)
                    std::cout << "\033[32m" << "time     = ok 👍" << std::endl;
                else
                    std::cout << "\033[31m" << "time     = ko ❌" << std::endl;
            }

            {
                std::cout << "========= test 3 =========" << std::endl;

                ft::vector<int> a(100000000, 4);
                std::vector<int> b(100000000, 4);

                ft::vector<int> v_f(10, 10);
                std::vector<int> v_s(10, 10);

                start = get_time();
                v_f.insert(v_f.end(), a.begin(), a.begin() + 40);
                end = get_time();
                s_start = get_time();
                v_s.insert(v_s.end(), b.begin(), b.begin() + 40);
                s_end = get_time();

                diff = end - start / CLOCKS_PER_SEC;
                s_diff = s_end - s_start / CLOCKS_PER_SEC;
                if (check_out(v_f, v_s))
                std::cout << "\033[32m" <<  "value    = ok 👍" << std::endl;
                else
                    std::cout << "\033[31m" << "value    = ko ❌" << std::endl;
                if (v_f.capacity() == v_s.capacity())
                    std::cout << "\033[32m" <<  "capacity = ok 👍" << std::endl;
                else
                    std::cout << "\033[31m" << "capacity = ko ❌" << std::endl;
                if (v_f.size() == v_s.size())
                    std::cout << "\033[32m" << "size     = ok 👍" << std::endl;
                else
                    std::cout << "\033[31m" << "size     = ko ❌" << std::endl;
                if (diff <= s_diff * TIME)
                    std::cout << "\033[32m" << "time     = ok 👍" << std::endl;
                else
                    std::cout << "\033[31m" << "time     = ko ❌" << std::endl;
            }
            {
                std::cout << "========= test 4 =========" << std::endl;

                ft::vector<int> a(100000000, 4);
                std::vector<int> b(100000000, 4);

                ft::vector<int> v_f(10, 10);
                std::vector<int> v_s(10, 10);
        

                v_f.reserve(100);
                v_s.reserve(100);
                ft::vector<int>::iterator it2 = v_f.begin();

                start = get_time();
                v_f.insert(v_f.begin() + 3, a.begin(), a.begin() + 40);
                end = get_time();
                s_start = get_time();
                v_s.insert(v_s.begin() + 3, b.begin(), b.begin() + 40);
                s_end = get_time();

                diff = end - start / CLOCKS_PER_SEC;
                s_diff = s_end - s_start / CLOCKS_PER_SEC;
                if (check_out(v_f, v_s))
                    std::cout << "\033[32m" <<  "value    = ok 👍" << std::endl;
                else
                    std::cout << "\033[32m" << "value    = ko ❌" << std::endl;
                if (v_f.capacity() == v_s.capacity())
                    std::cout << "\033[32m" <<  "capacity = ok 👍" << std::endl;
                else
                    std::cout << "\033[32m" << "capacity = ko ❌" << std::endl;
                if (v_f.size() == v_s.size())
                    std::cout << "size     = ok 👍" << std::endl;
                else
                    std::cout << "size     = ko ❌" << std::endl;
                if (&(*it2) == &v_f[0])
                    std::cout << "mem      = ok 👍" << std::endl;
                else
                    std::cout << "mem      = ko ❌" << std::endl;
                if (diff < s_diff * TIME)
                    std::cout << "time     = ok 👍" << std::endl;
                else
                    std::cout << "time     = ko ❌" << std::endl;  
            }
            {
                std::cout << "========= test 5 =========" << std::endl;

                ft::vector<int> a(100000000, 4);
                std::vector<int> b(100000000, 4);

                ft::vector<int> v_f(50, 10);
                std::vector<int> v_s(50, 10);

                start = get_time();
                v_f.insert(v_f.end() - 1, a.begin(), a.begin() + 40);
                end = get_time();
                s_start = get_time();
                v_s.insert(v_s.end() - 1, b.begin(), b.begin() + 40);
                s_end = get_time();

                diff = end - start / CLOCKS_PER_SEC;
                s_diff = s_end - s_start / CLOCKS_PER_SEC;
                
                if (check_out(v_f, v_s))
                    std::cout << "\033[32m" <<  "value    = ok 👍" << std::endl;
                else
                    std::cout << "\033[31m" << "value    = ko ❌" << std::endl;
                if (v_f.capacity() == v_s.capacity())
                    std::cout << "\033[32m" <<  "capacity = ok 👍" << std::endl;
                else
                    std::cout << "\033[31m" << "capacity = ko ❌" << std::endl;
                if (v_f.size() == v_s.size())
                    std::cout << "\033[32m" << "size     = ok 👍" << std::endl;
                else
                    std::cout << "\033[31m" << "size     = ko ❌" << std::endl;
                if (diff <= s_diff * TIME)
                    std::cout << "\033[32m" << "time     = ok 👍" << std::endl;
                else
                    std::cout << "\033[31m" << "time     = ko ❌" << std::endl;
            }
        }
    }
    {
        std::cout << "\033[31m" << "-----------------push_back----------------" << std::endl;
        {
            std::cout << "========= test 1 =========" << std::endl;

            ft::vector<int> v_f;
            std::vector<int> v_s;

            start = get_time();
            for (int i = 0; i < 100000000; i++)
                v_f.push_back(10);
            end = get_time();
            s_start = get_time();
            for (int i = 0; i < 100000000; i++)
                v_s.push_back(10);
            s_end = get_time();

            diff = end - start / CLOCKS_PER_SEC;
            s_diff = s_end - s_start / CLOCKS_PER_SEC;

            if (check_out(v_f, v_s))
                std::cout << "\033[32m" <<  "value    = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "value    = ko ❌" << std::endl;
            if (v_f.capacity() == v_s.capacity())
                std::cout << "\033[32m" <<  "capacity = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "capacity = ko ❌" << std::endl;
            if (v_f.size() == v_s.size())
                std::cout << "\033[32m" << "size     = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "size     = ko ❌" << std::endl;
            if (diff <= s_diff * TIME)
                std::cout << "\033[32m" << "time     = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "time     = ko ❌" << std::endl;
        }
        {
            std::cout << "========= test 2 =========" << std::endl;

            ft::vector<int> v_f(4, 4);
            std::vector<int> v_s(4, 4);

            start = get_time();
            for (int i = 0; i < 100000000; i++)
                v_f.push_back(10);
            end = get_time();
            s_start = get_time();
            for (int i = 0; i < 100000000; i++)
                v_s.push_back(10);
            s_end = get_time();

            diff = end - start / CLOCKS_PER_SEC;
            s_diff = s_end - s_start / CLOCKS_PER_SEC;
            
            if (check_out(v_f, v_s))
                std::cout << "\033[32m" <<  "value    = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "value    = ko ❌" << std::endl;
            if (v_f.capacity() == v_s.capacity())
                std::cout << "\033[32m" <<  "capacity = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "capacity = ko ❌" << std::endl;
            if (v_f.size() == v_s.size())
                std::cout << "\033[32m" << "size     = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "size     = ko ❌" << std::endl;
            if (diff <= s_diff * TIME)
                std::cout << "\033[32m" << "time     = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "time     = ko ❌" << std::endl;
        }
        {
            std::cout << "========= test 3 =========" << std::endl;

            ft::vector<int> v_f(5, 5);
            std::vector<int> v_s(5, 5);
        
            
            v_f.reserve(5);
            v_s.reserve(5);

            start = get_time();
            for (int i = 0; i < 100000000; i++)
                v_f.push_back(10);
            end = get_time();
            s_start = get_time();
            for (int i = 0; i < 100000000; i++)
                v_s.push_back(10);
            s_end = get_time();

            diff = end - start / CLOCKS_PER_SEC;
            s_diff = s_end - s_start / CLOCKS_PER_SEC;
            ft::vector<int>::iterator it2 = v_f.begin();
            
            if (check_out(v_f, v_s))
                std::cout << "\033[32m" <<  "value    = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "value    = ko ❌" << std::endl;
            if (v_f.capacity() == v_s.capacity())
                std::cout << "\033[32m" <<  "capacity = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "capacity = ko ❌" << std::endl;
            if (v_f.size() == v_s.size())
                std::cout << "\033[32m" << "size     = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "size     = ko ❌" << std::endl;
            if (&(*it2) == &v_f[0])
                    std::cout << "\033[32m" << "mem      = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "mem      = ko ❌" << std::endl;
            if (diff < s_diff * TIME)
                std::cout << "\033[32m" << "time     = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "time     = ko ❌" << std::endl;
        }
    }
    {
        std::cout << "\033[31m" << "-----------------pop_back----------------" << std::endl;
        {
            std::cout << "========= test 1 =========" << std::endl;

            ft::vector<int> v_f(100000000, 5);
            std::vector<int> v_s(100000000, 5);
        
            start = get_time();
            for (int i = 0; i < 1000000; i++)
                v_s.pop_back();
            end = get_time();
            s_start = get_time();
            for (int i = 0; i < 1000000; i++)
                v_f.pop_back();
            s_end = get_time();

            diff = end - start / CLOCKS_PER_SEC;
            s_diff = s_end - s_start / CLOCKS_PER_SEC;
            ft::vector<int>::iterator it2 = v_f.begin();

                       if (check_out(v_f, v_s))
                std::cout << "\033[32m" <<  "value    = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "value    = ko ❌" << std::endl;
            if (v_f.capacity() == v_s.capacity())
                std::cout << "\033[32m" <<  "capacity = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "capacity = ko ❌" << std::endl;
            if (v_f.size() == v_s.size())
                std::cout << "\033[32m" << "size     = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "size     = ko ❌" << std::endl;
            if (&(*it2) == &v_f[0])
                    std::cout << "\033[32m" << "mem      = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "mem      = ko ❌" << std::endl;
            if (diff < s_diff * TIME)
                std::cout << "\033[32m" << "time     = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "time     = ko ❌" << std::endl;
        }
    }
    {
        std::cout << "\033[31m" << "-----------------clear----------------" << std::endl;
        {
            std::cout << "========= test 1 =========" << std::endl;

            ft::vector<int> v_f(1000000, 5);
            std::vector<int> v_s(1000000, 5);
        
            start = get_time();
            v_s.clear();
            end = get_time();
            s_start = get_time();
            v_f.clear();
            s_end = get_time();

            diff = end - start / CLOCKS_PER_SEC;
            s_diff = s_end - s_start / CLOCKS_PER_SEC;
            ft::vector<int>::iterator it2 = v_f.begin();

           if (check_out(v_f, v_s))
                std::cout << "\033[32m" <<  "value    = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "value    = ko ❌" << std::endl;
            if (v_f.capacity() == v_s.capacity())
                std::cout << "\033[32m" <<  "capacity = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "capacity = ko ❌" << std::endl;
            if (v_f.size() == v_s.size())
                std::cout << "\033[32m" << "size     = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "size     = ko ❌" << std::endl;
            if (&(*it2) == &v_f[0])
                    std::cout << "\033[32m" << "mem      = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "mem      = ko ❌" << std::endl;
            if (diff < s_diff * TIME)
                std::cout << "\033[32m" << "time     = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "time     = ko ❌" << std::endl;      
        }
    }
    {
        std::cout << "\033[31m" << "-----------------reserve----------------" << std::endl;
        {
            std::cout << "========= test 1 =========" << std::endl;

            ft::vector<int> v_f(1000000, 5);
            std::vector<int> v_s(1000000, 5);

            start = get_time();
            v_s.reserve(1000);
            end = get_time();
            s_start = get_time();
            v_f.reserve(1000);
            s_end = get_time();

            diff = end - start / CLOCKS_PER_SEC;
            s_diff = s_end - s_start / CLOCKS_PER_SEC;
            ft::vector<int>::iterator it2 = v_f.begin();

            if (check_out(v_f, v_s))
                std::cout << "\033[32m" <<  "value    = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "value    = ko ❌" << std::endl;
            if (v_f.capacity() == v_s.capacity())
                std::cout << "\033[32m" <<  "capacity = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "capacity = ko ❌" << std::endl;
            if (v_f.size() == v_s.size())
                std::cout << "\033[32m" << "size     = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "size     = ko ❌" << std::endl;
            if (&(*it2) == &v_f[0])
                    std::cout << "\033[32m" << "mem      = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "mem      = ko ❌" << std::endl;
            if (diff < s_diff * TIME)
                std::cout << "\033[32m" << "time     = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "time     = ko ❌" << std::endl;
        }
        {
            std::cout << "========= test 2 =========" << std::endl;

            ft::vector<int> v_f(5, 5);
            std::vector<int> v_s(5, 5);
        
            start = get_time();
            v_s.reserve(100000);
            end = get_time();
            s_start = get_time();
            v_f.reserve(100000);
            s_end = get_time();

            diff = end - start / CLOCKS_PER_SEC;
            s_diff = s_end - s_start / CLOCKS_PER_SEC;
            ft::vector<int>::iterator it2 = v_f.begin();

            if (check_out(v_f, v_s))
                std::cout << "\033[32m" <<  "value    = ok 👍" << std::endl;
            else
                std::cout << "\033[32m" << "value    = ko ❌" << std::endl;
            if (v_f.capacity() == v_s.capacity())
                std::cout << "\033[32m" <<  "capacity = ok 👍" << std::endl;
            else
                std::cout << "\033[32m" << "capacity = ko ❌" << std::endl;
            if (v_f.size() == v_s.size())
                std::cout << "size     = ok 👍" << std::endl;
            else
                std::cout << "size     = ko ❌" << std::endl;
            if (&(*it2) == &v_f[0])
                    std::cout << "mem      = ok 👍" << std::endl;
            else
                std::cout << "mem      = ko ❌" << std::endl;
            if (diff < s_diff * TIME)
                std::cout << "time     = ok 👍" << std::endl;
            else
                std::cout << "time     = ko ❌" << std::endl;       
        }
        {
            std::cout << "========= test 3 =========" << std::endl;

            ft::vector<int> v_f(5, 5);
            std::vector<int> v_s(5, 5);
        
            start = get_time();
            v_s.reserve(0);
            end = get_time();
            s_start = get_time();
            v_f.reserve(0);
            s_end = get_time();

            diff = end - start / CLOCKS_PER_SEC;
            s_diff = s_end - s_start / CLOCKS_PER_SEC;
            ft::vector<int>::iterator it2 = v_f.begin();

            if (check_out(v_f, v_s))
                std::cout << "\033[32m" <<  "value    = ok 👍" << std::endl;
            else
                std::cout << "\033[32m" << "value    = ko ❌" << std::endl;
            if (v_f.capacity() == v_s.capacity())
                std::cout << "\033[32m" <<  "capacity = ok 👍" << std::endl;
            else
                std::cout << "\033[32m" << "capacity = ko ❌" << std::endl;
            if (v_f.size() == v_s.size())
                std::cout << "size     = ok 👍" << std::endl;
            else
                std::cout << "size     = ko ❌" << std::endl;
            if (&(*it2) == &v_f[0])
                    std::cout << "mem      = ok 👍" << std::endl;
                else
                    std::cout << "mem      = ko ❌" << std::endl; 
            try
            {
                v_s.reserve(v_s.max_size() + 1);
            }
            catch (std::length_error&)
            {
                std::cout << "exception= ok 👍" << std::endl;;
            }
        }
    }
    {
        std::cout << "\033[31m" << "-----------------assign----------------" << std::endl;
        {
            std::cout << "========= test 1 =========" << std::endl;

            ft::vector<int> v_f(4, 4);
            std::vector<int> v_s(4, 4);

            v_f.push_back(10);
            v_s.push_back(15);

            start = get_time();
            v_f.assign(10000000, 101);
            end = get_time();
            s_start = get_time();
            v_s.assign(10000000, 101);

            s_end = get_time();

            diff = end - start / CLOCKS_PER_SEC;
            s_diff = s_end - s_start / CLOCKS_PER_SEC;
            if (check_out(v_f, v_s))
                std::cout << "\033[32m" <<  "value    = ok 👍" << std::endl;
            else
                std::cout << "\033[32m" << "value    = ko ❌" << std::endl;
            if (v_f.capacity() == v_s.capacity())
                std::cout << "\033[32m" <<  "capacity = ok 👍" << std::endl;
            else
                std::cout << "\033[32m" << "capacity = ko ❌" << std::endl;
            if (v_f.size() == v_s.size())
                std::cout << "size     = ok 👍" << std::endl;
            else
                std::cout << "size     = ko ❌" << std::endl;
            if (diff < s_diff * TIME)
                std::cout << "time     = ok 👍" << std::endl;
            else
                std::cout << "time     = ko ❌" << std::endl;   
        }
    }
    {
        std::cout << "\033[31m" << "-----------------assign range----------------" << std::endl;
        {
            std::cout << "========= test 1 =========" << std::endl;

            ft::vector<int> a(10000000, 100);
            ft::vector<int> b(10000000, 100);

            start = get_time();
            ft::vector<int> v_f(a.begin() + 1, a.end());
            end = get_time();
            s_start = get_time();
            std::vector<int> v_s(a.begin() + 1, a.end());
            s_end = get_time();

            diff = end - start / CLOCKS_PER_SEC;
            s_diff = s_end - s_start / CLOCKS_PER_SEC;
            if (check_out(v_f, v_s))
                std::cout << "\033[32m" <<  "value    = ok 👍" << std::endl;
            else
                std::cout << "\033[32m" << "value    = ko ❌" << std::endl;
            if (v_f.capacity() == v_s.capacity())
                std::cout << "\033[32m" <<  "capacity = ok 👍" << std::endl;
            else
                std::cout << "\033[32m" << "capacity = ko ❌" << std::endl;
            if (v_f.size() == v_s.size())
                std::cout << "size     = ok 👍" << std::endl;
            else
                std::cout << "size     = ko ❌" << std::endl;
            if (diff < s_diff * TIME)
                std::cout << "time     = ok 👍" << std::endl;
            else
                std::cout << "time     = ko ❌" << std::endl;   
        }
        {
            std::cout << "========= test 2 =========" << std::endl;

            ft::vector<int> a(10000000, 100);
            ft::vector<int> b(10000000, 100);

            start = get_time();
            ft::vector<int> v_f(a.end() - 1, a.end());
            end = get_time();
            s_start = get_time();
            std::vector<int> v_s(a.end() - 1, a.end());
            s_end = get_time();

            diff = end - start / CLOCKS_PER_SEC;
            s_diff = s_end - s_start / CLOCKS_PER_SEC;
            if (check_out(v_f, v_s))
                std::cout << "\033[32m" <<  "value    = ok 👍" << std::endl;
            else
                std::cout << "\033[32m" << "value    = ko ❌" << std::endl;
            if (v_f.capacity() == v_s.capacity())
                std::cout << "\033[32m" <<  "capacity = ok 👍" << std::endl;
            else
                std::cout << "\033[32m" << "capacity = ko ❌" << std::endl;
            if (v_f.size() == v_s.size())
                std::cout << "size     = ok 👍" << std::endl;
            else
                std::cout << "size     = ko ❌" << std::endl;
            if (diff < s_diff * TIME)
                std::cout << "time     = ok 👍" << std::endl;
            else
                std::cout << "time     = ko ❌" << std::endl;   
        }
    }
    {
        std::cout << "\033[31m" << "-----------------resize----------------" << std::endl;
        { 
            std::cout << "========= test 1 =========" << std::endl; // capacity  *2 > size + n

            ft::vector<int> v_f(500000, 100);
            std::vector<int> v_s(500000, 100);

            start = get_time();
            v_f.resize(99999, 100);
            end = get_time();
            s_start = get_time();
            v_s.resize(99999, 100);
            s_end = get_time();

            diff = end - start / CLOCKS_PER_SEC;
            s_diff = s_end - s_start / CLOCKS_PER_SEC;
            if (check_out(v_f, v_s))
                std::cout << "\033[32m" <<  "value    = ok 👍" << std::endl;
            else
                std::cout << "\033[32m" << "value    = ko ❌" << std::endl;
            if (v_f.capacity() == v_s.capacity())
                std::cout << "\033[32m" <<  "capacity = ok 👍" << std::endl;
            else
                std::cout << "\033[32m" << "capacity = ko ❌" << std::endl;
            if (v_f.size() == v_s.size())
                std::cout << "size     = ok 👍" << std::endl;
            else
                std::cout << "size     = ko ❌" << std::endl;
            if (diff < s_diff * TIME)
                std::cout << "time     = ok 👍" << std::endl;
            else
                std::cout << "time     = ko ❌" << std::endl;
        }
        { 
            std::cout << "========= test 2 =========" << std::endl; // smaller than the previeus size


            ft::vector<int> v_f(1000000, 100);
            std::vector<int> v_s(1000000, 100);

            start = get_time();
            v_f.resize(100000, 100);
            end = get_time();
            s_start = get_time();
            v_s.resize(100000, 100);
            s_end = get_time();

            diff = end - start / CLOCKS_PER_SEC;
            s_diff = s_end - s_start / CLOCKS_PER_SEC;
            if (check_out(v_f, v_s))
                std::cout << "\033[32m" <<  "value    = ok 👍" << std::endl;
            else
                std::cout << "\033[32m" << "value    = ko ❌" << std::endl;
            if (v_f.capacity() == v_s.capacity())
                std::cout << "\033[32m" <<  "capacity = ok 👍" << std::endl;
            else
                std::cout << "\033[32m" << "capacity = ko ❌" << std::endl;
            if (v_f.size() == v_s.size())
                std::cout << "size     = ok 👍" << std::endl;
            else
                std::cout << "size     = ko ❌" << std::endl;
            if (diff < s_diff * TIME)
                std::cout << "time     = ok 👍" << std::endl;
            else
                std::cout << "time     = ko ❌" << std::endl;
        }
        { 
            std::cout << "========= test 3 =========" << std::endl; // new cap smaller than the old


            ft::vector<int> v_f(100000, 100); 
            std::vector<int> v_s(100000, 100);

            start = get_time();
            v_f.resize(50000, 100);
            end = get_time();
            s_start = get_time();
            v_s.resize(50000, 100);
            s_end = get_time();

            diff = end - start / CLOCKS_PER_SEC;
            s_diff = s_end - s_start / CLOCKS_PER_SEC;
            if (check_out(v_f, v_s))
                std::cout << "\033[32m" <<  "value    = ok 👍" << std::endl;
            else
                std::cout << "\033[32m" << "value    = ko ❌" << std::endl;
            if (v_f.capacity() == v_s.capacity())
                std::cout << "\033[32m" <<  "capacity = ok 👍" << std::endl;
            else
                std::cout << "\033[32m" << "capacity = ko ❌" << std::endl;
            if (v_f.size() == v_s.size())
                std::cout << "size     = ok 👍" << std::endl;
            else
                std::cout << "size     = ko ❌" << std::endl;
            if (diff < s_diff * TIME)
                std::cout << "time     = ok 👍" << std::endl;
            else
                std::cout << "time     = ko ❌" << std::endl;
        }
        { 
            std::cout << "========= test 4 =========" << std::endl;

            ft::vector<int> v_f(10000, 100);
            std::vector<int> v_s(10000, 100);

            v_f.reserve(100000);
            v_s.reserve(100000);

            start = get_time();
            v_f.resize(10009, 100);
            end = get_time();
            s_start = get_time();
            v_s.resize(10009, 100);
            s_end = get_time();

            diff = end - start / CLOCKS_PER_SEC;
            s_diff = s_end - s_start / CLOCKS_PER_SEC;
            if (check_out(v_f, v_s))
                std::cout << "\033[32m" <<  "value    = ok 👍" << std::endl;
            else
                std::cout << "\033[32m" << "value    = ko ❌" << std::endl;
            if (v_f.capacity() == v_s.capacity())
                std::cout << "\033[32m" <<  "capacity = ok 👍" << std::endl;
            else
                std::cout << "\033[32m" << "capacity = ko ❌" << std::endl;
            if (v_f.size() == v_s.size())
                std::cout << "size     = ok 👍" << std::endl;
            else
                std::cout << "size     = ko ❌" << std::endl;
            if (diff < s_diff * TIME)
                std::cout << "time     = ok 👍" << std::endl;
            else
                std::cout << "time     = ko ❌" << std::endl;
        }
    }
    {
        std::cout << "\033[31m" << "-----------------erase----------------" << std::endl;
        { 
            std::cout << "========= test 1 =========" << std::endl; // from the begining

            ft::vector<int> v_f(1, 100);
            std::vector<int> v_s(1, 100);


            start = get_time();
            ft::vector<int>::iterator f_it;
            std::vector<int>::iterator s_it;
            f_it = v_f.erase(v_f.begin());
            end = get_time();
            s_start = get_time();
            s_it = v_s.erase(v_s.begin());
            s_end = get_time();

            diff = end - start / CLOCKS_PER_SEC;
            s_diff = s_end - s_start / CLOCKS_PER_SEC;
            if (check_out(v_f, v_s))
                std::cout << "\033[32m" <<  "value    = ok 👍" << std::endl;
            else
                std::cout << "\033[32m" << "value    = ko ❌" << std::endl;
            if (v_f.capacity() == v_s.capacity())
                std::cout << "\033[32m" <<  "capacity = ok 👍" << std::endl;
            else
                std::cout << "\033[32m" << "capacity = ko ❌" << std::endl;
            if (v_f.size() == v_s.size())
                std::cout << "size     = ok 👍" << std::endl;
            else
                std::cout << "size     = ko ❌" << std::endl;
            if (diff < s_diff * TIME)
                std::cout << "time     = ok 👍" << std::endl;
            else
                std::cout << "time     = ko ❌" << std::endl;
            if (f_it == v_f.end() && s_it == v_s.end())
                std::cout << "it       = ok 👍" << std::endl;
            else
                std::cout << "it       = ko ❌" << std::endl;
        }
        { 
            std::cout << "========= test 2 =========" << std::endl; // from the begining

            ft::vector<int> v_f(50, 100);
            std::vector<int> v_s(50, 100);


            start = get_time();
            ft::vector<int>::iterator f_it;
            std::vector<int>::iterator s_it;
            f_it = v_f.erase(v_f.begin());
            end = get_time();
            s_start = get_time();
            s_it = v_s.erase(v_s.begin());
            s_end = get_time();

            diff = end - start / CLOCKS_PER_SEC;
            s_diff = s_end - s_start / CLOCKS_PER_SEC;
            if (check_out(v_f, v_s))
                std::cout << "\033[32m" <<  "value    = ok 👍" << std::endl;
            else
                std::cout << "\033[32m" << "value    = ko ❌" << std::endl;
            if (v_f.capacity() == v_s.capacity())
                std::cout << "\033[32m" <<  "capacity = ok 👍" << std::endl;
            else
                std::cout << "\033[32m" << "capacity = ko ❌" << std::endl;
            if (v_f.size() == v_s.size())
                std::cout << "size     = ok 👍" << std::endl;
            else
                std::cout << "size     = ko ❌" << std::endl;
            if (diff < s_diff * TIME)
                std::cout << "time     = ok 👍" << std::endl;
            else
                std::cout << "time     = ko ❌" << std::endl;
            if (*f_it == *s_it)
                std::cout << "it       = ok 👍" << std::endl;
            else
                std::cout << "it       = ko ❌" << std::endl;
        }
        { 
            std::cout << "=========  test 3 =========" << std::endl; // from the begining

            ft::vector<int> v_f(5, 100);
            std::vector<int> v_s(5, 100);


            start = get_time();
            ft::vector<int>::iterator f_it;
            std::vector<int>::iterator s_it;
            f_it = v_f.erase(v_f.end() - 1);
            end = get_time();
            s_start = get_time();
            s_it = v_s.erase(v_s.end() - 1);
            s_end = get_time();

            diff = end - start / CLOCKS_PER_SEC;
            s_diff = s_end - s_start / CLOCKS_PER_SEC;
            if (check_out(v_f, v_s))
                std::cout << "\033[32m" <<  "value    = ok 👍" << std::endl;
            else
                std::cout << "\033[32m" << "value    = ko ❌" << std::endl;
            if (v_f.capacity() == v_s.capacity())
                std::cout << "\033[32m" <<  "capacity = ok 👍" << std::endl;
            else
                std::cout << "\033[32m" << "capacity = ko ❌" << std::endl;
            if (v_f.size() == v_s.size())
                std::cout << "size     = ok 👍" << std::endl;
            else
                std::cout << "size     = ko ❌" << std::endl;
            if (diff < s_diff * TIME)
                std::cout << "time     = ok 👍" << std::endl;
            else
                std::cout << "time     = ko ❌" << std::endl;
            if (f_it == v_f.end() && s_it == v_s.end())
                std::cout << "it       = ok 👍" << std::endl;
            else
                std::cout << "it       = ko ❌" << std::endl;
        }
        { 
            std::cout << "=========  test 4 =========" << std::endl; // from the begining

            ft::vector<int> v_f(100, 100);
            std::vector<int> v_s(100, 100);


            start = get_time();
            ft::vector<int>::iterator f_it;
            std::vector<int>::iterator s_it;
            f_it = v_f.erase(v_f.begin() + 5);
            end = get_time();
            s_start = get_time();
            s_it = v_s.erase(v_s.begin() + 5);
            s_end = get_time();

            diff = end - start / CLOCKS_PER_SEC;
            s_diff = s_end - s_start / CLOCKS_PER_SEC;
            if (check_out(v_f, v_s))
                std::cout << "\033[32m" <<  "value    = ok 👍" << std::endl;
            else
                std::cout << "\033[32m" << "value    = ko ❌" << std::endl;
            if (v_f.capacity() == v_s.capacity())
                std::cout << "\033[32m" <<  "capacity = ok 👍" << std::endl;
            else
                std::cout << "\033[32m" << "capacity = ko ❌" << std::endl;
            if (v_f.size() == v_s.size())
                std::cout << "size     = ok 👍" << std::endl;
            else
                std::cout << "size     = ko ❌" << std::endl;
            if (diff < s_diff * TIME)
                std::cout << "time     = ok 👍" << std::endl;
            else
                std::cout << "time     = ko ❌" << std::endl;
            if (*f_it ==  *s_it)
                std::cout << "it       = ok 👍" << std::endl;
            else
                std::cout << "it       = ko ❌" << std::endl;
        }
    }
    {
        std::cout << "\033[31m" << "----------------- range input iterator  tests----------------" << std::endl;
        {
            std::istringstream str_f("1 2 3 4 5 6 7");
            std::istreambuf_iterator<char> it_f(str_f), end_f;

            std::istringstream str_s("1 2 3 4 5 6 7");
            std::istreambuf_iterator<char> it_s(str_s), end_s;

            std::cout << "\033[33m" << "range constructor  test :" << std::endl;

            ft::vector<char>    v_f(it_f, end_f);
            std::vector<char>    v_s(it_s, end_s);
            std::cout << "========= test 1=========" << std::endl;
            if (check_out(v_f, v_s))
                std::cout << "\033[32m" <<  "value    = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "value    = ko ❌" << std::endl;
            if (v_f.capacity() == v_s.capacity())
                std::cout << "\033[32m" <<  "capacity = ok 👍" << std::endl;
            else
                std::cout << "\033[31m" << "capacity = ko ❌" << std::endl;
            if (v_f.size() == v_s.size())
                std::cout << "size     = ok 👍" << std::endl;
            else
                std::cout << "size     = ko ❌" << std::endl;
        }  
        
        {
            std::cout << "\033[33m" << "assign  test :" << std::endl;

            std::istringstream str_f("1 2 3 4 5 6 7");
            std::istreambuf_iterator<char> it_f(str_f), end_f;

            std::istringstream str_s("1 2 3 4 5 6 7");
            std::istreambuf_iterator<char> it_s(str_s), end_s;

            ft::vector<char>    v_f;
            std::vector<char>    v_s;

            v_f.assign(it_f, end_f);
            v_s.assign(it_s, end_s);

            std::cout << "========= test 1=========" << std::endl;

            if (check_out(v_f, v_s))
                std::cout << "\033[32m" <<  "value    = ok 👍" << std::endl;
            else
                std::cout << "\033[32m" << "value    = ko ❌" << std::endl;
            if (v_f.capacity() == v_s.capacity())
                std::cout << "\033[32m" <<  "capacity = ok 👍" << std::endl;
            else
                std::cout << "\033[32m" << "capacity = ko ❌" << std::endl;
            if (v_f.size() == v_s.size())
                std::cout << "size     = ok 👍" << std::endl;
            else
                std::cout << "size     = ko ❌" << std::endl;
        }

        
        {
            std::cout << "\033[33m" << "insert  test   :" << std::endl;

            std::istringstream str_f("1 2 3 4 5 6 7");
            std::istreambuf_iterator<char> it_f(str_f), end_f;

            std::istringstream str_s("1 2 3 4 5 6 7");
            std::istreambuf_iterator<char> it_s(str_s), end_s;

            ft::vector<char>    v_f(4, 4);
            std::vector<char>    v_s(4, 4);

            std::cout << "========= test 1=========" << std::endl;

            v_f.insert(v_f.begin(), it_f, end_f);
            v_s.insert(v_s.begin(), it_s, end_s);

        
            if (check_out(v_f, v_s))
                std::cout << "\033[32m" <<  "value    = ok 👍" << std::endl;
            else
                std::cout << "\033[32m" << "value    = ko ❌" << std::endl;
            if (v_f.capacity() == v_s.capacity())
                std::cout << "\033[32m" <<  "capacity = ok 👍" << std::endl;
            else
                std::cout << "\033[32m" << "capacity = ko ❌" << std::endl;
            if (v_f.size() == v_s.size())
                std::cout << "size     = ok 👍" << std::endl;
            else
                std::cout << "size     = ko ❌" << std::endl;
        }

        {
            std::cout << "========= test 2=========" << std::endl;

            std::istringstream str_f("1 2 3 4 5 6 7");
            std::istreambuf_iterator<char> it_f(str_f), end_f;

            std::istringstream str_s("1 2 3 4 5 6 7");
            std::istreambuf_iterator<char> it_s(str_s), end_s;

            ft::vector<char>    v_f;
            std::vector<char>    v_s;

            v_f.insert(v_f.begin(), it_f, end_f);
            v_s.insert(v_s.begin(), it_s, end_s);

        
            if (check_out(v_f, v_s))
                std::cout << "\033[32m" <<  "value    = ok 👍" << std::endl;
            else
                std::cout << "\033[32m" << "value    = ko ❌" << std::endl;
            if (v_f.capacity() == v_s.capacity())
                std::cout << "\033[32m" <<  "capacity = ok 👍" << std::endl;
            else
                std::cout << "\033[32m" << "capacity = ko ❌" << std::endl;
            if (v_f.size() == v_s.size())
                std::cout << "size     = ok 👍" << std::endl;
            else
                std::cout << "size     = ko ❌" << std::endl;
        }

        {
            std::cout << "========= test 3=========" << std::endl;

            std::istringstream str_f("1 2 3 4 5 6 7");
            std::istreambuf_iterator<char> it_f(str_f), end_f;

            std::istringstream str_s("1 2 3 4 5 6 7");
            std::istreambuf_iterator<char> it_s(str_s), end_s;

            ft::vector<char>    v_f;
            std::vector<char>    v_s;

            v_f.reserve(100);
            v_s.reserve(100);

            v_f.insert(v_f.end(), it_f, end_f);
            v_s.insert(v_s.end(), it_s, end_s);

        
            if (check_out(v_f, v_s))
                std::cout << "\033[32m" <<  "value    = ok 👍" << std::endl;
            else
                std::cout << "\033[32m" << "value    = ko ❌" << std::endl;
            if (v_f.capacity() == v_s.capacity())
                std::cout << "\033[32m" <<  "capacity = ok 👍" << std::endl;
            else
                std::cout << "\033[32m" << "capacity = ko ❌" << std::endl;
            if (v_f.size() == v_s.size())
                std::cout << "size     = ok 👍" << std::endl;
            else
                std::cout << "size     = ko ❌" << std::endl;
        }
    }
    {
        {
            std::cout << "\033[31m" << "-----------------iterator tests----------------" << std::endl;
            ft::vector<int> a(50, 10);
            std::vector<int> b(50, 10);
            if (*a.begin() == *b.begin() && &(*a.begin()) == &a[0])
                std::cout << "begin    =  ok 👍" << std::endl;
            else
                std::cout << "begin    = ko ❌" << std::endl; 
            if (a.back() == b.back() && &(a.back()) == &a[a.size() - 1])
                std::cout << "back     =  ok 👍" << std::endl;
            else
                std::cout << "back     = ko ❌" << std::endl; 
            ft::vector<int>::iterator f_it = a.begin();
            std::vector<int>::iterator s_it = b.begin();
            f_it++;
            s_it++;
            if (*f_it == *s_it && &(*f_it) == &a[1])
                std::cout << "it++     =  ok 👍" << std::endl;
            else
                std::cout << "it++     =  ko ❌" << std::endl;
            ++f_it;
            ++s_it++;
            if (*f_it == *s_it && &(*f_it) == &a[2])
                std::cout << "++it     =  ok 👍" << std::endl;
            else
                std::cout << "++it     =  ko ❌" << std::endl;
            f_it--;
            s_it--;
            if (*f_it == *s_it && &(*f_it) == &a[1])
                std::cout << "it--     =  ok 👍" << std::endl;
            else
                std::cout << "it--     =  ko ❌" << std::endl;        
            --f_it;
            --s_it;
            if (*f_it == *s_it && &(*f_it) == &a[0])
                std::cout << "--it     =  ok 👍" << std::endl;
            else
                std::cout << "--it     =  ko ❌" << std::endl;  
            f_it + 4;
            s_it + 4;
            if (*f_it == *s_it)
                std::cout << "it + n   =  ok 👍" << std::endl;
            else
                std::cout << "it + n   =  ko ❌" << std::endl;
            f_it - 4;
            s_it - 4;
            if (*f_it == *s_it && &(*f_it) == &a[0])
                std::cout << "it - n   =  ok 👍" << std::endl;
            else
                std::cout << "it - n   =  ko ❌" << std::endl;
            if (*(4 + f_it) == *(4 + s_it))
                std::cout << "n + it   =  ok 👍" << std::endl;
            else
                std::cout << "n + it   =  ko ❌" << std::endl;
            ft::vector<hamza> t;
            t.push_back(hamza(100));
            ft::vector<hamza>::iterator f_v = t.begin();
            std::vector<hamza> v;
            v.push_back(hamza(100));
            std::vector<hamza>::iterator s_v = v.begin();
            if (f_v->s == s_v->s)
                std::cout << "->       =  ok 👍" << std::endl;
            else
                std::cout << "->       =  ko ❌" << std::endl;
        }
    }
    {
        {
            std::cout << "\033[31m" << "-----------------reverse iterator tests----------------" << std::endl;
            ft::vector<int> a;
            a.push_back(1);
            a.push_back(2);
            a.push_back(3);
            a.push_back(4);
            a.push_back(5);
            a.push_back(6);
            a.push_back(7);
            a.push_back(8);
            a.push_back(9);
            a.push_back(10);
            std::vector<int> b;
            b.push_back(1);
            b.push_back(2);
            b.push_back(3);
            b.push_back(4);
            b.push_back(5);
            b.push_back(6);
            b.push_back(7);
            b.push_back(8);
            b.push_back(9);
            b.push_back(10);
            if (*a.rbegin() == *b.rbegin() && &(*a.rbegin()) == &a[a.size() - 1])
                std::cout << "begin    =  ok 👍" << std::endl;
            else
                std::cout << "begin    = ko ❌" << std::endl;  
            ft::vector<int>::reverse_iterator f_it = a.rend();
            std::vector<int>::reverse_iterator s_it = b.rend();
            f_it--;
            s_it--;
            if (*f_it == *s_it)
                std::cout << "it--     =  ok 👍" << std::endl;
            else
                std::cout << "it--     =  ko ❌" << std::endl;
            --f_it;
            --s_it;
            if (*f_it == *s_it)
                std::cout <<"--it     =  ok 👍" << std::endl;
            else
                std::cout << "--it     =  ko ❌" << std::endl;
            if (*(++f_it) == *(++s_it))
                std::cout << "it++     =  ok 👍" << std::endl;
            else
                std::cout << "it++     =  ko ❌" << std::endl;        
            f_it - 1;
            s_it - 1;
            if (*f_it == *s_it)
                std::cout << "it - n   =  ok 👍" << std::endl;
            else
                std::cout << "it - n   =  ko ❌" << std::endl;
            f_it + 1;
            s_it + 1;
            if (*f_it == *s_it)
                std::cout << "it + n   =  ok 👍" << std::endl;
            else
                std::cout << "it + n   =  ko ❌" << std::endl;
        }
    }
    {
        std::cout << "\033[31m" << "-----------------iterator comparison tests----------------" << std::endl;
        {
            ft::vector<int> a;
            for(int i = 0; i < 1000; i++){
                a.push_back(i);
            }
            ft::vector<int>::iterator it = a.begin();
            ft::vector<int>::const_iterator cit = a.begin();
            std::cout << "\033[32m" << "operator(==) = ";
            if (it == cit)
                std::cout << "\033[32m" << "ok, ";
            else
                std::cout << "\033[31m" << "ko, ";
            if (cit == it)
                std::cout << "\033[32m" << "ok, ";
            else
                std::cout << "\033[31m" << "ko, ";
            if (it == it)
                std::cout << "\033[32m" << "ok" << std::endl;
            else
                std::cout << "ko" << std::endl;
            std::cout << "operator(!=) = ";
            if (it != a.end())
                std::cout << "\033[32m" << "ok, ";
            else
                std::cout << "\033[31m" << "ko, ";
            if (cit != a.end())
                std::cout << "\033[32m" << "ok, ";
            else
                std::cout << "\033[31m" << "ko, ";
            it = a.end();
            if (it != cit)
                std::cout << "\033[32m" << "ok" << std::endl;
            else
                std::cout << "\033[31m" << "ko" << std::endl;
            it = a.begin();
            std::cout << "operator(<) = ";
            if (it < it + 1)
                std::cout << "\033[32m" << "ok, ";
            else
                std::cout << "\033[31m" << "ko, ";
            if (cit < 1 + cit)
                std::cout << "\033[32m" << "ok, ";
            else
                std::cout << "\033[31m" << "ko, ";
            if (it < cit + 1)
                std::cout << "\033[32m" << "ok" << std::endl;
            else
                std::cout << "\033[31m" << "ko" << std::endl;
            std::cout << "operator(<=) = ";
            if (it <= it + 1)
                std::cout << "\033[32m" << "ok, ";
            else
                std::cout << "\033[31m" << "ko, ";
            if (it <= cit)
                std::cout << "\033[32m" << "ok, ";
            else
                std::cout << "\033[31m" << "ko, ";
            if (cit <= 1 + cit)
                std::cout << "\033[32m" << "ok, ";
            else
                std::cout << "\033[31m" << "ko, ";
            if (it <= cit + 1)
                std::cout << "\033[32m" << "ok" << std::endl;
            else
                std::cout << "\033[31m" << "ko" << std::endl;
            std::cout << "operator(>) = ";
            if (it + 1 > it)
                std::cout << "\033[32m" << "ok, ";
            else
                std::cout << "\033[31m" << "ko, ";
            if (1 + cit >  cit)
                std::cout << "\033[32m" << "ok, ";
            else
                std::cout << "\033[31m" << "ko, ";
            if (it  + 1 > cit)
                std::cout << "\033[32m" << "ok" << std::endl;
            else
                std::cout << "\033[31m" << "ko" << std::endl;
            std::cout << "operator(=>) = ";
            if (it + 1 >= it)
                std::cout << "\033[32m" << "ok, ";
            else
                std::cout << "\033[31m" << "ko, ";
            if (1 + cit >=  cit)
                std::cout << "\033[32m" << "ok, ";
            else
                std::cout << "\033[31m" << "ko, ";
            if (it >= cit)
                std::cout << "\033[32m" << "ok" << std::endl;
            else
                std::cout << "\033[31m" << "ko" << std::endl;
        }
    }
    {
        std::cout << "\033[31m" << "-----------------reverse_iterator comparison tests----------------" << std::endl;
        {
            ft::vector<int> a;
            for(int i = 0; i < 1000; i++){
                a.push_back(i);
            }
            ft::vector<int>::reverse_iterator it = a.rend();
            ft::vector<int>::const_reverse_iterator cit = a.rend();
            std::cout << "\033[32m" << "operator(==) = ";
            if (it == cit)
                std::cout << "\033[32m" << "ok, ";
            else
                std::cout << "\033[31m" << "ko, ";
            if (cit == it)
                std::cout << "\033[32m" << "ok, ";
            else
                std::cout << "\033[31m" << "ko, ";
            if (it == it)
                std::cout << "\033[32m" << "ok" << std::endl;
            else
                std::cout << "ko" << std::endl;
            std::cout << "operator(!=) = ";
            if (it != a.rend())
                std::cout << "\033[32m" << "ko, ";
            else
                std::cout << "\033[32m" << "ok, ";
            if (cit != a.rend())
                std::cout << "\033[31m" << "ko, ";
            else
                std::cout << "\033[32m" << "ok, ";
            it = a.rend();
            if (it != cit)
                std::cout << "\033[31m" << "ko" << std::endl;
            else
                std::cout << "\033[32m" << "ok" << std::endl;
            it = a.rbegin();
            std::cout << "operator(<) = ";
            if (it < it + 1)
                std::cout << "\033[32m" << "ok, ";
            else
                std::cout << "\033[31m" << "ko, ";
            if (cit < 1 + cit)
                std::cout << "\033[32m" << "ok, ";
            else
                std::cout << "\033[31m" << "ko, ";
            if (it < cit + 1)
                std::cout << "\033[32m" << "ok" << std::endl;
            else
                std::cout << "\033[31m" << "ko" << std::endl;
            std::cout << "operator(<=) = ";
            if (it <= it + 1)
                std::cout << "\033[32m" << "ok, ";
            else
                std::cout << "\033[31m" << "ko, ";
            if (it <= cit)
                std::cout << "\033[32m" << "ok, ";
            else
                std::cout << "\033[31m" << "ko, ";
            if (cit <= 1 + cit)
                std::cout << "\033[32m" << "ok, ";
            else
                std::cout << "\033[31m" << "ko, ";
            if (it <= cit + 1)
                std::cout << "\033[32m" << "ok" << std::endl;
            else
                std::cout << "\033[31m" << "ko" << std::endl;
            std::cout << "operator(>) = ";
            if (it + 1 > it)
                std::cout << "\033[32m" << "ko, ";
            else
                std::cout << "\033[31m" << "ok, "; 
            if (1 + cit >  cit)
                std::cout << "\033[32m" << "ok, ";
            else
                std::cout << "\033[31m" << "ko, ";
            if (it  + 1 > cit)
                std::cout << "\033[31m" << "ko" << std::endl;
            else
                std::cout << "\033[32m" << "ok" << std::endl;
            std::cout << "operator(=>) = ";
            if (it + 1 >= it)
                std::cout << "\033[32m" << "ok, ";
            else
                std::cout << "\033[31m" << "ko, ";
            if (1 + cit >=  cit)
                std::cout << "\033[32m" << "ok, ";
            else
                std::cout << "\033[31m" << "ko, ";
            if (it >= cit)
                std::cout << "\033[31m" << "ko" << std::endl;
            else
                std::cout << "\033[32m" << "ok" << std::endl;
        }
    }
}
