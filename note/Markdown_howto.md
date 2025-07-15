✅ よく使うMarkdown記法まとめ（技術記事向け）
📌 見出し
markdown
コードをコピーする
# H1 見出し
## H2 見出し
### H3 見出し
#### H4 見出し
📌 強調
markdown
コードをコピーする
*イタリック*
**太字**
~~打ち消し~~
`コードっぽい文字`
📌 リスト
✅ 番号なしリスト
markdown
コードをコピーする
- 項目1
- 項目2
  - サブ項目
✅ 番号付きリスト
markdown
コードをコピーする
1. ステップ1
2. ステップ2
📌 コードブロック
✅ インラインコード
markdown
コードをコピーする
これは `inline code` です
✅ 複数行コードブロック
markdown
コードをコピーする
```bash
git clone https://github.com/example/repo.git
cd repo
npm install
yaml
コードをコピーする

---

### 📌 引用
```markdown
> これは引用です。
📌 リンク & 画像
✅ リンク
markdown
コードをコピーする
[OpenAI](https://openai.com)
✅ 画像
markdown
コードをコピーする
![代替テキスト](https://example.com/image.png)
📌 表
markdown
| 見出し1 | 見出し2 |
|---------|---------|
| 内容1   | 内容2   |
| 内容3   | 内容4   |
🎨 画像のような装飾（Zenn特有の便利記法）
Zennは カスタムコンポーネントもサポートしていて、
画像のような「注意ブロック」も書けます。

⚠️ 注意ブロック
markdown
コードをコピーする
:::message
Gitのリポジトリと連携する
- ZennのCLIをインストールする
- テキストエディタで記事を書いてデプロイする
:::
ℹ️ 補足・ヒント
markdown
コードをコピーする
:::message alert
この操作は慎重に行ってください
:::
:::message → 通常メッセージ

:::message alert → 強調メッセージ（オレンジ色）

✅ 技術記事で超よく使うまとめ
機能	記法例
見出し	## タイトル
コード	```bash … ```
注意	:::message ... :::
リスト	- 項目 or 1. 項目
画像	![alt](URL)
テーブル	上記の表記法

