//Time.cpp Time class 
#include <iostream>
#include <sstream>
#include "Time.h"

using namespace std;

Time::Time(int h, int m) {
    setTime(h, m);
}

void Time::setTime(int h, int m) {
    hours = (h >= 0 && h < 24) ? h : 0; // �ˬd�p�ɬO�_�b�X�k�d�򤺡A�_�h�]�� 0
    minutes = (m >= 0 && m < 60) ? m : 0; // �ˬd�����O�_�b�X�k�d�򤺡A�_�h�]�� 0
}  // ?:�p�G(h >= 0 && h < 24)���ߡA�h��Ӫ�F�����Ȭ�h�_�h��0

void Time::printTime() const {
    cout << ((hours < 10) ? "0" : "") << hours << ":" // �p�G�p�ɬO�Ӧ�ơA�ɹs
        << ((minutes < 10) ? "0" : "") << minutes; // �p�G�����O�Ӧ�ơA�ɹs
}   // ?:�p�G(hours < 10)���ߡA�h��Ӫ�F�����Ȭ���0�_�h���Ŧr��