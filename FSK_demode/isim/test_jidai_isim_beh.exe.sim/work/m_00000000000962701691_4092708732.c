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
static const char *ng0 = "E:/ISEproject/phase_band_top3/Gardner_1.v";
static int ng1[] = {0, 0};
static int ng2[] = {10, 0};
static int ng3[] = {1023, 0};
static int ng4[] = {1024, 0};
static int ng5[] = {3, 0};
static int ng6[] = {1, 0};
static const char *ng7 = "%d";
static int ng8[] = {8192, 0};
static const char *ng9 = "yyyy.txt";
static const char *ng10 = "w";
static unsigned int ng11[] = {1U, 0U};
static unsigned int ng12[] = {2U, 0U};
static unsigned int ng13[] = {3U, 0U};
static unsigned int ng14[] = {4U, 0U};
static unsigned int ng15[] = {6U, 0U};
static int ng16[] = {2048, 0};
static int ng17[] = {2, 0};



static int sp_mov(char *t1, char *t2)
{
    char t3[8];
    char t4[8];
    char t9[8];
    char t25[8];
    char t30[8];
    char t31[8];
    char t36[8];
    char t38[8];
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
    xsi_set_current_line(61, ng0);
    t5 = (t1 + 8544);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng1)));
    memset(t9, 0, 8);
    xsi_vlog_signed_greatereq(t9, 32, t7, 32, t8, 32);
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

LAB13:    memcpy(t3, t30, 8);

LAB14:    t39 = (t1 + 8384);
    xsi_vlogvar_assign_value(t39, t3, 0, 0, 16);
    t0 = 0;

LAB1:    return t0;
LAB2:    *((unsigned int *)t4) = 1;
    goto LAB5;

LAB4:    t16 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB5;

LAB6:    t21 = (t1 + 8544);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = ((char*)((ng2)));
    memset(t25, 0, 8);
    xsi_vlog_signed_rshift(t25, 32, t23, 32, t24, 32);
    goto LAB7;

LAB8:    t32 = (t1 + 8544);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    memset(t31, 0, 8);
    xsi_vlog_signed_unary_minus(t31, 32, t34, 32);
    t35 = ((char*)((ng3)));
    memset(t36, 0, 8);
    xsi_vlog_signed_add(t36, 32, t31, 32, t35, 32);
    t37 = ((char*)((ng2)));
    memset(t38, 0, 8);
    xsi_vlog_signed_rshift(t38, 32, t36, 32, t37, 32);
    memset(t30, 0, 8);
    xsi_vlog_signed_unary_minus(t30, 32, t38, 32);
    goto LAB9;

LAB10:    xsi_vlog_unsigned_bit_combine(t3, 32, t25, 32, t30, 32);
    goto LAB14;

LAB12:    memcpy(t3, t25, 8);
    goto LAB14;

}

static int sp_gardn(char *t1, char *t2)
{
    char t11[8];
    char t13[8];
    char t15[8];
    char t17[8];
    char t18[8];
    char t38[8];
    char t42[8];
    char t45[8];
    char t46[8];
    char t114[8];
    char t118[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t14;
    char *t16;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    int t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t39;
    char *t40;
    char *t41;
    char *t43;
    char *t44;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    int t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    int t84;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    char *t96;
    char *t97;
    char *t98;
    char *t99;
    char *t100;
    char *t101;
    char *t102;
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    char *t107;
    char *t108;
    char *t109;
    int t110;
    char *t111;
    char *t112;
    char *t113;
    char *t115;
    char *t116;
    char *t117;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2232);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(80, ng0);

LAB5:    xsi_set_current_line(81, ng0);
    t5 = (t1 + 8704);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 8704);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t11, 0, 8);
    xsi_vlog_unsigned_multiply(t11, 32, t7, 10, t10, 10);
    t12 = (t1 + 11264);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);
    xsi_set_current_line(82, ng0);
    t4 = (t1 + 11264);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t11, 0, 8);
    xsi_vlog_signed_rshift(t11, 32, t6, 32, t7, 32);
    t8 = (t1 + 10944);
    xsi_vlogvar_assign_value(t8, t11, 0, 0, 16);
    xsi_set_current_line(83, ng0);
    t4 = (t1 + 10944);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 8704);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t11, 0, 8);
    xsi_vlog_unsigned_multiply(t11, 32, t6, 16, t9, 10);
    t10 = (t1 + 11264);
    xsi_vlogvar_assign_value(t10, t11, 0, 0, 32);
    xsi_set_current_line(84, ng0);
    t4 = (t1 + 11264);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t11, 0, 8);
    xsi_vlog_signed_rshift(t11, 32, t6, 32, t7, 32);
    t8 = (t1 + 11104);
    xsi_vlogvar_assign_value(t8, t11, 0, 0, 16);
    xsi_set_current_line(85, ng0);
    t4 = (t1 + 744);
    t5 = *((char **)t4);
    t4 = (t1 + 11104);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memset(t11, 0, 8);
    xsi_vlog_unsigned_multiply(t11, 32, t5, 32, t7, 16);
    t8 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_rshift(t13, 32, t11, 32, t8, 32);
    t9 = (t1 + 744);
    t10 = *((char **)t9);
    t9 = (t1 + 8704);
    t12 = (t9 + 56U);
    t14 = *((char **)t12);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_multiply(t15, 32, t10, 32, t14, 10);
    t16 = ((char*)((ng2)));
    memset(t17, 0, 8);
    xsi_vlog_unsigned_rshift(t17, 32, t15, 32, t16, 32);
    memset(t18, 0, 8);
    xsi_vlog_unsigned_minus(t18, 32, t13, 32, t17, 32);
    t19 = (t1 + 10624);
    xsi_vlogvar_assign_value(t19, t18, 0, 0, 16);
    xsi_set_current_line(86, ng0);
    t4 = (t1 + 880);
    t5 = *((char **)t4);
    t4 = (t1 + 11104);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memset(t13, 0, 8);
    xsi_vlog_signed_multiply(t13, 32, t5, 32, t7, 16);
    memset(t11, 0, 8);
    xsi_vlog_signed_unary_minus(t11, 32, t13, 32);
    t8 = (t2 + 56U);
    t9 = *((char **)t8);
    t10 = (t1 + 1800);
    t12 = xsi_create_subprogram_invocation(t9, 0, t1, t10, 0, t2);
    t14 = (t1 + 8544);
    xsi_vlogvar_assign_value(t14, t11, 0, 0, 32);

LAB6:    t16 = (t2 + 64U);
    t19 = *((char **)t16);
    t20 = (t19 + 80U);
    t21 = *((char **)t20);
    t22 = (t21 + 272U);
    t23 = *((char **)t22);
    t24 = (t23 + 0U);
    t25 = *((char **)t24);
    t26 = ((int  (*)(char *, char *))t25)(t1, t19);
    if (t26 != 0)
        goto LAB8;

