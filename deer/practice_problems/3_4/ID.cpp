#include <bits/stdc++.h>
using namespace std;

struct data_t {
    int pref;
    int year;
    int index;
    string ID_pref;
    string ID_rank;
};

string formatID(int IDNum) {
    string IDStr = to_string(IDNum);
    while (IDStr.size() < 6) {// 6桁未満のとき
        IDStr = "0" + IDStr; // 0を左に追加
    }
    return IDStr;
}

int main(void) {
    // inputs
    int n, m;
    cin >> n >> m;
    vector<data_t> IDs(m);
    vector<priority_queue<int>> PQs(n);
    for(int i = 0; i < m; i++) {
        int prefInput, yearInput;
        cin >> prefInput >> yearInput;
        IDs.at(i).pref = prefInput;
        IDs.at(i).year = yearInput;
        IDs.at(i).index = i; // indexを保存
        IDs.at(i).ID_pref = formatID(prefInput); // IDの上6桁 P_i
        PQs.at(prefInput - 1).push(yearInput); // PQ[pref]に値を追加
    }

    sort(IDs.begin(), IDs.end(), [](const data_t &a, const data_t &b){return a.year > b.year;}); // IDsをyearの降順でソート

    for(int j = 0; j < m; j++) {
        IDs.at(j).ID_rank = formatID(PQs.at(IDs.at(j).pref - 1).size());
        PQs.at(IDs.at(j).pref - 1).pop();
    }
    
    sort(IDs.begin(), IDs.end(), [](const data_t &a, const data_t &b){return a.index < b.index;}); // IDsをindexの昇順でソート
    
    // outputs
    // すべてのID
    for(int k = 0; k < m; k++) {
        cout << IDs.at(k).ID_pref + IDs.at(k).ID_rank << endl;
    }
    return 0;
}