/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "E:/ISEproject/phase_band_top3/phase_band_top2.v";
static int ng1[] = {0, 0, 0, 0};
static int ng2[] = {14, 0};
static int ng3[] = {16383, 0, 0, 0};
static int ng4[] = {566170, 0};
static int ng5[] = {617640, 0};
static int ng6[] = {463230, 0};
static int ng7[] = {514700, 0};
static int ng8[] = {360290, 0};
static int ng9[] = {411760, 0};
static int ng10[] = {257350, 0};
static int ng11[] = {308820, 0};
static int ng12[] = {154410, 0};
static int ng13[] = {205880, 0};
static int ng14[] = {102940, 0};
static int ng15[] = {51470, 0};
static int ng16[] = {669110, 0};
static int ng17[] = {0, 0};
static unsigned int ng18[] = {0U, 0U};
static int ng19[] = {1, 0};
static unsigned int ng20[] = {1U, 0U};
static int ng21[] = {43, 0};



static int sp_mov(char *t1, char *t2)
{
    char t3[16];
    char t4[8];
    char t9[16];
    char t25[16];
    char t30[16];
    char t31[16];
    char t36[16];
    char t38[16];
    int t0;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t37;
    char *t39;

LAB0:    t0 = 1;
    xsi_set_current_line(79, ng0);
    t5 = (t1 + 8184);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng1)));
    xsi_vlog_signed_greater(t9, 42, t7, 42, t8, 32);
    memset(t4, 0, 8);
    t10 = (t9 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB2;

LAB3:    if (*((unsigned int *)t10) != 0)
        goto LAB4;

LAB5:    t17 = (t4 + 4);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t17);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB6;

LAB7:    t26 = *((unsigned int *)t4);
    t27 = (~(t26));
    t28 = *((unsigned int *)t17);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t17) > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t4) > 0)
        goto LAB12;

LAB13:    memcpy(t3, t30, 16);

LAB14:    t39 = (t1 + 8024);
    xsi_vlogvar_assign_value(t39, t3, 0, 0, 21);
    t0 = 0;

LAB1:    return t0;
LAB2:    *((unsigned int *)t4) = 1;
    goto LAB5;

LAB4:    t16 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB5;

LAB6:    t21 = (t1 + 8184);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = ((char*)((ng2)));
    xsi_vlog_signed_rshift(t25, 42, t23, 42, t24, 32);
    goto LAB7;

LAB8:    t32 = (t1 + 8184);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    xsi_vlog_signed_unary_minus(t31, 42, t34, 42);
    t35 = ((char*)((ng3)));
    xsi_vlog_signed_add(t36, 42, t31, 42, t35, 32);
    t37 = ((char*)((ng2)));
    xsi_vlog_signed_rshift(t38, 42, t36, 42, t37, 32);
    xsi_vlog_signed_unary_minus(t30, 42, t38, 42);
    goto LAB9;

LAB10:    xsi_vlog_unsigned_bit_combine(t3, 42, t25, 42, t30, 42);
    goto LAB14;

LAB12:    memcpy(t3, t25, 16);
    goto LAB14;

}

static void Always_82_0(char *t0)
{
    char t7[8];
    char t9[8];
    char t10[8];
    char t25[8];
    char t27[8];
    char t28[8];
    char t36[8];
    char t78[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    int t60;
    int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t79;

LAB0:    t1 = (t0 + 9104U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 12152);
    *((int *)t2) = 1;
    t3 = (t0 + 9136);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(83, ng0);

LAB5:    xsi_set_current_line(84, ng0);
    t4 = (t0 + 5784);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng4)));
    memset(t7, 0, 8);
    xsi_vlog_signed_unary_minus(t7, 32, t8, 32);
    memset(t9, 0, 8);
    xsi_vlog_signed_greatereq(t9, 32, t6, 21, t7, 32);
    memset(t10, 0, 8);
    t11 = (t9 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (~(t12));
    t14 = *((unsigned int *)t9);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t11) != 0)
        goto LAB8;

LAB9:    t18 = (t10 + 4);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t18);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB10;

LAB11:    memcpy(t36, t10, 8);

LAB12:    t68 = (t36 + 4);
    t69 = *((unsigned int *)t68);
    t70 = (~(t69));
    t71 = *((unsigned int *)t36);
    t72 = (t71 & t70);
    t73 = (t72 != 0);
    if (t73 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 5784);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t7, 0, 8);
    xsi_vlog_signed_unary_minus(t7, 32, t5, 32);
    memset(t9, 0, 8);
    xsi_vlog_signed_greatereq(t9, 32, t4, 21, t7, 32);
    memset(t10, 0, 8);
    t6 = (t9 + 4);
    t12 = *((unsigned int *)t6);
    t13 = (~(t12));
    t14 = *((unsigned int *)t9);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t6) != 0)
        goto LAB25;

LAB26:    t11 = (t10 + 4);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB27;

LAB28:    memcpy(t36, t10, 8);

LAB29:    t50 = (t36 + 4);
    t69 = *((unsigned int *)t50);
    t70 = (~(t69));
    t71 = *((unsigned int *)t36);
    t72 = (t71 & t70);
    t73 = (t72 != 0);
    if (t73 > 0)
        goto LAB37;

LAB38:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 5784);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t7, 0, 8);
    xsi_vlog_signed_unary_minus(t7, 32, t5, 32);
    memset(t9, 0, 8);
    xsi_vlog_signed_greatereq(t9, 32, t4, 21, t7, 32);
    memset(t10, 0, 8);
    t6 = (t9 + 4);
    t12 = *((unsigned int *)t6);
    t13 = (~(t12));
    t14 = *((unsigned int *)t9);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t6) != 0)
        goto LAB42;

LAB43:    t11 = (t10 + 4);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB44;

LAB45:    memcpy(t36, t10, 8);

LAB46:    t50 = (t36 + 4);
    t69 = *((unsigned int *)t50);
    t70 = (~(t69));
    t71 = *((unsigned int *)t36);
    t72 = (t71 & t70);
    t73 = (t72 != 0);
    if (t73 > 0)
        goto LAB54;

LAB55:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 5784);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng8)));
    memset(t7, 0, 8);
    xsi_vlog_signed_unary_minus(t7, 32, t5, 32);
    memset(t9, 0, 8);
    xsi_vlog_signed_greatereq(t9, 32, t4, 21, t7, 32);
    memset(t10, 0, 8);
    t6 = (t9 + 4);
    t12 = *((unsigned int *)t6);
    t13 = (~(t12));
    t14 = *((unsigned int *)t9);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t6) != 0)
        goto LAB59;

LAB60:    t11 = (t10 + 4);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB61;

LAB62:    memcpy(t36, t10, 8);

LAB63:    t50 = (t36 + 4);
    t69 = *((unsigned int *)t50);
    t70 = (~(t69));
    t71 = *((unsigned int *)t36);
    t72 = (t71 & t70);
    t73 = (t72 != 0);
    if (t73 > 0)
        goto LAB71;

LAB72:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 5784);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng10)));
    memset(t7, 0, 8);
    xsi_vlog_signed_unary_minus(t7, 32, t5, 32);
    memset(t9, 0, 8);
    xsi_vlog_signed_greatereq(t9, 32, t4, 21, t7, 32);
    memset(t10, 0, 8);
    t6 = (t9 + 4);
    t12 = *((unsigned int *)t6);
    t13 = (~(t12));
    t14 = *((unsigned int *)t9);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB74;

LAB75:    if (*((unsigned int *)t6) != 0)
        goto LAB76;

LAB77:    t11 = (t10 + 4);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB78;

LAB79:    memcpy(t36, t10, 8);

LAB80:    t50 = (t36 + 4);
    t69 = *((unsigned int *)t50);
    t70 = (~(t69));
    t71 = *((unsigned int *)t36);
    t72 = (t71 & t70);
    t73 = (t72 != 0);
    if (t73 > 0)
        goto LAB88;

LAB89:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 5784);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng12)));
    memset(t7, 0, 8);
    xsi_vlog_signed_unary_minus(t7, 32, t5, 32);
    memset(t9, 0, 8);
    xsi_vlog_signed_greatereq(t9, 32, t4, 21, t7, 32);
    memset(t10, 0, 8);
    t6 = (t9 + 4);
    t12 = *((unsigned int *)t6);
    t13 = (~(t12));
    t14 = *((unsigned int *)t9);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB91;

LAB92:    if (*((unsigned int *)t6) != 0)
        goto LAB93;

LAB94:    t11 = (t10 + 4);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB95;

LAB96:    memcpy(t36, t10, 8);

LAB97:    t50 = (t36 + 4);
    t69 = *((unsigned int *)t50);
    t70 = (~(t69));
    t71 = *((unsigned int *)t36);
    t72 = (t71 & t70);
    t73 = (t72 != 0);
    if (t73 > 0)
        goto LAB105;

LAB106:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 5784);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng15)));
    memset(t7, 0, 8);
    xsi_vlog_signed_unary_minus(t7, 32, t5, 32);
    memset(t9, 0, 8);
    xsi_vlog_signed_greatereq(t9, 32, t4, 21, t7, 32);
    memset(t10, 0, 8);
    t6 = (t9 + 4);
    t12 = *((unsigned int *)t6);
    t13 = (~(t12));
    t14 = *((unsigned int *)t9);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB108;

LAB109:    if (*((unsigned int *)t6) != 0)
        goto LAB110;

LAB111:    t11 = (t10 + 4);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB112;

LAB113:    memcpy(t28, t10, 8);

LAB114:    t50 = (t28 + 4);
    t69 = *((unsigned int *)t50);
    t70 = (~(t69));
    t71 = *((unsigned int *)t28);
    t72 = (t71 & t70);
    t73 = (t72 != 0);
    if (t73 > 0)
        goto LAB122;

LAB123:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 5784);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng15)));
    memset(t7, 0, 8);
    xsi_vlog_signed_greater(t7, 32, t4, 21, t5, 32);
    memset(t9, 0, 8);
    t6 = (t7 + 4);
    t12 = *((unsigned int *)t6);
    t13 = (~(t12));
    t14 = *((unsigned int *)t7);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB125;

LAB126:    if (*((unsigned int *)t6) != 0)
        goto LAB127;

LAB128:    t11 = (t9 + 4);
    t19 = *((unsigned int *)t9);
    t20 = *((unsigned int *)t11);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB129;

LAB130:    memcpy(t27, t9, 8);

LAB131:    t50 = (t27 + 4);
    t69 = *((unsigned int *)t50);
    t70 = (~(t69));
    t71 = *((unsigned int *)t27);
    t72 = (t71 & t70);
    t73 = (t72 != 0);
    if (t73 > 0)
        goto LAB139;

LAB140:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 5784);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng12)));
    memset(t7, 0, 8);
    xsi_vlog_signed_greatereq(t7, 32, t4, 21, t5, 32);
    memset(t9, 0, 8);
    t6 = (t7 + 4);
    t12 = *((unsigned int *)t6);
    t13 = (~(t12));
    t14 = *((unsigned int *)t7);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB142;