LAB7:    t19 = (t2 + 64U);
    t27 = *((char **)t19);
    t19 = (t1 + 8384);
    t28 = (t19 + 56U);
    t29 = *((char **)t28);
    memcpy(t15, t29, 8);
    t30 = (t1 + 1800);
    t31 = (t2 + 56U);
    t32 = *((char **)t31);
    xsi_delete_subprogram_invocation(t30, t27, t1, t32, t2);
    t33 = (t1 + 880);
    t34 = *((char **)t33);
    t33 = (t1 + 10944);
    t35 = (t33 + 56U);
    t36 = *((char **)t35);
    memset(t17, 0, 8);
    xsi_vlog_unsigned_multiply(t17, 32, t34, 32, t36, 16);
    t37 = ((char*)((ng2)));
    memset(t18, 0, 8);
    xsi_vlog_unsigned_rshift(t18, 32, t17, 32, t37, 32);
    memset(t38, 0, 8);
    xsi_vlog_unsigned_add(t38, 32, t15, 16, t18, 32);
    t39 = (t1 + 8704);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    memset(t42, 0, 8);
    xsi_vlog_unsigned_add(t42, 32, t38, 32, t41, 10);
    t43 = (t1 + 10464);
    xsi_vlogvar_assign_value(t43, t42, 0, 0, 16);
    xsi_set_current_line(87, ng0);
    t4 = (t1 + 880);
    t5 = *((char **)t4);
    t4 = (t1 + 11104);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memset(t11, 0, 8);
    xsi_vlog_unsigned_multiply(t11, 32, t5, 32, t7, 16);
    t8 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_rshift(t13, 32, t11, 32, t8, 32);
    t9 = (t1 + 10944);
    t10 = (t9 + 56U);
    t12 = *((char **)t10);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_minus(t15, 32, t13, 32, t12, 16);
    t14 = (t1 + 880);
    t16 = *((char **)t14);
    t14 = (t1 + 8704);
    t19 = (t14 + 56U);
    t20 = *((char **)t19);
    memset(t17, 0, 8);
    xsi_vlog_unsigned_multiply(t17, 32, t16, 32, t20, 10);
    t21 = ((char*)((ng2)));
    memset(t18, 0, 8);
    xsi_vlog_unsigned_rshift(t18, 32, t17, 32, t21, 32);
    memset(t38, 0, 8);
    xsi_vlog_unsigned_minus(t38, 32, t15, 32, t18, 32);
    t22 = ((char*)((ng4)));
    memset(t42, 0, 8);
    xsi_vlog_unsigned_add(t42, 32, t38, 32, t22, 32);
    t23 = (t1 + 10304);
    xsi_vlogvar_assign_value(t23, t42, 0, 0, 16);
    xsi_set_current_line(88, ng0);
    t4 = (t1 + 744);
    t5 = *((char **)t4);
    t4 = (t1 + 11104);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memset(t13, 0, 8);
    xsi_vlog_signed_multiply(t13, 32, t5, 32, t7, 16);
    memset(t11, 0, 8);
    xsi_vlog_signed_unary_minus(t11, 32, t13, 32);
    t8 = (t2 + 56U);
    t9 = *((char **)t8);
    t10 = (t1 + 1800);
    t12 = xsi_create_subprogram_invocation(t9, 0, t1, t10, 0, t2);
    t14 = (t1 + 8544);
    xsi_vlogvar_assign_value(t14, t11, 0, 0, 32);

LAB9:    t16 = (t2 + 64U);
    t19 = *((char **)t16);
    t20 = (t19 + 80U);
    t21 = *((char **)t20);
    t22 = (t21 + 272U);
    t23 = *((char **)t22);
    t24 = (t23 + 0U);
    t25 = *((char **)t24);
    t26 = ((int  (*)(char *, char *))t25)(t1, t19);
    if (t26 != 0)
        goto LAB11;

LAB10:    t19 = (t2 + 64U);
    t27 = *((char **)t19);
    t19 = (t1 + 8384);
    t28 = (t19 + 56U);
    t29 = *((char **)t28);
    memcpy(t15, t29, 8);
    t30 = (t1 + 1800);
    t31 = (t2 + 56U);
    t32 = *((char **)t31);
    xsi_delete_subprogram_invocation(t30, t27, t1, t32, t2);
    t33 = (t1 + 880);
    t34 = *((char **)t33);
    t33 = (t1 + 10944);
    t35 = (t33 + 56U);
    t36 = *((char **)t35);
    memset(t17, 0, 8);
    xsi_vlog_unsigned_multiply(t17, 32, t34, 32, t36, 16);
    t37 = ((char*)((ng2)));
    memset(t18, 0, 8);
    xsi_vlog_unsigned_rshift(t18, 32, t17, 32, t37, 32);
    memset(t38, 0, 8);
    xsi_vlog_unsigned_add(t38, 32, t15, 16, t18, 32);
    t39 = (t1 + 1016);
    t40 = *((char **)t39);
    t39 = (t1 + 8704);
    t41 = (t39 + 56U);
    t43 = *((char **)t41);
    memset(t42, 0, 8);
    xsi_vlog_unsigned_multiply(t42, 32, t40, 32, t43, 10);
    t44 = ((char*)((ng2)));
    memset(t45, 0, 8);
    xsi_vlog_unsigned_rshift(t45, 32, t42, 32, t44, 32);
    memset(t46, 0, 8);
    xsi_vlog_unsigned_minus(t46, 32, t38, 32, t45, 32);
    t47 = (t1 + 10784);
    xsi_vlogvar_assign_value(t47, t46, 0, 0, 16);
    xsi_set_current_line(89, ng0);
    t4 = (t1 + 9184);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 9504);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 16);
    xsi_set_current_line(89, ng0);
    t4 = (t1 + 9024);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 9664);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 16);
    xsi_set_current_line(89, ng0);
    t4 = (t1 + 8864);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 9824);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 16);
    xsi_set_current_line(89, ng0);
    t4 = (t1 + 9344);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 9984);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 16);
    xsi_set_current_line(90, ng0);
    t4 = (t1 + 10624);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 9184);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t11, 0, 8);
    xsi_vlog_signed_multiply(t11, 32, t6, 16, t9, 16);
    t10 = (t2 + 56U);
    t12 = *((char **)t10);
    t14 = (t1 + 1800);
    t16 = xsi_create_subprogram_invocation(t12, 0, t1, t14, 0, t2);
    t19 = (t1 + 8544);
    xsi_vlogvar_assign_value(t19, t11, 0, 0, 32);

LAB12:    t20 = (t2 + 64U);
    t21 = *((char **)t20);
    t22 = (t21 + 80U);
    t23 = *((char **)t22);
    t24 = (t23 + 272U);
    t25 = *((char **)t24);
    t27 = (t25 + 0U);
    t28 = *((char **)t27);
    t26 = ((int  (*)(char *, char *))t28)(t1, t21);
    if (t26 != 0)
        goto LAB14;

LAB13:    t21 = (t2 + 64U);
    t29 = *((char **)t21);
    t21 = (t1 + 8384);
    t30 = (t21 + 56U);
    t31 = *((char **)t30);
    memcpy(t13, t31, 8);
    t32 = (t1 + 1800);
    t33 = (t2 + 56U);
    t34 = *((char **)t33);
    xsi_delete_subprogram_invocation(t32, t29, t1, t34, t2);
    t35 = (t1 + 10464);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t39 = (t1 + 9024);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    memset(t15, 0, 8);
    xsi_vlog_signed_multiply(t15, 32, t37, 16, t41, 16);
    t43 = (t2 + 56U);
    t44 = *((char **)t43);
    t47 = (t1 + 1800);
    t48 = xsi_create_subprogram_invocation(t44, 0, t1, t47, 0, t2);
    t49 = (t1 + 8544);
    xsi_vlogvar_assign_value(t49, t15, 0, 0, 32);

