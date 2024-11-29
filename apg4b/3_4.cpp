#include <bits/stdc++.h>
using namespace std;

// 以下に、24時間表記の時計構造体 Clock を定義する

// Clock構造体のメンバ変数を書く
//   int hour    時間を表す (0~23の値をとる)
//   int minute  分を表す   (0~59の値をとる)
//   int second  秒を表す   (0~59の値をとる)

// メンバ関数 set の定義を書く
//   関数名: set
//   引数: int h, int m, int s (それぞれ時、分、秒を表す)
//   返り値: なし
//   関数の説明:
//     時・分・秒を表す3つの引数を受け取り、
//     それぞれ、メンバ変数 hour, minute, second に代入する

// メンバ関数 to_str の定義を書く
//   関数名: to_str
//   引数: なし
//   返り値: string型
//   関数の仕様:
//     メンバ変数が表す時刻の文字列を返す
//     時刻の文字列は次のフォーマット
//     "HH:MM:SS"
//     HH、MM、SSはそれぞれ時間、分、秒を2桁で表した文字列

// メンバ関数 shift の定義を書く
//   関数名: shift
//   引数: int diff_second
//   返り値: なし
//   関数の仕様:
//     diff_second 秒だけメンバ変数が表す時刻を変更する(ただし、日付やうるう秒は考えない)
//     diff_second の値が負の場合、時刻を戻す
//     diff_second の値が正の場合、時刻を進める
//     diff_second の値は -86400 ~ 86400 の範囲を取とりうる

struct Clock {
    // メンバ変数
    unsigned int hour;
    unsigned int minute;
    unsigned int second;
    // メンバ関数
    void set(int h, int m, int s) {
        hour = h;
        minute = m;
        second = s;
    }
    string to_str(void) {
        string h_str, m_str, s_str;

        h_str = to_string(hour);
        m_str = to_string(minute);
        s_str = to_string(second);
        // 1桁の場合
        if(hour < 10) h_str = "0" + h_str;
        if(minute < 10) m_str = "0" + m_str;
        if(second < 10) s_str = "0" + s_str;
        return h_str + ":" + m_str + ":" + s_str;
    }
    void shift(int diff_second) {
        queue<int> q; // 商を格納するキュー
        bool is_negative_number = false; // diff_secondは負か

        // 扱いやすいようにdiff_secondを正の数に直す
        if(diff_second < 0) {
            is_negative_number = true;
            diff_second = -diff_second;
        }
        // 商の保存
        q.push(diff_second / 3600); // 時間
        q.push((diff_second / 60) % 60); // 分
        q.push(diff_second % 60); // 秒
        // shift量の決定
        int new_hour = hour;
        int new_minute = minute;
        int new_second = second;

        if(is_negative_number) { // diff_secondが負
            new_hour -= q.front(); q.pop();
            new_minute -= q.front(); q.pop();
            new_second -= q.front(); q.pop();
            // シフトによるシフトに対応するため、秒→分→時間の順
            if(new_second < 0) {
                new_minute--;
                new_second += 60;
            }
            if(new_minute < 0) {
                new_hour--;
                new_minute += 60;
            }
            if(new_hour < 0) {
                new_hour += 24;
            }
        } else { // diff_secondが正
            new_hour += q.front(); q.pop();
            new_minute += q.front(); q.pop();
            new_second += q.front();q.pop();
            if(new_second > 59) {
                new_minute++;
                new_second -= 60;
            }
            if(new_minute > 59) {
                new_hour++;
                new_minute -= 60;
            }
            if(new_hour > 23) {
                new_hour -= 24;
            }
        }
        // 値の更新
        hour = new_hour;
        minute = new_minute;
        second = new_second;
    }
};

// -------------------
// ここから先は変更しない
// -------------------

int main() {
    // 入力を受け取る
    int hour, minute, second;
    cin >> hour >> minute >> second;
    int diff_second;
    cin >> diff_second;

    // Clock構造体のオブジェクトを宣言
    Clock clock;

    // set関数を呼び出して時刻を設定する
    clock.set(hour, minute, second);

    // 時刻を出力
    cout << clock.to_str() << endl;

    // 時計を進める(戻す)
    clock.shift(diff_second);

    // 変更後の時刻を出力
    cout << clock.to_str() << endl;
}