# 困ったときの為のTips

## マークダウン方式(md)について

[参考](https://qiita.com/Qiita/items/c686397e4a0f4f11683d#links---%E3%83%AA%E3%83%B3%E3%82%AF "Markdown記法 チートシート")<br>
__※一部の記法はGitHubに対応していないので注意__
<details><summary>コード</summary>

### コードブロック

「c」のコードをファイル名「sample.c」で表示したいときは __バッククオート(__  `` ` ``  __)__ または __チルダ(__ `~` __)__ を使い、以下のようにする。

````
```c:sample.c
#include <stdio.h>touch
int main() {
    printf(Hello, world!\n);
    return 0;
}
```
````

### インライン表示

コードをインライン表示したいときは `` `printf(Hello, world!);` `` のようにする。

### Diff

Diffを用いる場合は、各シンタックスに新たに `diff_*` という名前をつけ、行の先頭に `-, +` を追加する。

```diff_c++
#include <stdio.h>
int main() {
- printf("hello, world!");
+ printf("Hello, world!");
    return 0;
}
```

</details>

<details><summary>テキストの装飾</summary>

### 強調・強勢

 `_` か `*` で囲むとHTMLのemタグになる。GitHubでは *italic type* 。<br>
 `__` か `**` で囲むとHTMLのstrongタグになる。GitHubでは __太字__ 。

### 打消し線

打消し線を使うには、`~~` で囲む。 ~~ 打消し ~~
:::note warn
GitHubでは打消し線が反映されない可能性あり。
:::

### 折りたたみ

HTMLの詳細折りたたみ要素を使える。 `details` タグで囲む。要約として表示したい文章は `summary` タグで記載。<br>
 `open` 属性をつけると折りたたみを広げた状態にできる。
:::note warn
HTMLタグの下には空行が必要。
:::
<details open><summary>サンプル</summary>

これはサンプルの中身です。
</details>

### 改行

改行するには、HTMLタグの `<br>` を用いるか、空行を一行つくる。

### Note

目を引く形で補足説明をしたい場合、 `:::note * :::` で囲む。<br>
 `*` は `info` , `warn` , `alert` の3種類。また、`:::note *` と `:::` は別の行にする必要がある。
</details>

<details><summary>リスト</summary>

### 順序無しリスト
文頭に `*` を置く。

### 数字付きリスト
文頭に `1. ` のように `数字とドット` を置く。
<br>

ドットの次には半角スペースが必要。
</details>

<details><summary>引用</summary>

文頭に `>` を置く。
<br>
複数行にまたがる場合、改行のたびにこの記号を置く必要がある。
<br>
引用の上下には空行がないと正しく表示されない。
<br>
例

> これは引用の例です。
</details>

<details><summary>リンク</summary>

タイトル (リンク上にマウスホバーすることで表示される) 付きのリンク

````md
[リンクテキスト](URL "タイトル")
"タイトル"はオプション
````

結果
<br>

[リンクテキスト](http://qiita.com "タイトル")

</details>

<details><summary>画像埋め込み</summary>
タイトル有の画像を埋め込む
<br>

```md
![代替テキスト](画像のURL "画像タイトル")
```
![代替テキスト](https://external-content.duckduckgo.com/iu/?u=https%3A%2F%2Ftse3.mm.bing.net%2Fth%3Fid%3DOIP.1TvSemgKVDJn8obvK6lNSAHaHa%26pid%3DApi&f=1&ipt=c0f4418824d18ca7d5dcd61d96b9deb8c159c9ae189153c83400bc9d04cc3ef2&ipo=images "画像タイトル")

</details>

<details><summary>テーブル</summary>

#### 視覚的な記述

```md
| Left align | Right align | Center align |
|:-----------|------------:|:------------:|
| This       | This        | This         |
| column     | column      | column       |
| will       | will        | will         |
| be         | be          | be           |
| left       | right       | center       |
| aligned    | aligned     | aligned      |
```

結果

| Left align | Right align | Center align |
|:-----------|------------:|:------------:|
| This       | This        | This         |
| column     | column      | column       |
| will       | will        | will         |
| be         | be          | be           |
| left       | right       | center       |
| aligned    | aligned     | aligned      |

テーブル内で `|` を使いたい場合は `\|` と入力
<br>

#### HTMLによる記述

```HTML
<table>
    <caption>HTMLの要素</caption>
    <thead>
        <tr>
            <th>名前</th> <th>説明</th>
        </tr>
    </thead>
    <tr>
        <td> table </td> <td>テーブル</td>
    </tr>
    <tr>
        <td> caption </td> <td>テーブルのキャプション</td>
    </tr>
</table>
```

結果
<table>
    <caption>HTMLの要素</caption>
    <thead>
        <tr>
            <th>名前</th> <th>説明</th>
        </tr>
    </thead>
    <tr>
        <td> table </td> <td>テーブル</td>
    </tr>
    <tr>
        <td> caption </td> <td>テーブルのキャプション</td>
    </tr>
</table>

</details>

<details><summary>数式の挿入</summary>

コードブロックに `math` と言語指定して、TeX記法を用いて記述できる
````
```math
\left( \sum_{k=1}^n a_k b_k \right)^{\!\!2} \leq
\left( \sum_{k=1}^n a_k^2 \right) \left( \sum_{k=1}^n b_k^2 \right)
```
````
結果
```math
\left( \sum_{k=1}^n a_k b_k \right)^{\!\!2} \leq
\left( \sum_{k=1}^n a_k^2 \right) \left( \sum_{k=1}^n b_k^2 \right)
```
 `$` で挟むとインライン表示
```
x^2 + y^2 = 1 をインライン表示すると $x^2 + y^2 = 1$ になります。
```
結果
x^2 + y^2 = 1 をインライン表示すると $x^2 + y^2 = 1$ になります。

</details>

## C++

<details><summary>型</summary>

### 各型の範囲
<table>
    <thead>
        <tr>
            <th style="text-align: center;"> int </th> <th style="text-align: center;"> int64_t </th>
        </tr>
    </thead>
    <tr>
        <td style="text-align: center;"> -2147483648 </td> <td style="text-align: center;"> -9223372036854775808 </td>
    </tr>
    <tr>
        <td style="text-align: center;"> 2147483647 </td> <td style="text-align: center;"> 9223372036854775807 </td>
    </tr>
</table>

また、符号付正数型や符号無し整数型、小数型の使用メモリ一覧を示す。
<table>
    <thead>
        <tr>
            <th> 型 </th> <th> メモリ量 (bit) </th>
        </tr>
    </thead>
    <tr>
        <td> signed char </td> <td> 8 </td>
    </tr>
    <tr>
        <td> short </td> <td> 16  </td>
    </tr>
    <tr>
        <td> int </td> <td> 32 </td>
    </tr>
    <tr>
        <td> long long </td> <td> 64 </td>
    </tr>
    <tr>
        <td> int8_t </td> <td> 8 </td>
    </tr>
    <tr>
        <td> int16_t </td> <td> 16 </td>
    </tr>
    <tr>
        <td> int32_t </td> <td> 32 </td>
    </tr>
    <tr>
        <td> int64_t </td> <td> 64 </td>
    </tr>
    <tr>
        <td> unsigned char </td> <td> 8 </td>
    </tr>
    <tr>
        <td> unsigned short </td> <td> 16 </td>
    </tr>
    <tr>
        <td> unsigned int </td> <td> 32 </td>
    </tr>
    <tr>
        <td> unsigned long long </td> <td> 64 </td>
    </tr>
    <tr>
        <td> uint8_t </td> <td> 8 </td>
    </tr>
    <tr>
        <td> uint16_t </td> <td> 16 </td>
    </tr>
    <tr>
        <td> uint32_t </td> <td> 32 </td>
    </tr>
    <tr>
        <td> uint64_t </td> <td> 64 </td>
    </tr>
    <tr>
        <td> float </td> <td> 32 </td>
    </tr>
    <tr>
        <td> double </td> <td> 64 </td>
    </tr>
</table>


### 型の指定
プログラム中に直接 `10LL` のように `LL` を付け足して書くと、 `int64_t` として扱う。

### 出力
除算演算子 `/` は、int型の場合小数点以下切り捨てのため、割り算は後にやった方がよい
<br>

double型などは、普通に出力すると適当に四捨五入される。
<br>

 `cout << fixed << setprecision(桁数)` と書くことで、小数点以下の桁数を指定可能。
<br>

#### 情報落ち
double型では約16桁までの数字の並びを保持できるので、それを越える小数を正確に扱えない。
差が極端に大きい2つの数を足すと、桁が消える場合がある。
```c++
double x = 1000000000;
double y = 0.000000001;

// 1000000000.000000001 を表現するには19桁分必要 → 扱えない
double z = x + y;  // yの分が消えてしまう

cout << fixed << setprecision(16);
cout << "x: " << x << endl;
cout << "y: " << y << endl;
cout << "z: " << z << endl;
```
実行結果
```
x: 1000000000.0000000000000000
y: 0.0000000010000000
z: 1000000000.0000000000000000
```
小さい数から順に足すことで、情報落ちの影響を減らせる。

#### 桁落ち
差が極端に小さい2つの数を引くと、桁が消える場合がある。
<table>
    <thead>
        <tr>
            <th></th> <th style="text-align: center;"> 実際の値 </th> <th style="text-align: center;"> コンピュータ上での値 </th>
        </tr>
    </thead>
    <tr>
        <td> x </td> <td> 0.1234567890123... </td> <td> 0.123456 </td>
    </tr>
    <tr>
        <td> y </td> <td> 0.12334567889012... </td> <td> 0.123345 </td>
    </tr>
    <tr>
        <td> x - y </td> <td> 0.000111111111... </td> <td> 0.000111 </td>
    </tr>
</table>

引き算を行う際にはなるべく差が大きくなるように計算順序を工夫したり、そもそも引き算をなるべく行わないように工夫する必要がある。

#### printf関数でのフォーマット指定子
<table>
    <thead>
        <tr>
            <th> 型 </th> <th> フォーマット指定子 </th>
        </tr>
    </thead>
    <tr>
        <td> int </td> <td> %d </td>
    </tr>
    <tr>
        <td> int64_t </td> <td> %ld (%lld)  </td>
    </tr>
    <tr>
        <td> double </td> <td> %lf </td>
    </tr>
    <tr>
        <td> char </td> <td> %c </td>
    </tr>
</table>

> 32ビットシステム上でint64_tをprintfで出力する場合、フォーマット指定子は `%lld` とする必要がある。

### 型の変換
 `(型)変数` でキャストが可能。
<br>

double型→int型は小数点以下切り捨てとなる。
<br>

int型→string型のような数値型以外への変換は基本的にはできない。
#### 文字列との変換
 `文字列変数 = to_string(数値変数)` で数値を文字列に変換する。
<br>

 `数値変数 = soit(文字列変数)` で逆の操作。
<br>

文字列からの変換の対応表を示す。
<table>
    <thead>
        <tr>
            <th> 型 </th> <th> 関数 </th>
        </tr>
    </thead>
    <tr>
        <td> int </td> <td> stoi </td>
    </tr>
    <tr>
        <td> int64_t </td> <td> stoll  </td>
    </tr>
    <tr>
        <td> double </td> <td> stod </td>
    </tr>
</table>

#### 暗黙的な数値型同士の変換
<table>
    <thead>
        <tr>
            <th style="text-align: center;"> 型の組 </th> <th style="text-align: center;"> 計算結果の型 </th>
        </tr>
    </thead>
    <tr>
        <td> int, double </td> <td> double </td>
    </tr>
    <tr>
        <td> int, int64_t </td> <td> int64_t </td>
    </tr>
    <tr>
        <td> double, int64_t </td> <td> double </td>
    </tr>
</table>
</details>

<details><summary>文字列</summary>

### 宣言
 `string S`
<br>
<br>

### 入力
 `cin >> S;` 
<br>
<br>

### アクセス
 `S.at(i)` 
> 範囲外アクセスに注意
<br>
<br>

</details>

<details><summary>switch文</summary>

#### エラーの原因？
各caseは `{` `}` で囲んであげるとエラーを吐かない場合がある。
```c++
switch(x) {
    case a: {
        ...
        break;
    } case b: {
        ...
        break;
    } default: {
        ...
    }
}
```
</details>

<details><summary>配列</summary>

配列の型を配列にするイメージで、多次元配列を実現できる
<br>

2次元配列は2次元の表を扱うときに便利
<br>

### 宣言
```c++
vector<要素の型> 変数名(要素数, 初期値)
vector<vector<要素の型>> 変数名(要素数1, vector<要素の型>(要素数2, 初期値))
```
<br>

初期値は省略可能
<br>

`変数名.at(i).at(j)`でi行目j列目へアクセスできる
<br>

`変数名.size()`で縦の大きさを取得できる
<br>

`変数名.at(0).size()`で横の大きさを取得できる
<br>

### 値を追加/削除
`配列変数.push_back(x)`で配列の末尾に要素 (x) を追加できる<br>
`配列変数.pop_back()` で配列の末尾の要素を削除できる
<br>

### 簡易ソート
 `sort(vec.begin(), vec.end())` で昇順にソート<br>
 `reverse(vec.begin(), vec.end())` で逆順に
<br>

`size_t` 型は符号無し整数型なので、以下のプログラムは意図した挙動とならない。
```c++
vector<int> data(0);  // サイズ0
cout << data.size() - 1 << endl;  // -1ではなく、オーバーフローを起こす

// 配列のサイズ-1回だけループしたい
for (int i = 0; i < data.size() - 1; i++) {
    cout << i << endl;
}
```
実行結果
```
18446744073709551615
0
1
2
3
4
5
6
7
8
(省略)
```
配列のサイズ-1回だけループしたい場合は、次のようにsize()の結果を __符号付きにキャスト__ する必要がある。
```c++
// 配列のサイズ-1回のループ(ただし、空の場合はループ内は実行されない)
for (int i = 0; i < (int)配列.size() - 1; i++) {
    // 適当な処理
}
```
</details>

<details><summary>参照</summary>

### 参照の宣言

````c++
int a = 0;
int &b = a;
````

### 参照渡しの利点

#### 関数の結果を複数返したい場合

```c++
#include <bits/stdc++.h>
using namespace std;

// a,b,cの最大値、最小値をそれぞれminimumの参照先、maximumの参照先に代入する
void min_and_max(int a, int b, int c, int &minimum, int &maximum) {
    minimum = min(a, min(b, c));  // 最小値をminimumの参照先に代入
    maximum = max(a, max(b, c));  // 最大値をmaximumの参照先に代入
}

int main() {
    int minimum, maximum;
    min_and_max(3, 1, 5, minimum, maximum);  // minimum, maximumを参照渡し
    cout << "minimum: " <<  minimum << endl;  // 最小値
    cout << "maximum: " <<  maximum << endl;  // 最大値
}

```

min_and_maxから複数の結果 (minimumとmaximum) が返ってきている
<br>
<br>

#### 無駄なコピーを減らす

````c++
#include <bits/stdc++.h>
using namespace std;

// 配列の先頭100要素の値の合計を計算する (参照渡し)
int sum100(vector<int> &a) {
    int result = 0;
    for (int i = 0; i < 100; i++) {
        result += a.at(i);
    }
    return result;
}

int main() {
    vector<int> vec(10000000, 1);  // すべての要素が1の配列

    // sum100 を500回呼び出す
    for (int i = 0; i < 500; i++) {
        cout << sum100(vec) << endl;  // 参照渡しなので配列のコピーは生じない
    }
}

````

実行結果

````
100
100
100
100
... (500回実行される)
````

実行時間
15 ms
<br>
参照渡しをしなかった場合、1000万要素の配列のコピーが500回生じ、実行時間が数百倍になる
<br>
<br>

#### 範囲for文での参照

````c++
vector<int> a = {1, 3, 2, 5};
for (int x : a) {
  x = x * 2;
}
// aは{1, 3, 2, 5}のまま
````

````c++
vector<int> a = {1, 3, 2, 5};
for (int &x : a) {
    x = x * 2;
}
// aは{2, 6, 4, 10}となる
````

配列の要素を書き換える処理を簡潔に書ける
<br>
<br>

#### 注意点

__参照先の指定して初期化__ する必要がある

````c++
int a = 0;
int &b; // 初期化されていない参照
````

エラー出力

````c++
./Main.cpp: In function ‘int main()’:
./Main.cpp:6:8: error: ‘b’ declared as reference but not initialized
   int &b;
        ^
````

__vectorの要素への参照を生成した後は元のvectorの要素数が変わるような操作を行わない__ ようにしなければならない
<br>

また参照を用いても、 __スコープの制約を越えて変数を使用することはできない__

</details>

<details><summary>再帰関数</summary>

### 再帰関数の実装

例 0 ~ nの総和を計算する

```c++
int sum(int n) {
  // ベースケース
  if (n == 0) {
    return 0;
  }

  // 再帰ステップ
  int s = sum(n - 1);
  return s + n;
}

int main(void) {
    cout << sum(3) << endl;
}
```

#### 1. 「引数」「返り値」「処理内容」を決める

sum関数での例
<table>
    <tr>
        <td>引数 </td> <td> int n (0以上の整数) </td>
    </tr>
    <tr>
        <td> 返り値 </td> <td> 0 ~ nの総和 </td>
    </tr>
    <tr>
        <td> 処理内容 </td> <td> 0 ~ nの総和を計算する </td>
    </tr>
</table>

#### 2. 再帰ステップの実装

「処理内容」を実装するために、「引数を変えて再帰呼び出しした結果」を利用できないかを考える。実装したい処理によって異なる。
<br>
<br>
sum関数での例

```
「0∼nの総和」は「0∼(n−1)の総和」にnを足すことで計算できる。 
ここで「0∼(n−1)の総和」はsum(n - 1)という再帰呼出しによって得られる。
```

#### 3. ベースケースの実装 （再帰呼び出しを行わずに完了できる処理）

まず、どのような場合がベースケースなのか、つまり「再帰呼び出しを行わずに完了できる」かを考える。
<br>
次に、ベースケースをif文で場合分けして、処理を実装する。
<br>
ベースケースは複数あることもあるという点に注意。
<br>
<br>
sum関数での例

```
sum関数は「
0∼nの総和」を計算する関数なので、n == 0の場合はすぐに結果が0だと分かる。従ってこのケースがベースケースに相当する。
```

</details>

<details><summary>構造体</summary>

### 構造体
STLのpair/tupleを拡張したようなもの。
(pair/tupleは構造体を用いて実装されている)

#### 定義
関数の外側、内側どちらにも書ける。
```c++
struct 構造体名 {
  型1 メンバ変数名1
  型2 メンバ変数名2
  型3 メンバ変数名3
  ...(必要な分だけ書く)
};  // ← セミコロンが必要
```
構造体型の値を __オブジェクト__ という
<br>
<br>

#### アクセス
 `オブジェクト.メンバ変数` 
<br>
<br>

### メンバ関数
オブジェクトに関連した処理を行う関数を定義することができる。<br>
使用例
```c++
#include <bits/stdc++.h>
using namespace std;

struct MyPair {
  int x;
  string y;
  // メンバ関数
  void print() {
    // 直接x, yにアクセスできる
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
  }
};

int main() {
  MyPair p = { 12345, "Hello" };
  p.print();  // オブジェクト`p`の`print`を呼び出す

  MyPair q = { 67890, "APG4b" };
  q.print();  // オブジェクト`q`の`print`を呼び出す
}
```

#### 定義
```c++
struct 構造体名 {
  返り値の型 メンバ関数名(引数の型1 引数名1, 引数の型2 引数名2, ...) {
    // 関数の内容
    //   (ここではメンバ変数に直接アクセスすることができる)
  }
};
```

#### アクセス
 `オブジェクト.メンバ関数(引数1, 引数2, ...)`
<br>
<br>

### コンストラクタ
オブジェクトが作られるときに行う独自の初期化処理
<br>
複数定義することができ、与える引数の型や引数の個数によって自動的に呼び分けることができる。

#### 定義
```c++
struct 構造体名 {
  // コンストラクタ
  構造体名(引数1の型 引数1の名前, 引数2の型 引数2の名前, ...) {
    // コンストラクタの内容
  }
};
```

コンストラクタが引数を取る場合、次のようにオブジェクトの宣言時にコンストラクタの引数に対応する値を渡す必要がある。
<br>

`構造体名 オブジェクト名(引数1, 引数2, 引数3, ...);`
<br>
<br>

### コピーコンストラクタ
関数の引数としてオブジェクトを渡す場合などの条件を満たした場合には、 __コピーコンストラクタ__ という特殊なコンストラクタが呼ばれる。
<br>

コピーコンストラクタを定義しなかった場合には、 「全てのメンバ変数をそのままコピーして新しいオブジェクトを作る」 という動作をするコピーコンストラクタが __自動的__ に作られるので、 ただコピーしたいだけならコピーコンストラクタを自分で書く必要はない。

#### 条件
* 関数の引数としてオブジェクトを渡した場合
* オブジェクトを宣言する際にMyStruct new_obj = old_obj;で初期化する場合
* オブジェクトを宣言する際にMyStruct new_obj(old_obj);の形で初期化する場合
* など

#### 定義
```c++
struct 構造体名 {
  // コピーコンストラクタ
  構造体名(const 構造体名 &old) {
    // コンストラクタの内容
    // (oldの内容を使って初期化などを行う)
  }
};
```
使用例
```c++
#include <bits/stdc++.h>
using namespace std;

struct MyPair {
  int x;
  string y;
  // コンストラクタ
  MyPair() {
    cout << "normal constructor called" << endl;
  }
  // コピーコンストラクタ
  MyPair(const MyPair &old) {
    cout << "copy constructor called" << endl;
    x = old.x + 1;
    y = old.y + " new";
  }
};

int main() {
  MyPair p;  // ここでコンストラクタが呼ばれる
  p.x = 12345;
  p.y = "hello";
  cout << "p.x = " << p.x << endl;
  cout << "p.y = " << p.y << endl;

  MyPair q(p);  // コピーコンストラクタが呼ばれる
  cout << "q.x = " << q.x << endl;
  cout << "q.y = " << q.y << endl;

  MyPair r = q;  // コピーコンストラクタが呼ばれる
  cout << "r.x = " << r.x << endl;
  cout << "r.y = " << r.y << endl;
}
```
実行結果
```
normal constructor called
p.x = 12345
p.y = hello
copy constructor called
q.x = 12346
q.y = hello new
copy constructor called
r.x = 12347
r.y = hello new new
```
<br>

### 演算子オーバーロード
新たに定義した構造体型のオブジェクトに対してC++の演算子を使えるようにすることができる。
> 引数の個数は1つまで

#### 使用例
演算子オーバーロードをメンバ関数として定義
<br>

+演算子のオーバーロード
```c++
    ...
    // 別のMyPair型のオブジェクトをとって、x, yにそれぞれ+したものを返す
    // +演算子をオーバーロード
    MyPair operator+(const MyPair &other) {
        MyPair ret;
        ret.x = x + other.x;  // ここではint型の+演算子が呼ばれる
        ret.y = y + other.y;  // ここではstring型の+演算子が呼ばれる
        return ret;
    }
    ...

    ...
    MyPair c = a + b;
    ...
```

代入演算子のオーバーロード
```c++
    ...
    // 代入演算子をオーバーロード
    void operator=(const MyPair &other) {
        cout << "= operator called" << endl;
        x = other.x;
        y = other.y;
    }
    ...
```

#### 構造体の外側で定義する場合
自分が定義していない構造体(例えばSTLのpairなど)に対しても演算子をオーバーロードすることができる。

使用例 (pairの<演算子をオーバーロードして `.second` を優先して比較する) 
```c++
#include <bits/stdc++.h>
using namespace std;

// .second → .first の順に比較
bool operator<(pair<int, int> l, pair<int, int> r) {
  if (l.second != r.second) {
    return l.second < r.second;
  } else {
    return l.first < r.first;
  }
}
// <演算子 を用いて定義
bool operator> (pair<int, int> l, pair<int, int> r) { return r < l; }
bool operator<=(pair<int, int> l, pair<int, int> r) { return !(r < l); }
bool operator>=(pair<int, int> l, pair<int, int> r) { return !(l < r); }

int main() {
  pair<int, int> a = {1, 5};
  pair<int, int> b = {3, 2};
  cout << (a < b) << endl;  // 0
  cout << (a > b) << endl;  // 1
}
```

### メンバ初期化子リスト
例えばメンバ変数が参照型である場合のように、コンストラクタ内で初期化することができない場合には、 メンバ初期化子リストで初期化する必要がある。

コンストラクタに `:` を続けて書く。

```c++
struct 構造体名 {
  型1 メンバ変数1;
  型2 メンバ変数2;
  ...(必要な分だけ書く)

  構造体名() : メンバ変数名1(初期化内容), メンバ変数名2(初期化内容), ...(必要な分だけ書く)
  {
  }
};
```

// あとでしらべる (クラス関係) <br>
デストラクタ
メンバアクセス
継承
静的メンバ変数/関数
friend宣言
union
ビットフィールド

</details>

<details><summary>クラス</summary>

</details>

<details><summary>pair/tuple, auto</summary>

### pair

__宣言・初期化__
```c++
pair<型１, 型2> 変数名(値1, 値2);
// または
make_pair(値1, 値2);
```

__アクセス__
```c++
変数名.first; // 1つ目の値
変数名.second; // 2つ目の値
```

> 配列にpair型を格納した際に
> ```c++
>   for(int i = 0; i < N; i++) {
>       cout << a.at(i).first << a.at(i).second << endl; 
>   } 
> ```
> のようにアクセスするとエラーが出るので注意。

__分解__
```c++
p = make_pair("*", 1);

型1 変数1;
型2 変数2;
tie(変数1, 変数2) = p;
```
変数1, 変数2にそれぞれpairの1番目、2番目の値が代入される

```c++
cout << 変数1 << endl;
cout << 変数2 << endl;
```
実行結果
```
*
1
```
<br>

### tuple

pairの一般化「複数個の値の組」を表す型

__宣言__

```c++
tuple<型1, 型2, 型3, ...> 変数名(値1, 値2, 値3, ...);
// または
make_tuple(値1, 値2, 値3, ...);
```

__アクセス__

```c++
get<k>(tuple型変数); // k番目にアクセス
```
kは0から始まる

また、変数でなく定数である必要がある

__分解__

```c++
data = make_tuple(2, "WORLD", true)

型1 変数1;
型2 変数2;
型3 変数3;
︙
tie(変数1, 変数2, 変数3, ...) = data;
cout << 変数1 << " " << 変数2 << " " << 変数3 << endl;
```
実行結果
```
2 WORLD 1
```
<br>

### pair同士/tuple同士の比較
1番目の値が最優先で比較され、等しい場合は2番目の値で比較する。…<br>
のように1番目の値から順に比較される。
<br>

 `==` は全ての値が等しい場合<br>
 `!=` は1つ以上の異なる値が存在する場合<br>
 にtrueとなる。

```c++
#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<tuple<int, int, int>> a;
  a.push_back(make_tuple(3, 1, 1));
  a.push_back(make_tuple(1, 2, 100));
  a.push_back(make_tuple(3, 5, 1));
  a.push_back(make_tuple(1, 2, 3));
  sort(a.begin(), a.end());

  for (tuple<int, int, int> t : a) {
    int x, y, z;
    tie(x, y, z) = t;
    cout << x << " " << y << " " << z << endl;
  }
}
```
実行結果
```
1 2 3
1 2 100
3 1 1
3 5 1
```
<br>

### ignore
pairやtupleを分解する際、いらない要素を捨てたい場合は `ignore` をtieの引数に渡す。

```c++
    pair<int, int> p(3, 5);
    int right;
    tie(ignore, right) = p;
    cout << right << endl;

    tuple<int, string bool> tpl(2, "hello", false);
    int x;
    string s;
    tie(x, s, ignore) = tpl;
    cout << x << " " << s << endl;
```
実行結果
```
5
2 hello
```
<br>

### 型エイリアス
型エイリアス `using 新しい型名 = 型名` を用いると型に別の名前をつけることができる。 pairやtupleなど型名が長くなってしまう場合に型エイリアスを使うと便利。
> `using namespace std;` にも `using` というキーワードが出てくるが、この `using` と型エイリアスの `using` は違う意味なので注意
<br>

### auto
初期化を伴って変数を宣言する場合や範囲for文において、型の部分にautoと書くことによって型を省略することができる。



</details>

<details><summary>STL</summary>

### max(a, b)
a, bのうち大きい方の値を返す
<br>
<br>

### min(a, b)
a, bのうち小さい方の値を返す
<br>
<br>

### swap(a, b)
a, bの値を交換する
<br>
<br>

### sort(vec.begin(), vec.end())
vecをソートする（要素を小さい順に並び替える）
<br>
<br>

### reverse(vec.begin(), vec.end())
配列変数vecの要素の並びを逆にする
<br>
<br>

### map
「特定の値に、ある値が紐付いている」ようなデータを扱うことができる
#### 宣言
 `map<keyの型, Valueの型> 変数名;` 

<table>
    <thead>
        <tr>
            <th>操作</th> <th>記法</th> <th>備考</th>
        </tr>
    </thead>
    <tr>
        <td>値の追加</td> <td>変数[key] = value;</td> <td> </td>
    </tr>
    <tr>
        <td>値の削除</td> <td>変数.erase(key);</td> <td> </td>
    </tr>
    <tr>
        <td>値のアクセス</td> <td>変数.at(key);<br>変数[key];</td> <td>.at(key) : keyに対応するvalueが存在しない場合はエラーになる<br>[key] : keyに対応するvalueが存在しない場合はValueの型の初期値が追加される</td>
    </tr>
    <tr>
        <td>所属判定</td> <td>変数.count(key);</td> <td> </td>
    </tr>
    <tr>
        <td>要素数の取得</td> <td>変数.size();</td> <td> </td>
    </tr>
</table>

ループに関するサンプルプログラム
```c++
// Keyの値が小さい順にループ
for (pair<Keyの型, Valueの型> p : 変数名) {
  Keyの型 key = p.first;
  Valueの型 value = p.second;
  // key, valueを使う
}
```
autoを用いて簡潔にできる
```c++
// Keyの値が小さい順にループ
for (auto p : 変数名) {
  auto key = p.first;
  auto value = p.second;
  // key, valueを使う
}
```
<br>

### queue
「値を1つずつ追加していき、追加した順で値を取り出す」ような処理を行うことができる

#### 宣言
 `queue<型> 変数名;` 

<table>
    <thead>
        <tr>
            <th>操作</th> <th>記法</th> <th>備考</th>
        </tr>
    </thead>
    <tr>
        <td>要素の追加</td> <td>変数.push(値);</td><td></td>
    </tr>
    <tr>
        <td>先頭要素へのアクセス</td> <td>変数.front();</td><td>空のqueueに対しての動作は未定義で、実行時エラーになるとは限らない<br> `#define _GLIBCXX_DEBUG` をプログラムの1行目に追加してエラーにできる</td>
    </tr>
    <tr>
        <td>先頭要素の削除</td> <td>変数.pop();</td><td></td>
    </tr>
    <tr>
        <td>要素数の取得</td> <td>変数.size();</td><td></td>
    </tr>
    <tr>
        <td>queueが空か調べる</td> <td>変数.empty();</td> <td>queueが空ならtrue</td>
    </tr>
</table>

使用例
```c++
#include <bits/stdc++.h>
using namespace std;

int main() {
  queue<int> q;
  q.push(10);
  q.push(3);
  q.push(6);
  q.push(1);

  // 空でない間繰り返す
  while (!q.empty()) {
    cout << q.front() << endl;  // 先頭の値を出力
    q.pop();  // 先頭の値を削除
  }
}
```
実行結果
```
10
3
6
1
```
<br>


### priority_queue
「それまでに追加した要素のうち、最も大きいものを取り出す」という処理を行うことができる

#### 宣言
 `priority_queue<型> 変数名;` 

<table>
    <thead>
        <tr>
            <th>操作</th> <th>記法</th> <th>備考</th>
        </tr>
    </thead>
    <tr>
        <td>要素の追加</td> <td>変数.push(値);</td><td></td>
    </tr>
    <tr>
        <td>最大要素の取得</td> <td>変数.top();</td><td></td>
    </tr>
    <tr>
        <td>最大要素の削除</td> <td>変数.pop();</td><td></td>
    </tr>
    <tr>
        <td>要素数の取得</td> <td>変数.size();</td><td></td>
    </tr>
    <tr>
        <td>queueが空か調べる</td> <td>変数.empty();</td> <td>queueが空ならtrue</td>
    </tr>
</table>

使用例
```c++
#include <bits/stdc++.h>
using namespace std;

int main() {
  priority_queue<int> pq;
  pq.push(10);
  pq.push(3);
  pq.push(6);
  pq.push(1);

  // 空でない間繰り返す
  while (!pq.empty()) {
    cout << pq.top() << endl;  // 最大の値を出力
    pq.pop();  // 最大の値を削除
  }
}
```
実行結果
```
10
6
3
1
```

#### 値が小さい順に取り出されるpriority_queueの宣言
 `priority_queue<型, vector<型>, greater<型>> 変数名;` 

使用例
```c++
#include <bits/stdc++.h>
using namespace std;

int main() {
  // 小さい順に取り出される優先度付きキュー
  priority_queue<int, vector<int>, greater<int>> pq;
  pq.push(10);
  pq.push(3);
  pq.push(6);
  pq.push(1);

  // 空でない間繰り返す
  while (!pq.empty()) {
    cout << pq.top() << endl;  // 最小の値を出力
    pq.pop();  // 最小の値を削除
  }
}
```
実行結果
```
1
3
6
10
```
<br>

### set
重複の無いデータのまとまりを扱うためのデータ型

#### 宣言
 `set<型> 変数名;` 
<br>
<br>

### stack
「新しく追加したものほど先に取り出される」ような処理を行うデータ構造

#### 宣言
 `stack<型> 変数名;` 

#### アクセス
 `変数名.top();` 
<br>
<br>

### deque
最初に追加したものを取り出す」というキューの操作と 「最後に追加した要素を取り出す」というスタックの操作を同時に行えるデータ構造

#### 宣言
 `deque<型> 変数名;`
<br>

#### 操作
値の追加
```c++
変数.push_back(値);  // 末尾への値の追加
変数.push_front(値); // 先頭への値の追加
```
値のアクセス
```c++
変数.front() // 先頭の値へのアクセス
変数.back()  // 末尾の値へのアクセス
変数.at(i)   // i番目へのアクセス
```
<br>

### unordered_map
基本的な機能はmapと同じだが、アクセスや検索を高速に行うことができるデータ構造<br>
> 制約
> pairやtupleなどのハッシュ関数が定義されていない型をKeyとして用いることができない
> ループで取り出すときに、どのような順番で取り出されるかが分からない
<br>
<br>

### unordered_set
制約がある代わりに高速なset
> 制約
> pairやtupleなどのハッシュ関数が定義されていない型をKeyとして用いることができない
> ループで取り出すときに、どのような順番で取り出されるかが分からない
> 最大値や最小値を取り出すことができない
<br>
<br>

### lower_bound / upper_bound
昇順にソートされた配列において、「x以上の最小の要素」を求める場合にはSTLの `lower_bound` を使うことができる。<br>
同様に、「xを超える最小の要素」を求めるときには `upper_bound` を使うことができる。
<br>

使い方
```c++
*lower_bound(配列.begin(), 配列.end(), 値)  // 「値」以上の最小の値
*upper_bound(配列.begin(), 配列.end(), 値)  // 「値」を超えるの最小の値
```
> 先頭に*を付ける必要がある。
<br>

</details>

<details><summary>Others</summary>

## bool型と関数の戻り値
```c++
bool f(bool a) {
    if(a) return true; // a = true
    else return false; // a = false
}

int main(void) {
    bool a;
    while(true) {
        if(f(a)) break; // a = trueのときにはループを抜けたい
    }
}
```
このコードは、無限ループに陥り停止しない可能性がある。
以下のように、bool型変数の値を更新し、その変数を返すと終了する。
```c++
bool f(bool a) {
    bool flag = false;
    if(a) flag = true;
    return flag; // a == trueでtrue、a == falseでfalse
}

int main(void) {
    bool a;
    while(true) {
        if(f(a)) break; // a = trueのときにはループを抜ける
    }
}
```
最初からreturn文を書くのは関数の最後だけと決めておけば防げるだろう。
<br>

## 各桁に対する操作
10進法なら、
```
N % 10 -> 1の位
N /= 10
N % 10 -> 10の位
...
```
というように `%` , `/` を用いて操作するとよい。
<br>

使用例 (10進法から2進法への書き換え)
```c++
#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int N = 1234; // 変換前

    stack<int> bits;
    while(N >= 1) {
        bits.push(N % 2);
        N /= 2;
    }
    while(bits.size() > 0) {
        cout << bits.top();
        bits.pop();
    }
    cout << endl;
    return 0;
}
```
発展的話題として、2 進法や 3 進法や 16 進法など、10 進法以外の n 進法への書き換えなども、ほぼ同じ処理で実現できる。
</details>