// week14_5_sound
// ��� Sketch - Library - Manage Libraries...
// �w�� Sound ��A�}�l�g
// ��� File - Example �� Libraries �֤ߨ禡�w Sound-Soundfile-JumbleSoundFile
// �A�ۤv�g
import processing.sound.*; // Java  �ϥ� Sound �~��
SoundFile music,sword,monkey,intro; // �ŧi�@���ܼ�music
void setup(){
  size(640,360); // �O�o�n�⭵���ɡA�Ԩ�{����
  sword = new SoundFile(this,"sword slash.mp3"); // �p���ɦW���n�g��
  monkey = new SoundFile(this,"Monkey 1.mp3");
  intro = new SoundFile(this,"Intro Song_Final.mp3");  // ���ѴN�S�Ψ�F
  music = new SoundFile(this,"In Game Music.mp3");
  music.play(); // play()����
}
void mousePressed(){ //���Umouse
   if(mouseButton==LEFT)sword.play(); // ���U����(���C)
   else monkey.play(); //���U�t�~�@����(�ܦ��U�l�s)
}
void draw(){
  // �̭��O�ť�
 }
