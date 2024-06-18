#ifndef CP_CHARPLUS_H
#define CP_CHARPLUS_H

class CP_CharPlus
{
    public:
        char m_char;

        CP_CharPlus(char a='+') : m_char(a) {}
        ~CP_CharPlus() {}

        void mb_drawPlus();
}; //类CP_CharPlus定义结束
#endif