LAB15:    t50 = (t2 + 64U);
    t51 = *((char **)t50);
    t52 = (t51 + 80U);
    t53 = *((char **)t52);
    t54 = (t53 + 272U);
    t55 = *((char **)t54);
    t56 = (t55 + 0U);
    t57 = *((char **)t56);
    t58 = ((int  (*)(char *, char *))t57)(t1, t51);
    if (t58 != 0)
        goto LAB17;

LAB16:    t51 = (t2 + 64U);
    t59 = *((char **)t51);
    t51 = (t1 + 8384);
    t60 = (t51 + 56U);
    t61 = *((char **)t60);
    memcpy(t17, t61, 8);
    t62 = (t1 + 1800);
    t63 = (t2 + 56U);
    t64 = *((char **)t63);
    xsi_delete_subprogram_invocation(t62, t59, t1, t64, t2);
    memset(t18, 0, 8);
    xsi_vlog_signed_add(t18, 16, t13, 16, t17, 16);
    t65 = (t1 + 10304);
    t66 = (t65 + 56U);
    t67 = *((char **)t66);
    t68 = (t1 + 8864);
    t69 = (t68 + 56U);
    t70 = *((char **)t69);
    memset(t38, 0, 8);
    xsi_vlog_signed_multiply(t38, 32, t67, 16, t70, 16);
    t71 = (t2 + 56U);
    t72 = *((char **)t71);
    t73 = (t1 + 1800);
    t74 = xsi_create_subprogram_invocation(t72, 0, t1, t73, 0, t2);
    t75 = (t1 + 8544);
    xsi_vlogvar_assign_value(t75, t38, 0, 0, 32);

LAB18:    t76 = (t2 + 64U);
    t77 = *((char **)t76);
    t78 = (t77 + 80U);
    t79 = *((char **)t78);
    t80 = (t79 + 272U);
    t81 = *((char **)t80);
    t82 = (t81 + 0U);
    t83 = *((char **)t82);
    t84 = ((int  (*)(char *, char *))t83)(t1, t77);
    if (t84 != 0)
        goto LAB20;

LAB19:    t77 = (t2 + 64U);
    t85 = *((char **)t77);
    t77 = (t1 + 8384);
    t86 = (t77 + 56U);
    t87 = *((char **)t86);
    memcpy(t42, t87, 8);
    t88 = (t1 + 1800);
    t89 = (t2 + 56U);
    t90 = *((char **)t89);
    xsi_delete_subprogram_invocation(t88, t85, t1, t90, t2);
    memset(t45, 0, 8);
    xsi_vlog_signed_add(t45, 16, t18, 16, t42, 16);
    t91 = (t1 + 10784);
    t92 = (t91 + 56U);
    t93 = *((char **)t92);
    t94 = (t1 + 9344);
    t95 = (t94 + 56U);
    t96 = *((char **)t95);
    memset(t46, 0, 8);
    xsi_vlog_signed_multiply(t46, 32, t93, 16, t96, 16);
    t97 = (t2 + 56U);
    t98 = *((char **)t97);
    t99 = (t1 + 1800);
    t100 = xsi_create_subprogram_invocation(t98, 0, t1, t99, 0, t2);
    t101 = (t1 + 8544);
    xsi_vlogvar_assign_value(t101, t46, 0, 0, 32);

LAB21:    t102 = (t2 + 64U);
    t103 = *((char **)t102);
    t104 = (t103 + 80U);
    t105 = *((char **)t104);
    t106 = (t105 + 272U);
    t107 = *((char **)t106);
    t108 = (t107 + 0U);
    t109 = *((char **)t108);
    t110 = ((int  (*)(char *, char *))t109)(t1, t103);
    if (t110 != 0)
        goto LAB23;

LAB22:    t103 = (t2 + 64U);
    t111 = *((char **)t103);
    t103 = (t1 + 8384);
    t112 = (t103 + 56U);
    t113 = *((char **)t112);
    memcpy(t114, t113, 8);
    t115 = (t1 + 1800);
    t116 = (t2 + 56U);
    t117 = *((char **)t116);
    xsi_delete_subprogram_invocation(t115, t111, t1, t117, t2);
    memset(t118, 0, 8);
    xsi_vlog_signed_add(t118, 16, t45, 16, t114, 16);
    t119 = (t1 + 10144);
    xsi_vlogvar_assign_value(t119, t118, 0, 0, 16);
    xsi_set_current_line(91, ng0);
    t4 = (t1 + 7744);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 4);
    t120 = *((unsigned int *)t7);
    t121 = (~(t120));
    t122 = *((unsigned int *)t6);
    t123 = (t122 & t121);
    t124 = (t123 != 0);
    if (t124 > 0)
        goto LAB24;

LAB25:
LAB26:    xsi_set_current_line(99, ng0);
    t4 = (t1 + 7744);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t11, 0, 8);
    t7 = (t6 + 4);
    t120 = *((unsigned int *)t7);
    t121 = (~(t120));
    t122 = *((unsigned int *)t6);
    t123 = (t122 & t121);
    t124 = (t123 & 1U);
    if (t124 != 0)
        goto LAB40;

LAB38:    if (*((unsigned int *)t7) == 0)
        goto LAB37;

LAB39:    t8 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t8) = 1;

LAB40:    t9 = (t11 + 4);
    t10 = (t6 + 4);
    t125 = *((unsigned int *)t6);
    t126 = (~(t125));
    *((unsigned int *)t11) = t126;
    *((unsigned int *)t9) = 0;
    if (*((unsigned int *)t10) != 0)
        goto LAB42;

LAB41:    t131 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t131 & 1U);
    t132 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t132 & 1U);
    t12 = (t1 + 7744);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 1);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB8:    t16 = (t2 + 48U);
    *((char **)t16) = &&LAB6;
    goto LAB1;

LAB11:    t16 = (t2 + 48U);
    *((char **)t16) = &&LAB9;
    goto LAB1;

LAB14:    t20 = (t2 + 48U);
    *((char **)t20) = &&LAB12;
    goto LAB1;

LAB17:    t50 = (t2 + 48U);
    *((char **)t50) = &&LAB15;
    goto LAB1;

LAB20:    t76 = (t2 + 48U);
    *((char **)t76) = &&LAB18;
    goto LAB1;

LAB23:    t102 = (t2 + 48U);
    *((char **)t102) = &&LAB21;
    goto LAB1;

LAB24:    xsi_set_current_line(92, ng0);

LAB27:    xsi_set_current_line(93, ng0);
    t8 = (t1 + 10144);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t12 = (t1 + 1152);
    t14 = *((char **)t12);
    memset(t11, 0, 8);
    xsi_vlog_signed_greater(t11, 32, t10, 16, t14, 32);
    t12 = (t11 + 4);
    t125 = *((unsigned int *)t12);
    t126 = (~(t125));
    t127 = *((unsigned int *)t11);
    t128 = (t127 & t126);
    t129 = (t128 != 0);
    if (t129 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(94, ng0);
    t4 = (t1 + 10144);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t11, 0, 8);
    xsi_vlog_signed_greater(t11, 32, t6, 16, t7, 32);
    t8 = (t11 + 4);
    t120 = *((unsigned int *)t8);
    t121 = (~(t120));
    t122 = *((unsigned int *)t11);
    t123 = (t122 & t121);
    t124 = (t123 != 0);
    if (t124 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(95, ng0);
    t4 = (t1 + 10144);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 1288);
    t8 = *((char **)t7);
    memset(t11, 0, 8);
    xsi_vlog_signed_unary_minus(t11, 32, t8, 32);
    memset(t13, 0, 8);
    xsi_vlog_signed_greater(t13, 32, t6, 16, t11, 32);
    t7 = (t13 + 4);
    t120 = *((unsigned int *)t7);
    t121 = (~(t120));
    t122 = *((unsigned int *)t13);
    t123 = (t122 & t121);
    t124 = (t123 != 0);
    if (t124 > 0)
        goto LAB34;

