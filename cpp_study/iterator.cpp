using namespace std;

#include <iostream>
#include <string>
#include <deque>

namespace jim_study
{
    class test
    {
        public : int index;
        public : int value;
        public : string name;
        
        public : test(int a, int b, string name)
        {
            this->index = a;
            this->value = b;
            this->name = name;
        }
    }; 

    void dequeue_test(void)
    {
        int index = 0;
        deque <test *, allocator<test *> > test_queue;
        deque <test *> :: iterator test_queue_it;

        for (index = 0; index < 10; index ++)
        {
            test * t = new test(index, index, "test");
            test_queue.push_back(t);
        }
        
        for ( test_queue_it = test_queue.begin(); test_queue_it != test_queue.end(); test_queue_it++ )
        {
           cout << (*test_queue_it)->index << " "
                << (*test_queue_it)->value << " "
                << (*test_queue_it)->name << endl;
           
        }
        return;
    }
    
}

int main(int argc, const char * argv[])
{
    cout << "Hello" << endl;
    jim_study :: dequeue_test();
    return 0;
}


