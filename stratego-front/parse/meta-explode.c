#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_AsFix_0;
Symbol sym_appl_2;
Symbol sym_prod_3;
Symbol sym_cf_1;
Symbol sym_opt_1;
Symbol sym_layout_0;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym__0;
Symbol sym__1;
Symbol sym__2;
Symbol sym__3;
Symbol sym__4;
Symbol sym__5;
Symbol sym__6;
Symbol sym__7;
Symbol sym__8;
Symbol sym__9;
Symbol sym__10;
Symbol sym__11;
Symbol sym__12;
Symbol sym__13;
Symbol sym__14;
Symbol sym__15;
Symbol sym__16;
Symbol sym__17;
Symbol sym__18;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Anno_2;
Symbol sym_Undefined_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Hashtable_1;
Symbol sym_Cong_2;
Symbol sym_Var_1;
Symbol sym_ListVar_1;
Symbol sym_Var_1;
Symbol sym_Int_1;
Symbol sym_Str_1;
Symbol sym_Wld_0;
Symbol sym_Op_2;
Symbol sym_Anno_2;
Symbol sym_RootApp_1;
Symbol sym_RuleNoCond_2;
Symbol sym_Rule_3;
Symbol sym_AM_2;
Symbol sym_SVar_1;
Symbol sym_Call_2;
Symbol sym_Match_1;
Symbol sym_Build_1;
Symbol sym_BA_2;
Symbol sym_Path_2;
Symbol sym_ToTerm_1;
Symbol sym_FromTerm_1;
Symbol sym_ToBuild_1;
Symbol sym_FromApp_1;
Symbol sym_ToStrategy_1;
Symbol sym_FromStrategy_1;
Symbol sym_WithAnno_2;
Symbol sym_meta_var_1;
Symbol sym_meta_listvar_1;
Symbol sym_Cong_2;
Symbol sym_Conc_2;
static void init_module_constructors (void)
{
  sym_AsFix_0 = ATmakeSymbol("AsFix", 0, ATfalse);
  ATprotectSymbol(sym_AsFix_0);
  sym_appl_2 = ATmakeSymbol("appl", 2, ATfalse);
  ATprotectSymbol(sym_appl_2);
  sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
  ATprotectSymbol(sym_prod_3);
  sym_cf_1 = ATmakeSymbol("cf", 1, ATfalse);
  ATprotectSymbol(sym_cf_1);
  sym_opt_1 = ATmakeSymbol("opt", 1, ATfalse);
  ATprotectSymbol(sym_opt_1);
  sym_layout_0 = ATmakeSymbol("layout", 0, ATfalse);
  ATprotectSymbol(sym_layout_0);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym__0 = ATmakeSymbol("", 0, ATfalse);
  ATprotectSymbol(sym__0);
  sym__1 = ATmakeSymbol("", 1, ATfalse);
  ATprotectSymbol(sym__1);
  sym__2 = ATmakeSymbol("", 2, ATfalse);
  ATprotectSymbol(sym__2);
  sym__3 = ATmakeSymbol("", 3, ATfalse);
  ATprotectSymbol(sym__3);
  sym__4 = ATmakeSymbol("", 4, ATfalse);
  ATprotectSymbol(sym__4);
  sym__5 = ATmakeSymbol("", 5, ATfalse);
  ATprotectSymbol(sym__5);
  sym__6 = ATmakeSymbol("", 6, ATfalse);
  ATprotectSymbol(sym__6);
  sym__7 = ATmakeSymbol("", 7, ATfalse);
  ATprotectSymbol(sym__7);
  sym__8 = ATmakeSymbol("", 8, ATfalse);
  ATprotectSymbol(sym__8);
  sym__9 = ATmakeSymbol("", 9, ATfalse);
  ATprotectSymbol(sym__9);
  sym__10 = ATmakeSymbol("", 10, ATfalse);
  ATprotectSymbol(sym__10);
  sym__11 = ATmakeSymbol("", 11, ATfalse);
  ATprotectSymbol(sym__11);
  sym__12 = ATmakeSymbol("", 12, ATfalse);
  ATprotectSymbol(sym__12);
  sym__13 = ATmakeSymbol("", 13, ATfalse);
  ATprotectSymbol(sym__13);
  sym__14 = ATmakeSymbol("", 14, ATfalse);
  ATprotectSymbol(sym__14);
  sym__15 = ATmakeSymbol("", 15, ATfalse);
  ATprotectSymbol(sym__15);
  sym__16 = ATmakeSymbol("", 16, ATfalse);
  ATprotectSymbol(sym__16);
  sym__17 = ATmakeSymbol("", 17, ATfalse);
  ATprotectSymbol(sym__17);
  sym__18 = ATmakeSymbol("", 18, ATfalse);
  ATprotectSymbol(sym__18);
  sym_Stream_1 = ATmakeSymbol("Stream", 1, ATfalse);
  ATprotectSymbol(sym_Stream_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Verbose_1 = ATmakeSymbol("Verbose", 1, ATfalse);
  ATprotectSymbol(sym_Verbose_1);
  sym_Version_0 = ATmakeSymbol("Version", 0, ATfalse);
  ATprotectSymbol(sym_Version_0);
  sym_Input_1 = ATmakeSymbol("Input", 1, ATfalse);
  ATprotectSymbol(sym_Input_1);
  sym_Output_1 = ATmakeSymbol("Output", 1, ATfalse);
  ATprotectSymbol(sym_Output_1);
  sym_Binary_0 = ATmakeSymbol("Binary", 0, ATfalse);
  ATprotectSymbol(sym_Binary_0);
  sym_Statistics_0 = ATmakeSymbol("Statistics", 0, ATfalse);
  ATprotectSymbol(sym_Statistics_0);
  sym_Help_0 = ATmakeSymbol("Help", 0, ATfalse);
  ATprotectSymbol(sym_Help_0);
  sym_Runtime_1 = ATmakeSymbol("Runtime", 1, ATfalse);
  ATprotectSymbol(sym_Runtime_1);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_ListVar_1 = ATmakeSymbol("ListVar", 1, ATfalse);
  ATprotectSymbol(sym_ListVar_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_RootApp_1 = ATmakeSymbol("RootApp", 1, ATfalse);
  ATprotectSymbol(sym_RootApp_1);
  sym_RuleNoCond_2 = ATmakeSymbol("RuleNoCond", 2, ATfalse);
  ATprotectSymbol(sym_RuleNoCond_2);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_AM_2 = ATmakeSymbol("AM", 2, ATfalse);
  ATprotectSymbol(sym_AM_2);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
  ATprotectSymbol(sym_BA_2);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_ToTerm_1 = ATmakeSymbol("ToTerm", 1, ATfalse);
  ATprotectSymbol(sym_ToTerm_1);
  sym_FromTerm_1 = ATmakeSymbol("FromTerm", 1, ATfalse);
  ATprotectSymbol(sym_FromTerm_1);
  sym_ToBuild_1 = ATmakeSymbol("ToBuild", 1, ATfalse);
  ATprotectSymbol(sym_ToBuild_1);
  sym_FromApp_1 = ATmakeSymbol("FromApp", 1, ATfalse);
  ATprotectSymbol(sym_FromApp_1);
  sym_ToStrategy_1 = ATmakeSymbol("ToStrategy", 1, ATfalse);
  ATprotectSymbol(sym_ToStrategy_1);
  sym_FromStrategy_1 = ATmakeSymbol("FromStrategy", 1, ATfalse);
  ATprotectSymbol(sym_FromStrategy_1);
  sym_WithAnno_2 = ATmakeSymbol("WithAnno", 2, ATfalse);
  ATprotectSymbol(sym_WithAnno_2);
  sym_meta_var_1 = ATmakeSymbol("meta-var", 1, ATfalse);
  ATprotectSymbol(sym_meta_var_1);
  sym_meta_listvar_1 = ATmakeSymbol("meta-listvar", 1, ATfalse);
  ATprotectSymbol(sym_meta_listvar_1);
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
  sym_Conc_2 = ATmakeSymbol("Conc", 2, ATfalse);
  ATprotectSymbol(sym_Conc_2);
}
ATerm term_d_19;
ATerm term_c_19;
ATerm term_v_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_s_17;
ATerm term_f_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_v_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_a_16;
ATerm term_x_15;
ATerm term_q_15;
ATerm term_o_15;
ATerm term_m_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_f_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_o_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_y_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_z_11;
ATerm term_v_11;
ATerm term_i_11;
ATerm term_b_10;
ATerm term_q_7;
ATerm term_m_7;
ATerm term_l_7;
ATerm term_k_6;
ATerm term_h_6;
ATerm term_g_6;
ATerm term_f_6;
ATerm term_e_6;
ATerm term_c_6;
ATerm term_w_5;
ATerm term_g_5;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_g_5));
  term_g_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(sym_Cong_2, term_l_7, (ATerm) ATempty);
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym_Op_2, term_l_7, (ATerm) ATempty);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym__2, term_y_12, term_a_13);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym__2, term_a_13, term_g_13);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym_Verbose_1, term_g_13);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym__2, term_m_13, term_g_5);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym__2, term_y_12, term_j_14);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym__2, term_y_12, term_f_15);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym__2, term_g_6, term_h_6);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym__2, term_i_16, term_g_5);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym__2, term_m_16, term_g_5);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(sym__2, term_f_15, term_g_5);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(sym__3, term_g_6, term_h_6, (ATerm) ATempty);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(sym__2, term_y_12, term_i_16);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(sym__2, term_d_18, term_g_5);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_AsFix_0);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix          treat concrete syntax parts as AsFix trees", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm o_2 (ATerm n_1, ATerm r_1, ATerm t);
ATerm Clean_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm x_91 (ATerm), ATerm t);
ATerm fetch_1_0 (ATerm t_98 (ATerm), ATerm t);
static ATerm j_7 (ATerm n_4, ATerm t);
static ATerm k_7 (ATerm a_6, ATerm t);
ATerm str_explode_0_0 (ATerm t);
ATerm TrmOp_0_0 (ATerm t);
static ATerm x_4 (ATerm i_22, ATerm j_22, ATerm t);
ATerm foldr_3_0 (ATerm k_105 (ATerm), ATerm l_105 (ATerm), ATerm m_105 (ATerm), ATerm t);
static ATerm m_0 (ATerm t);
static ATerm a_5 (ATerm l_22, ATerm k_22, ATerm t);
static ATerm c_5 (ATerm s_125, ATerm t);
static ATerm d_5 (ATerm d_126, ATerm t);
static ATerm e_5 (ATerm h_125, ATerm t);
static ATerm d_13 (ATerm c_11, ATerm t);
ATerm trm_explode_0_0 (ATerm t);
static ATerm r_0 (ATerm t);
ATerm MetaExplode_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm b_93 (ATerm), ATerm t);
ATerm alltd_1_0 (ATerm p_93 (ATerm), ATerm t);
ATerm ImplodeLayout_1_0 (ATerm c_90 (ATerm), ATerm t);
static ATerm i_5 (ATerm k_39, ATerm l_39, ATerm t);
static ATerm j_5 (ATerm f_24, ATerm g_24, ATerm t);
static ATerm l_5 (ATerm a_98 (ATerm), ATerm c_170, ATerm l_24, ATerm t);
static ATerm k_5 (ATerm b_24, ATerm c_24, ATerm t);
static ATerm b_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm c_116 (ATerm), ATerm t);
static ATerm i_27 (ATerm z_26, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm m_5 (ATerm h_24, ATerm t);
static ATerm n_5 (ATerm d_38, ATerm e_38, ATerm t);
static ATerm o_5 (ATerm m_39, ATerm n_39, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm k_29 (ATerm j_28, ATerm t);
static ATerm l_29 (ATerm n_28, ATerm o_28, ATerm p_28, ATerm t);
static ATerm m_29 (ATerm x_28, ATerm y_28, ATerm z_28, ATerm t);
static ATerm p_5 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm u_5 (ATerm w_61, ATerm x_61, ATerm t);
ATerm if_verbose2_1_0 (ATerm l_114 (ATerm), ATerm t);
static ATerm f_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm x_5 (ATerm i_55, ATerm j_55, ATerm t);
static ATerm w_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm v_5 (ATerm d_60, ATerm e_60, ATerm c_60, ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm q_5 (ATerm g_42, ATerm h_42, ATerm t);
ATerm foldr_2_0 (ATerm i_105 (ATerm), ATerm j_105 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm k_114 (ATerm), ATerm t);
static ATerm k_2 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm p_2 (ATerm t);
ATerm need_help_1_0 (ATerm a_117 (ATerm), ATerm t);
static ATerm y_5 (ATerm i_64, ATerm j_64, ATerm k_64, ATerm t);
static ATerm z_5 (ATerm l_64, ATerm m_64, ATerm t);
ATerm lookup_table_0_1 (ATerm p_61, ATerm t);
ATerm new_hashtable_0_2 (ATerm q_64, ATerm r_64, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm s_5 (ATerm n_64, ATerm o_64, ATerm t);
static ATerm t_5 (ATerm s_64, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm j_98 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm n_68 (ATerm), ATerm o_68 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm d_119 (ATerm), ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
ATerm parse_options_1_0 (ATerm c_119 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm c_117 (ATerm), ATerm d_117 (ATerm), ATerm e_117 (ATerm), ATerm f_117 (ATerm), ATerm t);
static ATerm g_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
ATerm iowrap_3_0 (ATerm l_116 (ATerm), ATerm m_116 (ATerm), ATerm n_116 (ATerm), ATerm t);
static ATerm r_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm f_5 (ATerm t);
ATerm meta_explode_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,c_0 = NULL,e_0 = NULL,j_0 = NULL;
  a_0 = t;
  t = term_g_5;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_w_5;
  e_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_6), b_0), term_c_6);
  j_0 = t;
  t = SSL_printnl(e_0, j_0);
  t = term_f_6;
  c_0 = t;
  t = SSL_exit(c_0);
  t = a_0;
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm t_0 = NULL,u_0 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_0 = NULL,w_0 = NULL,x_0 = NULL;
      t = term_g_5;
      t = i_0(t);
      v_0 = t;
      t = term_g_6;
      w_0 = t;
      t = term_h_6;
      x_0 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_g_6, term_h_6, v_0);
      t = v_5(w_0, x_0, v_0, t);
      _fail(t);
    }
  else
    {
      ATerm c_1 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_0 = ATgetFirst((ATermList) t);
          u_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_0;
      t = d_0(t);
      t = term_g_5;
      t = g_0(t);
      c_1 = t;
      t = (ATerm) ATinsert(CheckATermList(u_0), c_1);
    }
  return(t);
}
static ATerm o_2 (ATerm n_1, ATerm r_1, ATerm t)
{
  ATerm i_2 = NULL;
  t = SSL_is_int(n_1);
  t = SSL_int_to_string(n_1);
  i_2 = t;
  t = (ATerm) ATmakeAppl(sym_Int_1, i_2);
  return(t);
}
ATerm Clean_0_0 (ATerm t)
{
  ATerm j_2 = NULL,l_2 = NULL,m_2 = NULL;
  j_2 = t;
  if(match_cons(t, sym_Op_2))
    {
      l_2 = ATgetArgument(t, 0);
      m_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_2;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = l_2;
  if(match_string(t, "Wld"))
    {
      ATerm i_6 = t;
      int j_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_2(l_2, j_2, t);
          LocalPopChoice(j_6);
        }
      else
        {
          t = i_6;
          t = term_k_6;
        }
    }
  else
    {
      t = o_2(l_2, j_2, t);
    }
  return(t);
}
ATerm topdown_1_0 (ATerm x_91 (ATerm), ATerm t)
{
  static ATerm f_0 (ATerm t)
  {
    t = topdown_1_0(x_91, t);
    return(t);
  }
  t = x_91(t);
  t = SRTS_all(f_0, t);
  return(t);
}
ATerm fetch_1_0 (ATerm t_98 (ATerm), ATerm t)
{
  static ATerm y_3 (ATerm t)
  {
    ATerm u_3 = NULL,v_3 = NULL,w_3 = NULL;
    u_3 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_3 = ATgetFirst((ATermList) t);
        w_3 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm n_6 = t;
      int o_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_0 = NULL,a_1 = NULL,q_2 = NULL;
          t = SSLgetAnnotations(u_3);
          q_0 = t;
          t = v_3;
          t = t_98(t);
          a_1 = t;
          t = (ATerm) ATinsert(CheckATermList(w_3), a_1);
          q_2 = t;
          t = SSLsetAnnotations(q_2, q_0);
          LocalPopChoice(o_6);
        }
      else
        {
          t = n_6;
          {
            ATerm k_1 = NULL,o_1 = NULL,s_2 = NULL;
            t = SSLgetAnnotations(u_3);
            k_1 = t;
            t = w_3;
            t = y_3(t);
            o_1 = t;
            t = (ATerm) ATinsert(CheckATermList(o_1), v_3);
            s_2 = t;
            t = SSLsetAnnotations(s_2, k_1);
          }
        }
    }
    return(t);
  }
  t = y_3(t);
  return(t);
}
static ATerm j_7 (ATerm n_4, ATerm t)
{
  ATerm s_4 = NULL;
  t = SSL_is_string(n_4);
  s_4 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, s_4));
  return(t);
}
static ATerm k_7 (ATerm a_6, ATerm t)
{
  ATerm b_6 = NULL,d_6 = NULL,m_6 = NULL;
  t = SSL_explode_term(a_6);
  if(match_cons(t, sym__2))
    {
      b_6 = ATgetArgument(t, 0);
      d_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_6;
  t = map_1_0(str_explode_0_0, t);
  m_6 = t;
  t = (ATerm) ATmakeAppl(sym_Cong_2, b_6, m_6);
  return(t);
}
ATerm str_explode_0_0 (ATerm t)
{
  ATerm p_6 = NULL,q_6 = NULL,s_6 = NULL;
  s_6 = t;
  if(match_cons(t, sym_meta_var_1))
    {
      p_6 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, p_6), (ATerm) ATempty);
    }
  else
    {
      if(match_cons(t, sym_FromTerm_1))
        {
          p_6 = ATgetArgument(t, 0);
          {
            ATerm r_6 = t;
            int t_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = s_6;
                t = e_5(p_6, t);
                LocalPopChoice(t_6);
              }
            else
              {
                t = r_6;
                {
                  ATerm u_6 = t;
                  int v_6 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = j_7(s_6, t);
                      LocalPopChoice(v_6);
                    }
                  else
                    {
                      t = u_6;
                      t = k_7(s_6, t);
                    }
                }
              }
          }
        }
      else
        {
          if(match_cons(t, sym_FromStrategy_1))
            {
              p_6 = ATgetArgument(t, 0);
              {
                ATerm w_6 = t;
                int x_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = s_6;
                    t = c_5(p_6, t);
                    LocalPopChoice(x_6);
                  }
                else
                  {
                    t = w_6;
                    {
                      ATerm y_6 = t;
                      int b_7 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = j_7(s_6, t);
                          LocalPopChoice(b_7);
                        }
                      else
                        {
                          t = y_6;
                          t = k_7(s_6, t);
                        }
                    }
                  }
              }
            }
          else
            {
              if(match_cons(t, sym_FromApp_1))
                {
                  p_6 = ATgetArgument(t, 0);
                  {
                    ATerm d_7 = t;
                    int e_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = p_6;
                        t = MetaExplode_0_0(t);
                        LocalPopChoice(e_7);
                      }
                    else
                      {
                        t = d_7;
                        {
                          ATerm f_7 = t;
                          int i_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = j_7(s_6, t);
                              LocalPopChoice(i_7);
                            }
                          else
                            {
                              t = f_7;
                              t = k_7(s_6, t);
                            }
                        }
                      }
                  }
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = term_m_7;
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          p_6 = ATgetFirst((ATermList) t);
                          q_6 = (ATerm) ATgetNext((ATermList) t);
                          {
                            ATerm o_7 = t;
                            int p_7 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm g_7 = NULL,h_7 = NULL;
                                t = p_6;
                                t = str_explode_0_0(t);
                                g_7 = t;
                                t = q_6;
                                t = str_explode_0_0(t);
                                h_7 = t;
                                t = (ATerm) ATmakeAppl(sym_Cong_2, term_q_7, (ATerm) ATinsert(ATinsert(ATempty, h_7), g_7));
                                LocalPopChoice(p_7);
                              }
                            else
                              {
                                t = o_7;
                                {
                                  ATerm t_7 = t;
                                  int u_7 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = j_7(s_6, t);
                                      LocalPopChoice(u_7);
                                    }
                                  else
                                    {
                                      t = t_7;
                                      t = k_7(s_6, t);
                                    }
                                }
                              }
                          }
                        }
                      else
                        {
                          ATerm j_8 = t;
                          int n_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = j_7(s_6, t);
                              LocalPopChoice(n_8);
                            }
                          else
                            {
                              t = j_8;
                              t = k_7(s_6, t);
                            }
                        }
                    }
                }
            }
        }
    }
  return(t);
}
ATerm TrmOp_0_0 (ATerm t)
{
  ATerm n_7 = NULL,c_8 = NULL,d_8 = NULL,e_8 = NULL;
  e_8 = t;
  t = SSL_explode_term(e_8);
  if(match_cons(t, sym__2))
    {
      n_7 = ATgetArgument(t, 0);
      c_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_8;
  t = map_1_0(trm_explode_0_0, t);
  d_8 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, n_7, d_8);
  return(t);
}
static ATerm x_4 (ATerm i_22, ATerm j_22, ATerm t)
{
  ATerm f_8 = NULL,i_8 = NULL;
  t = i_22;
  t = trm_explode_0_0(t);
  f_8 = t;
  t = j_22;
  t = trm_explode_0_0(t);
  i_8 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, term_q_7, (ATerm) ATinsert(ATinsert(ATempty, i_8), f_8));
  return(t);
}
ATerm foldr_3_0 (ATerm k_105 (ATerm), ATerm l_105 (ATerm), ATerm m_105 (ATerm), ATerm t)
{
  ATerm v_8 = NULL,w_8 = NULL,x_8 = NULL;
  v_8 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_8;
      t = k_105(t);
    }
  else
    {
      ATerm d_9 = NULL,e_9 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_8 = ATgetFirst((ATermList) t);
          x_8 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_8;
      t = m_105(t);
      d_9 = t;
      t = x_8;
      t = foldr_3_0(k_105, l_105, m_105, t);
      e_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_9, e_9);
      t = l_105(t);
    }
  return(t);
}
static ATerm m_0 (ATerm t)
{
  ATerm h_10 = NULL,i_10 = NULL,v_1 = NULL;
  h_10 = t;
  t = SSL_explode_term(h_10);
  if(match_cons(t, sym__2))
    {
      ATerm o_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm p_8 = ATgetArgument(t, 1);
        if(((ATgetType(p_8) == AT_LIST) && !(ATisEmpty(p_8))))
          {
            i_10 = ATgetFirst((ATermList) p_8);
            {
              ATerm z_8 = (ATerm) ATgetNext((ATermList) p_8);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(h_10);
  if(match_cons(t, sym__2))
    {
      ATerm a_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_9) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm r_9 = ATgetArgument(t, 1);
        if(((ATgetType(r_9) == AT_LIST) && !(ATisEmpty(r_9))))
          {
            ATerm s_9 = ATgetFirst((ATermList) r_9);
            ATerm t_9 = (ATerm) ATgetNext((ATermList) r_9);
            if(((ATgetType(t_9) == AT_LIST) && !(ATisEmpty(t_9))))
              {
                v_1 = ATgetFirst((ATermList) t_9);
                {
                  ATerm w_9 = (ATerm) ATgetNext((ATermList) t_9);
                }
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_q_7, (ATerm) ATinsert(ATinsert(ATempty, v_1), i_10));
  return(t);
}
static ATerm a_5 (ATerm l_22, ATerm k_22, ATerm t)
{
  ATerm o_9 = NULL;
  static ATerm h_0 (ATerm t)
  {
    t = k_22;
    {
      ATerm x_9 = t;
      int z_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_10 = NULL;
          if(match_cons(t, sym_meta_listvar_1))
            {
              a_10 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, term_q_7, (ATerm) ATinsert(ATinsert(ATempty, term_b_10), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, a_10))));
          LocalPopChoice(z_9);
        }
      else
        {
          t = x_9;
          t = trm_explode_0_0(t);
        }
    }
    return(t);
  }
  t = l_22;
  if(match_cons(t, sym_meta_listvar_1))
    {
      o_9 = ATgetArgument(t, 0);
      {
        ATerm c_10 = t;
        int d_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, o_9)));
            LocalPopChoice(d_10);
          }
        else
          {
            t = c_10;
            t = l_22;
          }
      }
    }
  else
    {
      t = l_22;
    }
  t = foldr_3_0(h_0, m_0, trm_explode_0_0, t);
  return(t);
}
static ATerm c_5 (ATerm s_125, ATerm t)
{
  t = s_125;
  t = MetaExplode_0_0(t);
  return(t);
}
static ATerm d_5 (ATerm d_126, ATerm t)
{
  ATerm p_10 = NULL;
  t = d_126;
  t = MetaExplode_0_0(t);
  p_10 = t;
  t = (ATerm) ATmakeAppl(sym_RootApp_1, p_10);
  return(t);
}
static ATerm e_5 (ATerm h_125, ATerm t)
{
  t = h_125;
  t = MetaExplode_0_0(t);
  return(t);
}
static ATerm d_13 (ATerm c_11, ATerm t)
{
  ATerm d_11 = NULL;
  t = SSL_is_int(c_11);
  d_11 = t;
  t = (ATerm) ATmakeAppl(sym_Int_1, d_11);
  return(t);
}
ATerm trm_explode_0_0 (ATerm t)
{
  ATerm e_10 = t;
  int f_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_11 = NULL,u_11 = NULL;
      u_11 = t;
      if(match_cons(t, sym_meta_var_1))
        {
          r_11 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Var_1, r_11);
        }
      else
        {
          if(match_cons(t, sym_meta_listvar_1))
            {
              r_11 = ATgetArgument(t, 0);
              {
                ATerm g_10 = t;
                int j_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = (ATerm) ATmakeAppl(sym_Op_2, term_q_7, (ATerm) ATinsert(ATinsert(ATempty, term_b_10), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, r_11))));
                    LocalPopChoice(j_10);
                  }
                else
                  {
                    t = g_10;
                    t = d_13(u_11, t);
                  }
              }
            }
          else
            {
              t = d_13(u_11, t);
            }
        }
      LocalPopChoice(f_10);
    }
  else
    {
      t = e_10;
      {
        ATerm k_10 = t;
        int l_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_1 = NULL,y_1 = NULL;
            y_1 = t;
            t = SSL_is_string(y_1);
            x_1 = t;
            t = (ATerm) ATmakeAppl(sym_Str_1, x_1);
            LocalPopChoice(l_10);
          }
        else
          {
            t = k_10;
            {
              ATerm m_10 = t;
              int n_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_11 = NULL,b_12 = NULL,c_12 = NULL;
                  x_11 = t;
                  if(match_cons(t, sym_FromTerm_1))
                    {
                      b_12 = ATgetArgument(t, 0);
                      t = x_11;
                      t = e_5(b_12, t);
                    }
                  else
                    {
                      if(match_cons(t, sym_FromApp_1))
                        {
                          b_12 = ATgetArgument(t, 0);
                          t = x_11;
                          t = d_5(b_12, t);
                        }
                      else
                        {
                          if(match_cons(t, sym_FromStrategy_1))
                            {
                              b_12 = ATgetArgument(t, 0);
                              t = x_11;
                              t = c_5(b_12, t);
                            }
                          else
                            {
                              if(match_cons(t, sym_WithAnno_2))
                                {
                                  b_12 = ATgetArgument(t, 0);
                                  c_12 = ATgetArgument(t, 1);
                                  {
                                    ATerm b_2 = NULL,c_2 = NULL;
                                    t = b_12;
                                    t = trm_explode_0_0(t);
                                    b_2 = t;
                                    t = c_12;
                                    t = MetaExplode_0_0(t);
                                    c_2 = t;
                                    t = (ATerm) ATmakeAppl(sym_Anno_2, b_2, c_2);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_Conc_2))
                                    {
                                      b_12 = ATgetArgument(t, 0);
                                      c_12 = ATgetArgument(t, 1);
                                      t = x_11;
                                      t = a_5(b_12, c_12, t);
                                    }
                                  else
                                    {
                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                        {
                                          t = term_b_10;
                                        }
                                      else
                                        {
                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                            {
                                              b_12 = ATgetFirst((ATermList) t);
                                              c_12 = (ATerm) ATgetNext((ATermList) t);
                                            }
                                          else
                                            _fail(t);
                                          t = x_11;
                                          t = x_4(b_12, c_12, t);
                                        }
                                    }
                                }
                            }
                        }
                    }
                  LocalPopChoice(n_10);
                }
              else
                {
                  t = m_10;
                  t = TrmOp_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm r_0 (ATerm t)
{
  ATerm h_13 = NULL;
  if(match_cons(t, sym_ToTerm_1))
    {
      h_13 = ATgetArgument(t, 0);
      t = h_13;
      t = trm_explode_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_ToBuild_1))
        {
          h_13 = ATgetArgument(t, 0);
          {
            ATerm n_13 = NULL;
            t = h_13;
            t = trm_explode_0_0(t);
            n_13 = t;
            t = (ATerm) ATmakeAppl(sym_Build_1, n_13);
          }
        }
      else
        {
          if(match_cons(t, sym_ToStrategy_1))
            {
              h_13 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = h_13;
          t = str_explode_0_0(t);
        }
    }
  return(t);
}
ATerm MetaExplode_0_0 (ATerm t)
{
  t = alltd_1_0(r_0, t);
  return(t);
}
ATerm oncetd_1_0 (ATerm b_93 (ATerm), ATerm t)
{
  static ATerm p_13 (ATerm t)
  {
    ATerm q_10 = t;
    int r_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_93(t);
        LocalPopChoice(r_10);
      }
    else
      {
        t = q_10;
        t = SRTS_one(p_13, t);
      }
    return(t);
  }
  t = p_13(t);
  return(t);
}
ATerm alltd_1_0 (ATerm p_93 (ATerm), ATerm t)
{
  static ATerm q_13 (ATerm t)
  {
    ATerm s_10 = t;
    int t_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_93(t);
        LocalPopChoice(t_10);
      }
    else
      {
        t = s_10;
        t = SRTS_all(q_13, t);
      }
    return(t);
  }
  t = q_13(t);
  return(t);
}
ATerm ImplodeLayout_1_0 (ATerm c_90 (ATerm), ATerm t)
{
  static ATerm l_21 (ATerm t)
  {
    static ATerm s_0 (ATerm t)
    {
      ATerm c_21 = NULL,e_21 = NULL,f_21 = NULL,j_21 = NULL;
      e_21 = t;
      if(match_cons(t, sym_BA_2))
        {
          f_21 = ATgetArgument(t, 0);
          j_21 = ATgetArgument(t, 1);
          {
            ATerm n_2 = NULL,t_2 = NULL,u_2 = NULL,a_3 = NULL;
            t = SSLgetAnnotations(e_21);
            n_2 = t;
            t = f_21;
            t = ImplodeLayout_1_0(_fail, t);
            t_2 = t;
            t = j_21;
            t = ImplodeLayout_1_0(_id, t);
            u_2 = t;
            t = (ATerm) ATmakeAppl(sym_BA_2, t_2, u_2);
            a_3 = t;
            t = SSLsetAnnotations(a_3, n_2);
          }
        }
      else
        {
          if(match_cons(t, sym_Build_1))
            {
              f_21 = ATgetArgument(t, 0);
              {
                ATerm m_3 = NULL,x_3 = NULL,b_3 = NULL;
                t = SSLgetAnnotations(e_21);
                m_3 = t;
                t = f_21;
                t = ImplodeLayout_1_0(_id, t);
                x_3 = t;
                t = (ATerm) ATmakeAppl(sym_Build_1, x_3);
                b_3 = t;
                t = SSLsetAnnotations(b_3, m_3);
              }
            }
          else
            {
              if(match_cons(t, sym_AM_2))
                {
                  f_21 = ATgetArgument(t, 0);
                  j_21 = ATgetArgument(t, 1);
                  {
                    ATerm i_4 = NULL,l_4 = NULL,m_4 = NULL,c_3 = NULL;
                    t = SSLgetAnnotations(e_21);
                    i_4 = t;
                    t = f_21;
                    t = l_21(t);
                    l_4 = t;
                    t = j_21;
                    t = ImplodeLayout_1_0(_id, t);
                    m_4 = t;
                    t = (ATerm) ATmakeAppl(sym_AM_2, l_4, m_4);
                    c_3 = t;
                    t = SSLsetAnnotations(c_3, i_4);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RuleNoCond_2))
                    {
                      f_21 = ATgetArgument(t, 0);
                      j_21 = ATgetArgument(t, 1);
                      {
                        ATerm y_4 = NULL,h_5 = NULL,r_5 = NULL,d_3 = NULL;
                        t = SSLgetAnnotations(e_21);
                        y_4 = t;
                        t = f_21;
                        t = l_21(t);
                        h_5 = t;
                        t = j_21;
                        t = ImplodeLayout_1_0(_id, t);
                        r_5 = t;
                        t = (ATerm) ATmakeAppl(sym_RuleNoCond_2, h_5, r_5);
                        d_3 = t;
                        t = SSLsetAnnotations(d_3, y_4);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Rule_3))
                        {
                          f_21 = ATgetArgument(t, 0);
                          j_21 = ATgetArgument(t, 1);
                          c_21 = ATgetArgument(t, 2);
                          {
                            ATerm l_6 = NULL,z_6 = NULL,a_7 = NULL,c_7 = NULL,f_3 = NULL;
                            t = SSLgetAnnotations(e_21);
                            l_6 = t;
                            t = f_21;
                            t = l_21(t);
                            z_6 = t;
                            t = j_21;
                            t = ImplodeLayout_1_0(_id, t);
                            a_7 = t;
                            t = c_21;
                            t = l_21(t);
                            c_7 = t;
                            t = (ATerm) ATmakeAppl(sym_Rule_3, z_6, a_7, c_7);
                            f_3 = t;
                            t = SSLsetAnnotations(f_3, l_6);
                          }
                        }
                      else
                        {
                          ATerm r_7 = NULL,s_7 = NULL,v_7 = NULL,w_7 = NULL,x_7 = NULL,y_7 = NULL,z_7 = NULL,a_8 = NULL,b_8 = NULL,g_8 = NULL,h_8 = NULL,k_8 = NULL,l_8 = NULL,m_8 = NULL,n_3 = NULL,j_3 = NULL,i_3 = NULL,g_3 = NULL;
                          if(match_cons(t, sym_appl_2))
                            {
                              f_21 = ATgetArgument(t, 0);
                              j_21 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(e_21);
                          s_7 = t;
                          t = f_21;
                          if(match_cons(t, sym_prod_3))
                            {
                              x_7 = ATgetArgument(t, 0);
                              y_7 = ATgetArgument(t, 1);
                              z_7 = ATgetArgument(t, 2);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(f_21);
                          w_7 = t;
                          t = y_7;
                          if(match_cons(t, sym_cf_1))
                            {
                              g_8 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(y_7);
                          b_8 = t;
                          t = g_8;
                          if(match_cons(t, sym_opt_1))
                            {
                              l_8 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(g_8);
                          k_8 = t;
                          t = l_8;
                          if(!(match_cons(t, sym_layout_0)))
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_opt_1, l_8);
                          g_3 = t;
                          t = SSLsetAnnotations(g_3, k_8);
                          m_8 = t;
                          t = (ATerm) ATmakeAppl(sym_cf_1, m_8);
                          i_3 = t;
                          t = SSLsetAnnotations(i_3, b_8);
                          h_8 = t;
                          t = (ATerm) ATmakeAppl(sym_prod_3, x_7, h_8, z_7);
                          j_3 = t;
                          t = SSLsetAnnotations(j_3, w_7);
                          a_8 = t;
                          t = (ATerm) ATmakeAppl(sym_appl_2, a_8, j_21);
                          n_3 = t;
                          t = SSLsetAnnotations(n_3, s_7);
                          v_7 = t;
                          {
                            ATerm a_11 = t;
                            int b_11 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm q_8 = NULL,r_8 = NULL,s_8 = NULL,t_8 = NULL,u_8 = NULL,y_8 = NULL,b_9 = NULL,c_9 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL,i_9 = NULL,j_9 = NULL,k_9 = NULL,l_9 = NULL,m_9 = NULL,n_9 = NULL,p_9 = NULL,q_9 = NULL,u_9 = NULL,v_9 = NULL,y_9 = NULL,z_3 = NULL,s_3 = NULL,r_3 = NULL,q_3 = NULL,p_3 = NULL,o_3 = NULL;
                                if(match_cons(t, sym_appl_2))
                                  {
                                    r_8 = ATgetArgument(t, 0);
                                    s_8 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(v_7);
                                q_8 = t;
                                t = r_8;
                                if(match_cons(t, sym_prod_3))
                                  {
                                    y_8 = ATgetArgument(t, 0);
                                    b_9 = ATgetArgument(t, 1);
                                    c_9 = ATgetArgument(t, 2);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(r_8);
                                u_8 = t;
                                t = y_8;
                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                  {
                                    n_9 = ATgetFirst((ATermList) t);
                                    p_9 = (ATerm) ATgetNext((ATermList) t);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(y_8);
                                m_9 = t;
                                t = n_9;
                                if(match_cons(t, sym_cf_1))
                                  {
                                    v_9 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(n_9);
                                u_9 = t;
                                t = v_9;
                                if(!(match_cons(t, sym_layout_0)))
                                  _fail(t);
                                t = (ATerm) ATmakeAppl(sym_cf_1, v_9);
                                o_3 = t;
                                t = SSLsetAnnotations(o_3, u_9);
                                y_9 = t;
                                t = p_9;
                                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                  _fail(t);
                                t = (ATerm) ATinsert(CheckATermList(p_9), y_9);
                                p_3 = t;
                                t = SSLsetAnnotations(p_3, m_9);
                                q_9 = t;
                                t = b_9;
                                if(match_cons(t, sym_cf_1))
                                  {
                                    h_9 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(b_9);
                                g_9 = t;
                                t = h_9;
                                if(match_cons(t, sym_opt_1))
                                  {
                                    k_9 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(h_9);
                                j_9 = t;
                                t = k_9;
                                if(!(match_cons(t, sym_layout_0)))
                                  _fail(t);
                                t = (ATerm) ATmakeAppl(sym_opt_1, k_9);
                                q_3 = t;
                                t = SSLsetAnnotations(q_3, j_9);
                                l_9 = t;
                                t = (ATerm) ATmakeAppl(sym_cf_1, l_9);
                                r_3 = t;
                                t = SSLsetAnnotations(r_3, g_9);
                                i_9 = t;
                                t = (ATerm) ATmakeAppl(sym_prod_3, q_9, i_9, c_9);
                                s_3 = t;
                                t = SSLsetAnnotations(s_3, u_8);
                                f_9 = t;
                                t = s_8;
                                {
                                  static ATerm y_0 (ATerm t)
                                  {
                                    if(match_cons(t, sym_meta_var_1))
                                      {
                                        if(((r_7 != NULL) && (r_7 != ATgetArgument(t, 0))))
                                          _fail(ATgetArgument(t, 0));
                                        else
                                          r_7 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    return(t);
                                  }
                                  t = oncetd_1_0(y_0, t);
                                }
                                t_8 = t;
                                t = (ATerm) ATmakeAppl(sym_appl_2, f_9, t_8);
                                z_3 = t;
                                t = SSLsetAnnotations(z_3, q_8);
                                LocalPopChoice(b_11);
                                t = (ATerm) ATmakeAppl(sym_meta_var_1, not_null(r_7));
                              }
                            else
                              {
                                t = a_11;
                                {
                                  ATerm e_11 = t;
                                  int f_11 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm h_11 = t;
                                      if((PushChoice() == 0))
                                        {
                                          t = c_90(t);
                                          PopChoice();
                                          _fail(t);
                                        }
                                      else
                                        {
                                          t = h_11;
                                        }
                                      t = term_k_6;
                                      LocalPopChoice(f_11);
                                    }
                                  else
                                    {
                                      t = e_11;
                                    }
                                }
                              }
                          }
                        }
                    }
                }
            }
        }
      return(t);
    }
    t = alltd_1_0(s_0, t);
    return(t);
  }
  t = l_21(t);
  return(t);
}
static ATerm i_5 (ATerm k_39, ATerm l_39, ATerm t)
{
  ATerm y_21 = NULL;
  t = SSL_fputc(k_39, l_39);
  y_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_21);
  return(t);
}
static ATerm j_5 (ATerm f_24, ATerm g_24, ATerm t)
{
  ATerm z_21 = NULL;
  t = SSL_write_term_to_stream_text(f_24, g_24);
  z_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_21);
  return(t);
}
static ATerm l_5 (ATerm a_98 (ATerm), ATerm c_170, ATerm l_24, ATerm t)
{
  ATerm f_22 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, c_170, term_i_11);
  t = p_5(t);
  f_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_22, l_24);
  t = a_98(t);
  t = fclose_0_0(t);
  t = l_24;
  return(t);
}
static ATerm k_5 (ATerm b_24, ATerm c_24, ATerm t)
{
  ATerm s_22 = NULL;
  t = SSL_write_term_to_stream_baf(b_24, c_24);
  s_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_22);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm y_10 = NULL,z_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_11 = ATgetArgument(t, 0);
      if(match_cons(j_11, sym_Stream_1))
        {
          y_10 = ATgetArgument(j_11, 0);
        }
      else
        _fail(t);
      z_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_5(y_10, z_10, t);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm n_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL,s_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_11 = ATgetArgument(t, 0);
      if(match_cons(t_11, sym_Stream_1))
        {
          q_11 = ATgetArgument(t_11, 0);
        }
      else
        _fail(t);
      s_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_5(q_11, s_11, t);
  n_11 = t;
  t = term_v_11;
  o_11 = t;
  t = n_11;
  if(match_cons(t, sym_Stream_1))
    {
      p_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_v_11, n_11);
  t = i_5(o_11, p_11, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm z_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL,d_23 = NULL,f_23 = NULL,g_23 = NULL,k_23 = NULL,l_23 = NULL,o_23 = NULL,q_25 = NULL,w_25 = NULL,v_14 = NULL,u_14 = NULL;
  a_23 = t;
  if(match_cons(t, sym__2))
    {
      k_23 = ATgetArgument(t, 0);
      l_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_23);
  g_23 = t;
  t = k_23;
  {
    ATerm w_11 = t;
    int y_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm z_0 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((z_22 != NULL) && (z_22 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                z_22 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(z_0, t);
        LocalPopChoice(y_11);
      }
    else
      {
        t = w_11;
        t = term_z_11;
        z_22 = t;
      }
  }
  o_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_23, l_23);
  u_14 = t;
  t = SSLsetAnnotations(u_14, g_23);
  t = a_23;
  if(match_cons(t, sym__2))
    {
      c_23 = ATgetArgument(t, 0);
      d_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_23);
  b_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_23, (ATerm) ATmakeAppl(sym__2, not_null(z_22), d_23));
  v_14 = t;
  t = SSLsetAnnotations(v_14, b_23);
  f_23 = t;
  if(match_cons(t, sym__2))
    {
      q_25 = ATgetArgument(t, 0);
      w_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_12 = t;
    int d_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL,w_14 = NULL;
        t = SSLgetAnnotations(f_23);
        o_10 = t;
        t = q_25;
        t = fetch_1_0(b_1, t);
        u_10 = t;
        t = w_25;
        if(match_cons(t, sym__2))
          {
            w_10 = ATgetArgument(t, 0);
            x_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_5(d_1, w_10, x_10, t);
        v_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_10, v_10);
        w_14 = t;
        t = SSLsetAnnotations(w_14, o_10);
        LocalPopChoice(d_12);
      }
    else
      {
        t = a_12;
        {
          ATerm g_11 = NULL,k_11 = NULL,l_11 = NULL,m_11 = NULL,z_14 = NULL;
          t = SSLgetAnnotations(f_23);
          g_11 = t;
          t = w_25;
          if(match_cons(t, sym__2))
            {
              l_11 = ATgetArgument(t, 0);
              m_11 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = l_5(e_1, l_11, m_11, t);
          k_11 = t;
          t = (ATerm) ATmakeAppl(sym__2, q_25, k_11);
          z_14 = t;
          t = SSLsetAnnotations(z_14, g_11);
        }
      }
  }
  return(t);
}
ATerm dtime_0_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1_0 (ATerm c_116 (ATerm), ATerm t)
{
  ATerm z_25 = NULL,a_26 = NULL,b_26 = NULL,e_26 = NULL,g_26 = NULL;
  g_26 = t;
  t = dtime_0_0(t);
  t = g_26;
  t = c_116(t);
  e_26 = t;
  t = dtime_0_0(t);
  z_25 = t;
  t = e_26;
  if(match_cons(t, sym__2))
    {
      a_26 = ATgetArgument(t, 0);
      b_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_26), (ATerm) ATmakeAppl(sym_Runtime_1, z_25)), b_26);
  return(t);
}
static ATerm i_27 (ATerm z_26, ATerm t)
{
  t = SSL_fclose(z_26);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm c_27 = NULL,d_27 = NULL;
  d_27 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_27 = ATgetArgument(t, 0);
      {
        ATerm e_12 = t;
        int f_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(c_27);
            LocalPopChoice(f_12);
          }
        else
          {
            t = e_12;
            t = i_27(d_27, t);
          }
      }
    }
  else
    {
      t = i_27(d_27, t);
    }
  return(t);
}
static ATerm m_5 (ATerm h_24, ATerm t)
{
  t = SSL_read_term_from_stream(h_24);
  return(t);
}
static ATerm n_5 (ATerm d_38, ATerm e_38, ATerm t)
{
  t = SSL_strcat(d_38, e_38);
  return(t);
}
static ATerm o_5 (ATerm m_39, ATerm n_39, ATerm t)
{
  ATerm j_27 = NULL;
  t = SSL_fopen(m_39, n_39);
  j_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_27);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm k_27 = NULL;
  t = SSL_stdin_stream();
  k_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_27);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm r_27 = NULL;
  t = SSL_stdout_stream();
  r_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_27);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm v_27 = NULL;
  t = SSL_stderr_stream();
  v_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_27);
  return(t);
}
static ATerm k_29 (ATerm j_28, ATerm t)
{
  ATerm k_28 = NULL;
  t = SSL_explode_term(j_28);
  if(match_cons(t, sym__2))
    {
      ATerm g_12 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_12) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm h_12 = ATgetArgument(t, 1);
        if(((ATgetType(h_12) == AT_LIST) && !(ATisEmpty(h_12))))
          {
            k_28 = ATgetFirst((ATermList) h_12);
            {
              ATerm i_12 = (ATerm) ATgetNext((ATermList) h_12);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = k_28;
  if(match_cons(t, sym_stderr_0))
    {
      t = k_28;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = k_28;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = k_28;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm l_29 (ATerm n_28, ATerm o_28, ATerm p_28, ATerm t)
{
  ATerm q_28 = NULL,r_28 = NULL,s_28 = NULL,v_28 = NULL,h_15 = NULL;
  t = SSLgetAnnotations(p_28);
  s_28 = t;
  t = n_28;
  if(match_cons(t, sym_Path_1))
    {
      v_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_28, o_28);
  h_15 = t;
  t = SSLsetAnnotations(h_15, s_28);
  if(match_cons(t, sym__2))
    {
      q_28 = ATgetArgument(t, 0);
      r_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_5(q_28, r_28, t);
  return(t);
}
static ATerm m_29 (ATerm x_28, ATerm y_28, ATerm z_28, ATerm t)
{
  ATerm a_29 = NULL,b_29 = NULL,c_29 = NULL,f_29 = NULL,i_15 = NULL;
  t = SSLgetAnnotations(z_28);
  c_29 = t;
  t = SSL_is_string(x_28);
  f_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_29, y_28);
  i_15 = t;
  t = SSLsetAnnotations(i_15, c_29);
  if(match_cons(t, sym__2))
    {
      a_29 = ATgetArgument(t, 0);
      b_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_5(a_29, b_29, t);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm h_29 = NULL,i_29 = NULL,j_29 = NULL;
  h_29 = t;
  if(match_cons(t, sym__2))
    {
      i_29 = ATgetArgument(t, 0);
      j_29 = ATgetArgument(t, 1);
      {
        ATerm j_12 = t;
        int k_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_29(h_29, t);
            LocalPopChoice(k_12);
          }
        else
          {
            t = j_12;
            {
              ATerm n_12 = t;
              int o_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = l_29(i_29, j_29, h_29, t);
                  LocalPopChoice(o_12);
                }
              else
                {
                  t = n_12;
                  t = m_29(i_29, j_29, h_29, t);
                }
            }
          }
      }
    }
  else
    {
      t = k_29(h_29, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm o_29 = NULL,p_29 = NULL,q_29 = NULL,v_29 = NULL;
  v_29 = t;
  {
    ATerm q_12 = t;
    int r_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, v_29, term_t_12);
        t = p_5(t);
        LocalPopChoice(r_12);
      }
    else
      {
        t = q_12;
        {
          ATerm l_12 = NULL,m_12 = NULL;
          t = term_u_12;
          m_12 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_u_12, v_29);
          t = n_5(m_12, v_29, t);
          l_12 = t;
          t = SSL_perror(l_12);
          _fail(t);
        }
      }
  }
  p_29 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_5(q_29, t);
  o_29 = t;
  t = p_29;
  t = fclose_0_0(t);
  t = o_29;
  return(t);
}
static ATerm u_5 (ATerm w_61, ATerm x_61, ATerm t)
{
  ATerm y_29 = NULL;
  t = lookup_table_0_1(w_61, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      y_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_5(x_61, y_29, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm l_114 (ATerm), ATerm t)
{
  ATerm b_30 = NULL;
  b_30 = t;
  {
    ATerm v_12 = t;
    int w_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_30 = NULL,e_30 = NULL,f_30 = NULL;
        t = term_y_12;
        e_30 = t;
        t = term_a_13;
        f_30 = t;
        t = term_b_13;
        t = u_5(e_30, f_30, t);
        d_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_30, term_c_13);
        t = geq_0_0(t);
        t = b_30;
        t = l_114(t);
        LocalPopChoice(w_12);
      }
    else
      {
        t = v_12;
        t = b_30;
      }
  }
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm i_30 = NULL;
  i_30 = t;
  if(match_string(t, "-k"))
    {
      t = i_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = i_30;
    }
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm j_30 = NULL,k_30 = NULL,l_30 = NULL;
  j_30 = t;
  t = SSL_string_to_int(j_30);
  k_30 = t;
  t = term_e_13;
  l_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_13, k_30);
  t = x_5(l_30, k_30, t);
  t = j_30;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_f_13;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_1, g_1, h_1, t);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm n_30 = NULL;
  n_30 = t;
  if(match_string(t, "-S"))
    {
      t = n_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = n_30;
    }
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm o_30 = NULL,p_30 = NULL;
  t = term_a_13;
  o_30 = t;
  t = term_g_13;
  p_30 = t;
  t = term_i_13;
  t = x_5(o_30, p_30, t);
  t = term_j_13;
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = term_k_13;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm q_30 = NULL,r_30 = NULL,s_30 = NULL;
  q_30 = t;
  t = SSL_string_to_int(q_30);
  r_30 = t;
  t = term_a_13;
  s_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_13, r_30);
  t = x_5(s_30, r_30, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, q_30);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  t = term_l_13;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm t_30 = NULL,u_30 = NULL;
  t = term_m_13;
  t_30 = t;
  t = term_g_5;
  u_30 = t;
  t = term_o_13;
  t = x_5(t_30, u_30, t);
  t = term_r_13;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  t = term_s_13;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm t_13 = t;
  int u_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_1, j_1, l_1, t);
      LocalPopChoice(u_13);
    }
  else
    {
      t = t_13;
      {
        ATerm w_13 = t;
        int x_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(m_1, p_1, q_1, t);
            LocalPopChoice(x_13);
          }
        else
          {
            t = w_13;
            t = Option_3_0(s_1, t_1, u_1, t);
          }
      }
    }
  return(t);
}
static ATerm x_5 (ATerm i_55, ATerm j_55, ATerm t)
{
  ATerm v_30 = NULL,w_30 = NULL;
  t = term_y_12;
  v_30 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_y_12, i_55, j_55);
  t = lookup_table_0_1(v_30, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      w_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_5(i_55, j_55, w_30, t);
  t = (ATerm) ATmakeAppl(sym__3, term_y_12, i_55, j_55);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm z_30 = NULL;
  z_30 = t;
  if(match_string(t, "-o"))
    {
      t = z_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = z_30;
    }
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm a_31 = NULL,b_31 = NULL;
  a_31 = t;
  t = term_y_13;
  b_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_13, a_31);
  t = x_5(b_31, a_31, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, a_31);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = term_z_13;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_1, z_1, a_2, t);
  return(t);
}
static ATerm v_5 (ATerm d_60, ATerm e_60, ATerm c_60, ATerm t)
{
  ATerm d_31 = NULL,e_31 = NULL,f_31 = NULL,g_31 = NULL,h_31 = NULL;
  d_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_60, e_60);
  {
    ATerm a_14 = t;
    int c_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_14 = ATgetArgument(t, 0);
            ATerm e_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, d_60, e_60);
        t = u_5(d_60, e_60, t);
        LocalPopChoice(c_14);
      }
    else
      {
        t = a_14;
        t = (ATerm) ATempty;
      }
  }
  e_31 = t;
  t = (ATerm) ATmakeAppl(sym__3, d_60, e_60, (ATerm) ATinsert(CheckATermList(e_31), c_60));
  t = lookup_table_0_1(d_60, t);
  h_31 = t;
  t = (ATerm) ATinsert(CheckATermList(e_31), c_60);
  f_31 = t;
  t = h_31;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_5(e_60, f_31, g_31, t);
  t = d_31;
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm s_31 = NULL,t_31 = NULL,u_31 = NULL,v_31 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_31 = NULL,x_31 = NULL,y_31 = NULL;
      t = term_g_5;
      t = p_0(t);
      w_31 = t;
      t = term_g_6;
      x_31 = t;
      t = term_h_6;
      y_31 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_g_6, term_h_6, w_31);
      t = v_5(x_31, y_31, w_31, t);
      _fail(t);
    }
  else
    {
      ATerm c_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_31 = ATgetFirst((ATermList) t);
          t_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_31;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_31 = ATgetFirst((ATermList) t);
          v_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_31;
      t = n_0(t);
      t = u_31;
      t = o_0(t);
      c_32 = t;
      t = (ATerm) ATinsert(CheckATermList(v_31), c_32);
    }
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm e_32 = NULL;
  e_32 = t;
  if(match_string(t, "-i"))
    {
      t = e_32;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = e_32;
    }
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm f_32 = NULL,g_32 = NULL;
  f_32 = t;
  t = term_f_14;
  g_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_14, f_32);
  t = x_5(g_32, f_32, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, f_32);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_h_14;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_2, e_2, f_2, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm h_32 = NULL,i_32 = NULL,j_32 = NULL,k_32 = NULL;
  t = report_run_time_0_0(t);
  t = term_g_5;
  t = whoami_0_0(t);
  h_32 = t;
  t = term_w_5;
  j_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_i_14), h_32);
  k_32 = t;
  t = SSL_printnl(j_32, k_32);
  t = term_f_6;
  i_32 = t;
  t = SSL_exit(i_32);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm l_32 = NULL,m_32 = NULL;
  t = term_y_12;
  l_32 = t;
  t = term_j_14;
  m_32 = t;
  t = term_k_14;
  t = u_5(l_32, m_32, t);
  return(t);
}
static ATerm q_5 (ATerm g_42, ATerm h_42, ATerm t)
{
  ATerm m_14 = t;
  int n_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(g_42, h_42);
      LocalPopChoice(n_14);
    }
  else
    {
      t = m_14;
      t = SSL_addr(g_42, h_42);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm i_105 (ATerm), ATerm j_105 (ATerm), ATerm t)
{
  ATerm o_32 = NULL,p_32 = NULL,q_32 = NULL;
  o_32 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_32;
      t = i_105(t);
    }
  else
    {
      ATerm t_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_32 = ATgetFirst((ATermList) t);
          q_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_32;
      t = foldr_2_0(i_105, j_105, t);
      t_32 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_32, t_32);
      t = j_105(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = term_g_13;
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm x_12 = NULL,z_12 = NULL;
  if(match_cons(t, sym__2))
    {
      x_12 = ATgetArgument(t, 0);
      z_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_5(x_12, z_12, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm w_32 = NULL,p_12 = NULL,s_12 = NULL;
  t = times_0_0(t);
  s_12 = t;
  t = SSL_explode_term(s_12);
  if(match_cons(t, sym__2))
    {
      ATerm o_14 = ATgetArgument(t, 0);
      p_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_12;
  t = foldr_2_0(g_2, h_2, t);
  w_32 = t;
  t = SSL_TicksToSeconds(w_32);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm i_33 = NULL,j_33 = NULL,k_33 = NULL;
  i_33 = t;
  if(match_cons(t, sym__2))
    {
      j_33 = ATgetArgument(t, 0);
      k_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_14 = t;
    int q_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_33;
        if((j_33 != t))
          {
            _fail(t);
          }
        t = i_33;
        LocalPopChoice(q_14);
      }
    else
      {
        t = p_14;
        t = (ATerm) ATmakeAppl(sym__2, j_33, k_33);
        {
          ATerm r_14 = t;
          int x_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(j_33, k_33);
              LocalPopChoice(x_14);
            }
          else
            {
              t = r_14;
              t = SSL_gtr(j_33, k_33);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, j_33, k_33);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm k_114 (ATerm), ATerm t)
{
  ATerm o_33 = NULL;
  o_33 = t;
  {
    ATerm y_14 = t;
    int a_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_33 = NULL,r_33 = NULL,s_33 = NULL;
        t = term_y_12;
        r_33 = t;
        t = term_a_13;
        s_33 = t;
        t = term_b_13;
        t = u_5(r_33, s_33, t);
        q_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_33, term_f_6);
        t = geq_0_0(t);
        t = o_33;
        t = k_114(t);
        LocalPopChoice(a_15);
      }
    else
      {
        t = y_14;
        t = o_33;
      }
  }
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm u_33 = NULL,v_33 = NULL,x_33 = NULL,y_33 = NULL;
  t = run_time_0_0(t);
  u_33 = t;
  t = term_g_5;
  t = whoami_0_0(t);
  v_33 = t;
  t = term_w_5;
  x_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_15), u_33), term_b_15), v_33);
  y_33 = t;
  t = SSL_printnl(x_33, y_33);
  t = (ATerm) ATmakeAppl(sym__2, term_w_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_15), u_33), term_b_15), v_33));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(k_2, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm z_33 = NULL;
  t = report_run_time_0_0(t);
  t = term_g_13;
  z_33 = t;
  t = SSL_exit(z_33);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm j_34 = NULL,k_34 = NULL;
  k_34 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = k_34;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          j_34 = ATgetArgument(t, 0);
          {
            ATerm v_13 = NULL,n_15 = NULL;
            t = SSLgetAnnotations(k_34);
            v_13 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, j_34);
            n_15 = t;
            t = SSLsetAnnotations(n_15, v_13);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = k_34;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm a_117 (ATerm), ATerm t)
{
  ATerm d_15 = t;
  int e_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_34 = NULL,d_34 = NULL;
      t = term_y_12;
      c_34 = t;
      t = term_f_15;
      d_34 = t;
      t = term_g_15;
      t = u_5(c_34, d_34, t);
      LocalPopChoice(e_15);
    }
  else
    {
      t = d_15;
      t = fetch_1_0(p_2, t);
    }
  t = a_117(t);
  return(t);
}
static ATerm y_5 (ATerm i_64, ATerm j_64, ATerm k_64, ATerm t)
{
  ATerm m_34 = NULL;
  t = SSL_hashtable_put(k_64, i_64, j_64);
  m_34 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, m_34);
  return(t);
}
static ATerm z_5 (ATerm l_64, ATerm m_64, ATerm t)
{
  t = SSL_hashtable_get(m_64, l_64);
  return(t);
}
ATerm lookup_table_0_1 (ATerm p_61, ATerm t)
{
  ATerm v_34 = NULL;
  t = table_hashtable_0_0(t);
  v_34 = t;
  {
    ATerm j_15 = t;
    int l_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_14 = NULL;
        t = v_34;
        if(match_cons(t, sym_Hashtable_1))
          {
            b_14 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = z_5(p_61, b_14, t);
        LocalPopChoice(l_15);
      }
    else
      {
        t = j_15;
        {
          ATerm g_14 = NULL;
          t = p_61;
          t = table_create_0_0(t);
          t = v_34;
          if(match_cons(t, sym_Hashtable_1))
            {
              g_14 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_5(p_61, g_14, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm q_64, ATerm r_64, ATerm t)
{
  ATerm y_34 = NULL;
  t = SSL_hashtable_create(q_64, r_64);
  y_34 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, y_34);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm z_34 = NULL,a_35 = NULL,b_35 = NULL,d_35 = NULL,e_35 = NULL;
  z_34 = t;
  t = term_m_15;
  d_35 = t;
  t = term_o_15;
  e_35 = t;
  t = z_34;
  t = new_hashtable_0_2(d_35, e_35, t);
  a_35 = t;
  t = z_34;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_5(z_34, a_35, b_35, t);
  t = z_34;
  return(t);
}
static ATerm s_5 (ATerm n_64, ATerm o_64, ATerm t)
{
  ATerm f_35 = NULL;
  t = SSL_hashtable_remove(o_64, n_64);
  f_35 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, f_35);
  return(t);
}
static ATerm t_5 (ATerm s_64, ATerm t)
{
  ATerm g_35 = NULL;
  t = SSL_hashtable_destroy(s_64);
  g_35 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_35);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm h_35 = NULL;
  t = SSL_table_hashtable();
  h_35 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_35);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm i_35 = NULL,j_35 = NULL,k_35 = NULL,l_35 = NULL;
  i_35 = t;
  t = table_hashtable_0_0(t);
  j_35 = t;
  t = lookup_table_0_1(i_35, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_5(l_35, t);
  t = j_35;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_5(i_35, k_35, t);
  t = i_35;
  return(t);
}
ATerm map_1_0 (ATerm j_98 (ATerm), ATerm t)
{
  static ATerm a_36 (ATerm t)
  {
    ATerm x_35 = NULL,y_35 = NULL,z_35 = NULL;
    x_35 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_35;
      }
    else
      {
        ATerm l_14 = NULL,s_14 = NULL,t_14 = NULL,p_15 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_35 = ATgetFirst((ATermList) t);
            z_35 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_35);
        l_14 = t;
        t = y_35;
        t = j_98(t);
        s_14 = t;
        t = z_35;
        t = a_36(t);
        t_14 = t;
        t = (ATerm) ATinsert(CheckATermList(t_14), s_14);
        p_15 = t;
        t = SSLsetAnnotations(p_15, l_14);
      }
    return(t);
  }
  t = a_36(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm d_36 = NULL,e_36 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_36 = ATgetFirst((ATermList) t);
      e_36 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm i_36 = NULL,j_36 = NULL;
        static ATerm r_2 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(i_36)), not_null(j_36));
          return(t);
        }
        t = e_36;
        t = l_0(t);
        if(((i_36 != NULL) && (i_36 != t)))
          _fail(t);
        else
          i_36 = t;
        t = d_36;
        t = k_0(t);
        if(((j_36 != NULL) && (j_36 != t)))
          _fail(t);
        else
          j_36 = t;
        t = e_36;
        t = reverse_acc_2_0(k_0, r_2, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_g_5;
      t = l_0(t);
    }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm p_36 = NULL,q_36 = NULL,r_36 = NULL,r_15 = NULL;
  r_36 = t;
  if(match_cons(t, sym_Program_1))
    {
      q_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_36);
  p_36 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, q_36);
  r_15 = t;
  t = SSLsetAnnotations(r_15, p_36);
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm t_36 = NULL;
  t_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_36), term_q_15);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm l_36 = NULL,m_36 = NULL;
  ATerm s_15 = t;
  int u_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_36 = NULL,o_36 = NULL;
      t = term_y_12;
      n_36 = t;
      t = term_j_14;
      o_36 = t;
      t = term_k_14;
      t = u_5(n_36, o_36, t);
      LocalPopChoice(u_15);
    }
  else
    {
      t = s_15;
      t = fetch_1_0(v_2, t);
    }
  t = term_x_15;
  t = echo_0_0(t);
  t = term_g_6;
  l_36 = t;
  t = term_h_6;
  m_36 = t;
  t = term_a_16;
  t = u_5(l_36, m_36, t);
  t = reverse_acc_2_0(_id, w_2, t);
  t = map_1_0(x_2, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm v_36 = NULL,w_36 = NULL,x_36 = NULL;
  v_36 = t;
  {
    ATerm e_16 = t;
    int f_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = v_36;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm g_16 = ATgetFirst((ATermList) t);
                ATerm h_16 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = v_36;
          }
        LocalPopChoice(f_16);
      }
    else
      {
        t = e_16;
        t = (ATerm) ATinsert(ATempty, v_36);
      }
  }
  w_36 = t;
  t = term_z_11;
  x_36 = t;
  t = SSL_printnl(x_36, w_36);
  t = v_36;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm b_37 = NULL,c_37 = NULL;
  t = term_y_12;
  b_37 = t;
  t = term_j_14;
  c_37 = t;
  t = term_k_14;
  t = u_5(b_37, c_37, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm y_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm d_37 = NULL,e_37 = NULL;
  t = term_i_16;
  d_37 = t;
  t = term_g_5;
  e_37 = t;
  t = term_j_16;
  t = x_5(d_37, e_37, t);
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_k_16;
  return(t);
}
static ATerm h_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm f_37 = NULL,g_37 = NULL,h_37 = NULL,i_37 = NULL;
  t = term_i_16;
  h_37 = t;
  t = term_g_5;
  i_37 = t;
  t = term_j_16;
  t = x_5(h_37, i_37, t);
  t = term_m_16;
  f_37 = t;
  t = term_g_5;
  g_37 = t;
  t = term_n_16;
  t = x_5(f_37, g_37, t);
  t = term_o_16;
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_p_16;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm q_16 = t;
  int r_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_2, z_2, e_3, t);
      LocalPopChoice(r_16);
    }
  else
    {
      t = q_16;
      t = Option_3_0(h_3, k_3, l_3, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm n_68 (ATerm), ATerm o_68 (ATerm), ATerm t)
{
  ATerm j_37 = NULL,k_37 = NULL,l_37 = NULL,m_37 = NULL,n_37 = NULL,o_37 = NULL,t_15 = NULL;
  o_37 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_37 = ATgetFirst((ATermList) t);
      l_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_37);
  j_37 = t;
  t = k_37;
  t = n_68(t);
  m_37 = t;
  t = l_37;
  t = o_68(t);
  n_37 = t;
  t = (ATerm) ATinsert(CheckATermList(n_37), m_37);
  t_15 = t;
  t = SSLsetAnnotations(t_15, j_37);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm d_119 (ATerm), ATerm t)
{
  ATerm t_37 = NULL,u_37 = NULL,v_37 = NULL,w_37 = NULL,y_37 = NULL,z_37 = NULL,v_15 = NULL;
  t_37 = t;
  {
    ATerm t_16 = t;
    int u_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_v_16;
        t = d_119(t);
        LocalPopChoice(u_16);
      }
    else
      {
        t = t_16;
      }
  }
  t = t_37;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_37 = ATgetFirst((ATermList) t);
      w_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_37);
  u_37 = t;
  t = term_j_14;
  z_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_14, v_37);
  t = x_5(z_37, v_37, t);
  t = w_37;
  {
    static ATerm l_38 (ATerm t)
    {
      ATerm w_16 = t;
      int x_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_16 = t;
          int a_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_38 = NULL;
              c_38 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = c_38;
              LocalPopChoice(a_17);
            }
          else
            {
              t = y_16;
              t = d_119(t);
              t = Cons_2_0(_id, l_38, t);
            }
          LocalPopChoice(x_16);
        }
      else
        {
          t = w_16;
          {
            ATerm h_38 = NULL,i_38 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                h_38 = ATgetFirst((ATermList) t);
                i_38 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(i_38), (ATerm) ATmakeAppl(sym_Undefined_1, h_38));
          }
        }
      return(t);
    }
    t = l_38(t);
  }
  y_37 = t;
  t = (ATerm) ATinsert(CheckATermList(y_37), (ATerm) ATmakeAppl(sym_Program_1, v_37));
  v_15 = t;
  t = SSLsetAnnotations(v_15, u_37);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm y_38 = NULL;
  y_38 = t;
  if(match_string(t, "--help"))
    {
      t = y_38;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = y_38;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = y_38;
        }
    }
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm z_38 = NULL,a_39 = NULL;
  t = term_f_15;
  z_38 = t;
  t = term_g_5;
  a_39 = t;
  t = term_b_17;
  t = x_5(z_38, a_39, t);
  t = term_c_17;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  t = term_d_17;
  return(t);
}
static ATerm d_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm c_119 (ATerm), ATerm t)
{
  ATerm q_38 = NULL,r_38 = NULL,s_38 = NULL,t_38 = NULL,u_38 = NULL,v_38 = NULL,w_38 = NULL,x_38 = NULL;
  s_38 = t;
  t = term_g_6;
  t_38 = t;
  t = term_f_17;
  t = lookup_table_0_1(t_38, t);
  x_38 = t;
  t = term_h_6;
  u_38 = t;
  t = (ATerm) ATempty;
  v_38 = t;
  t = x_38;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_5(u_38, v_38, w_38, t);
  t = s_38;
  {
    static ATerm t_3 (ATerm t)
    {
      ATerm g_17 = t;
      int h_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_119(t);
          LocalPopChoice(h_17);
        }
      else
        {
          t = g_17;
          {
            ATerm k_17 = t;
            int l_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(a_4, b_4, c_4, t);
                LocalPopChoice(l_17);
              }
            else
              {
                t = k_17;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(t_3, t);
  }
  {
    ATerm m_17 = t;
    int n_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_39 = NULL;
        r_39 = t;
        {
          ATerm o_17 = t;
          int p_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_15 = NULL;
              t = r_39;
              {
                ATerm q_17 = t;
                int r_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm w_15 = NULL,y_15 = NULL;
                    t = term_y_12;
                    w_15 = t;
                    t = term_f_15;
                    y_15 = t;
                    t = term_g_15;
                    t = u_5(w_15, y_15, t);
                    LocalPopChoice(r_17);
                  }
                else
                  {
                    t = q_17;
                    t = fetch_1_0(d_4, t);
                  }
              }
              t = r_39;
              t = default_system_usage_0_0(t);
              t = term_g_13;
              k_15 = t;
              t = SSL_exit(k_15);
              LocalPopChoice(p_17);
            }
          else
            {
              t = o_17;
              {
                ATerm l_16 = NULL,s_16 = NULL,z_16 = NULL;
                t = term_y_12;
                s_16 = t;
                t = term_i_16;
                z_16 = t;
                t = term_s_17;
                t = u_5(s_16, z_16, t);
                t = r_39;
                t = default_system_about_0_0(t);
                t = term_g_13;
                l_16 = t;
                t = SSL_exit(l_16);
              }
            }
        }
        LocalPopChoice(n_17);
      }
    else
      {
        t = m_17;
        {
          ATerm t_17 = t;
          int u_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_39 = NULL,t_39 = NULL,v_39 = NULL;
              static ATerm e_4 (ATerm t)
              {
                ATerm w_39 = NULL,x_39 = NULL,y_39 = NULL,z_15 = NULL;
                y_39 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    x_39 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(y_39);
                w_39 = t;
                t = x_39;
                if(((q_38 != NULL) && (q_38 != t)))
                  _fail(t);
                else
                  q_38 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, x_39);
                z_15 = t;
                t = SSLsetAnnotations(z_15, w_39);
                return(t);
              }
              t = fetch_1_0(e_4, t);
              t = term_w_5;
              t_39 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_38)), term_v_17);
              v_39 = t;
              t = SSL_printnl(t_39, v_39);
              t = (ATerm) ATmakeAppl(sym__2, term_w_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_38)), term_v_17));
              t = default_system_usage_0_0(t);
              t = term_f_6;
              s_39 = t;
              t = SSL_exit(s_39);
              LocalPopChoice(u_17);
            }
          else
            {
              t = t_17;
            }
        }
      }
  }
  r_38 = t;
  t = term_g_6;
  t = table_destroy_0_0(t);
  t = r_38;
  return(t);
}
ATerm option_wrap_4_0 (ATerm c_117 (ATerm), ATerm d_117 (ATerm), ATerm e_117 (ATerm), ATerm f_117 (ATerm), ATerm t)
{
  ATerm d_40 = NULL,e_40 = NULL,f_40 = NULL,g_40 = NULL,h_40 = NULL;
  t = parse_options_1_0(c_117, t);
  d_40 = t;
  t = term_w_17;
  t = table_create_0_0(t);
  t = term_w_17;
  e_40 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_w_17, term_x_17, d_40);
  t = lookup_table_0_1(e_40, t);
  h_40 = t;
  t = term_x_17;
  f_40 = t;
  t = h_40;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_5(f_40, d_40, g_40, t);
  t = d_40;
  t = e_117(t);
  {
    ATerm y_17 = t;
    int z_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(d_117, t);
        LocalPopChoice(z_17);
      }
    else
      {
        t = y_17;
        {
          ATerm a_18 = t;
          int b_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_117(t);
              t = report_success_0_0(t);
              LocalPopChoice(b_18);
            }
          else
            {
              t = a_18;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = if_verbose2_1_0(p_4, t);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm i_40 = NULL,j_40 = NULL;
  t = term_d_18;
  i_40 = t;
  t = term_g_5;
  j_40 = t;
  t = term_e_18;
  t = x_5(i_40, j_40, t);
  t = term_f_18;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = term_g_18;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm k_40 = NULL,l_40 = NULL,m_40 = NULL,n_40 = NULL,o_40 = NULL,p_40 = NULL;
  k_40 = t;
  t = term_y_12;
  o_40 = t;
  t = term_j_14;
  p_40 = t;
  t = term_k_14;
  t = u_5(o_40, p_40, t);
  l_40 = t;
  t = term_w_5;
  m_40 = t;
  t = (ATerm) ATinsert(ATempty, l_40);
  n_40 = t;
  t = SSL_printnl(m_40, n_40);
  t = k_40;
  return(t);
}
ATerm iowrap_3_0 (ATerm l_116 (ATerm), ATerm m_116 (ATerm), ATerm n_116 (ATerm), ATerm t)
{
  static ATerm f_4 (ATerm t)
  {
    ATerm h_18 = t;
    int i_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_116(t);
        LocalPopChoice(i_18);
      }
    else
      {
        t = h_18;
        {
          ATerm l_18 = t;
          int m_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(m_18);
            }
          else
            {
              t = l_18;
              {
                ATerm n_18 = t;
                int o_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(o_18);
                  }
                else
                  {
                    t = n_18;
                    {
                      ATerm p_18 = t;
                      int q_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(j_4, k_4, o_4, t);
                          LocalPopChoice(q_18);
                        }
                      else
                        {
                          t = p_18;
                          {
                            ATerm r_18 = t;
                            int s_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(s_18);
                              }
                            else
                              {
                                t = r_18;
                                t = keep_option_0_0(t);
                              }
                          }
                        }
                    }
                  }
              }
            }
        }
      }
    return(t);
  }
  static ATerm h_4 (ATerm t)
  {
    ATerm q_40 = NULL,r_40 = NULL,s_40 = NULL;
    r_40 = t;
    {
      ATerm t_18 = t;
      int u_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm q_4 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((q_40 != NULL) && (q_40 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  q_40 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(q_4, t);
          LocalPopChoice(u_18);
        }
      else
        {
          t = t_18;
          t = term_v_18;
          q_40 = t;
        }
    }
    t = not_null(q_40);
    t = ReadFromFile_0_0(t);
    s_40 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_40, s_40);
    t = apply_strategy_1_0(l_116, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(f_4, n_116, g_4, h_4, t);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm z_40 = NULL,a_41 = NULL,b_41 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL,a_42 = NULL,b_42 = NULL,c_16 = NULL,o_41 = NULL,p_41 = NULL,q_41 = NULL;
  q_41 = t;
  if(match_cons(t, sym__2))
    {
      o_41 = ATgetArgument(t, 0);
      p_41 = ATgetArgument(t, 1);
      {
        ATerm w_18 = t;
        int x_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_17 = NULL,i_17 = NULL,j_17 = NULL,b_16 = NULL;
            t = SSLgetAnnotations(q_41);
            e_17 = t;
            t = o_41;
            t = fetch_1_0(u_4, t);
            i_17 = t;
            t = p_41;
            t = ImplodeLayout_1_0(_fail, t);
            j_17 = t;
            t = (ATerm) ATmakeAppl(sym__2, i_17, j_17);
            b_16 = t;
            t = SSLsetAnnotations(b_16, e_17);
            LocalPopChoice(x_18);
          }
        else
          {
            t = w_18;
            t = q_41;
          }
      }
    }
  else
    {
      t = q_41;
    }
  e_41 = t;
  if(match_cons(t, sym__2))
    {
      a_41 = ATgetArgument(t, 0);
      b_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_41);
  z_40 = t;
  t = b_41;
  t = MetaExplode_0_0(t);
  c_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_41, c_41);
  c_16 = t;
  t = SSLsetAnnotations(c_16, z_40);
  d_41 = t;
  if(match_cons(t, sym__2))
    {
      a_42 = ATgetArgument(t, 0);
      b_42 = ATgetArgument(t, 1);
      {
        ATerm y_18 = t;
        int z_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_18 = NULL,j_18 = NULL,k_18 = NULL,d_16 = NULL;
            t = SSLgetAnnotations(d_41);
            c_18 = t;
            t = a_42;
            t = fetch_1_0(v_4, t);
            j_18 = t;
            t = b_42;
            t = topdown_1_0(w_4, t);
            k_18 = t;
            t = (ATerm) ATmakeAppl(sym__2, j_18, k_18);
            d_16 = t;
            t = SSLsetAnnotations(d_16, c_18);
            LocalPopChoice(z_18);
          }
        else
          {
            t = y_18;
            t = d_41;
          }
      }
    }
  else
    {
      t = d_41;
    }
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = Option_3_0(z_4, b_5, f_5, t);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  if(!(match_cons(t, sym_AsFix_0)))
    _fail(t);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  if(!(match_cons(t, sym_AsFix_0)))
    _fail(t);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm a_19 = t;
  int b_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Clean_0_0(t);
      LocalPopChoice(b_19);
    }
  else
    {
      t = a_19;
    }
  return(t);
}
static ATerm z_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--asfix", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  t = term_c_19;
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = term_d_19;
  return(t);
}
ATerm meta_explode_0_0 (ATerm t)
{
  t = iowrap_3_0(r_4, t_4, default_usage_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = meta_explode_0_0(t);
  return(t);
}
