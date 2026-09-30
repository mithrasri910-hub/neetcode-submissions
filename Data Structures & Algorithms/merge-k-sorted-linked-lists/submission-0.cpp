class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>nodes;
        for(ListNode* i:lists){
            while(i){
                nodes.push_back(i->val);
                i=i->next;
            } 
        }
        sort(nodes.begin(),nodes.end());
        ListNode* res= new ListNode;
        ListNode* cur=res;
        for(int j:nodes){
            cur->next= new ListNode(j);
            cur=cur->next;
        }
        return res->next;
    }
};
