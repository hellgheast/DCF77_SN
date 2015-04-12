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
static const char *ng0 = "C:/Users/vincent.meier/Documents/GitHub/DCF77_SN/dcf77_ip.ews/design.hdl/counter_ms_oveflow.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_1919365254_1035706684(char *, char *, char *, char *, int );


static void design_a_4160412283_3212880686_p_0(char *t0)
{
    char t20[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    xsi_set_current_line(52, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 3312);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(53, ng0);
    t1 = xsi_get_transient_memory(6U);
    memset(t1, 0, 6U);
    t5 = t1;
    memset(t5, (unsigned char)2, 6U);
    t6 = (t0 + 3392);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 6U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1512U);
    t6 = *((char **)t2);
    t13 = *((unsigned char *)t6);
    t14 = (t13 == (unsigned char)3);
    if (t14 != 0)
        goto LAB10;

LAB12:
LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB9;

LAB10:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1832U);
    t7 = *((char **)t2);
    t2 = (t0 + 5722);
    t9 = ((IEEE_P_2592010699) + 4024);
    t15 = xsi_vhdl_greater(t9, t7, 6U, t2, 12U);
    if (t15 != 0)
        goto LAB13;

LAB15:    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB16;

LAB17:
LAB14:    goto LAB11;

LAB13:    xsi_set_current_line(57, ng0);
    t10 = (t0 + 3456);
    t16 = (t10 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t10);
    xsi_set_current_line(58, ng0);
    t1 = xsi_get_transient_memory(6U);
    memset(t1, 0, 6U);
    t2 = t1;
    memset(t2, (unsigned char)2, 6U);
    t5 = (t0 + 3392);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 6U);
    xsi_driver_first_trans_fast(t5);
    goto LAB14;

LAB16:    xsi_set_current_line(60, ng0);
    t1 = (t0 + 3456);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(61, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 5688U);
    t5 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t20, t2, t1, 1);
    t6 = (t0 + 3392);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t5, 6U);
    xsi_driver_first_trans_fast(t6);
    goto LAB14;

}


extern void design_a_4160412283_3212880686_init()
{
	static char *pe[] = {(void *)design_a_4160412283_3212880686_p_0};
	xsi_register_didat("design_a_4160412283_3212880686", "isim/DCF_77_IP_isim.exe.sim/design/a_4160412283_3212880686.didat");
	xsi_register_executes(pe);
}
