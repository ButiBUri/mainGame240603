#pragma once
/*
関数の宣言
*/

//関数の宣言

///<summaary>
///スタート画面
///</summary>
/// <param name="deltaTime">デルタタイム</param>
/// <param name="startScreenImage">画像ハンドル</param>
void StartScreen(double deltaTime,int startScreenImage);
///<summary>
///ゲーム画面
///</summary>
///<param name ="deltaTime">デルタタイム</param>
void GameProcessing(double deltaTime);
///<summarry>
///リザルト画面
///</summary>
void ResultScreen();