LAB143:    if (*((unsigned int *)t6) != 0)
        goto LAB144;

LAB145:    t11 = (t9 + 4);
    t19 = *((unsigned int *)t9);
    t20 = *((unsigned int *)t11);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB146;

LAB147:    memcpy(t27, t9, 8);

LAB148:    t50 = (t27 + 4);
    t69 = *((unsigned int *)t50);
    t70 = (~(t69));
    t71 = *((unsigned int *)t27);
    t72 = (t71 & t70);
    t73 = (t72 != 0);
    if (t73 > 0)
        goto LAB156;

LAB157:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 5784);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng10)));
    memset(t7, 0, 8);
    xsi_vlog_signed_greatereq(t7, 32, t4, 21, t5, 32);
    memset(t9, 0, 8);
    t6 = (t7 + 4);
    t12 = *((unsigned int *)t6);
    t13 = (~(t12));
    t14 = *((unsigned int *)t7);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB159;

LAB160:    if (*((unsigned int *)t6) != 0)
        goto LAB161;

LAB162:    t11 = (t9 + 4);
    t19 = *((unsigned int *)t9);
    t20 = *((unsigned int *)t11);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB163;

LAB164:    memcpy(t27, t9, 8);

LAB165:    t50 = (t27 + 4);
    t69 = *((unsigned int *)t50);
    t70 = (~(t69));
    t71 = *((unsigned int *)t27);
    t72 = (t71 & t70);
    t73 = (t72 != 0);
    if (t73 > 0)
        goto LAB173;

LAB174:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 5784);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng8)));
    memset(t7, 0, 8);
    xsi_vlog_signed_greatereq(t7, 32, t4, 21, t5, 32);
    memset(t9, 0, 8);
    t6 = (t7 + 4);
    t12 = *((unsigned int *)t6);
    t13 = (~(t12));
    t14 = *((unsigned int *)t7);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB176;

LAB177:    if (*((unsigned int *)t6) != 0)
        goto LAB178;

LAB179:    t11 = (t9 + 4);
    t19 = *((unsigned int *)t9);
    t20 = *((unsigned int *)t11);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB180;

LAB181:    memcpy(t27, t9, 8);

LAB182:    t50 = (t27 + 4);
    t69 = *((unsigned int *)t50);
    t70 = (~(t69));
    t71 = *((unsigned int *)t27);
    t72 = (t71 & t70);
    t73 = (t72 != 0);
    if (t73 > 0)
        goto LAB190;

LAB191:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 5784);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t7, 0, 8);
    xsi_vlog_signed_greatereq(t7, 32, t4, 21, t5, 32);
    memset(t9, 0, 8);
    t6 = (t7 + 4);
    t12 = *((unsigned int *)t6);
    t13 = (~(t12));
    t14 = *((unsigned int *)t7);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB193;

LAB194:    if (*((unsigned int *)t6) != 0)
        goto LAB195;

LAB196:    t11 = (t9 + 4);
    t19 = *((unsigned int *)t9);
    t20 = *((unsigned int *)t11);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB197;

LAB198:    memcpy(t27, t9, 8);

LAB199:    t50 = (t27 + 4);
    t69 = *((unsigned int *)t50);
    t70 = (~(t69));
    t71 = *((unsigned int *)t27);
    t72 = (t71 & t70);
    t73 = (t72 != 0);
    if (t73 > 0)
        goto LAB207;

LAB208:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 5784);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t7, 0, 8);
    xsi_vlog_signed_greatereq(t7, 32, t4, 21, t5, 32);
    memset(t9, 0, 8);
    t6 = (t7 + 4);
    t12 = *((unsigned int *)t6);
    t13 = (~(t12));
    t14 = *((unsigned int *)t7);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB210;

LAB211:    if (*((unsigned int *)t6) != 0)
        goto LAB212;

LAB213:    t11 = (t9 + 4);
    t19 = *((unsigned int *)t9);
    t20 = *((unsigned int *)t11);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB214;

LAB215:    memcpy(t27, t9, 8);

LAB216:    t50 = (t27 + 4);
    t69 = *((unsigned int *)t50);
    t70 = (~(t69));
    t71 = *((unsigned int *)t27);
    t72 = (t71 & t70);
    t73 = (t72 != 0);
    if (t73 > 0)
        goto LAB224;

LAB225:    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 7704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 21);

LAB226:
LAB209:
LAB192:
LAB175:
LAB158:
LAB141:
LAB124:
LAB107:
LAB90:
LAB73:
LAB56:
LAB39:
LAB22:    goto LAB2;

LAB6:    *((unsigned int *)t10) = 1;
    goto LAB9;

LAB8:    t17 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB9;

LAB10:    t22 = (t0 + 5784);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t26 = ((char*)((ng4)));
    memset(t25, 0, 8);
    xsi_vlog_signed_unary_minus(t25, 32, t26, 32);
    memset(t27, 0, 8);
    xsi_vlog_signed_less(t27, 32, t24, 21, t25, 32);
    memset(t28, 0, 8);
    t29 = (t27 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t27);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t29) != 0)
        goto LAB15;

LAB16:    t37 = *((unsigned int *)t10);
    t38 = *((unsigned int *)t28);
    t39 = (t37 & t38);
    *((unsigned int *)t36) = t39;
    t40 = (t10 + 4);
    t41 = (t28 + 4);
    t42 = (t36 + 4);
    t43 = *((unsigned int *)t40);
    t44 = *((unsigned int *)t41);
    t45 = (t43 | t44);
    *((unsigned int *)t42) = t45;
    t46 = *((unsigned int *)t42);
    t47 = (t46 != 0);
    if (t47 == 1)
        goto LAB17;

LAB18:
LAB19:    goto LAB12;

LAB13:    *((unsigned int *)t28) = 1;
    goto LAB16;

LAB15:    t35 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB16;

LAB17:    t48 = *((unsigned int *)t36);
    t49 = *((unsigned int *)t42);
    *((unsigned int *)t36) = (t48 | t49);
    t50 = (t10 + 4);
    t51 = (t28 + 4);
    t52 = *((unsigned int *)t10);
    t53 = (~(t52));
    t54 = *((unsigned int *)t50);
    t55 = (~(t54));
    t56 = *((unsigned int *)t28);
    t57 = (~(t56));
    t58 = *((unsigned int *)t51);
    t59 = (~(t58));
    t60 = (t53 & t55);
    t61 = (t57 & t59);
    t62 = (~(t60));
    t63 = (~(t61));
    t64 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t64 & t62);
    t65 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t65 & t63);
    t66 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t66 & t62);
    t67 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t67 & t63);
    goto LAB19;

LAB20:    xsi_set_current_line(84, ng0);
    t74 = (t0 + 5784);
    t75 = (t74 + 56U);
    t76 = *((char **)t75);
    t77 = ((char*)((ng5)));
    memset(t78, 0, 8);
    xsi_vlog_signed_add(t78, 32, t76, 21, t77, 32);
    t79 = (t0 + 7704);
    xsi_vlogvar_assign_value(t79, t78, 0, 0, 21);
    goto LAB22;

LAB23:    *((unsigned int *)t10) = 1;
    goto LAB26;

LAB25:    t8 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB26;

LAB27:    t17 = (t0 + 5784);
    t18 = (t17 + 56U);
    t22 = *((char **)t18);
    t23 = ((char*)((ng6)));
    memset(t25, 0, 8);
    xsi_vlog_signed_unary_minus(t25, 32, t23, 32);
    memset(t27, 0, 8);
    xsi_vlog_signed_less(t27, 32, t22, 21, t25, 32);
    memset(t28, 0, 8);
    t24 = (t27 + 4);
    t30 = *((unsigned int *)t24);
    t31 = (~(t30));
    t32 = *((unsigned int *)t27);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t24) != 0)
        goto LAB32;

LAB33:    t37 = *((unsigned int *)t10);
    t38 = *((unsigned int *)t28);
    t39 = (t37 & t38);
    *((unsigned int *)t36) = t39;
    t29 = (t10 + 4);
    t35 = (t28 + 4);
    t40 = (t36 + 4);
    t43 = *((unsigned int *)t29);
    t44 = *((unsigned int *)t35);
    t45 = (t43 | t44);
    *((unsigned int *)t40) = t45;
    t46 = *((unsigned int *)t40);
    t47 = (t46 != 0);
    if (t47 == 1)
        goto LAB34;

LAB35:
LAB36:    goto LAB29;

LAB30:    *((unsigned int *)t28) = 1;
    goto LAB33;

LAB32:    t26 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB33;

LAB34:    t48 = *((unsigned int *)t36);
    t49 = *((unsigned int *)t40);
    *((unsigned int *)t36) = (t48 | t49);
    t41 = (t10 + 4);
    t42 = (t28 + 4);
    t52 = *((unsigned int *)t10);
    t53 = (~(t52));
    t54 = *((unsigned int *)t41);
    t55 = (~(t54));
    t56 = *((unsigned int *)t28);
    t57 = (~(t56));
    t58 = *((unsigned int *)t42);
    t59 = (~(t58));
    t60 = (t53 & t55);
    t61 = (t57 & t59);
    t62 = (~(t60));
    t63 = (~(t61));
    t64 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t64 & t62);
    t65 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t65 & t63);
    t66 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t66 & t62);
    t67 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t67 & t63);
    goto LAB36;

LAB37:    xsi_set_current_line(85, ng0);
    t51 = (t0 + 5784);
    t68 = (t51 + 56U);
    t74 = *((char **)t68);
    t75 = ((char*)((ng7)));
    memset(t78, 0, 8);
    xsi_vlog_signed_add(t78, 32, t74, 21, t75, 32);
    t76 = (t0 + 7704);
    xsi_vlogvar_assign_value(t76, t78, 0, 0, 21);
    goto LAB39;

LAB40:    *((unsigned int *)t10) = 1;
    goto LAB43;

LAB42:    t8 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB43;

LAB44:    t17 = (t0 + 5784);
    t18 = (t17 + 56U);
    t22 = *((char **)t18);
    t23 = ((char*)((ng8)));
    memset(t25, 0, 8);
    xsi_vlog_signed_unary_minus(t25, 32, t23, 32);
    memset(t27, 0, 8);
    xsi_vlog_signed_less(t27, 32, t22, 21, t25, 32);
    memset(t28, 0, 8);
    t24 = (t27 + 4);
    t30 = *((unsigned int *)t24);
    t31 = (~(t30));
    t32 = *((unsigned int *)t27);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t24) != 0)
        goto LAB49;

