class Solution {
public:
    int mostBooked(int n, vector<vector<int>>& meetings) {
        sort(meetings.begin(), meetings.end());
        priority_queue<int, vector<int>, greater<int>> availableRooms;
        for (int i = 0; i < n; i++) {
            availableRooms.push(i);
        }

        priority_queue<
        pair<long long, int>, 
        vector<pair<long long, int>>,
        greater<pair<long long, int>>
        > busyRooms;

        vector<int> count(n, 0);

        for (auto& m : meetings) {
            long long start = m[0];
            long long end = m[1];
            long long duration = end - start;
            
            //free rooms that are available 
            while (!busyRooms.empty() && busyRooms.top().first <= start) {
                availableRooms.push(busyRooms.top().second);
                busyRooms.pop();
            }

            if (!availableRooms.empty()) {
                //assign room
                int room = availableRooms.top();
                availableRooms.pop();
                busyRooms.push({end, room});
                count[room]++;
            } else {
                //delay
                auto [earliestEnd, room] = busyRooms.top();
                busyRooms.pop();

                long long newEnd = earliestEnd + duration;
                busyRooms.push({newEnd, room});
                count[room]++;
            }
        }

        int answer = 0;
        for (int i = 0; i < n; i++) {
            if (count[i] > count[answer]) {
                answer = i;
            }
        }
        return answer;
    }
};