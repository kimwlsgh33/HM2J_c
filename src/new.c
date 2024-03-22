#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 함수 선언
int getRandomScore();
int chooseDoll(int score);

int new(int a) {

    int score = a;
    int doll = chooseDoll(score); // 점수에 따라 인형 선택
    printf("당신의 점수는 ... %d\n", score);
    if (score < 100) {
        printf(".　　＼\n　＼　＼\n　　＼　￣￣＼　))\n　　　＼＿つヽ))\n　/　／　　　　　 ヽ　〟\n｜　o●　　　　　●o　   ｜\n〝、 ： (＿人＿)　：。ノ\n");
        printf("이것이 당신의 실력..? 더 커서 돌아오세요.\n");
    } else {
        printf("축하합니다! %d번 인형을 획득하셨습니다!\n", doll);
    }

    return 0;
}

// 점수에 따라 인형 선택 함수
int chooseDoll(int score) {
    if (score >= 200000) {
        printf(".ㅤ  ∧＿∧\n");
        printf("　(　ᵔ ᗜᵔ )\n");
        printf("　(　つ┳⊃\n");
        printf("ε (_)へ⌒ヽﾌ\n");
        printf("(　　(　•̀o•)\n");
        printf("◎―◎   ⊃  ⊃\n");
        return 10; // 200,000 이상일 경우 10번 인형 획득
    } else if (score >= 100000) {
        printf("　　　 ∧,,∧\n");
        printf("☆ヾ(ゝω・＊\n");
        printf("　　　(　 ⊂)\n");
        printf("　　　 し─Ｊ\n");

        return 9; // 100000 이상일 경우 9번 인형 획득
    } else if (score >= 50000) {
        printf(".　 ∧,,∧\n");
        printf(" ∩(＾ 0 ＾)∩\n");
        printf(" ヽ 　　　   ノ\n");
        printf("  . |　　  |\n");
        printf(" 　 U ⌒ U.\n");

        return 8; // 50000 이상일 경우 8번 인형 획득
    } else if (score >= 30000) {
        printf(".　♪　∧,＿∧\n");
        printf("　 　(´･ω･`) ))\n");
        printf(" 　(( (　つ　ヽ、　♪\n");
        printf("　　　〉 とノ　)))\n");
        printf("　　（__ノ^(＿)\n");
        return 7; // 30000 이상일 경우 7번 인형 획득
    } else if (score >= 20000) {
        printf(" ⌒―⌒ 💭\n");
        printf("(　･(ｪ)･)\n");
        printf("/　　⌒ヽ\n");
        printf("人＿__つ_つ\n");
        return 6; // 20000 이상일 경우 6번 인형 획득
    } else if (score >= 15000) {
        printf(".　∧∧　■");
        printf("　(＾ω＾)／　");
        printf("　＜　　/");
        printf("　　∪∪");

        return 5; // 15000 이상일 경우 5번 인형 획득
    } else if (score >= 10000) {
        printf("⠀. .ᕱ🎀ᕱ\n");
        printf("“ପ(„ơ ᴗ ơ„)ଓ”\n");
        return 4; // 10000 이상일 경우 4번 인형 획득
    } else if (score >= 5000) {
        printf(" ･ﾟﾟ･｡   /\__/\ ｡･ﾟﾟ･\n");
        printf("   ｡･ﾟﾟ･( > ᴥ <) ･ﾟﾟ･｡\n");
        printf("      (\(__u_u)\n");
        return 3; // 5000 이상일 경우 3번 인형 획득
    } else if (score >= 3000) {
        printf(". /) /)\n");
        printf("ฅ(• - •)ฅ\n");
        return 2; // 3000 이상일 경우 2번 인형 획득
    } else if (score >= 1000) {
        printf(".∩    ∩\n");
        printf("( •̀ -  •́ ) 💢\n");
        printf("૮       ა\n");
        return 1; // 1000 이상일 경우 1번 인형 획득
    }
}