LAB50:    t37 = *((unsigned int *)t10);
    t38 = *((unsigned int *)t28);
    t39 = (t37 & t38);
    *((unsigned int *)t36) = t39;
    t29 = (t10 + 4);
    t35 = (t28 + 4);
    t40 = (t36 + 4);
    t43 = *((unsigned int *)t29);
    t44 = *((unsigned int *)t35);
    t45 = (t43 | t44);
    *((unsigned int *)t40) = t45;
    t46 = *((unsigned int *)t40);
    t47 = (t46 != 0);
    if (t47 == 1)
        goto LAB51;

LAB52:
LAB53:    goto LAB46;

LAB47:    *((unsigned int *)t28) = 1;
    goto LAB50;

LAB49:    t26 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB50;

LAB51:    t48 = *((unsigned int *)t36);
    t49 = *((unsigned int *)t40);
    *((unsigned int *)t36) = (t48 | t49);
    t41 = (t10 + 4);
    t42 = (t28 + 4);
    t52 = *((unsigned int *)t10);
    t53 = (~(t52));
    t54 = *((unsigned int *)t41);
    t55 = (~(t54));
    t56 = *((unsigned int *)t28);
    t57 = (~(t56));
    t58 = *((unsigned int *)t42);
    t59 = (~(t58));
    t60 = (t53 & t55);
    t61 = (t57 & t59);
    t62 = (~(t60));
    t63 = (~(t61));
    t64 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t64 & t62);
    t65 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t65 & t63);
    t66 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t66 & t62);
    t67 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t67 & t63);
    goto LAB53;

LAB54:    xsi_set_current_line(86, ng0);
    t51 = (t0 + 5784);
    t68 = (t51 + 56U);
    t74 = *((char **)t68);
    t75 = ((char*)((ng9)));
    memset(t78, 0, 8);
    xsi_vlog_signed_add(t78, 32, t74, 21, t75, 32);
    t76 = (t0 + 7704);
    xsi_vlogvar_assign_value(t76, t78, 0, 0, 21);
    goto LAB56;

LAB57:    *((unsigned int *)t10) = 1;
    goto LAB60;

LAB59:    t8 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB60;

LAB61:    t17 = (t0 + 5784);
    t18 = (t17 + 56U);
    t22 = *((char **)t18);
    t23 = ((char*)((ng10)));
    memset(t25, 0, 8);
    xsi_vlog_signed_unary_minus(t25, 32, t23, 32);
    memset(t27, 0, 8);
    xsi_vlog_signed_less(t27, 32, t22, 21, t25, 32);
    memset(t28, 0, 8);
    t24 = (t27 + 4);
    t30 = *((unsigned int *)t24);
    t31 = (~(t30));
    t32 = *((unsigned int *)t27);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB64;

LAB65:    if (*((unsigned int *)t24) != 0)
        goto LAB66;

LAB67:    t37 = *((unsigned int *)t10);
    t38 = *((unsigned int *)t28);
    t39 = (t37 & t38);
    *((unsigned int *)t36) = t39;
    t29 = (t10 + 4);
    t35 = (t28 + 4);
    t40 = (t36 + 4);
    t43 = *((unsigned int *)t29);
    t44 = *((unsigned int *)t35);
    t45 = (t43 | t44);
    *((unsigned int *)t40) = t45;
    t46 = *((unsigned int *)t40);
    t47 = (t46 != 0);
    if (t47 == 1)
        goto LAB68;

LAB69:
LAB70:    goto LAB63;

LAB64:    *((unsigned int *)t28) = 1;
    goto LAB67;

LAB66:    t26 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB67;

LAB68:    t48 = *((unsigned int *)t36);
    t49 = *((unsigned int *)t40);
    *((unsigned int *)t36) = (t48 | t49);
    t41 = (t10 + 4);
    t42 = (t28 + 4);
    t52 = *((unsigned int *)t10);
    t53 = (~(t52));
    t54 = *((unsigned int *)t41);
    t55 = (~(t54));
    t56 = *((unsigned int *)t28);
    t57 = (~(t56));
    t58 = *((unsigned int *)t42);
    t59 = (~(t58));
    t60 = (t53 & t55);
    t61 = (t57 & t59);
    t62 = (~(t60));
    t63 = (~(t61));
    t64 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t64 & t62);
    t65 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t65 & t63);
    t66 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t66 & t62);
    t67 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t67 & t63);
    goto LAB70;

LAB71:    xsi_set_current_line(87, ng0);
    t51 = (t0 + 5784);
    t68 = (t51 + 56U);
    t74 = *((char **)t68);
    t75 = ((char*)((ng11)));
    memset(t78, 0, 8);
    xsi_vlog_signed_add(t78, 32, t74, 21, t75, 32);
    t76 = (t0 + 7704);
    xsi_vlogvar_assign_value(t76, t78, 0, 0, 21);
    goto LAB73;

LAB74:    *((unsigned int *)t10) = 1;
    goto LAB77;

LAB76:    t8 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB77;

LAB78:    t17 = (t0 + 5784);
    t18 = (t17 + 56U);
    t22 = *((char **)t18);
    t23 = ((char*)((ng12)));
    memset(t25, 0, 8);
    xsi_vlog_signed_unary_minus(t25, 32, t23, 32);
    memset(t27, 0, 8);
    xsi_vlog_signed_less(t27, 32, t22, 21, t25, 32);
    memset(t28, 0, 8);
    t24 = (t27 + 4);
    t30 = *((unsigned int *)t24);
    t31 = (~(t30));
    t32 = *((unsigned int *)t27);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB81;

LAB82:    if (*((unsigned int *)t24) != 0)
        goto LAB83;

LAB84:    t37 = *((unsigned int *)t10);
    t38 = *((unsigned int *)t28);
    t39 = (t37 & t38);
    *((unsigned int *)t36) = t39;
    t29 = (t10 + 4);
    t35 = (t28 + 4);
    t40 = (t36 + 4);
    t43 = *((unsigned int *)t29);
    t44 = *((unsigned int *)t35);
    t45 = (t43 | t44);
    *((unsigned int *)t40) = t45;
    t46 = *((unsigned int *)t40);
    t47 = (t46 != 0);
    if (t47 == 1)
        goto LAB85;

LAB86:
LAB87:    goto LAB80;

LAB81:    *((unsigned int *)t28) = 1;
    goto LAB84;

LAB83:    t26 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB84;

LAB85:    t48 = *((unsigned int *)t36);
    t49 = *((unsigned int *)t40);
    *((unsigned int *)t36) = (t48 | t49);
    t41 = (t10 + 4);
    t42 = (t28 + 4);
    t52 = *((unsigned int *)t10);
    t53 = (~(t52));
    t54 = *((unsigned int *)t41);
    t55 = (~(t54));
    t56 = *((unsigned int *)t28);
    t57 = (~(t56));
    t58 = *((unsigned int *)t42);
    t59 = (~(t58));
    t60 = (t53 & t55);
    t61 = (t57 & t59);
    t62 = (~(t60));
    t63 = (~(t61));
    t64 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t64 & t62);
    t65 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t65 & t63);
    t66 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t66 & t62);
    t67 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t67 & t63);
    goto LAB87;

LAB88:    xsi_set_current_line(88, ng0);
    t51 = (t0 + 5784);
    t68 = (t51 + 56U);
    t74 = *((char **)t68);
    t75 = ((char*)((ng13)));
    memset(t78, 0, 8);
    xsi_vlog_signed_add(t78, 32, t74, 21, t75, 32);
    t76 = (t0 + 7704);
    xsi_vlogvar_assign_value(t76, t78, 0, 0, 21);
    goto LAB90;

LAB91:    *((unsigned int *)t10) = 1;
    goto LAB94;

LAB93:    t8 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB94;

LAB95:    t17 = (t0 + 5784);
    t18 = (t17 + 56U);
    t22 = *((char **)t18);
    t23 = (t0 + 472);
    t24 = *((char **)t23);
    memset(t25, 0, 8);
    xsi_vlog_signed_unary_minus(t25, 32, t24, 32);
    memset(t27, 0, 8);
    xsi_vlog_signed_less(t27, 32, t22, 21, t25, 32);
    memset(t28, 0, 8);
    t23 = (t27 + 4);
    t30 = *((unsigned int *)t23);
    t31 = (~(t30));
    t32 = *((unsigned int *)t27);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB98;

LAB99:    if (*((unsigned int *)t23) != 0)
        goto LAB100;

LAB101:    t37 = *((unsigned int *)t10);
    t38 = *((unsigned int *)t28);
    t39 = (t37 & t38);
    *((unsigned int *)t36) = t39;
    t29 = (t10 + 4);
    t35 = (t28 + 4);
    t40 = (t36 + 4);
    t43 = *((unsigned int *)t29);
    t44 = *((unsigned int *)t35);
    t45 = (t43 | t44);
    *((unsigned int *)t40) = t45;
    t46 = *((unsigned int *)t40);
    t47 = (t46 != 0);
    if (t47 == 1)
        goto LAB102;

LAB103:
LAB104:    goto LAB97;

LAB98:    *((unsigned int *)t28) = 1;
    goto LAB101;

LAB100:    t26 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB101;

LAB102:    t48 = *((unsigned int *)t36);
    t49 = *((unsigned int *)t40);
    *((unsigned int *)t36) = (t48 | t49);
    t41 = (t10 + 4);
    t42 = (t28 + 4);
    t52 = *((unsigned int *)t10);
    t53 = (~(t52));
    t54 = *((unsigned int *)t41);
    t55 = (~(t54));
    t56 = *((unsigned int *)t28);
    t57 = (~(t56));
    t58 = *((unsigned int *)t42);
    t59 = (~(t58));
    t60 = (t53 & t55);
    t61 = (t57 & t59);
    t62 = (~(t60));
    t63 = (~(t61));
    t64 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t64 & t62);
    t65 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t65 & t63);
    t66 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t66 & t62);
    t67 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t67 & t63);
    goto LAB104;

LAB105:    xsi_set_current_line(89, ng0);
    t51 = (t0 + 5784);
    t68 = (t51 + 56U);
    t74 = *((char **)t68);
    t75 = ((char*)((ng14)));
    memset(t78, 0, 8);
    xsi_vlog_signed_add(t78, 32, t74, 21, t75, 32);
    t76 = (t0 + 7704);
    xsi_vlogvar_assign_value(t76, t78, 0, 0, 21);
    goto LAB107;

LAB108:    *((unsigned int *)t10) = 1;
    goto LAB111;

LAB110:    t8 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB111;

LAB112:    t17 = (t0 + 5784);
    t18 = (t17 + 56U);
    t22 = *((char **)t18);
    t23 = ((char*)((ng15)));
    memset(t25, 0, 8);
    xsi_vlog_signed_leq(t25, 32, t22, 21, t23, 32);
    memset(t27, 0, 8);
    t24 = (t25 + 4);
    t30 = *((unsigned int *)t24);
    t31 = (~(t30));
    t32 = *((unsigned int *)t25);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB115;

LAB116:    if (*((unsigned int *)t24) != 0)
        goto LAB117;