LAB35:    xsi_set_current_line(96, ng0);
    t4 = ((char*)((ng5)));
    memset(t11, 0, 8);
    xsi_vlog_signed_unary_minus(t11, 32, t4, 32);
    t5 = (t1 + 3904);
    xsi_vlogvar_assign_value(t5, t11, 0, 0, 16);

LAB36:
LAB33:
LAB30:    xsi_set_current_line(97, ng0);
    t4 = (t1 + 8224);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 3904);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t1 + 2232);
    xsi_vlogfile_fwrite(*((unsigned int *)t6), 1, 0, 0, ng7, 2, t10, (char)119, t9, 16);
    goto LAB26;

LAB28:    xsi_set_current_line(93, ng0);
    t16 = ((char*)((ng5)));
    t19 = (t1 + 3904);
    xsi_vlogvar_assign_value(t19, t16, 0, 0, 16);
    goto LAB30;

LAB31:    xsi_set_current_line(94, ng0);
    t9 = ((char*)((ng6)));
    t10 = (t1 + 3904);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 16);
    goto LAB33;

LAB34:    xsi_set_current_line(95, ng0);
    t9 = ((char*)((ng6)));
    memset(t15, 0, 8);
    xsi_vlog_signed_unary_minus(t15, 32, t9, 32);
    t10 = (t1 + 3904);
    xsi_vlogvar_assign_value(t10, t15, 0, 0, 16);
    goto LAB36;

LAB37:    *((unsigned int *)t11) = 1;
    goto LAB40;

LAB42:    t127 = *((unsigned int *)t11);
    t128 = *((unsigned int *)t10);
    *((unsigned int *)t11) = (t127 | t128);
    t129 = *((unsigned int *)t9);
    t130 = *((unsigned int *)t10);
    *((unsigned int *)t9) = (t129 | t130);
    goto LAB41;

}

static void Always_110_0(char *t0)
{
    char t4[8];
    char t32[8];
    char t46[8];
    char t68[8];
    char t132[8];
    char t133[8];
    char t134[8];
    char t135[8];
    char t136[8];
    char t137[8];
    char t138[8];
    char t139[8];
    char t140[8];
    char t141[8];
    char t142[8];
    char t151[8];
    char t152[8];
    char t153[8];
    char t154[8];
    char t155[8];
    char t156[8];
    char t159[8];
    char t164[8];
    char t165[8];
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
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t33;
    int t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
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
    unsigned int t66;
    unsigned int t67;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    char *t96;
    char *t97;
    char *t98;
    char *t99;
    char *t100;
    char *t101;
    char *t102;
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    char *t107;
    char *t108;
    char *t109;
    char *t110;
    char *t111;
    char *t112;
    char *t113;
    char *t114;
    char *t115;
    char *t116;
    char *t117;
    char *t118;
    char *t119;
    char *t120;
    char *t121;
    char *t122;
    char *t123;
    char *t124;
    char *t125;
    char *t126;
    char *t127;
    char *t128;
    char *t129;
    char *t130;
    char *t131;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    int t157;
    char *t158;
    char *t160;
    char *t161;
    char *t162;
    char *t163;
    char *t166;

LAB0:    t1 = (t0 + 12184U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 12504);
    *((int *)t2) = 1;
    t3 = (t0 + 12216);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(110, ng0);

LAB5:    xsi_set_current_line(111, ng0);
    t5 = (t0 + 3024U);
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

LAB11:    xsi_set_current_line(126, ng0);

LAB14:    xsi_set_current_line(127, ng0);
    t2 = (t0 + 5024);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    t13 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t6);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t12);
    t11 = *((unsigned int *)t13);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t12);
    t17 = *((unsigned int *)t13);
    t18 = (t16 | t17);
    t21 = (~(t18));
    t22 = (t15 & t21);
    if (t22 != 0)
        goto LAB18;

LAB15:    if (t18 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t4) = 1;

LAB18:    t20 = (t4 + 4);
    t23 = *((unsigned int *)t20);
    t24 = (~(t23));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB19;

LAB20:
LAB21:    xsi_set_current_line(130, ng0);
    t2 = (t0 + 5344);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);

LAB23:    t6 = ((char*)((ng11)));
    t34 = xsi_vlog_unsigned_case_compare(t5, 3, t6, 3);
    if (t34 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng12)));
    t34 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t34 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng13)));
    t34 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t34 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng14)));
    t34 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t34 == 1)
        goto LAB30;

LAB31:
LAB33:
LAB32:    xsi_set_current_line(135, ng0);

LAB39:    xsi_set_current_line(135, ng0);
    t2 = (t0 + 7104);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 7584);
    xsi_vlogvar_wait_assign_value(t12, t6, 0, 0, 16, 0LL);
    xsi_set_current_line(135, ng0);
    t2 = (t0 + 7264);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 7104);
    xsi_vlogvar_wait_assign_value(t12, t6, 0, 0, 16, 0LL);
    xsi_set_current_line(135, ng0);
    t2 = (t0 + 7424);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 7264);
    xsi_vlogvar_wait_assign_value(t12, t6, 0, 0, 16, 0LL);
    xsi_set_current_line(135, ng0);
    t2 = (t0 + 3184U);
    t3 = *((char **)t2);
    t2 = (t0 + 7424);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 16, 0LL);
    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 5024);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(135, ng0);
    t2 = (t0 + 5664);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng6)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t6, 6, t12, 32);
    t13 = (t0 + 5664);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 6, 0LL);

LAB34:    xsi_set_current_line(138, ng0);
    t2 = (t0 + 4864);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng1)));
    memset(t4, 0, 8);
    t13 = (t6 + 4);
    t19 = (t12 + 4);
    t7 = *((unsigned int *)t6);
    t8 = *((unsigned int *)t12);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t13);
    t11 = *((unsigned int *)t19);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t19);
    t18 = (t16 | t17);
    t21 = (~(t18));
    t22 = (t15 & t21);
    if (t22 != 0)
        goto LAB43;

LAB40:    if (t18 != 0)
        goto LAB42;

LAB41:    *((unsigned int *)t4) = 1;

LAB43:    t28 = (t4 + 4);
    t23 = *((unsigned int *)t28);
    t24 = (~(t23));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB44;

LAB45:
LAB46:    xsi_set_current_line(150, ng0);
    t2 = (t0 + 5184);
    t3 = (t2 + 56U);
    t12 = *((char **)t3);
    t13 = ((char*)((ng1)));
    memset(t4, 0, 8);
    t19 = (t12 + 4);
    t20 = (t13 + 4);
    t7 = *((unsigned int *)t12);
    t8 = *((unsigned int *)t13);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t19);
    t11 = *((unsigned int *)t20);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t19);
    t17 = *((unsigned int *)t20);
    t18 = (t16 | t17);
    t21 = (~(t18));
    t22 = (t15 & t21);
    if (t22 != 0)
        goto LAB58;

