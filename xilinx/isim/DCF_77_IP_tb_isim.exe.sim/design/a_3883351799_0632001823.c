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
static const char *ng0 = "C:/Users/mohammed.bensalah/Documents/GitHub/DCF77_SN/dcf77_ip.ews/design.hdl/DCF_77_IP_stimuli.vhd";



static void design_a_3883351799_0632001823_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    int64 t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    int64 t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 4432U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2792U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)0);
    if (t5 != 0)
        goto LAB4;

LAB6:    xsi_set_current_line(68, ng0);

LAB13:    *((char **)t1) = &&LAB14;

LAB1:    return;
LAB4:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 5160);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_delta(t2, 0U, 1, 0LL);
    t10 = (1 * 1000LL);
    t11 = (t0 + 5160);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t11, 0U, 1, t10);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 5224);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_delta(t2, 0U, 1, 0LL);
    t10 = (5 * 1000LL);
    t9 = (t0 + 5224);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t9, 0U, 1, t10);
    t16 = (17 * 1000LL);
    t15 = (t0 + 5224);
    t17 = (t15 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)3;
    xsi_driver_subsequent_trans_delta(t15, 0U, 1, t16);
    xsi_set_current_line(66, ng0);
    t10 = (25 * 1000LL);
    t2 = (t0 + 4240);
    xsi_process_wait(t2, t10);

LAB9:    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB5:    goto LAB2;

LAB7:    goto LAB5;

LAB8:    goto LAB7;

LAB10:    goto LAB8;

LAB11:    goto LAB5;

LAB12:    goto LAB11;

LAB14:    goto LAB12;

}

void design_a_3883351799_0632001823_sub_105344256_2953828458(char *t0, char *t1, int t2)
{
    char t4[8];
    char *t5;
    int t6;
    int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned char t24;
    char *t25;
    unsigned char t26;
    char *t27;
    char *t28;
    unsigned char t29;
    unsigned char t30;
    int t31;

LAB0:    t5 = (t4 + 4U);
    *((int *)t5) = t2;
    t6 = 1;
    t7 = t2;

LAB2:    if (t6 <= t7)
        goto LAB3;

LAB5:
LAB1:    return;
LAB3:    t8 = (t0 + 3232U);
    xsi_add_dynamic_wait(t1, t8, -1, -1);
    t9 = (t0 + 3232U);
    xsi_add_dynamic_wait(t1, t9, -1, -1);

LAB9:    t10 = (t1 + 224U);
    t10 = *((char **)t10);
    xsi_wp_set_status(t10, 1);
    t11 = (t1 + 88U);
    t12 = *((char **)t11);
    t13 = (t12 + 2480U);
    *((unsigned int *)t13) = 1U;
    t14 = (t1 + 88U);
    t15 = *((char **)t14);
    t16 = (t15 + 0U);
    getcontext(t16);
    t17 = (t1 + 88U);
    t18 = *((char **)t17);
    t19 = (t18 + 2480U);
    t20 = *((unsigned int *)t19);
    if (t20 == 1)
        goto LAB10;

LAB11:    t21 = (t1 + 88U);
    t22 = *((char **)t21);
    t23 = (t22 + 2480U);
    *((unsigned int *)t23) = 3U;

LAB7:
LAB8:    t25 = (t0 + 3232U);
    t26 = xsi_signal_has_event(t25);
    if (t26 == 1)
        goto LAB12;

LAB13:    t24 = (unsigned char)0;

LAB14:    if (t24 == 1)
        goto LAB6;
    else
        goto LAB9;

LAB4:    if (t6 == t7)
        goto LAB5;

LAB15:    t31 = (t6 + 1);
    t6 = t31;
    goto LAB2;

LAB6:    xsi_remove_dynamic_wait(t1, t8);
    xsi_remove_dynamic_wait(t1, t9);
    goto LAB4;

LAB10:    xsi_saveStackAndSuspend(t1);
    goto LAB11;

LAB12:    t27 = (t0 + 3272U);
    t28 = *((char **)t27);
    t29 = *((unsigned char *)t28);
    t30 = (t29 == (unsigned char)3);
    t24 = t30;
    goto LAB14;

}