LAB118:    t37 = *((unsigned int *)t10);
    t38 = *((unsigned int *)t27);
    t39 = (t37 & t38);
    *((unsigned int *)t28) = t39;
    t29 = (t10 + 4);
    t35 = (t27 + 4);
    t40 = (t28 + 4);
    t43 = *((unsigned int *)t29);
    t44 = *((unsigned int *)t35);
    t45 = (t43 | t44);
    *((unsigned int *)t40) = t45;
    t46 = *((unsigned int *)t40);
    t47 = (t46 != 0);
    if (t47 == 1)
        goto LAB119;

LAB120:
LAB121:    goto LAB114;

LAB115:    *((unsigned int *)t27) = 1;
    goto LAB118;

LAB117:    t26 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB118;

LAB119:    t48 = *((unsigned int *)t28);
    t49 = *((unsigned int *)t40);
    *((unsigned int *)t28) = (t48 | t49);
    t41 = (t10 + 4);
    t42 = (t27 + 4);
    t52 = *((unsigned int *)t10);
    t53 = (~(t52));
    t54 = *((unsigned int *)t41);
    t55 = (~(t54));
    t56 = *((unsigned int *)t27);
    t57 = (~(t56));
    t58 = *((unsigned int *)t42);
    t59 = (~(t58));
    t60 = (t53 & t55);
    t61 = (t57 & t59);
    t62 = (~(t60));
    t63 = (~(t61));
    t64 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t64 & t62);
    t65 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t65 & t63);
    t66 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t66 & t62);
    t67 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t67 & t63);
    goto LAB121;

LAB122:    xsi_set_current_line(90, ng0);
    t51 = (t0 + 5784);
    t68 = (t51 + 56U);
    t74 = *((char **)t68);
    t75 = (t0 + 7704);
    xsi_vlogvar_assign_value(t75, t74, 0, 0, 21);
    goto LAB124;

LAB125:    *((unsigned int *)t9) = 1;
    goto LAB128;

LAB127:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB128;

LAB129:    t17 = (t0 + 5784);
    t18 = (t17 + 56U);
    t22 = *((char **)t18);
    t23 = ((char*)((ng12)));
    memset(t10, 0, 8);
    xsi_vlog_signed_less(t10, 32, t22, 21, t23, 32);
    memset(t25, 0, 8);
    t24 = (t10 + 4);
    t30 = *((unsigned int *)t24);
    t31 = (~(t30));
    t32 = *((unsigned int *)t10);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB132;

LAB133:    if (*((unsigned int *)t24) != 0)
        goto LAB134;

LAB135:    t37 = *((unsigned int *)t9);
    t38 = *((unsigned int *)t25);
    t39 = (t37 & t38);
    *((unsigned int *)t27) = t39;
    t29 = (t9 + 4);
    t35 = (t25 + 4);
    t40 = (t27 + 4);
    t43 = *((unsigned int *)t29);
    t44 = *((unsigned int *)t35);
    t45 = (t43 | t44);
    *((unsigned int *)t40) = t45;
    t46 = *((unsigned int *)t40);
    t47 = (t46 != 0);
    if (t47 == 1)
        goto LAB136;

LAB137:
LAB138:    goto LAB131;

LAB132:    *((unsigned int *)t25) = 1;
    goto LAB135;

LAB134:    t26 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB135;

LAB136:    t48 = *((unsigned int *)t27);
    t49 = *((unsigned int *)t40);
    *((unsigned int *)t27) = (t48 | t49);
    t41 = (t9 + 4);
    t42 = (t25 + 4);
    t52 = *((unsigned int *)t9);
    t53 = (~(t52));
    t54 = *((unsigned int *)t41);
    t55 = (~(t54));
    t56 = *((unsigned int *)t25);
    t57 = (~(t56));
    t58 = *((unsigned int *)t42);
    t59 = (~(t58));
    t60 = (t53 & t55);
    t61 = (t57 & t59);
    t62 = (~(t60));
    t63 = (~(t61));
    t64 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t64 & t62);
    t65 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t65 & t63);
    t66 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t66 & t62);
    t67 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t67 & t63);
    goto LAB138;

LAB139:    xsi_set_current_line(91, ng0);
    t51 = (t0 + 5784);
    t68 = (t51 + 56U);
    t74 = *((char **)t68);
    t75 = ((char*)((ng14)));
    memset(t28, 0, 8);
    xsi_vlog_signed_minus(t28, 32, t74, 21, t75, 32);
    t76 = (t0 + 7704);
    xsi_vlogvar_assign_value(t76, t28, 0, 0, 21);
    goto LAB141;

LAB142:    *((unsigned int *)t9) = 1;
    goto LAB145;

LAB144:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB145;

LAB146:    t17 = (t0 + 5784);
    t18 = (t17 + 56U);
    t22 = *((char **)t18);
    t23 = ((char*)((ng10)));
    memset(t10, 0, 8);
    xsi_vlog_signed_less(t10, 32, t22, 21, t23, 32);
    memset(t25, 0, 8);
    t24 = (t10 + 4);
    t30 = *((unsigned int *)t24);
    t31 = (~(t30));
    t32 = *((unsigned int *)t10);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB149;

LAB150:    if (*((unsigned int *)t24) != 0)
        goto LAB151;

LAB152:    t37 = *((unsigned int *)t9);
    t38 = *((unsigned int *)t25);
    t39 = (t37 & t38);
    *((unsigned int *)t27) = t39;
    t29 = (t9 + 4);
    t35 = (t25 + 4);
    t40 = (t27 + 4);
    t43 = *((unsigned int *)t29);
    t44 = *((unsigned int *)t35);
    t45 = (t43 | t44);
    *((unsigned int *)t40) = t45;
    t46 = *((unsigned int *)t40);
    t47 = (t46 != 0);
    if (t47 == 1)
        goto LAB153;

LAB154:
LAB155:    goto LAB148;

LAB149:    *((unsigned int *)t25) = 1;
    goto LAB152;

LAB151:    t26 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB152;

LAB153:    t48 = *((unsigned int *)t27);
    t49 = *((unsigned int *)t40);
    *((unsigned int *)t27) = (t48 | t49);
    t41 = (t9 + 4);
    t42 = (t25 + 4);
    t52 = *((unsigned int *)t9);
    t53 = (~(t52));
    t54 = *((unsigned int *)t41);
    t55 = (~(t54));
    t56 = *((unsigned int *)t25);
    t57 = (~(t56));
    t58 = *((unsigned int *)t42);
    t59 = (~(t58));
    t60 = (t53 & t55);
    t61 = (t57 & t59);
    t62 = (~(t60));
    t63 = (~(t61));
    t64 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t64 & t62);
    t65 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t65 & t63);
    t66 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t66 & t62);
    t67 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t67 & t63);
    goto LAB155;

LAB156:    xsi_set_current_line(92, ng0);
    t51 = (t0 + 5784);
    t68 = (t51 + 56U);
    t74 = *((char **)t68);
    t75 = ((char*)((ng13)));
    memset(t28, 0, 8);
    xsi_vlog_signed_minus(t28, 32, t74, 21, t75, 32);
    t76 = (t0 + 7704);
    xsi_vlogvar_assign_value(t76, t28, 0, 0, 21);
    goto LAB158;

LAB159:    *((unsigned int *)t9) = 1;
    goto LAB162;

LAB161:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB162;

LAB163:    t17 = (t0 + 5784);
    t18 = (t17 + 56U);
    t22 = *((char **)t18);
    t23 = ((char*)((ng8)));
    memset(t10, 0, 8);
    xsi_vlog_signed_less(t10, 32, t22, 21, t23, 32);
    memset(t25, 0, 8);
    t24 = (t10 + 4);
    t30 = *((unsigned int *)t24);
    t31 = (~(t30));
    t32 = *((unsigned int *)t10);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB166;

LAB167:    if (*((unsigned int *)t24) != 0)
        goto LAB168;

LAB169:    t37 = *((unsigned int *)t9);
    t38 = *((unsigned int *)t25);
    t39 = (t37 & t38);
    *((unsigned int *)t27) = t39;
    t29 = (t9 + 4);
    t35 = (t25 + 4);
    t40 = (t27 + 4);
    t43 = *((unsigned int *)t29);
    t44 = *((unsigned int *)t35);
    t45 = (t43 | t44);
    *((unsigned int *)t40) = t45;
    t46 = *((unsigned int *)t40);
    t47 = (t46 != 0);
    if (t47 == 1)
        goto LAB170;

LAB171:
LAB172:    goto LAB165;

LAB166:    *((unsigned int *)t25) = 1;
    goto LAB169;

LAB168:    t26 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB169;

LAB170:    t48 = *((unsigned int *)t27);
    t49 = *((unsigned int *)t40);
    *((unsigned int *)t27) = (t48 | t49);
    t41 = (t9 + 4);
    t42 = (t25 + 4);
    t52 = *((unsigned int *)t9);
    t53 = (~(t52));
    t54 = *((unsigned int *)t41);
    t55 = (~(t54));
    t56 = *((unsigned int *)t25);
    t57 = (~(t56));
    t58 = *((unsigned int *)t42);
    t59 = (~(t58));
    t60 = (t53 & t55);
    t61 = (t57 & t59);
    t62 = (~(t60));
    t63 = (~(t61));
    t64 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t64 & t62);
    t65 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t65 & t63);
    t66 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t66 & t62);
    t67 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t67 & t63);
    goto LAB172;

LAB173:    xsi_set_current_line(93, ng0);
    t51 = (t0 + 5784);
    t68 = (t51 + 56U);
    t74 = *((char **)t68);
    t75 = ((char*)((ng11)));
    memset(t28, 0, 8);
    xsi_vlog_signed_minus(t28, 32, t74, 21, t75, 32);
    t76 = (t0 + 7704);
    xsi_vlogvar_assign_value(t76, t28, 0, 0, 21);
    goto LAB175;

LAB176:    *((unsigned int *)t9) = 1;
    goto LAB179;

LAB178:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB179;

LAB180:    t17 = (t0 + 5784);
    t18 = (t17 + 56U);
    t22 = *((char **)t18);
    t23 = ((char*)((ng6)));
    memset(t10, 0, 8);
    xsi_vlog_signed_less(t10, 32, t22, 21, t23, 32);
    memset(t25, 0, 8);
    t24 = (t10 + 4);
    t30 = *((unsigned int *)t24);
    t31 = (~(t30));
    t32 = *((unsigned int *)t10);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB183;

LAB184:    if (*((unsigned int *)t24) != 0)
        goto LAB185;

LAB186:    t37 = *((unsigned int *)t9);
    t38 = *((unsigned int *)t25);
    t39 = (t37 & t38);
    *((unsigned int *)t27) = t39;
    t29 = (t9 + 4);
    t35 = (t25 + 4);
    t40 = (t27 + 4);
    t43 = *((unsigned int *)t29);
    t44 = *((unsigned int *)t35);
    t45 = (t43 | t44);
    *((unsigned int *)t40) = t45;
    t46 = *((unsigned int *)t40);
    t47 = (t46 != 0);
    if (t47 == 1)
        goto LAB187;

