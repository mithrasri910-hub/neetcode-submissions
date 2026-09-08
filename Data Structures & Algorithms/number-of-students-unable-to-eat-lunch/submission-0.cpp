class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q;
        for (int s : students) q.push(s);

        int i = 0; // sandwich index
        int count = 0; // count of rotations without success

        while (!q.empty() && count < q.size()) {
            if (q.front() == sandwiches[i]) {
                q.pop();
                i++;
                count = 0; // reset since someone ate
            } else {
                q.push(q.front());
                q.pop();
                count++; // one failed attempt
            }
        }
        return q.size(); // remaining students
    }
};