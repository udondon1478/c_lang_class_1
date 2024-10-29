//
//  trump_copy_paste_test_01
//  prg202X
//
//  Created by x22004xx on 2022/04/24.
//

#include <stdio.h>

void setup(){
    background(255);
    size(800,800);
}

int a = 0;

void draw(){
  
  //色（aを256で割ったあまりを設定）
  int iro = a % 256;

  stroke(iro);  //線の色を設定
  fill(iro);  //背景色を設定
  
  //円を描く
  ellipse(100, 100, 100, 100);
  
  a = a + 1;

}