LAB188:
LAB189:    goto LAB182;

LAB183:    *((unsigned int *)t25) = 1;
    goto LAB186;

LAB185:    t26 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB186;

LAB187:    t48 = *((unsigned int *)t27);
    t49 = *((unsigned int *)t40);
    *((unsigned int *)t27) = (t48 | t49);
    t41 = (t9 + 4);
    t42 = (t25 + 4);
    t52 = *((unsigned int *)t9);
    t53 = (~(t52));
    t54 = *((unsigned int *)t41);
    t55 = (~(t54));
    t56 = *((unsigned int *)t25);
    t57 = (~(t56));
    t58 = *((unsigned int *)t42);
    t59 = (~(t58));
    t60 = (t53 & t55);
    t61 = (t57 & t59);
    t62 = (~(t60));
    t63 = (~(t61));
    t64 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t64 & t62);
    t65 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t65 & t63);
    t66 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t66 & t62);
    t67 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t67 & t63);
    goto LAB189;

LAB190:    xsi_set_current_line(94, ng0);
    t51 = (t0 + 5784);
    t68 = (t51 + 56U);
    t74 = *((char **)t68);
    t75 = ((char*)((ng9)));
    memset(t28, 0, 8);
    xsi_vlog_signed_minus(t28, 32, t74, 21, t75, 32);
    t76 = (t0 + 7704);
    xsi_vlogvar_assign_value(t76, t28, 0, 0, 21);
    goto LAB192;

LAB193:    *((unsigned int *)t9) = 1;
    goto LAB196;

LAB195:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB196;

LAB197:    t17 = (t0 + 5784);
    t18 = (t17 + 56U);
    t22 = *((char **)t18);
    t23 = ((char*)((ng4)));
    memset(t10, 0, 8);
    xsi_vlog_signed_less(t10, 32, t22, 21, t23, 32);
    memset(t25, 0, 8);
    t24 = (t10 + 4);
    t30 = *((unsigned int *)t24);
    t31 = (~(t30));
    t32 = *((unsigned int *)t10);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB200;

LAB201:    if (*((unsigned int *)t24) != 0)
        goto LAB202;

LAB203:    t37 = *((unsigned int *)t9);
    t38 = *((unsigned int *)t25);
    t39 = (t37 & t38);
    *((unsigned int *)t27) = t39;
    t29 = (t9 + 4);
    t35 = (t25 + 4);
    t40 = (t27 + 4);
    t43 = *((unsigned int *)t29);
    t44 = *((unsigned int *)t35);
    t45 = (t43 | t44);
    *((unsigned int *)t40) = t45;
    t46 = *((unsigned int *)t40);
    t47 = (t46 != 0);
    if (t47 == 1)
        goto LAB204;

LAB205:
LAB206:    goto LAB199;

LAB200:    *((unsigned int *)t25) = 1;
    goto LAB203;

LAB202:    t26 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB203;

LAB204:    t48 = *((unsigned int *)t27);
    t49 = *((unsigned int *)t40);
    *((unsigned int *)t27) = (t48 | t49);
    t41 = (t9 + 4);
    t42 = (t25 + 4);
    t52 = *((unsigned int *)t9);
    t53 = (~(t52));
    t54 = *((unsigned int *)t41);
    t55 = (~(t54));
    t56 = *((unsigned int *)t25);
    t57 = (~(t56));
    t58 = *((unsigned int *)t42);
    t59 = (~(t58));
    t60 = (t53 & t55);
    t61 = (t57 & t59);
    t62 = (~(t60));
    t63 = (~(t61));
    t64 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t64 & t62);
    t65 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t65 & t63);
    t66 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t66 & t62);
    t67 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t67 & t63);
    goto LAB206;

LAB207:    xsi_set_current_line(95, ng0);
    t51 = (t0 + 5784);
    t68 = (t51 + 56U);
    t74 = *((char **)t68);
    t75 = ((char*)((ng7)));
    memset(t28, 0, 8);
    xsi_vlog_signed_minus(t28, 32, t74, 21, t75, 32);
    t76 = (t0 + 7704);
    xsi_vlogvar_assign_value(t76, t28, 0, 0, 21);
    goto LAB209;

LAB210:    *((unsigned int *)t9) = 1;
    goto LAB213;

LAB212:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB213;

LAB214:    t17 = (t0 + 5784);
    t18 = (t17 + 56U);
    t22 = *((char **)t18);
    t23 = ((char*)((ng16)));
    memset(t10, 0, 8);
    xsi_vlog_signed_leq(t10, 32, t22, 21, t23, 32);
    memset(t25, 0, 8);
    t24 = (t10 + 4);
    t30 = *((unsigned int *)t24);
    t31 = (~(t30));
    t32 = *((unsigned int *)t10);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB217;

LAB218:    if (*((unsigned int *)t24) != 0)
        goto LAB219;

LAB220:    t37 = *((unsigned int *)t9);
    t38 = *((unsigned int *)t25);
    t39 = (t37 & t38);
    *((unsigned int *)t27) = t39;
    t29 = (t9 + 4);
    t35 = (t25 + 4);
    t40 = (t27 + 4);
    t43 = *((unsigned int *)t29);
    t44 = *((unsigned int *)t35);
    t45 = (t43 | t44);
    *((unsigned int *)t40) = t45;
    t46 = *((unsigned int *)t40);
    t47 = (t46 != 0);
    if (t47 == 1)
        goto LAB221;

LAB222:
LAB223:    goto LAB216;

LAB217:    *((unsigned int *)t25) = 1;
    goto LAB220;

LAB219:    t26 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB220;

LAB221:    t48 = *((unsigned int *)t27);
    t49 = *((unsigned int *)t40);
    *((unsigned int *)t27) = (t48 | t49);
    t41 = (t9 + 4);
    t42 = (t25 + 4);
    t52 = *((unsigned int *)t9);
    t53 = (~(t52));
    t54 = *((unsigned int *)t41);
    t55 = (~(t54));
    t56 = *((unsigned int *)t25);
    t57 = (~(t56));
    t58 = *((unsigned int *)t42);
    t59 = (~(t58));
    t60 = (t53 & t55);
    t61 = (t57 & t59);
    t62 = (~(t60));
    t63 = (~(t61));
    t64 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t64 & t62);
    t65 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t65 & t63);
    t66 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t66 & t62);
    t67 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t67 & t63);
    goto LAB223;

LAB224:    xsi_set_current_line(96, ng0);
    t51 = (t0 + 5784);
    t68 = (t51 + 56U);
    t74 = *((char **)t68);
    t75 = ((char*)((ng5)));
    memset(t28, 0, 8);
    xsi_vlog_signed_minus(t28, 32, t74, 21, t75, 32);
    t76 = (t0 + 7704);
    xsi_vlogvar_assign_value(t76, t28, 0, 0, 21);
    goto LAB226;

}

static void Cont_100_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;

LAB0:    t1 = (t0 + 9352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 7704);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t4 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 0);
    *((unsigned int *)t4) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t13 & 65535U);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 & 65535U);
    t15 = (t0 + 7704);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memset(t18, 0, 8);
    t19 = (t18 + 4);
    t20 = (t17 + 4);
    t21 = *((unsigned int *)t17);
    t22 = (t21 >> 20);
    t23 = (t22 & 1);
    *((unsigned int *)t18) = t23;
    t24 = *((unsigned int *)t20);
    t25 = (t24 >> 20);
    t26 = (t25 & 1);
    *((unsigned int *)t19) = t26;
    xsi_vlogtype_concat(t3, 17, 17, 2U, t18, 1, t4, 16);
    t27 = (t0 + 12408);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    memset(t31, 0, 8);
    t32 = 131071U;
    t33 = t32;
    t34 = (t3 + 4);
    t35 = *((unsigned int *)t3);
    t32 = (t32 & t35);
    t36 = *((unsigned int *)t34);
    t33 = (t33 & t36);
    t37 = (t31 + 4);
    t38 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t38 | t32);
    t39 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t39 | t33);
    xsi_driver_vfirst_trans(t27, 0, 16);
    t40 = (t0 + 12168);
    *((int *)t40) = 1;

LAB1:    return;
}

static void Always_102_2(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;

LAB0:    t1 = (t0 + 9600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 12184);
    *((int *)t2) = 1;
    t3 = (t0 + 9632);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(103, ng0);

LAB5:    xsi_set_current_line(104, ng0);
    t5 = (t0 + 2344U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(110, ng0);

LAB14:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 3144U);
    t3 = *((char **)t2);
    memcpy(t4, t3, 8);
    t9 = *((unsigned int *)t3);
    t10 = (t9 & 32768U);
    t7 = t10;
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t14 = (t11 & 32768U);
    t8 = t14;
    t15 = (t10 != 0);
    if (t15 == 1)
        goto LAB15;

LAB16:    t17 = (t14 != 0);
    if (t17 == 1)
        goto LAB17;

LAB18:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 2097151U);
    t6 = (t4 + 4);
    t22 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t22 & 2097151U);
    t12 = (t0 + 6584);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 21, 0LL);
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 2984U);
    t3 = *((char **)t2);
    memcpy(t4, t3, 8);
    t9 = *((unsigned int *)t3);
    t10 = (t9 & 32768U);
    t7 = t10;
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t14 = (t11 & 32768U);
    t8 = t14;
    t15 = (t10 != 0);
    if (t15 == 1)
        goto LAB19;

LAB20:    t17 = (t14 != 0);
    if (t17 == 1)
        goto LAB21;

LAB22:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 2097151U);
    t6 = (t4 + 4);
    t22 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t22 & 2097151U);
    t12 = (t0 + 6744);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 21, 0LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(105, ng0);

LAB13:    xsi_set_current_line(106, ng0);
    t19 = ((char*)((ng18)));
    t20 = (t0 + 6584);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 21, 0LL);
    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 6744);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 21, 0LL);
    goto LAB12;

LAB15:    t16 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t16 | 4294901760U);
    goto LAB16;

LAB17:    t5 = (t4 + 4);
    t18 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t18 | 4294901760U);
    goto LAB18;

LAB19:    t16 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t16 | 4294901760U);
    goto LAB20;

LAB21:    t5 = (t4 + 4);
    t18 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t18 | 4294901760U);
    goto LAB22;

}