void design_a_3883351799_0632001823_sub_1609090416_2953828458(char *t0, char *t1)
{
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t4 = (t0 + 5288);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t4);
    t4 = (t0 + 5352);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t4);
    t4 = (t0 + 5416);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t4);
    t4 = (t0 + 5480);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t4);

LAB1:    return;
}

void design_a_3883351799_0632001823_sub_3306054675_2953828458(char *t0, char *t1, unsigned char t2, unsigned char t3, int t4)
{
    char t6[16];
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    int64 t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    t7 = (t6 + 4U);
    *((unsigned char *)t7) = t2;
    t8 = (t6 + 5U);
    *((unsigned char *)t8) = t3;
    t9 = (t6 + 6U);
    *((int *)t9) = t4;
    t10 = (t2 != t3);
    if (t10 != 0)
        goto LAB2;

LAB4:
LAB3:
LAB1:    return;
LAB2:    t11 = (t0 + 5736);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_delta(t11, 0U, 1, 0LL);
    t16 = (1 * 1000LL);
    t17 = (t0 + 5736);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t17, 0U, 1, t16);
    t11 = (t0 + 5800);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((int *)t15) = t4;
    xsi_driver_first_trans_fast(t11);
    if ((unsigned char)0 == 0)
        goto LAB5;

LAB6:    goto LAB3;

LAB5:    t11 = (t0 + 9665);
    xsi_report(t11, 26U, (unsigned char)1);
    goto LAB6;

}

