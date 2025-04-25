// week10-4.cpp
// LeetCode 1399. Count Largest Group
class Solution {
public:
    int countLargestGroup(int n) {
        int a[100] = {}; // �o�̡A�n�� total �X�{�X��(�ΨӲέp total �X�{����)
        int largest = 0; // �����̤j�����@�s�Ƹ̭����X�Ӽ�?
        for(int i=1;i<=n;i++){ // 1..n �H�����j��
            int now = i; // �{�b�n��֪��Ʀr
            int total = 0; // �j��e�� total �O 0
            while(now>0){ // ��֪k
                // �j��̡A�� total �@���[�_��
                total += now % 10; // ��� now % 10 ��C�@��Ʀr�A�[�� total ��
                now = now / 10; // ��֫�Anow �ܤp�F
            }
            a[total]++;//�j��᭱�A�n�έp total ���X�{����
            if( a[total] > largest ) largest = a[total];
        }
        int ans = 0; // �̤j���ƪ����Ǹs�A���X�s?
        for(int i=0;i<100;i++){
            if(a[i]==largest) ans++; // �p�G a[i] �O�̤j���ƪ����s�A�N�h�@�s
        }
        return ans;
    }
};