static void Cont_116_3(char *t0)
{
    char t5[16];
    char t21[8];
    char t28[16];
    char t44[8];
    char t48[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    int t40;
    char *t41;
    char *t42;
    char *t43;
    char *t45;
    char *t46;
    char *t47;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;

LAB0:    t1 = (t0 + 9848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(116, ng0);
    t2 = (t0 + 2504U);
    t3 = *((char **)t2);
    t2 = (t0 + 3144U);
    t4 = *((char **)t2);
    xsi_vlog_signed_multiply(t5, 42, t3, 21, t4, 16);
    t2 = (t0 + 9656);
    t6 = (t0 + 1392);
    t7 = xsi_create_subprogram_invocation(t2, 0, t0, t6, 0, 0);
    t8 = (t0 + 8184);
    xsi_vlogvar_assign_value(t8, t5, 0, 0, 42);

LAB4:    t9 = (t0 + 9752);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);
    if (t17 != 0)
        goto LAB6;

LAB5:    t10 = (t0 + 9752);
    t18 = *((char **)t10);
    t10 = (t0 + 8024);
    t19 = (t10 + 56U);
    t20 = *((char **)t19);
    memcpy(t21, t20, 8);
    t22 = (t0 + 1392);
    t23 = (t0 + 9656);
    t24 = 0;
    xsi_delete_subprogram_invocation(t22, t18, t0, t23, t24);
    t25 = (t0 + 2664U);
    t26 = *((char **)t25);
    t25 = (t0 + 2984U);
    t27 = *((char **)t25);
    xsi_vlog_signed_multiply(t28, 42, t26, 21, t27, 16);
    t25 = (t0 + 9656);
    t29 = (t0 + 1392);
    t30 = xsi_create_subprogram_invocation(t25, 0, t0, t29, 0, 0);
    t31 = (t0 + 8184);
    xsi_vlogvar_assign_value(t31, t28, 0, 0, 42);

LAB7:    t32 = (t0 + 9752);
    t33 = *((char **)t32);
    t34 = (t33 + 80U);
    t35 = *((char **)t34);
    t36 = (t35 + 272U);
    t37 = *((char **)t36);
    t38 = (t37 + 0U);
    t39 = *((char **)t38);
    t40 = ((int  (*)(char *, char *))t39)(t0, t33);
    if (t40 != 0)
        goto LAB9;

LAB8:    t33 = (t0 + 9752);
    t41 = *((char **)t33);
    t33 = (t0 + 8024);
    t42 = (t33 + 56U);
    t43 = *((char **)t42);
    memcpy(t44, t43, 8);
    t45 = (t0 + 1392);
    t46 = (t0 + 9656);
    t47 = 0;
    xsi_delete_subprogram_invocation(t45, t41, t0, t46, t47);
    memset(t48, 0, 8);
    xsi_vlog_signed_add(t48, 21, t21, 21, t44, 21);
    t49 = (t0 + 12472);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    t52 = (t51 + 56U);
    t53 = *((char **)t52);
    memset(t53, 0, 8);
    t54 = 2097151U;
    t55 = t54;
    t56 = (t48 + 4);
    t57 = *((unsigned int *)t48);
    t54 = (t54 & t57);
    t58 = *((unsigned int *)t56);
    t55 = (t55 & t58);
    t59 = (t53 + 4);
    t60 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t60 | t54);
    t61 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t61 | t55);
    xsi_driver_vfirst_trans(t49, 0, 20);
    t62 = (t0 + 12200);
    *((int *)t62) = 1;

LAB1:    return;
LAB6:    t9 = (t0 + 9848U);
    *((char **)t9) = &&LAB4;
    goto LAB1;

LAB9:    t32 = (t0 + 9848U);
    *((char **)t32) = &&LAB7;
    goto LAB1;

}

static void Cont_117_4(char *t0)
{
    char t5[16];
    char t21[8];
    char t28[16];
    char t44[8];
    char t48[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    int t40;
    char *t41;
    char *t42;
    char *t43;
    char *t45;
    char *t46;
    char *t47;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;

LAB0:    t1 = (t0 + 10096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 2664U);
    t3 = *((char **)t2);
    t2 = (t0 + 3144U);
    t4 = *((char **)t2);
    xsi_vlog_signed_multiply(t5, 42, t3, 21, t4, 16);
    t2 = (t0 + 9904);
    t6 = (t0 + 1392);
    t7 = xsi_create_subprogram_invocation(t2, 0, t0, t6, 0, 0);
    t8 = (t0 + 8184);
    xsi_vlogvar_assign_value(t8, t5, 0, 0, 42);

LAB4:    t9 = (t0 + 10000);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);
    if (t17 != 0)
        goto LAB6;

LAB5:    t10 = (t0 + 10000);
    t18 = *((char **)t10);
    t10 = (t0 + 8024);
    t19 = (t10 + 56U);
    t20 = *((char **)t19);
    memcpy(t21, t20, 8);
    t22 = (t0 + 1392);
    t23 = (t0 + 9904);
    t24 = 0;
    xsi_delete_subprogram_invocation(t22, t18, t0, t23, t24);
    t25 = (t0 + 2504U);
    t26 = *((char **)t25);
    t25 = (t0 + 2984U);
    t27 = *((char **)t25);
    xsi_vlog_signed_multiply(t28, 42, t26, 21, t27, 16);
    t25 = (t0 + 9904);
    t29 = (t0 + 1392);
    t30 = xsi_create_subprogram_invocation(t25, 0, t0, t29, 0, 0);
    t31 = (t0 + 8184);
    xsi_vlogvar_assign_value(t31, t28, 0, 0, 42);

LAB7:    t32 = (t0 + 10000);
    t33 = *((char **)t32);
    t34 = (t33 + 80U);
    t35 = *((char **)t34);
    t36 = (t35 + 272U);
    t37 = *((char **)t36);
    t38 = (t37 + 0U);
    t39 = *((char **)t38);
    t40 = ((int  (*)(char *, char *))t39)(t0, t33);
    if (t40 != 0)
        goto LAB9;

LAB8:    t33 = (t0 + 10000);
    t41 = *((char **)t33);
    t33 = (t0 + 8024);
    t42 = (t33 + 56U);
    t43 = *((char **)t42);
    memcpy(t44, t43, 8);
    t45 = (t0 + 1392);
    t46 = (t0 + 9904);
    t47 = 0;
    xsi_delete_subprogram_invocation(t45, t41, t0, t46, t47);
    memset(t48, 0, 8);
    xsi_vlog_signed_minus(t48, 21, t21, 21, t44, 21);
    t49 = (t0 + 12536);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    t52 = (t51 + 56U);
    t53 = *((char **)t52);
    memset(t53, 0, 8);
    t54 = 2097151U;
    t55 = t54;
    t56 = (t48 + 4);
    t57 = *((unsigned int *)t48);
    t54 = (t54 & t57);
    t58 = *((unsigned int *)t56);
    t55 = (t55 & t58);
    t59 = (t53 + 4);
    t60 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t60 | t54);
    t61 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t61 | t55);
    xsi_driver_vfirst_trans(t49, 0, 20);
    t62 = (t0 + 12216);
    *((int *)t62) = 1;

LAB1:    return;
LAB6:    t9 = (t0 + 10096U);
    *((char **)t9) = &&LAB4;
    goto LAB1;

LAB9:    t32 = (t0 + 10096U);
    *((char **)t32) = &&LAB7;
    goto LAB1;

}

static void Always_119_5(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 10344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(119, ng0);
    t2 = (t0 + 12232);
    *((int *)t2) = 1;
    t3 = (t0 + 10376);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(120, ng0);

LAB5:    xsi_set_current_line(121, ng0);
    t5 = (t0 + 2344U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(127, ng0);

LAB14:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 4744U);
    t3 = *((char **)t2);
    t2 = (t0 + 6264);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 21, 0LL);
    xsi_set_current_line(129, ng0);
    t2 = (t0 + 4904U);
    t3 = *((char **)t2);
    t2 = (t0 + 6424);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 21, 0LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(122, ng0);

LAB13:    xsi_set_current_line(123, ng0);
    t19 = ((char*)((ng18)));
    t20 = (t0 + 6264);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 21, 0LL);
    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 6424);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 21, 0LL);
    goto LAB12;

}

static void Cont_133_6(char *t0)
{
    char t5[16];
    char t8[16];
    char t9[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 10592U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(133, ng0);
    t2 = (t0 + 4744U);
    t3 = *((char **)t2);
    t2 = (t0 + 4744U);
    t4 = *((char **)t2);
    xsi_vlog_signed_multiply(t5, 42, t3, 21, t4, 21);
    t2 = (t0 + 4904U);
    t6 = *((char **)t2);
    t2 = (t0 + 4904U);
    t7 = *((char **)t2);
    xsi_vlog_signed_multiply(t8, 42, t6, 21, t7, 21);
    xsi_vlog_signed_add(t9, 42, t5, 42, t8, 42);
    t2 = (t0 + 12600);
    t10 = (t2 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    xsi_vlog_bit_copy(t13, 0, t9, 0, 42);
    xsi_driver_vfirst_trans(t2, 0, 41);
    t14 = (t0 + 12248);
    *((int *)t14) = 1;

LAB1:    return;
}

static void Cont_134_7(char *t0)
{
    char t5[16];
    char t21[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;

LAB0:    t1 = (t0 + 10840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(134, ng0);
    t2 = (t0 + 4424U);
    t3 = *((char **)t2);
    t2 = (t0 + 608);
    t4 = *((char **)t2);
    xsi_vlog_unsigned_multiply(t5, 42, t3, 21, t4, 32);
    t2 = (t0 + 10648);
    t6 = (t0 + 1392);
    t7 = xsi_create_subprogram_invocation(t2, 0, t0, t6, 0, 0);
    t8 = (t0 + 8184);
    xsi_vlogvar_assign_value(t8, t5, 0, 0, 42);

LAB4:    t9 = (t0 + 10744);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);
    if (t17 != 0)
        goto LAB6;

LAB5:    t10 = (t0 + 10744);
    t18 = *((char **)t10);
    t10 = (t0 + 8024);
    t19 = (t10 + 56U);
    t20 = *((char **)t19);
    memcpy(t21, t20, 8);
    t22 = (t0 + 1392);
    t23 = (t0 + 10648);
    t24 = 0;
    xsi_delete_subprogram_invocation(t22, t18, t0, t23, t24);
    t25 = (t0 + 12664);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memset(t29, 0, 8);
    t30 = 2097151U;
    t31 = t30;
    t32 = (t21 + 4);
    t33 = *((unsigned int *)t21);
    t30 = (t30 & t33);
    t34 = *((unsigned int *)t32);
    t31 = (t31 & t34);
    t35 = (t29 + 4);
    t36 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t36 | t30);
    t37 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t37 | t31);
    xsi_driver_vfirst_trans(t25, 0, 20);
    t38 = (t0 + 12264);
    *((int *)t38) = 1;

LAB1:    return;
LAB6:    t9 = (t0 + 10840U);
    *((char **)t9) = &&LAB4;
    goto LAB1;

}

static void Always_136_8(char *t0)
{
    char t4[8];
    char t21[8];
    char t22[8];
    char t23[8];
    char t26[8];
    char t27[8];
    char t28[8];
    char t45[8];
    char t49[8];
    char t50[8];
    char t51[8];
    char t52[8];
    char t54[8];
    char t71[8];
    char t72[8];
    char t75[8];
    char t92[8];
    char t96[8];
    char t97[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t24;
    unsigned int t25;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t46;
    char *t47;
    char *t48;
    char *t53;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t73;
    char *t74;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t93;
    char *t94;
    char *t95;

LAB0:    t1 = (t0 + 11088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(136, ng0);
    t2 = (t0 + 12280);
    *((int *)t2) = 1;
    t3 = (t0 + 11120);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(137, ng0);

LAB5:    xsi_set_current_line(138, ng0);
    t5 = (t0 + 2344U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(144, ng0);

LAB14:    xsi_set_current_line(145, ng0);
    t2 = (t0 + 4424U);
    t3 = *((char **)t2);
    t2 = (t0 + 6904);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 21, 0LL);
    xsi_set_current_line(146, ng0);
    t2 = (t0 + 4744U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng17)));
    memset(t23, 0, 8);
    xsi_vlog_signed_greater(t23, 32, t3, 21, t2, 32);
    memset(t22, 0, 8);
    t5 = (t23 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t23);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t5) != 0)
        goto LAB17;

