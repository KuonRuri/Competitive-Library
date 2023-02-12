# このレポジトリについて   
## はじめに  
競技プログラミング、特に[AtCoder](https://atcoder.jp/?lang=ja)での利用を想定したライブラリです。  
## 使い方  
それぞれのライブラリの本体は、[sources](https://github.com/KuonRuri/Competitive-Library/tree/main/sources)以下に、(アルゴリズム名).cppの名前で保存されています。  
それぞれ独立して作られているので、必要なコードのみをコピーして使うことができます。 
ライブラリは ``namespackuonruri`` で囲まれています。
## ビルド  
```
g++ -std=gnu++17 -Wall -Wextra -O2
```  
# 完成済みのライブラリ  
  
- [UnonFind][https://github.com/KuonRuri/Competitive-Library/blob/main/sources/UnionFind.cpp]    
  
# LICENSE
このライブラリは、MIT Licenseのもとで公開されている。ただし、競技プログラミングのために[sources](https://github.com/KuonRuri/Competitive-Library/tree/main/sources)以下のプログラムの一部もしくは全部をジャッジサーバに送信する際、各ファイルの先頭にある、
```cpp  
/* <<----- Start this Library's author and license ----->>
 * © 2023 KuonRuri
 * LICENSE is MIT (see https://github.com/KuonRuri/Competitive-Library )
 * Original is here: https://github.com/KuonRuri/Competitive-Library
 * <<----- End this Library's author and license ----->>
```  
を併記したとき、他に著作権や承諾、ライセンスの表記は必要ないものとする。  