LAB55:    if (t18 != 0)
        goto LAB57;

LAB56:    *((unsigned int *)t4) = 1;

LAB58:    t29 = (t4 + 4);
    t23 = *((unsigned int *)t29);
    t24 = (~(t23));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB59;

LAB60:    xsi_set_current_line(166, ng0);

LAB135:    xsi_set_current_line(167, ng0);
    t2 = (t0 + 5664);
    t3 = (t2 + 56U);
    t12 = *((char **)t3);
    t13 = (t0 + 5824);
    t19 = (t13 + 56U);
    t20 = *((char **)t19);
    memset(t4, 0, 8);
    t28 = (t4 + 4);
    t29 = (t20 + 4);
    t7 = *((unsigned int *)t20);
    t8 = (t7 >> 10);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t29);
    t10 = (t9 >> 10);
    *((unsigned int *)t28) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 63U);
    t14 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t14 & 63U);
    memset(t32, 0, 8);
    t30 = (t12 + 4);
    t31 = (t4 + 4);
    t15 = *((unsigned int *)t12);
    t16 = *((unsigned int *)t4);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t30);
    t21 = *((unsigned int *)t31);
    t22 = (t18 ^ t21);
    t23 = (t17 | t22);
    t24 = *((unsigned int *)t30);
    t25 = *((unsigned int *)t31);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t40 = (t23 & t27);
    if (t40 != 0)
        goto LAB139;

LAB136:    if (t26 != 0)
        goto LAB138;

LAB137:    *((unsigned int *)t32) = 1;

LAB139:    t35 = (t32 + 4);
    t41 = *((unsigned int *)t35);
    t42 = (~(t41));
    t43 = *((unsigned int *)t32);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB140;

LAB141:
LAB142:
LAB61:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(112, ng0);

LAB13:    xsi_set_current_line(113, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 4864);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 1, 0LL);
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5024);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 5664);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 6, 0LL);
    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 5344);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 5504);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 5824);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5184);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6464);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6144);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    xsi_set_current_line(123, ng0);
    *((int *)t4) = xsi_vlogfile_file_open_of_cname_ctype(ng9, ng10);
    t2 = (t4 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 8224);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    goto LAB12;

LAB17:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(127, ng0);

LAB22:    xsi_set_current_line(128, ng0);
    t28 = (t0 + 5344);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng6)));
    memset(t32, 0, 8);
    xsi_vlog_unsigned_add(t32, 32, t30, 3, t31, 32);
    t33 = (t0 + 5344);
    xsi_vlogvar_wait_assign_value(t33, t32, 0, 0, 3, 0LL);
    goto LAB21;

LAB24:    xsi_set_current_line(131, ng0);

LAB35:    xsi_set_current_line(131, ng0);
    t12 = (t0 + 3184U);
    t13 = *((char **)t12);
    t12 = (t0 + 7584);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 16, 0LL);
    xsi_set_current_line(131, ng0);
    t2 = (t0 + 5664);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng6)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t6, 6, t12, 32);
    t13 = (t0 + 5664);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 6, 0LL);
    goto LAB34;

LAB26:    xsi_set_current_line(132, ng0);

LAB36:    xsi_set_current_line(132, ng0);
    t3 = (t0 + 3184U);
    t6 = *((char **)t3);
    t3 = (t0 + 7104);
    xsi_vlogvar_wait_assign_value(t3, t6, 0, 0, 16, 0LL);
    xsi_set_current_line(132, ng0);
    t2 = (t0 + 5664);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng6)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t6, 6, t12, 32);
    t13 = (t0 + 5664);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 6, 0LL);
    goto LAB34;

LAB28:    xsi_set_current_line(133, ng0);

LAB37:    xsi_set_current_line(133, ng0);
    t3 = (t0 + 3184U);
    t6 = *((char **)t3);
    t3 = (t0 + 7264);
    xsi_vlogvar_wait_assign_value(t3, t6, 0, 0, 16, 0LL);
    xsi_set_current_line(133, ng0);
    t2 = (t0 + 5664);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng6)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t6, 6, t12, 32);
    t13 = (t0 + 5664);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 6, 0LL);
    goto LAB34;

LAB30:    xsi_set_current_line(134, ng0);

LAB38:    xsi_set_current_line(134, ng0);
    t3 = (t0 + 3184U);
    t6 = *((char **)t3);
    t3 = (t0 + 7424);
    xsi_vlogvar_wait_assign_value(t3, t6, 0, 0, 16, 0LL);
    xsi_set_current_line(134, ng0);
    t2 = (t0 + 5664);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng6)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t6, 6, t12, 32);
    t13 = (t0 + 5664);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 6, 0LL);
    goto LAB34;

LAB42:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB43;

LAB44:    xsi_set_current_line(139, ng0);

LAB47:    xsi_set_current_line(140, ng0);
    t29 = (t0 + 5504);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t33 = ((char*)((ng6)));
    memset(t32, 0, 8);
    xsi_vlog_unsigned_add(t32, 32, t31, 3, t33, 32);
    t35 = (t0 + 5504);
    xsi_vlogvar_wait_assign_value(t35, t32, 0, 0, 3, 0LL);
    xsi_set_current_line(141, ng0);
    t2 = (t0 + 5504);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);

LAB48:    t12 = ((char*)((ng15)));
    t34 = xsi_vlog_unsigned_case_compare(t6, 3, t12, 3);
    if (t34 == 1)
        goto LAB49;

LAB50:
LAB52:
LAB51:    xsi_set_current_line(145, ng0);

LAB54:    xsi_set_current_line(145, ng0);
    t2 = (t0 + 6464);
    t3 = (t2 + 56U);
    t12 = *((char **)t3);
    t13 = (t0 + 6464);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 16, 0LL);
    xsi_set_current_line(145, ng0);
    t2 = (t0 + 6144);
    t3 = (t2 + 56U);
    t12 = *((char **)t3);
    t13 = (t0 + 6144);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 16, 0LL);

LAB53:    goto LAB46;

LAB49:    xsi_set_current_line(144, ng0);
    t13 = ((char*)((ng6)));
    t19 = (t0 + 4864);
    xsi_vlogvar_wait_assign_value(t19, t13, 0, 0, 1, 0LL);
    goto LAB53;

LAB57:    t28 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB58;

LAB59:    xsi_set_current_line(151, ng0);

LAB62:    xsi_set_current_line(152, ng0);
    t30 = (t0 + 5664);
    t31 = (t30 + 56U);
    t33 = *((char **)t31);
    t35 = (t0 + 5824);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memset(t32, 0, 8);
    t38 = (t32 + 4);
    t39 = (t37 + 4);
    t40 = *((unsigned int *)t37);
    t41 = (t40 >> 10);
    *((unsigned int *)t32) = t41;
    t42 = *((unsigned int *)t39);
    t43 = (t42 >> 10);
    *((unsigned int *)t38) = t43;
    t44 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t44 & 63U);
    t45 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t45 & 63U);
    memset(t46, 0, 8);
    t47 = (t33 + 4);
    t48 = (t32 + 4);
    t49 = *((unsigned int *)t33);
    t50 = *((unsigned int *)t32);
    t51 = (t49 ^ t50);
    t52 = *((unsigned int *)t47);
    t53 = *((unsigned int *)t48);
    t54 = (t52 ^ t53);
    t55 = (t51 | t54);
    t56 = *((unsigned int *)t47);
    t57 = *((unsigned int *)t48);
    t58 = (t56 | t57);
    t59 = (~(t58));
    t60 = (t55 & t59);
    if (t60 != 0)
        goto LAB66;