LAB18:    t12 = (t22 + 4);
    t14 = *((unsigned int *)t22);
    t15 = *((unsigned int *)t12);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB19;

LAB20:    t17 = *((unsigned int *)t22);
    t18 = (~(t17));
    t24 = *((unsigned int *)t12);
    t25 = (t18 || t24);
    if (t25 > 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t12) > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t22) > 0)
        goto LAB25;

LAB26:    memcpy(t21, t26, 8);

LAB27:    t47 = (t0 + 4904U);
    t48 = *((char **)t47);
    memset(t49, 0, 8);
    xsi_vlog_signed_multiply(t49, 32, t21, 32, t48, 21);
    xsi_vlogtype_concat(t4, 32, 32, 1U, t49, 32);
    t47 = (t0 + 4904U);
    t53 = *((char **)t47);
    t47 = ((char*)((ng17)));
    memset(t54, 0, 8);
    xsi_vlog_signed_greater(t54, 32, t53, 21, t47, 32);
    memset(t52, 0, 8);
    t55 = (t54 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (~(t56));
    t58 = *((unsigned int *)t54);
    t59 = (t58 & t57);
    t60 = (t59 & 1U);
    if (t60 != 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t55) != 0)
        goto LAB43;

LAB44:    t62 = (t52 + 4);
    t63 = *((unsigned int *)t52);
    t64 = *((unsigned int *)t62);
    t65 = (t63 || t64);
    if (t65 > 0)
        goto LAB45;

LAB46:    t67 = *((unsigned int *)t52);
    t68 = (~(t67));
    t69 = *((unsigned int *)t62);
    t70 = (t68 || t69);
    if (t70 > 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t62) > 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t52) > 0)
        goto LAB51;

LAB52:    memcpy(t51, t71, 8);

LAB53:    t94 = (t0 + 4744U);
    t95 = *((char **)t94);
    memset(t96, 0, 8);
    xsi_vlog_signed_multiply(t96, 32, t51, 32, t95, 21);
    xsi_vlogtype_concat(t50, 32, 32, 1U, t96, 32);
    memset(t97, 0, 8);
    xsi_vlog_unsigned_minus(t97, 32, t4, 32, t50, 32);
    t94 = (t0 + 7064);
    xsi_vlogvar_wait_assign_value(t94, t97, 0, 0, 21, 0LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(139, ng0);

LAB13:    xsi_set_current_line(140, ng0);
    t19 = ((char*)((ng18)));
    t20 = (t0 + 6904);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 21, 0LL);
    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 7064);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 21, 0LL);
    goto LAB12;

LAB15:    *((unsigned int *)t22) = 1;
    goto LAB18;

LAB17:    t6 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB18;

LAB19:    t13 = ((char*)((ng19)));
    goto LAB20;

LAB21:    t19 = (t0 + 4744U);
    t20 = *((char **)t19);
    t19 = ((char*)((ng17)));
    memset(t28, 0, 8);
    xsi_vlog_signed_equal(t28, 32, t20, 21, t19, 32);
    memset(t27, 0, 8);
    t29 = (t28 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t28);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t29) != 0)
        goto LAB30;

LAB31:    t36 = (t27 + 4);
    t37 = *((unsigned int *)t27);
    t38 = *((unsigned int *)t36);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB32;

LAB33:    t41 = *((unsigned int *)t27);
    t42 = (~(t41));
    t43 = *((unsigned int *)t36);
    t44 = (t42 || t43);
    if (t44 > 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t36) > 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t27) > 0)
        goto LAB38;

LAB39:    memcpy(t26, t45, 8);

LAB40:    goto LAB22;

LAB23:    xsi_vlog_unsigned_bit_combine(t21, 32, t13, 32, t26, 32);
    goto LAB27;

LAB25:    memcpy(t21, t13, 8);
    goto LAB27;

LAB28:    *((unsigned int *)t27) = 1;
    goto LAB31;

LAB30:    t35 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB31;

LAB32:    t40 = ((char*)((ng17)));
    goto LAB33;

LAB34:    t46 = ((char*)((ng19)));
    memset(t45, 0, 8);
    xsi_vlog_signed_unary_minus(t45, 32, t46, 32);
    goto LAB35;

LAB36:    xsi_vlog_unsigned_bit_combine(t26, 32, t40, 32, t45, 32);
    goto LAB40;

LAB38:    memcpy(t26, t40, 8);
    goto LAB40;

LAB41:    *((unsigned int *)t52) = 1;
    goto LAB44;

LAB43:    t61 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB44;

LAB45:    t66 = ((char*)((ng19)));
    goto LAB46;

LAB47:    t73 = (t0 + 4904U);
    t74 = *((char **)t73);
    t73 = ((char*)((ng17)));
    memset(t75, 0, 8);
    xsi_vlog_signed_equal(t75, 32, t74, 21, t73, 32);
    memset(t72, 0, 8);
    t76 = (t75 + 4);
    t77 = *((unsigned int *)t76);
    t78 = (~(t77));
    t79 = *((unsigned int *)t75);
    t80 = (t79 & t78);
    t81 = (t80 & 1U);
    if (t81 != 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t76) != 0)
        goto LAB56;

LAB57:    t83 = (t72 + 4);
    t84 = *((unsigned int *)t72);
    t85 = *((unsigned int *)t83);
    t86 = (t84 || t85);
    if (t86 > 0)
        goto LAB58;

LAB59:    t88 = *((unsigned int *)t72);
    t89 = (~(t88));
    t90 = *((unsigned int *)t83);
    t91 = (t89 || t90);
    if (t91 > 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t83) > 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t72) > 0)
        goto LAB64;

LAB65:    memcpy(t71, t92, 8);

LAB66:    goto LAB48;

LAB49:    xsi_vlog_unsigned_bit_combine(t51, 32, t66, 32, t71, 32);
    goto LAB53;

LAB51:    memcpy(t51, t66, 8);
    goto LAB53;

LAB54:    *((unsigned int *)t72) = 1;
    goto LAB57;

LAB56:    t82 = (t72 + 4);
    *((unsigned int *)t72) = 1;
    *((unsigned int *)t82) = 1;
    goto LAB57;

LAB58:    t87 = ((char*)((ng17)));
    goto LAB59;

LAB60:    t93 = ((char*)((ng19)));
    memset(t92, 0, 8);
    xsi_vlog_signed_unary_minus(t92, 32, t93, 32);
    goto LAB61;

LAB62:    xsi_vlog_unsigned_bit_combine(t71, 32, t87, 32, t92, 32);
    goto LAB66;

LAB64:    memcpy(t71, t87, 8);
    goto LAB66;

}

static void Cont_150_9(char *t0)
{
    char t3[16];
    char t4[8];
    char t6[8];
    char t25[16];
    char t26[8];
    char t38[8];
    char t43[16];
    char t44[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;

LAB0:    t1 = (t0 + 11336U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(150, ng0);
    t2 = (t0 + 3784U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 14);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 14);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    memset(t4, 0, 8);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t14) != 0)
        goto LAB6;

LAB7:    t21 = (t4 + 4);
    t22 = *((unsigned int *)t4);
    t23 = *((unsigned int *)t21);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB8;

LAB9:    t39 = *((unsigned int *)t4);
    t40 = (~(t39));
    t41 = *((unsigned int *)t21);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t21) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t43, 16);

LAB16:    t54 = (t0 + 12728);
    t56 = (t54 + 56U);
    t57 = *((char **)t56);
    t58 = (t57 + 56U);
    t59 = *((char **)t58);
    xsi_vlog_bit_copy(t59, 0, t3, 0, 21);
    xsi_driver_vfirst_trans(t54, 0, 20);
    t60 = (t0 + 12296);
    *((int *)t60) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB7;

LAB8:    t27 = (t0 + 3784U);
    t28 = *((char **)t27);
    memset(t26, 0, 8);
    t27 = (t26 + 4);
    t29 = (t28 + 4);
    t30 = *((unsigned int *)t28);
    t31 = (t30 >> 0);
    *((unsigned int *)t26) = t31;
    t32 = *((unsigned int *)t29);
    t33 = (t32 >> 0);
    *((unsigned int *)t27) = t33;
    t34 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t34 & 16383U);
    t35 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t35 & 16383U);
    t36 = (t0 + 3624U);
    t37 = *((char **)t36);
    t36 = ((char*)((ng20)));
    memset(t38, 0, 8);
    xsi_vlog_unsigned_minus(t38, 21, t37, 21, t36, 21);
    xsi_vlogtype_concat(t25, 35, 35, 2U, t38, 21, t26, 14);
    goto LAB9;

LAB10:    t45 = (t0 + 3784U);
    t46 = *((char **)t45);
    memset(t44, 0, 8);
    t45 = (t44 + 4);
    t47 = (t46 + 4);
    t48 = *((unsigned int *)t46);
    t49 = (t48 >> 0);
    *((unsigned int *)t44) = t49;
    t50 = *((unsigned int *)t47);
    t51 = (t50 >> 0);
    *((unsigned int *)t45) = t51;
    t52 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t52 & 16383U);
    t53 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t53 & 16383U);
    t54 = (t0 + 3624U);
    t55 = *((char **)t54);
    xsi_vlogtype_concat(t43, 35, 35, 2U, t55, 21, t44, 14);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 35, t25, 35, t43, 35);
    goto LAB16;

LAB14:    memcpy(t3, t25, 16);
    goto LAB16;

}

