# 学習用フォルダで使う流れ
---

### 1.フォルダを作成

```bash
mkdir ~/zenn-learning
cd ~/zenn-learning
```

### 2.Zenn用構成作成

```bash
npx zenn init
```

### 3.記事作成

```bash
npx zenn ne:article
```

### 4.プレビュー起動

```bash
npx zenn preview
```

win + .
🚀💡⚡✅☑️✔️❗⚠️🎁📚📝✨🏃‍♂️💭

### 💡 これでブラウザでリアルタイムに確認できます。
---yaml

## 🎨 ポイント
✅ Zennでは **コードブロック**は ```bash で始めるとシンタックスハイライト付き  
✅ 補足は **絵文字＋テキスト**でOK（Zennは絵文字表示に強い）

---

## 💎 おまけ：ボックス風メッセージも使う
### ⚠️ 注意ブロック
```markdown
:::message alert
(例)この操作は慎重に行ってください
:::
```
💡 ヒントブロック
```markdown
:::message
(例)保存するとブラウザが自動更新されます
:::
```

### zenn comannd
```zenn
Command:
  zenn init           コンテンツ管理用のディレクトリを作成. 初回のみ実行
  zenn preview        コンテンツをブラウザでプレビュー
  zenn new:article    新しい記事を追加
  zenn new:book       新しい本を追加
  zenn list:articles  記事の一覧を表示
  zenn list:books     本の一覧を表示
  zenn --version, -v  zenn-cliのバージョンを表示
  zenn --help, -h     ヘルプ
```