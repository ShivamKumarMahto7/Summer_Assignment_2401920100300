class RecentCounter {
public:
    vector<int> v;
    RecentCounter() {
    }

    int ping(int t) {
        v.push_back(t);

        int i = 0;
        while (v[i] < t - 3000) {
            i++;
        }

        return v.size() - i;
    }
};
