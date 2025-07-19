#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

// 出題する単語リスト
char words[][20] = {
    "apple", "banana", "orange", "grape", "lemon",
    "cat", "dog", "bird", "fish", "mouse",
    "book", "pen", "desk", "chair", "computer",
    "happy", "smile", "peace", "dream", "hope",
    "japan", "tokyo", "osaka", "kyoto", "nara"
};

// ゲーム変数
int total_words = 25;  // 単語の総数
int correct_count = 0; // 正解数
int wrong_count = 0;   // 間違い数
int game_words = 10;   // 1ゲームで出題する単語数

// ゲーム説明表示
void show_instructions() {
    printf("=== タイピングゲーム ===\n");
    printf("表示された英単語を正確に入力してください\n");
    printf("大文字・小文字は区別しません\n");
    printf("出題数: %d問\n", game_words);
    printf("準備ができたらEnterキーを押してください...\n");
    getchar();
}

// 単語をランダムに選択
int get_random_word() {
    return rand() % total_words;
}

// 文字列を小文字に変換
void to_lowercase(char *str) {
    for (int i = 0; str[i]; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;  // 大文字を小文字に
        }
    }
}

// 1問出題して判定
int play_one_word(int question_num) {
    int word_index = get_random_word();
    char user_input[50];
    char correct_word[20];
    
    // 正解の単語をコピー（小文字変換用）
    strcpy(correct_word, words[word_index]);
    to_lowercase(correct_word);
    
    printf("\n--- 問題 %d ---\n", question_num);
    printf("単語: %s\n", words[word_index]);
    printf("入力: ");
    
    // ユーザー入力受付
    scanf("%s", user_input);
    to_lowercase(user_input);  // 入力を小文字に変換
    
    // 正誤判定
    if (strcmp(user_input, correct_word) == 0) {
        printf("正解！ ✓\n");
        return 1;  // 正解
    } else {
        printf("間違い... 正解は「%s」でした ✗\n", words[word_index]);
        return 0;  // 不正解
    }
}

// ゲーム結果表示
void show_results() {
    float accuracy = (float)correct_count / game_words * 100;
    
    printf("\n=== ゲーム結果 ===\n");
    printf("出題数  : %d問\n", game_words);
    printf("正解数  : %d問\n", correct_count);
    printf("間違い  : %d問\n", wrong_count);
    printf("正解率  : %.1f%%\n", accuracy);
    
    // 評価コメント
    if (accuracy >= 90) {
        printf("評価: 素晴らしい！完璧です！🌟\n");
    } else if (accuracy >= 70) {
        printf("評価: とても良いです！👍\n");
    } else if (accuracy >= 50) {
        printf("評価: 頑張りました！📝\n");
    } else {
        printf("評価: 練習あるのみ！💪\n");
    }
}

// 再戦選択
int play_again() {
    char choice;
    printf("\nもう一度プレイしますか？ (y/n): ");
    scanf(" %c", &choice);
    
    if (choice == 'y' || choice == 'Y') {
        return 1;  // 再戦
    } else {
        return 0;  // 終了
    }
}

// ゲーム初期化
void reset_game() {
    correct_count = 0;
    wrong_count = 0;
}

// メインゲームループ
void game_loop() {
    for (int i = 1; i <= game_words; i++) {
        if (play_one_word(i)) {
            correct_count++;
        } else {
            wrong_count++;
        }
        
        // 少し間を置く
        printf("Enterキーで次へ...");
        while (getchar() != '\n');  // 改行文字を読み飛ばし
        getchar();  // Enterキー待ち
    }
}

// メイン関数
int main() {
    srand(time(NULL));  // 乱数初期化
    
    printf("タイピングゲームへようこそ！\n");
    
    // ゲームの大ループ（再戦対応）
    do {
        reset_game();           // ゲーム変数リセット
        show_instructions();    // 説明表示
        game_loop();           // メインゲーム
        show_results();        // 結果表示
    } while (play_again());    // 再戦判定
    
    printf("お疲れ様でした！また遊んでくださいね！\n");
    
    return 0;
}