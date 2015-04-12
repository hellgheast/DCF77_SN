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
static const char *ng0 = "C:/Users/vincent.meier/Documents/GitHub/DCF77_SN/dcf77_ip.ews/design.hdl/decode_RBG.vhd";
extern char *IEEE_P_2592010699;



static void design_a_0927493535_2372691052_p_0(char *t0)
{
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
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(55, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t11 = (t4 == (unsigned char)3);
    if (t11 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 4200);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(56, ng0);
    t1 = xsi_get_transient_memory(2U);
    memset(t1, 0, 2U);
    t5 = t1;
    memset(t5, (unsigned char)2, 2U);
    t6 = (t0 + 4296);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 2U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(57, ng0);
    t1 = (t0 + 4360);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(58, ng0);
    t1 = (t0 + 4424);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(59, ng0);
    t1 = (t0 + 4488);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(64, ng0);
    t5 = (t0 + 1512U);
    t6 = *((char **)t5);
    t13 = *((unsigned char *)t6);
    t14 = (t13 == (unsigned char)2);
    if (t14 != 0)
        goto LAB10;

LAB12:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 4488);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(85, ng0);
    t1 = (t0 + 4360);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(86, ng0);
    t1 = (t0 + 4424);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB11:    goto LAB3;

LAB7:    t1 = (t0 + 1312U);
    t12 = xsi_signal_has_event(t1);
    t3 = t12;
    goto LAB9;

LAB10:    xsi_set_current_line(65, ng0);
    t5 = (t0 + 4488);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(68, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB13;

LAB15:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB22;

LAB23:
LAB14:    goto LAB11;

LAB13:    xsi_set_current_line(69, ng0);
    t1 = (t0 + 4360);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(72, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t11 = (t4 == (unsigned char)3);
    if (t11 == 1)
        goto LAB19;

LAB20:    t3 = (unsigned char)0;

LAB21:    if (t3 != 0)
        goto LAB16;

LAB18:    xsi_set_current_line(75, ng0);
    t1 = (t0 + 4424);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB17:    goto LAB14;

LAB16:    xsi_set_current_line(73, ng0);
    t8 = (t0 + 4424);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t15 = (t10 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)3;
    xsi_driver_first_trans_fast(t8);
    goto LAB17;

LAB19:    t1 = (t0 + 1192U);
    t5 = *((char **)t1);
    t1 = (t0 + 7258);
    t7 = ((IEEE_P_2592010699) + 4024);
    t12 = xsi_vhdl_greaterEqual(t7, t5, 6U, t1, 6U);
    t3 = t12;
    goto LAB21;

LAB22:    xsi_set_current_line(79, ng0);
    t1 = (t0 + 4360);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(80, ng0);
    t1 = (t0 + 4424);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB14;

}

static void design_a_0927493535_2372691052_p_1(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned char t19;
    unsigned char t20;
    char *t21;
    char *t22;
    unsigned char t23;
    unsigned char t24;
    char *t25;
    unsigned char t26;
    unsigned char t27;
    char *t28;
    unsigned char t29;
    unsigned char t30;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned char t37;
    unsigned char t38;
    char *t39;
    char *t40;
    unsigned char t41;
    unsigned char t42;
    char *t43;
    unsigned char t44;
    unsigned char t45;
    char *t46;
    unsigned char t47;
    unsigned char t48;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;

LAB0:    xsi_set_current_line(92, ng0);
    t3 = (t0 + 2152U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB8;

LAB9:    t2 = (unsigned char)0;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:    t21 = (t0 + 2152U);
    t22 = *((char **)t21);
    t23 = *((unsigned char *)t22);
    t24 = (t23 == (unsigned char)2);
    if (t24 == 1)
        goto LAB16;

LAB17:    t20 = (unsigned char)0;

LAB18:    if (t20 == 1)
        goto LAB13;

LAB14:    t19 = (unsigned char)0;

LAB15:    if (t19 != 0)
        goto LAB11;

LAB12:    t39 = (t0 + 2152U);
    t40 = *((char **)t39);
    t41 = *((unsigned char *)t40);
    t42 = (t41 == (unsigned char)2);
    if (t42 == 1)
        goto LAB24;

LAB25:    t38 = (unsigned char)0;

LAB26:    if (t38 == 1)
        goto LAB21;

LAB22:    t37 = (unsigned char)0;

LAB23:    if (t37 != 0)
        goto LAB19;

LAB20:
LAB27:    t55 = (t0 + 7270);
    t57 = (t0 + 4552);
    t58 = (t57 + 56U);
    t59 = *((char **)t58);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    memcpy(t61, t55, 2U);
    xsi_driver_first_trans_fast_port(t57);

LAB2:    t62 = (t0 + 4216);
    *((int *)t62) = 1;

LAB1:    return;
LAB3:    t3 = (t0 + 7264);
    t14 = (t0 + 4552);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t3, 2U);
    xsi_driver_first_trans_fast_port(t14);
    goto LAB2;

LAB5:    t3 = (t0 + 2472U);
    t10 = *((char **)t3);
    t11 = *((unsigned char *)t10);
    t12 = (t11 == (unsigned char)2);
    t1 = t12;
    goto LAB7;

LAB8:    t3 = (t0 + 2312U);
    t7 = *((char **)t3);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)2);
    t2 = t9;
    goto LAB10;

LAB11:    t21 = (t0 + 7266);
    t32 = (t0 + 4552);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    memcpy(t36, t21, 2U);
    xsi_driver_first_trans_fast_port(t32);
    goto LAB2;

LAB13:    t21 = (t0 + 2472U);
    t28 = *((char **)t21);
    t29 = *((unsigned char *)t28);
    t30 = (t29 == (unsigned char)2);
    t19 = t30;
    goto LAB15;

LAB16:    t21 = (t0 + 2312U);
    t25 = *((char **)t21);
    t26 = *((unsigned char *)t25);
    t27 = (t26 == (unsigned char)3);
    t20 = t27;
    goto LAB18;

LAB19:    t39 = (t0 + 7268);
    t50 = (t0 + 4552);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    t53 = (t52 + 56U);
    t54 = *((char **)t53);
    memcpy(t54, t39, 2U);
    xsi_driver_first_trans_fast_port(t50);
    goto LAB2;

LAB21:    t39 = (t0 + 2472U);
    t46 = *((char **)t39);
    t47 = *((unsigned char *)t46);
    t48 = (t47 == (unsigned char)3);
    t37 = t48;
    goto LAB23;

LAB24:    t39 = (t0 + 2312U);
    t43 = *((char **)t39);
    t44 = *((unsigned char *)t43);
    t45 = (t44 == (unsigned char)2);
    t38 = t45;
    goto LAB26;

LAB28:    goto LAB2;

}


extern void design_a_0927493535_2372691052_init()
{
	static char *pe[] = {(void *)design_a_0927493535_2372691052_p_0,(void *)design_a_0927493535_2372691052_p_1};
	xsi_register_didat("design_a_0927493535_2372691052", "isim/DCF_77_IP_isim.exe.sim/design/a_0927493535_2372691052.didat");
	xsi_register_executes(pe);
}