void design_a_3883351799_0632001823_sub_1568462173_2953828458(char *t0, char *t1, char *t2, char *t3, int t4)
{
    char t6[40];
    char t7[16];
    char t12[16];
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    char *t13;
    int t14;
    unsigned char t15;
    char *t16;
    char *t17;
    unsigned char t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned char t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    int64 t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;

LAB0:    t8 = (t7 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 7;
    t9 = (t8 + 4U);
    *((int *)t9) = 0;
    t9 = (t8 + 8U);
    *((int *)t9) = -1;
    t10 = (0 - 7);
    t11 = (t10 * -1);
    t11 = (t11 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t11;
    t9 = (t12 + 0U);
    t13 = (t9 + 0U);
    *((int *)t13) = 7;
    t13 = (t9 + 4U);
    *((int *)t13) = 0;
    t13 = (t9 + 8U);
    *((int *)t13) = -1;
    t14 = (0 - 7);
    t11 = (t14 * -1);
    t11 = (t11 + 1);
    t13 = (t9 + 12U);
    *((unsigned int *)t13) = t11;
    t13 = (t6 + 4U);
    t15 = (t2 != 0);
    if (t15 == 1)
        goto LAB3;

LAB2:    t16 = (t6 + 12U);
    *((char **)t16) = t7;
    t17 = (t6 + 20U);
    t18 = (t3 != 0);
    if (t18 == 1)
        goto LAB5;

LAB4:    t19 = (t6 + 28U);
    *((char **)t19) = t12;
    t20 = (t6 + 36U);
    *((int *)t20) = t4;
    t21 = (t7 + 12U);
    t11 = *((unsigned int *)t21);
    t11 = (t11 * 1U);
    t22 = (t12 + 12U);
    t23 = *((unsigned int *)t22);
    t23 = (t23 * 1U);
    t24 = 1;
    if (t11 == t23)
        goto LAB9;

LAB10:    t24 = 0;

LAB11:    if ((!(t24)) != 0)
        goto LAB6;

LAB8:
LAB7:
LAB1:    return;
LAB3:    *((char **)t13) = t2;
    goto LAB2;

LAB5:    *((char **)t17) = t3;
    goto LAB4;

LAB6:    t28 = (t0 + 5736);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    *((unsigned char *)t32) = (unsigned char)3;
    xsi_driver_first_trans_delta(t28, 0U, 1, 0LL);
    t33 = (1 * 1000LL);
    t34 = (t0 + 5736);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    *((unsigned char *)t38) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t34, 0U, 1, t33);
    t8 = (t0 + 5800);
    t9 = (t8 + 56U);
    t21 = *((char **)t9);
    t22 = (t21 + 56U);
    t26 = *((char **)t22);
    *((int *)t26) = t4;
    xsi_driver_first_trans_fast(t8);
    if ((unsigned char)0 == 0)
        goto LAB15;

LAB16:    goto LAB7;

LAB9:    t25 = 0;

LAB12:    if (t25 < t11)
        goto LAB13;
    else
        goto LAB11;

LAB13:    t26 = (t2 + t25);
    t27 = (t3 + t25);
    if (*((unsigned char *)t26) != *((unsigned char *)t27))
        goto LAB10;

LAB14:    t25 = (t25 + 1);
    goto LAB12;

LAB15:    t8 = (t0 + 9691);
    xsi_report(t8, 26U, (unsigned char)1);
    goto LAB16;

}

void design_a_3883351799_0632001823_sub_3410349165_2953828458(char *t0, char *t1, unsigned char t2)
{
    char t4[8];
    char *t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    int64 t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    char *t19;
    char *t20;

LAB0:    t5 = (t4 + 4U);
    *((unsigned char *)t5) = t2;
    t6 = (t2 == (unsigned char)2);
    if (t6 != 0)
        goto LAB2;

LAB4:    t6 = (t2 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB6:
LAB3:    t12 = (1000 * 1000000000LL);
    xsi_process_wait(t1, t12);

LAB10:    t7 = (t1 + 88U);
    t8 = *((char **)t7);
    t9 = (t8 + 2480U);
    *((unsigned int *)t9) = 1U;
    t10 = (t1 + 88U);
    t11 = *((char **)t10);
    t13 = (t11 + 0U);
    getcontext(t13);
    t14 = (t1 + 88U);
    t15 = *((char **)t14);
    t16 = (t15 + 2480U);
    t18 = *((unsigned int *)t16);
    if (t18 == 1)
        goto LAB11;

LAB12:    t17 = (t1 + 88U);
    t19 = *((char **)t17);
    t20 = (t19 + 2480U);
    *((unsigned int *)t20) = 3U;

LAB8:
LAB9:
LAB7:
LAB1:    return;
LAB2:    t7 = (t0 + 5672);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_delta(t7, 0U, 1, 0LL);
    t12 = (200 * 1000000000LL);
    t13 = (t0 + 5672);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t13, 0U, 1, t12);
    goto LAB3;

LAB5:    t7 = (t0 + 5672);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_delta(t7, 0U, 1, 0LL);
    t12 = (100 * 1000000000LL);
    t13 = (t0 + 5672);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t13, 0U, 1, t12);
    goto LAB3;

LAB11:    xsi_saveStackAndSuspend(t1);
    goto LAB12;

}

void design_a_3883351799_0632001823_sub_3153591967_2953828458(char *t0, char *t1)
{
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int64 t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    t4 = (t0 + 5672);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t4);
    t9 = (1000 * 1000000000LL);
    xsi_process_wait(t1, t9);

LAB5:    t4 = (t1 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 2480U);
    *((unsigned int *)t6) = 1U;
    t7 = (t1 + 88U);
    t8 = *((char **)t7);
    t10 = (t8 + 0U);
    getcontext(t10);
    t11 = (t1 + 88U);
    t12 = *((char **)t11);
    t13 = (t12 + 2480U);
    t14 = *((unsigned int *)t13);
    if (t14 == 1)
        goto LAB6;

LAB7:    t15 = (t1 + 88U);
    t16 = *((char **)t15);
    t17 = (t16 + 2480U);
    *((unsigned int *)t17) = 3U;

LAB3:
LAB4:
LAB2:
LAB1:    return;
LAB6:    xsi_saveStackAndSuspend(t1);
    goto LAB7;

}

