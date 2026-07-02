/*
 * File: CodeGen_subsystem0.h
 *
 * Code generated for Simulink model 'CodeGen_subsystem0'.
 *
 * Model version                  : 1.8
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Fri Feb 13 19:40:25 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_CodeGen_subsystem0_h_
#define RTW_HEADER_CodeGen_subsystem0_h_
#ifndef CodeGen_subsystem0_COMMON_INCLUDES_
#define CodeGen_subsystem0_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* CodeGen_subsystem0_COMMON_INCLUDES_ */

#include "CodeGen_subsystem0_types.h"
#include <stddef.h>

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  real_T controlling_signals[4];       /* '<Root>/Chart' */
} B_CodeGen_subsystem0_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  uint8_T is_active_c4_CodeGen_subsystem0;/* '<Root>/Chart1' */
  uint8_T is_c4_CodeGen_subsystem0;    /* '<Root>/Chart1' */
  uint8_T is_active_c2_CodeGen_subsystem0;/* '<Root>/Chart' */
  uint8_T is_c2_CodeGen_subsystem0;    /* '<Root>/Chart' */
} DW_CodeGen_subsystem0_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T temp_rooms[4];                /* '<Root>/temp_rooms' */
} ExtU_CodeGen_subsystem0_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T checked_controlling_signals[4];
                                      /* '<Root>/checked_controlling_signals' */
} ExtY_CodeGen_subsystem0_T;

/* Parameters (default storage) */
struct P_CodeGen_subsystem0_T_ {
  real_T Diff_i[4];                    /* Variable: Diff_i
                                        * Referenced by: '<Root>/Chart'
                                        */
  real_T Get_i[4];                     /* Variable: Get_i
                                        * Referenced by: '<Root>/Chart'
                                        */
  real_T Off_i[4];                     /* Variable: Off_i
                                        * Referenced by:
                                        *   '<Root>/Chart'
                                        *   '<Root>/Chart1'
                                        */
  real_T On_i[4];                      /* Variable: On_i
                                        * Referenced by:
                                        *   '<Root>/Chart'
                                        *   '<Root>/Chart1'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_CodeGen_subsystem0_T {
  const char_T * volatile errorStatus;
};

/* Block parameters (default storage) */
extern P_CodeGen_subsystem0_T CodeGen_subsystem0_P;

/* Block signals (default storage) */
extern B_CodeGen_subsystem0_T CodeGen_subsystem0_B;

/* Block states (default storage) */
extern DW_CodeGen_subsystem0_T CodeGen_subsystem0_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_CodeGen_subsystem0_T CodeGen_subsystem0_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_CodeGen_subsystem0_T CodeGen_subsystem0_Y;

/* Model entry point functions */
extern void CodeGen_subsystem0_initialize(void);
extern void CodeGen_subsystem0_step(void);
extern void CodeGen_subsystem0_terminate(void);

/* Real-time Model object */
extern RT_MODEL_CodeGen_subsystem0_T *const CodeGen_subsystem0_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'CodeGen_subsystem0'
 * '<S1>'   : 'CodeGen_subsystem0/Chart'
 * '<S2>'   : 'CodeGen_subsystem0/Chart1'
 */
#endif                                 /* RTW_HEADER_CodeGen_subsystem0_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
