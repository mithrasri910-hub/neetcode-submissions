class BrowserHistory {
private:
stack<string>backHistory,frontHistory;
public:
    BrowserHistory(string homepage) {
        backHistory.push(homepage);
    }
    
    void visit(string url) {
        backHistory.push(url);
        frontHistory=stack<string>();
    }
    
    string back(int steps) {
        while(steps-- && backHistory.size()>1){
            frontHistory.push(backHistory.top());
            backHistory.pop();
        }
        return backHistory.top();
    }
    
    string forward(int steps) {
        while(steps-- && !frontHistory.empty()){
            backHistory.push(frontHistory.top());
            frontHistory.pop();
        }
        return backHistory.top();
    }
};