static void Always_152_10(char *t0)
{
    char t4[8];
    char t25[8];
    char t27[16];
    char t42[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t28;
    int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t43;

LAB0:    t1 = (t0 + 11584U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(152, ng0);
    t2 = (t0 + 12312);
    *((int *)t2) = 1;
    t3 = (t0 + 11616);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(153, ng0);

LAB5:    xsi_set_current_line(154, ng0);
    t5 = (t0 + 2344U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(164, ng0);

LAB14:    xsi_set_current_line(165, ng0);
    t2 = (t0 + 7544);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng21)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB16;

LAB15:    t13 = (t6 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB16;

LAB19:    if (*((unsigned int *)t5) < *((unsigned int *)t6))
        goto LAB17;

LAB18:    t20 = (t4 + 4);
    t7 = *((unsigned int *)t20);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(168, ng0);

LAB23:    xsi_set_current_line(169, ng0);
    t2 = (t0 + 3944U);
    t3 = *((char **)t2);
    t2 = (t0 + 5624);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 21, 0LL);
    xsi_set_current_line(170, ng0);
    t2 = (t0 + 3944U);
    t3 = *((char **)t2);
    t2 = (t0 + 744);
    t5 = *((char **)t2);
    xsi_vlog_signed_multiply(t27, 42, t3, 21, t5, 32);
    t2 = (t0 + 11392);
    t6 = (t0 + 1392);
    t12 = xsi_create_subprogram_invocation(t2, 0, t0, t6, 0, 0);
    t13 = (t0 + 8184);
    xsi_vlogvar_assign_value(t13, t27, 0, 0, 42);

LAB24:    t19 = (t0 + 11488);
    t20 = *((char **)t19);
    t21 = (t20 + 80U);
    t22 = *((char **)t21);
    t23 = (t22 + 272U);
    t24 = *((char **)t23);
    t26 = (t24 + 0U);
    t28 = *((char **)t26);
    t29 = ((int  (*)(char *, char *))t28)(t0, t20);
    if (t29 != 0)
        goto LAB26;

LAB25:    t20 = (t0 + 11488);
    t30 = *((char **)t20);
    t20 = (t0 + 8024);
    t31 = (t20 + 56U);
    t32 = *((char **)t31);
    memcpy(t4, t32, 8);
    t33 = (t0 + 1392);
    t34 = (t0 + 11392);
    t35 = 0;
    xsi_delete_subprogram_invocation(t33, t30, t0, t34, t35);
    t36 = (t0 + 6104);
    xsi_vlogvar_wait_assign_value(t36, t4, 0, 0, 21, 0LL);
    xsi_set_current_line(171, ng0);
    t2 = (t0 + 3944U);
    t3 = *((char **)t2);
    t2 = (t0 + 880);
    t5 = *((char **)t2);
    xsi_vlog_signed_multiply(t27, 42, t3, 21, t5, 32);
    t2 = (t0 + 11392);
    t6 = (t0 + 1392);
    t12 = xsi_create_subprogram_invocation(t2, 0, t0, t6, 0, 0);
    t13 = (t0 + 8184);
    xsi_vlogvar_assign_value(t13, t27, 0, 0, 42);

LAB27:    t19 = (t0 + 11488);
    t20 = *((char **)t19);
    t21 = (t20 + 80U);
    t22 = *((char **)t21);
    t23 = (t22 + 272U);
    t24 = *((char **)t23);
    t26 = (t24 + 0U);
    t28 = *((char **)t26);
    t29 = ((int  (*)(char *, char *))t28)(t0, t20);
    if (t29 != 0)
        goto LAB29;

LAB28:    t20 = (t0 + 11488);
    t30 = *((char **)t20);
    t20 = (t0 + 8024);
    t31 = (t20 + 56U);
    t32 = *((char **)t31);
    memcpy(t4, t32, 8);
    t33 = (t0 + 1392);
    t34 = (t0 + 11392);
    t35 = 0;
    xsi_delete_subprogram_invocation(t33, t30, t0, t34, t35);
    t36 = (t0 + 5304);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    memset(t25, 0, 8);
    xsi_vlog_signed_add(t25, 21, t4, 21, t38, 21);
    t39 = (t0 + 5304);
    xsi_vlogvar_wait_assign_value(t39, t25, 0, 0, 21, 0LL);
    xsi_set_current_line(172, ng0);
    t2 = (t0 + 5784);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3944U);
    t12 = *((char **)t6);
    t6 = (t0 + 744);
    t13 = *((char **)t6);
    xsi_vlog_signed_multiply(t27, 42, t12, 21, t13, 32);
    t6 = (t0 + 11392);
    t19 = (t0 + 1392);
    t20 = xsi_create_subprogram_invocation(t6, 0, t0, t19, 0, 0);
    t21 = (t0 + 8184);
    xsi_vlogvar_assign_value(t21, t27, 0, 0, 42);

LAB30:    t22 = (t0 + 11488);
    t23 = *((char **)t22);
    t24 = (t23 + 80U);
    t26 = *((char **)t24);
    t28 = (t26 + 272U);
    t30 = *((char **)t28);
    t31 = (t30 + 0U);
    t32 = *((char **)t31);
    t29 = ((int  (*)(char *, char *))t32)(t0, t23);
    if (t29 != 0)
        goto LAB32;

LAB31:    t23 = (t0 + 11488);
    t33 = *((char **)t23);
    t23 = (t0 + 8024);
    t34 = (t23 + 56U);
    t35 = *((char **)t34);
    memcpy(t4, t35, 8);
    t36 = (t0 + 1392);
    t37 = (t0 + 11392);
    t38 = 0;
    xsi_delete_subprogram_invocation(t36, t33, t0, t37, t38);
    memset(t25, 0, 8);
    xsi_vlog_signed_add(t25, 21, t5, 21, t4, 21);
    t39 = (t0 + 5304);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    memset(t42, 0, 8);
    xsi_vlog_signed_add(t42, 21, t25, 21, t41, 21);
    t43 = (t0 + 5784);
    xsi_vlogvar_wait_assign_value(t43, t42, 0, 0, 21, 0LL);
    xsi_set_current_line(173, ng0);
    t2 = (t0 + 3944U);
    t3 = *((char **)t2);
    t2 = (t0 + 744);
    t5 = *((char **)t2);
    xsi_vlog_signed_multiply(t27, 42, t3, 21, t5, 32);
    t2 = (t0 + 11392);
    t6 = (t0 + 1392);
    t12 = xsi_create_subprogram_invocation(t2, 0, t0, t6, 0, 0);
    t13 = (t0 + 8184);
    xsi_vlogvar_assign_value(t13, t27, 0, 0, 42);

LAB33:    t19 = (t0 + 11488);
    t20 = *((char **)t19);
    t21 = (t20 + 80U);
    t22 = *((char **)t21);
    t23 = (t22 + 272U);
    t24 = *((char **)t23);
    t26 = (t24 + 0U);
    t28 = *((char **)t26);
    t29 = ((int  (*)(char *, char *))t28)(t0, t20);
    if (t29 != 0)
        goto LAB35;

LAB34:    t20 = (t0 + 11488);
    t30 = *((char **)t20);
    t20 = (t0 + 8024);
    t31 = (t20 + 56U);
    t32 = *((char **)t31);
    memcpy(t4, t32, 8);
    t33 = (t0 + 1392);
    t34 = (t0 + 11392);
    t35 = 0;
    xsi_delete_subprogram_invocation(t33, t30, t0, t34, t35);
    t36 = (t0 + 5304);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    memset(t25, 0, 8);
    xsi_vlog_signed_add(t25, 21, t4, 21, t38, 21);
    t39 = (t0 + 5944);
    xsi_vlogvar_wait_assign_value(t39, t25, 0, 0, 21, 0LL);
    xsi_set_current_line(174, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 7544);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 6, 0LL);

LAB22:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(155, ng0);

LAB13:    xsi_set_current_line(156, ng0);
    t19 = ((char*)((ng18)));
    t20 = (t0 + 7544);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 6, 0LL);
    xsi_set_current_line(157, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 5624);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 21, 0LL);
    xsi_set_current_line(158, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 6104);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 21, 0LL);
    xsi_set_current_line(159, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 5304);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 21, 0LL);
    xsi_set_current_line(160, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 5944);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 21, 0LL);
    xsi_set_current_line(161, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 5784);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 21, 0LL);
    goto LAB12;

LAB16:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB18;

LAB17:    *((unsigned int *)t4) = 1;
    goto LAB18;

LAB20:    xsi_set_current_line(166, ng0);
    t21 = (t0 + 7544);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = ((char*)((ng19)));
    memset(t25, 0, 8);
    xsi_vlog_unsigned_add(t25, 32, t23, 6, t24, 32);
    t26 = (t0 + 7544);
    xsi_vlogvar_wait_assign_value(t26, t25, 0, 0, 6, 0LL);
    goto LAB22;

LAB26:    t19 = (t0 + 11584U);
    *((char **)t19) = &&LAB24;
    goto LAB1;

LAB29:    t19 = (t0 + 11584U);
    *((char **)t19) = &&LAB27;
    goto LAB1;

LAB32:    t22 = (t0 + 11584U);
    *((char **)t22) = &&LAB30;
    goto LAB1;

LAB35:    t19 = (t0 + 11584U);
    *((char **)t19) = &&LAB33;
    goto LAB1;

}

static void Always_179_11(char *t0)
{
    char t4[8];
    char t21[8];
    char t22[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 11832U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(179, ng0);
    t2 = (t0 + 12328);
    *((int *)t2) = 1;
    t3 = (t0 + 11864);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(180, ng0);

LAB5:    xsi_set_current_line(181, ng0);
    t5 = (t0 + 2344U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(184, ng0);
    t2 = (t0 + 5304);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t21, 0, 8);
    t6 = (t21 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 4);
    *((unsigned int *)t21) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 4);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t11 & 32767U);
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t14 & 32767U);
    t13 = (t0 + 5304);
    t19 = (t13 + 56U);
    t20 = *((char **)t19);
    memset(t22, 0, 8);
    t23 = (t22 + 4);
    t24 = (t20 + 4);
    t15 = *((unsigned int *)t20);
    t16 = (t15 >> 20);
    t17 = (t16 & 1);
    *((unsigned int *)t22) = t17;
    t18 = *((unsigned int *)t24);
    t25 = (t18 >> 20);
    t26 = (t25 & 1);
    *((unsigned int *)t23) = t26;
    xsi_vlogtype_concat(t4, 16, 16, 2U, t22, 1, t21, 15);
    t27 = (t0 + 5464);
    xsi_vlogvar_wait_assign_value(t27, t4, 0, 0, 16, 0LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(182, ng0);
    t19 = ((char*)((ng18)));
    t20 = (t0 + 5464);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 16, 0LL);
    goto LAB12;

}


extern void work_m_00000000001287736449_2829270252_init()
{
	static char *pe[] = {(void *)Always_82_0,(void *)Cont_100_1,(void *)Always_102_2,(void *)Cont_116_3,(void *)Cont_117_4,(void *)Always_119_5,(void *)Cont_133_6,(void *)Cont_134_7,(void *)Always_136_8,(void *)Cont_150_9,(void *)Always_152_10,(void *)Always_179_11};
	static char *se[] = {(void *)sp_mov};
	xsi_register_didat("work_m_00000000001287736449_2829270252", "isim/test_jidai_isim_beh.exe.sim/work/m_00000000001287736449_2829270252.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
