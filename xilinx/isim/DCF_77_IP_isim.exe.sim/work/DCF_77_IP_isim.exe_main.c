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

#include "xsi.h"

struct XSI_INFO xsi_info;

char *STD_STANDARD;
char *IEEE_P_2592010699;
char *IEEE_P_1242562249;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    ieee_p_1242562249_init();
    design_a_1078965014_2372691052_init();
    design_a_1373089465_2372691052_init();
    design_a_1088173002_2372691052_init();
    design_a_2370737399_2372691052_init();
    design_a_1504824055_0632001823_init();
    design_a_3538705604_2372691052_init();
    design_a_1692733374_3212880686_init();
    design_a_4160412283_3212880686_init();
    design_a_3558088846_0632001823_init();
    design_a_4056340442_2372691052_init();
    design_a_0757614360_2372691052_init();
    design_a_3152274375_2372691052_init();
    design_a_0927493535_2372691052_init();
    design_a_0136892271_2372691052_init();
    design_a_0466710151_0632001823_init();


    xsi_register_tops("design_a_0466710151_0632001823");

    STD_STANDARD = xsi_get_engine_memory("std_standard");
    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");

    return xsi_run_simulation(argc, argv);

}