LAB63:    if (t58 != 0)
        goto LAB65;

LAB64:    *((unsigned int *)t46) = 1;

LAB66:    t62 = (t46 + 4);
    t63 = *((unsigned int *)t62);
    t64 = (~(t63));
    t65 = *((unsigned int *)t46);
    t66 = (t65 & t64);
    t67 = (t66 != 0);
    if (t67 > 0)
        goto LAB67;

LAB68:
LAB69:    goto LAB61;

LAB65:    t61 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB66;

LAB67:    xsi_set_current_line(153, ng0);

LAB70:    xsi_set_current_line(154, ng0);
    t69 = (t0 + 5824);
    t70 = (t69 + 56U);
    t71 = *((char **)t70);
    memset(t68, 0, 8);
    t72 = (t68 + 4);
    t73 = (t71 + 4);
    t74 = *((unsigned int *)t71);
    t75 = (t74 >> 0);
    *((unsigned int *)t68) = t75;
    t76 = *((unsigned int *)t73);
    t77 = (t76 >> 0);
    *((unsigned int *)t72) = t77;
    t78 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t78 & 1023U);
    t79 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t79 & 1023U);
    t80 = (t0 + 7104);
    t81 = (t80 + 56U);
    t82 = *((char **)t81);
    t83 = (t0 + 7264);
    t84 = (t83 + 56U);
    t85 = *((char **)t84);
    t86 = (t0 + 7424);
    t87 = (t86 + 56U);
    t88 = *((char **)t87);
    t89 = (t0 + 7584);
    t90 = (t89 + 56U);
    t91 = *((char **)t90);
    t92 = (t0 + 11992);
    t93 = (t0 + 2232);
    t94 = xsi_create_subprogram_invocation(t92, 0, t0, t93, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t93, t94);
    t95 = (t0 + 8704);
    xsi_vlogvar_assign_value(t95, t68, 0, 0, 10);
    t96 = (t0 + 8864);
    xsi_vlogvar_assign_value(t96, t82, 0, 0, 16);
    t97 = (t0 + 9024);
    xsi_vlogvar_assign_value(t97, t85, 0, 0, 16);
    t98 = (t0 + 9184);
    xsi_vlogvar_assign_value(t98, t88, 0, 0, 16);
    t99 = (t0 + 9344);
    xsi_vlogvar_assign_value(t99, t91, 0, 0, 16);

LAB73:    t100 = (t0 + 12088);
    t101 = *((char **)t100);
    t102 = (t101 + 80U);
    t103 = *((char **)t102);
    t104 = (t103 + 272U);
    t105 = *((char **)t104);
    t106 = (t105 + 0U);
    t107 = *((char **)t106);
    t34 = ((int  (*)(char *, char *))t107)(t0, t101);

LAB75:    if (t34 != 0)
        goto LAB76;

LAB71:    t101 = (t0 + 2232);
    xsi_vlog_subprogram_popinvocation(t101);

LAB72:    t108 = (t0 + 12088);
    t109 = *((char **)t108);
    t108 = (t0 + 9504);
    t110 = (t108 + 56U);
    t111 = *((char **)t110);
    t112 = (t0 + 4224);
    xsi_vlogvar_assign_value(t112, t111, 0, 0, 16);
    t113 = (t0 + 9664);
    t114 = (t113 + 56U);
    t115 = *((char **)t114);
    t116 = (t0 + 4384);
    xsi_vlogvar_assign_value(t116, t115, 0, 0, 16);
    t117 = (t0 + 9824);
    t118 = (t117 + 56U);
    t119 = *((char **)t118);
    t120 = (t0 + 4544);
    xsi_vlogvar_assign_value(t120, t119, 0, 0, 16);
    t121 = (t0 + 9984);
    t122 = (t121 + 56U);
    t123 = *((char **)t122);
    t124 = (t0 + 4704);
    xsi_vlogvar_assign_value(t124, t123, 0, 0, 16);
    t125 = (t0 + 10144);
    t126 = (t125 + 56U);
    t127 = *((char **)t126);
    t128 = (t0 + 3744);
    xsi_vlogvar_assign_value(t128, t127, 0, 0, 16);
    t129 = (t0 + 2232);
    t130 = (t0 + 11992);
    t131 = 0;
    xsi_delete_subprogram_invocation(t129, t109, t0, t130, t131);
    xsi_set_current_line(160, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 5664);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 6, 0LL);
    xsi_set_current_line(161, ng0);
    t2 = (t0 + 5824);
    t3 = (t2 + 56U);
    t12 = *((char **)t3);
    memset(t4, 0, 8);
    t13 = (t4 + 4);
    t19 = (t12 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (t7 >> 0);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t19);
    t10 = (t9 >> 0);
    *((unsigned int *)t13) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 1023U);
    t14 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t14 & 1023U);
    t20 = ((char*)((ng16)));
    memset(t32, 0, 8);
    xsi_vlog_unsigned_add(t32, 32, t4, 32, t20, 32);
    t28 = (t0 + 6144);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng1)));
    memset(t132, 0, 8);
    xsi_vlog_signed_greater(t132, 32, t30, 16, t31, 32);
    memset(t68, 0, 8);
    t33 = (t132 + 4);
    t15 = *((unsigned int *)t33);
    t16 = (~(t15));
    t17 = *((unsigned int *)t132);
    t18 = (t17 & t16);
    t21 = (t18 & 1U);
    if (t21 != 0)
        goto LAB77;

LAB78:    if (*((unsigned int *)t33) != 0)
        goto LAB79;

LAB80:    t36 = (t68 + 4);
    t22 = *((unsigned int *)t68);
    t23 = *((unsigned int *)t36);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB81;

LAB82:    t25 = *((unsigned int *)t68);
    t26 = (~(t25));
    t27 = *((unsigned int *)t36);
    t40 = (t26 || t27);
    if (t40 > 0)
        goto LAB83;

LAB84:    if (*((unsigned int *)t36) > 0)
        goto LAB85;

LAB86:    if (*((unsigned int *)t68) > 0)
        goto LAB87;

LAB88:    memcpy(t46, t133, 8);

LAB89:    t72 = (t0 + 3744);
    t73 = (t72 + 56U);
    t80 = *((char **)t73);
    t81 = ((char*)((ng1)));
    memset(t139, 0, 8);
    xsi_vlog_signed_greater(t139, 32, t80, 16, t81, 32);
    memset(t138, 0, 8);
    t82 = (t139 + 4);
    t56 = *((unsigned int *)t82);
    t57 = (~(t56));
    t58 = *((unsigned int *)t139);
    t59 = (t58 & t57);
    t60 = (t59 & 1U);
    if (t60 != 0)
        goto LAB103;

LAB104:    if (*((unsigned int *)t82) != 0)
        goto LAB105;

LAB106:    t84 = (t138 + 4);
    t63 = *((unsigned int *)t138);
    t64 = *((unsigned int *)t84);
    t65 = (t63 || t64);
    if (t65 > 0)
        goto LAB107;

LAB108:    t66 = *((unsigned int *)t138);
    t67 = (~(t66));
    t74 = *((unsigned int *)t84);
    t75 = (t67 || t74);
    if (t75 > 0)
        goto LAB109;