static void design_a_3883351799_0632001823_p_1(char *t0)
{
    char t9[8];
    char t10[8];
    char t11[8];
    char t12[8];
    char t13[8];
    char t14[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 4680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(137, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_1609090416_2953828458(t0, t2);
    xsi_set_current_line(138, ng0);
    if ((unsigned char)0 == 0)
        goto LAB4;

LAB5:    xsi_set_current_line(141, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_105344256_2953828458(t0, t2, 2);
    xsi_set_current_line(149, ng0);
    t2 = (t0 + 5480);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(151, ng0);
    t2 = (t0 + 9742);
    t4 = (t0 + 5544);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(152, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_105344256_2953828458(t0, t2, 1);
    xsi_set_current_line(154, ng0);
    t2 = (t0 + 9746);
    t4 = (t0 + 5608);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(155, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_105344256_2953828458(t0, t2, 1);
    xsi_set_current_line(157, ng0);
    t2 = (t0 + 9754);
    t4 = (t0 + 5544);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(158, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_105344256_2953828458(t0, t2, 1);
    xsi_set_current_line(160, ng0);
    t2 = (t0 + 9758);
    t4 = (t0 + 5608);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(161, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_105344256_2953828458(t0, t2, 1);
    xsi_set_current_line(163, ng0);
    t2 = (t0 + 5480);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(168, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_3410349165_2953828458(t0, t2, (unsigned char)2);
    xsi_set_current_line(169, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_3410349165_2953828458(t0, t2, (unsigned char)2);
    xsi_set_current_line(170, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_3410349165_2953828458(t0, t2, (unsigned char)3);
    xsi_set_current_line(171, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_3410349165_2953828458(t0, t2, (unsigned char)3);
    xsi_set_current_line(172, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_3410349165_2953828458(t0, t2, (unsigned char)3);
    xsi_set_current_line(173, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_3410349165_2953828458(t0, t2, (unsigned char)2);
    xsi_set_current_line(174, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_3410349165_2953828458(t0, t2, (unsigned char)3);
    xsi_set_current_line(175, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_3410349165_2953828458(t0, t2, (unsigned char)3);
    xsi_set_current_line(176, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_3410349165_2953828458(t0, t2, (unsigned char)3);
    xsi_set_current_line(177, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_3410349165_2953828458(t0, t2, (unsigned char)2);
    xsi_set_current_line(178, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_3410349165_2953828458(t0, t2, (unsigned char)3);
    xsi_set_current_line(179, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_3410349165_2953828458(t0, t2, (unsigned char)3);
    xsi_set_current_line(180, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_3410349165_2953828458(t0, t2, (unsigned char)3);
    xsi_set_current_line(181, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_3410349165_2953828458(t0, t2, (unsigned char)2);
    xsi_set_current_line(182, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_3410349165_2953828458(t0, t2, (unsigned char)3);
    xsi_set_current_line(185, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_3410349165_2953828458(t0, t2, (unsigned char)2);
    xsi_set_current_line(186, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_3410349165_2953828458(t0, t2, (unsigned char)2);
    xsi_set_current_line(187, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_3410349165_2953828458(t0, t2, (unsigned char)2);
    xsi_set_current_line(188, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_3410349165_2953828458(t0, t2, (unsigned char)2);
    xsi_set_current_line(189, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_3410349165_2953828458(t0, t2, (unsigned char)2);
    xsi_set_current_line(192, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_3410349165_2953828458(t0, t2, (unsigned char)3);
    xsi_set_current_line(195, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_3410349165_2953828458(t0, t2, (unsigned char)2);
    xsi_set_current_line(196, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_3410349165_2953828458(t0, t2, (unsigned char)2);
    xsi_set_current_line(197, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_3410349165_2953828458(t0, t2, (unsigned char)2);
    xsi_set_current_line(198, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_3410349165_2953828458(t0, t2, (unsigned char)2);
    xsi_set_current_line(199, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_3410349165_2953828458(t0, t2, (unsigned char)2);
    xsi_set_current_line(200, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_3410349165_2953828458(t0, t2, (unsigned char)3);
    xsi_set_current_line(201, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_3410349165_2953828458(t0, t2, (unsigned char)3);
    xsi_set_current_line(202, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_3410349165_2953828458(t0, t2, (unsigned char)2);
    xsi_set_current_line(205, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_3410349165_2953828458(t0, t2, (unsigned char)3);
    xsi_set_current_line(206, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_3410349165_2953828458(t0, t2, (unsigned char)3);
    xsi_set_current_line(207, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_3410349165_2953828458(t0, t2, (unsigned char)2);
    xsi_set_current_line(208, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_3410349165_2953828458(t0, t2, (unsigned char)2);
    xsi_set_current_line(209, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_3410349165_2953828458(t0, t2, (unsigned char)2);
    xsi_set_current_line(210, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_3410349165_2953828458(t0, t2, (unsigned char)3);
    xsi_set_current_line(211, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_3410349165_2953828458(t0, t2, (unsigned char)3);
    xsi_set_current_line(214, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_3410349165_2953828458(t0, t2, (unsigned char)3);
    xsi_set_current_line(215, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_3410349165_2953828458(t0, t2, (unsigned char)2);
    xsi_set_current_line(216, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_3410349165_2953828458(t0, t2, (unsigned char)2);
    xsi_set_current_line(217, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_3410349165_2953828458(t0, t2, (unsigned char)3);
    xsi_set_current_line(218, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_3410349165_2953828458(t0, t2, (unsigned char)3);
    xsi_set_current_line(219, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_3410349165_2953828458(t0, t2, (unsigned char)2);
    xsi_set_current_line(222, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_3410349165_2953828458(t0, t2, (unsigned char)3);
    xsi_set_current_line(223, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_3410349165_2953828458(t0, t2, (unsigned char)3);
    xsi_set_current_line(224, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_3410349165_2953828458(t0, t2, (unsigned char)3);
    xsi_set_current_line(227, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_3410349165_2953828458(t0, t2, (unsigned char)2);
    xsi_set_current_line(228, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_3410349165_2953828458(t0, t2, (unsigned char)2);
    xsi_set_current_line(229, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_3410349165_2953828458(t0, t2, (unsigned char)3);
    xsi_set_current_line(230, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_3410349165_2953828458(t0, t2, (unsigned char)2);
    xsi_set_current_line(231, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_3410349165_2953828458(t0, t2, (unsigned char)2);
    xsi_set_current_line(234, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_3410349165_2953828458(t0, t2, (unsigned char)3);
    xsi_set_current_line(235, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_3410349165_2953828458(t0, t2, (unsigned char)2);
    xsi_set_current_line(236, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_3410349165_2953828458(t0, t2, (unsigned char)3);
    xsi_set_current_line(237, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_3410349165_2953828458(t0, t2, (unsigned char)2);
    xsi_set_current_line(238, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_3410349165_2953828458(t0, t2, (unsigned char)3);
    xsi_set_current_line(239, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_3410349165_2953828458(t0, t2, (unsigned char)2);
    xsi_set_current_line(240, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_3410349165_2953828458(t0, t2, (unsigned char)2);
    xsi_set_current_line(241, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_3410349165_2953828458(t0, t2, (unsigned char)2);
    xsi_set_current_line(242, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_3410349165_2953828458(t0, t2, (unsigned char)3);
    xsi_set_current_line(244, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_3153591967_2953828458(t0, t2);
    xsi_set_current_line(254, ng0);
    t2 = (t0 + 5416);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(256, ng0);
    t2 = (t0 + 9766);
    t4 = (t0 + 5544);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(257, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_105344256_2953828458(t0, t2, 1);
    xsi_set_current_line(259, ng0);
    t2 = (t0 + 4488);
    t3 = (t0 + 1672U);
    t4 = *((char **)t3);
    memcpy(t9, t4, 8U);
    t3 = (t0 + 9770);
    design_a_3883351799_0632001823_sub_1568462173_2953828458(t0, t2, t9, t3, 2);
    xsi_set_current_line(260, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_105344256_2953828458(t0, t2, 1);
    xsi_set_current_line(262, ng0);
    t2 = (t0 + 9778);
    t4 = (t0 + 5544);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(263, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_105344256_2953828458(t0, t2, 1);
    xsi_set_current_line(265, ng0);
    t2 = (t0 + 4488);
    t3 = (t0 + 1672U);
    t4 = *((char **)t3);
    memcpy(t10, t4, 8U);
    t3 = (t0 + 9782);
    design_a_3883351799_0632001823_sub_1568462173_2953828458(t0, t2, t10, t3, 3);
    xsi_set_current_line(266, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_105344256_2953828458(t0, t2, 1);
    xsi_set_current_line(268, ng0);
    t2 = (t0 + 9790);
    t4 = (t0 + 5544);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(269, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_105344256_2953828458(t0, t2, 1);
    xsi_set_current_line(271, ng0);
    t2 = (t0 + 4488);
    t3 = (t0 + 1672U);
    t4 = *((char **)t3);
    memcpy(t11, t4, 8U);
    t3 = (t0 + 9794);
    design_a_3883351799_0632001823_sub_1568462173_2953828458(t0, t2, t11, t3, 4);
    xsi_set_current_line(272, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_105344256_2953828458(t0, t2, 1);
    xsi_set_current_line(274, ng0);
    t2 = (t0 + 9802);
    t4 = (t0 + 5544);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(275, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_105344256_2953828458(t0, t2, 1);
    xsi_set_current_line(277, ng0);
    t2 = (t0 + 4488);
    t3 = (t0 + 1672U);
    t4 = *((char **)t3);
    memcpy(t12, t4, 8U);
    t3 = (t0 + 9806);
    design_a_3883351799_0632001823_sub_1568462173_2953828458(t0, t2, t12, t3, 5);
    xsi_set_current_line(278, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_105344256_2953828458(t0, t2, 1);
    xsi_set_current_line(280, ng0);
    t2 = (t0 + 9814);
    t4 = (t0 + 5544);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(281, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_105344256_2953828458(t0, t2, 1);
    xsi_set_current_line(283, ng0);
    t2 = (t0 + 4488);
    t3 = (t0 + 1672U);
    t4 = *((char **)t3);
    memcpy(t13, t4, 8U);
    t3 = (t0 + 9818);
    design_a_3883351799_0632001823_sub_1568462173_2953828458(t0, t2, t13, t3, 6);
    xsi_set_current_line(284, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_105344256_2953828458(t0, t2, 1);
    xsi_set_current_line(286, ng0);
    t2 = (t0 + 9826);
    t4 = (t0 + 5544);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(287, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_105344256_2953828458(t0, t2, 1);
    xsi_set_current_line(289, ng0);
    t2 = (t0 + 4488);
    t3 = (t0 + 1672U);
    t4 = *((char **)t3);
    memcpy(t14, t4, 8U);
    t3 = (t0 + 9830);
    design_a_3883351799_0632001823_sub_1568462173_2953828458(t0, t2, t14, t3, 6);
    xsi_set_current_line(290, ng0);
    t2 = (t0 + 4488);
    design_a_3883351799_0632001823_sub_105344256_2953828458(t0, t2, 1);
    xsi_set_current_line(292, ng0);
    t2 = (t0 + 5416);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(295, ng0);
    t2 = (t0 + 5864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(296, ng0);

LAB8:    *((char **)t1) = &&LAB9;

LAB1:    return;
LAB4:    t2 = (t0 + 9717);
    xsi_report(t2, 25U, (unsigned char)0);
    goto LAB5;

LAB6:    goto LAB2;

LAB7:    goto LAB6;

LAB9:    goto LAB7;

}


extern void design_a_3883351799_0632001823_init()
{
	static char *pe[] = {(void *)design_a_3883351799_0632001823_p_0,(void *)design_a_3883351799_0632001823_p_1};
	static char *se[] = {(void *)design_a_3883351799_0632001823_sub_105344256_2953828458,(void *)design_a_3883351799_0632001823_sub_1609090416_2953828458,(void *)design_a_3883351799_0632001823_sub_3306054675_2953828458,(void *)design_a_3883351799_0632001823_sub_1568462173_2953828458,(void *)design_a_3883351799_0632001823_sub_3410349165_2953828458,(void *)design_a_3883351799_0632001823_sub_3153591967_2953828458};
	xsi_register_didat("design_a_3883351799_0632001823", "isim/DCF_77_IP_tb_isim.exe.sim/design/a_3883351799_0632001823.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
