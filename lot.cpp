 vector<int> levelOrder(Node* node)
    {
        vector<int> v;
        queue<Node*> q;
        q.push(node);
        while(!q.empty())
        {
            int sz=q.size();
            for(int i=0;i<sz;i++)
            {
                Node* temp=q.front();
                q.pop();
                v.push_back(temp->data);
                if(temp->left!=nullptr)
                {
                    q.push(temp->left);
                }
                if(temp->right!=nullptr)
                {
                    q.push(temp->right);
                }
            }
            
        }
        return v;
    }