LAB110:    if (*((unsigned int *)t84) > 0)
        goto LAB111;

LAB112:    if (*((unsigned int *)t138) > 0)
        goto LAB113;

LAB114:    memcpy(t137, t140, 8);

LAB115:    memset(t152, 0, 8);
    xsi_vlog_signed_minus(t152, 32, t46, 32, t137, 32);
    t95 = (t0 + 6464);
    t96 = (t95 + 56U);
    t97 = *((char **)t96);
    memset(t153, 0, 8);
    xsi_vlog_signed_multiply(t153, 32, t152, 32, t97, 16);
    t98 = (t0 + 472);
    t99 = *((char **)t98);
    memset(t154, 0, 8);
    xsi_vlog_signed_multiply(t154, 32, t153, 32, t99, 32);
    t98 = (t0 + 11992);
    t100 = (t0 + 1800);
    t101 = xsi_create_subprogram_invocation(t98, 0, t0, t100, 0, 0);
    t102 = (t0 + 8544);
    xsi_vlogvar_assign_value(t102, t154, 0, 0, 32);

LAB129:    t103 = (t0 + 12088);
    t104 = *((char **)t103);
    t105 = (t104 + 80U);
    t106 = *((char **)t105);
    t107 = (t106 + 272U);
    t108 = *((char **)t107);
    t109 = (t108 + 0U);
    t110 = *((char **)t109);
    t34 = ((int  (*)(char *, char *))t110)(t0, t104);
    if (t34 != 0)
        goto LAB131;

LAB130:    t104 = (t0 + 12088);
    t111 = *((char **)t104);
    t104 = (t0 + 8384);
    t112 = (t104 + 56U);
    t113 = *((char **)t112);
    memcpy(t155, t113, 8);
    t114 = (t0 + 1800);
    t115 = (t0 + 11992);
    t116 = 0;
    xsi_delete_subprogram_invocation(t114, t111, t0, t115, t116);
    t117 = (t0 + 608);
    t118 = *((char **)t117);
    memset(t156, 0, 8);
    xsi_vlog_signed_multiply(t156, 32, t155, 16, t118, 32);
    t117 = (t0 + 11992);
    t119 = (t0 + 1800);
    t120 = xsi_create_subprogram_invocation(t117, 0, t0, t119, 0, 0);
    t121 = (t0 + 8544);
    xsi_vlogvar_assign_value(t121, t156, 0, 0, 32);

LAB132:    t122 = (t0 + 12088);
    t123 = *((char **)t122);
    t124 = (t123 + 80U);
    t125 = *((char **)t124);
    t126 = (t125 + 272U);
    t127 = *((char **)t126);
    t128 = (t127 + 0U);
    t129 = *((char **)t128);
    t157 = ((int  (*)(char *, char *))t129)(t0, t123);
    if (t157 != 0)
        goto LAB134;

LAB133:    t123 = (t0 + 12088);
    t130 = *((char **)t123);
    t123 = (t0 + 8384);
    t131 = (t123 + 56U);
    t158 = *((char **)t131);
    memcpy(t159, t158, 8);
    t160 = (t0 + 1800);
    t161 = (t0 + 11992);
    t162 = 0;
    xsi_delete_subprogram_invocation(t160, t130, t0, t161, t162);
    t163 = ((char*)((ng17)));
    memset(t164, 0, 8);
    xsi_vlog_unsigned_multiply(t164, 32, t159, 16, t163, 32);
    memset(t165, 0, 8);
    xsi_vlog_unsigned_add(t165, 32, t32, 32, t164, 32);
    t166 = (t0 + 5824);
    xsi_vlogvar_wait_assign_value(t166, t165, 0, 0, 16, 0LL);
    xsi_set_current_line(162, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 5184);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB69;

LAB74:;
LAB76:    t100 = (t0 + 12184U);
    *((char **)t100) = &&LAB73;
    goto LAB1;

LAB77:    *((unsigned int *)t68) = 1;
    goto LAB80;

LAB79:    t35 = (t68 + 4);
    *((unsigned int *)t68) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB80;

LAB81:    t37 = ((char*)((ng6)));
    goto LAB82;

LAB83:    t38 = (t0 + 6144);
    t39 = (t38 + 56U);
    t47 = *((char **)t39);
    t48 = ((char*)((ng1)));
    memset(t135, 0, 8);
    xsi_vlog_signed_equal(t135, 32, t47, 16, t48, 32);
    memset(t134, 0, 8);
    t61 = (t135 + 4);
    t41 = *((unsigned int *)t61);
    t42 = (~(t41));
    t43 = *((unsigned int *)t135);
    t44 = (t43 & t42);
    t45 = (t44 & 1U);
    if (t45 != 0)
        goto LAB90;

LAB91:    if (*((unsigned int *)t61) != 0)
        goto LAB92;

LAB93:    t69 = (t134 + 4);
    t49 = *((unsigned int *)t134);
    t50 = *((unsigned int *)t69);
    t51 = (t49 || t50);
    if (t51 > 0)
        goto LAB94;

LAB95:    t52 = *((unsigned int *)t134);
    t53 = (~(t52));
    t54 = *((unsigned int *)t69);
    t55 = (t53 || t54);
    if (t55 > 0)
        goto LAB96;

LAB97:    if (*((unsigned int *)t69) > 0)
        goto LAB98;

LAB99:    if (*((unsigned int *)t134) > 0)
        goto LAB100;

LAB101:    memcpy(t133, t136, 8);

LAB102:    goto LAB84;

LAB85:    xsi_vlog_unsigned_bit_combine(t46, 32, t37, 32, t133, 32);
    goto LAB89;

LAB87:    memcpy(t46, t37, 8);
    goto LAB89;

LAB90:    *((unsigned int *)t134) = 1;
    goto LAB93;

LAB92:    t62 = (t134 + 4);
    *((unsigned int *)t134) = 1;
    *((unsigned int *)t62) = 1;
    goto LAB93;

LAB94:    t70 = ((char*)((ng1)));
    goto LAB95;

LAB96:    t71 = ((char*)((ng6)));
    memset(t136, 0, 8);
    xsi_vlog_signed_unary_minus(t136, 32, t71, 32);
    goto LAB97;

LAB98:    xsi_vlog_unsigned_bit_combine(t133, 32, t70, 32, t136, 32);
    goto LAB102;

LAB100:    memcpy(t133, t70, 8);
    goto LAB102;

LAB103:    *((unsigned int *)t138) = 1;
    goto LAB106;

LAB105:    t83 = (t138 + 4);
    *((unsigned int *)t138) = 1;
    *((unsigned int *)t83) = 1;
    goto LAB106;

LAB107:    t85 = ((char*)((ng6)));
    goto LAB108;

LAB109:    t86 = (t0 + 3744);
    t87 = (t86 + 56U);
    t88 = *((char **)t87);
    t89 = ((char*)((ng1)));
    memset(t142, 0, 8);
    xsi_vlog_signed_equal(t142, 32, t88, 16, t89, 32);
    memset(t141, 0, 8);
    t90 = (t142 + 4);
    t76 = *((unsigned int *)t90);
    t77 = (~(t76));
    t78 = *((unsigned int *)t142);
    t79 = (t78 & t77);
    t143 = (t79 & 1U);
    if (t143 != 0)
        goto LAB116;

LAB117:    if (*((unsigned int *)t90) != 0)
        goto LAB118;

