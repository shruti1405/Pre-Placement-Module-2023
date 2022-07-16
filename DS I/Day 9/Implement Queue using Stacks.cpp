class MyQueue 
{   std::stack<int> m_normal;
    std::stack<int> m_reversed;
    
public:
    
    MyQueue() {}
    
    void push(int x)
    {
            m_normal.push(x);
    }
    
    int pop() 
    {
        if(m_reversed.empty())
        {
            while(!m_normal.empty())
            {
                m_reversed.push(m_normal.top());
                m_normal.pop();
            }
        }
        int top = m_reversed.top();
        m_reversed.pop();
            
        return top;
    }
    
   int peek() 
   {
     if(m_reversed.empty())
        {
            while(!m_normal.empty())
            {
                m_reversed.push(m_normal.top());
                m_normal.pop();
            }
        }
        
        return m_reversed.top();
    }
    
    bool empty() 
    {
            return m_normal.empty() and m_reversed.empty();
    }
};