LAB119:    t92 = (t141 + 4);
    t144 = *((unsigned int *)t141);
    t145 = *((unsigned int *)t92);
    t146 = (t144 || t145);
    if (t146 > 0)
        goto LAB120;

LAB121:    t147 = *((unsigned int *)t141);
    t148 = (~(t147));
    t149 = *((unsigned int *)t92);
    t150 = (t148 || t149);
    if (t150 > 0)
        goto LAB122;

LAB123:    if (*((unsigned int *)t92) > 0)
        goto LAB124;

LAB125:    if (*((unsigned int *)t141) > 0)
        goto LAB126;

LAB127:    memcpy(t140, t151, 8);

LAB128:    goto LAB110;

LAB111:    xsi_vlog_unsigned_bit_combine(t137, 32, t85, 32, t140, 32);
    goto LAB115;

LAB113:    memcpy(t137, t85, 8);
    goto LAB115;

LAB116:    *((unsigned int *)t141) = 1;
    goto LAB119;

LAB118:    t91 = (t141 + 4);
    *((unsigned int *)t141) = 1;
    *((unsigned int *)t91) = 1;
    goto LAB119;

LAB120:    t93 = ((char*)((ng1)));
    goto LAB121;

LAB122:    t94 = ((char*)((ng6)));
    memset(t151, 0, 8);
    xsi_vlog_signed_unary_minus(t151, 32, t94, 32);
    goto LAB123;

LAB124:    xsi_vlog_unsigned_bit_combine(t140, 32, t93, 32, t151, 32);
    goto LAB128;

LAB126:    memcpy(t140, t93, 8);
    goto LAB128;

LAB131:    t103 = (t0 + 12184U);
    *((char **)t103) = &&LAB129;
    goto LAB1;

LAB134:    t122 = (t0 + 12184U);
    *((char **)t122) = &&LAB132;
    goto LAB1;

LAB138:    t33 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB139;

LAB140:    xsi_set_current_line(168, ng0);

LAB143:    xsi_set_current_line(169, ng0);
    t36 = (t0 + 5824);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    memset(t46, 0, 8);
    t39 = (t46 + 4);
    t47 = (t38 + 4);
    t49 = *((unsigned int *)t38);
    t50 = (t49 >> 0);
    *((unsigned int *)t46) = t50;
    t51 = *((unsigned int *)t47);
    t52 = (t51 >> 0);
    *((unsigned int *)t39) = t52;
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t53 & 1023U);
    t54 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t54 & 1023U);
    t48 = (t0 + 7104);
    t61 = (t48 + 56U);
    t62 = *((char **)t61);
    t69 = (t0 + 7264);
    t70 = (t69 + 56U);
    t71 = *((char **)t70);
    t72 = (t0 + 7424);
    t73 = (t72 + 56U);
    t80 = *((char **)t73);
    t81 = (t0 + 7584);
    t82 = (t81 + 56U);
    t83 = *((char **)t82);
    t84 = (t0 + 11992);
    t85 = (t0 + 2232);
    t86 = xsi_create_subprogram_invocation(t84, 0, t0, t85, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t85, t86);
    t87 = (t0 + 8704);
    xsi_vlogvar_assign_value(t87, t46, 0, 0, 10);
    t88 = (t0 + 8864);
    xsi_vlogvar_assign_value(t88, t62, 0, 0, 16);
    t89 = (t0 + 9024);
    xsi_vlogvar_assign_value(t89, t71, 0, 0, 16);
    t90 = (t0 + 9184);
    xsi_vlogvar_assign_value(t90, t80, 0, 0, 16);
    t91 = (t0 + 9344);
    xsi_vlogvar_assign_value(t91, t83, 0, 0, 16);

LAB146:    t92 = (t0 + 12088);
    t93 = *((char **)t92);
    t94 = (t93 + 80U);
    t95 = *((char **)t94);
    t96 = (t95 + 272U);
    t97 = *((char **)t96);
    t98 = (t97 + 0U);
    t99 = *((char **)t98);
    t34 = ((int  (*)(char *, char *))t99)(t0, t93);

LAB148:    if (t34 != 0)
        goto LAB149;

LAB144:    t93 = (t0 + 2232);
    xsi_vlog_subprogram_popinvocation(t93);

LAB145:    t100 = (t0 + 12088);
    t101 = *((char **)t100);
    t100 = (t0 + 9504);
    t102 = (t100 + 56U);
    t103 = *((char **)t102);
    t104 = (t0 + 4224);
    xsi_vlogvar_assign_value(t104, t103, 0, 0, 16);
    t105 = (t0 + 9664);
    t106 = (t105 + 56U);
    t107 = *((char **)t106);
    t108 = (t0 + 4384);
    xsi_vlogvar_assign_value(t108, t107, 0, 0, 16);
    t109 = (t0 + 9824);
    t110 = (t109 + 56U);
    t111 = *((char **)t110);
    t112 = (t0 + 4544);
    xsi_vlogvar_assign_value(t112, t111, 0, 0, 16);
    t113 = (t0 + 9984);
    t114 = (t113 + 56U);
    t115 = *((char **)t114);
    t116 = (t0 + 4704);
    xsi_vlogvar_assign_value(t116, t115, 0, 0, 16);
    t117 = (t0 + 10144);
    t118 = (t117 + 56U);
    t119 = *((char **)t118);
    t120 = (t0 + 4064);
    xsi_vlogvar_assign_value(t120, t119, 0, 0, 16);
    t121 = (t0 + 2232);
    t122 = (t0 + 11992);
    t123 = 0;
    xsi_delete_subprogram_invocation(t121, t101, t0, t122, t123);
    xsi_set_current_line(170, ng0);
    t2 = (t0 + 4064);
    t3 = (t2 + 56U);
    t12 = *((char **)t3);
    t13 = (t0 + 6464);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 16, 0LL);
    xsi_set_current_line(171, ng0);
    t2 = (t0 + 3744);
    t3 = (t2 + 56U);
    t12 = *((char **)t3);
    t13 = (t0 + 6144);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 16, 0LL);
    xsi_set_current_line(172, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 5664);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 6, 0LL);
    xsi_set_current_line(173, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 5824);
    t12 = (t3 + 56U);
    t13 = *((char **)t12);
    memset(t4, 0, 8);
    t19 = (t4 + 4);
    t20 = (t13 + 4);
    t7 = *((unsigned int *)t13);
    t8 = (t7 >> 0);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t20);
    t10 = (t9 >> 0);
    *((unsigned int *)t19) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 1023U);
    t14 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t14 & 1023U);
    memset(t32, 0, 8);
    xsi_vlog_unsigned_add(t32, 32, t2, 32, t4, 32);
    t28 = (t0 + 5824);
    xsi_vlogvar_wait_assign_value(t28, t32, 0, 0, 16, 0LL);
    xsi_set_current_line(174, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5184);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB142;

LAB147:;
LAB149:    t92 = (t0 + 12184U);
    *((char **)t92) = &&LAB146;
    goto LAB1;

}


extern void work_m_00000000000962701691_4092708732_init()
{
	static char *pe[] = {(void *)Always_110_0};
	static char *se[] = {(void *)sp_mov,(void *)sp_gardn};
	xsi_register_didat("work_m_00000000000962701691_4092708732", "isim/test_jidai_isim_beh.exe.sim/work/m_00000000000962701691_4092708732.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
