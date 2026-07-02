/*
 * File: CodeGen_subsystem0.c
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

#include "CodeGen_subsystem0.h"
#include "rtwtypes.h"

/* Named constants for Chart: '<Root>/Chart' */
#define CodeGen_subsystem0_IN_one_four ((uint8_T)1U)
#define CodeGen_subsystem0_IN_one_three ((uint8_T)2U)
#define CodeGen_subsystem0_IN_one_two  ((uint8_T)3U)
#define CodeGen_subsystem0_IN_two_four ((uint8_T)5U)
#define CodeGen_subsystem0_IN_two_three ((uint8_T)6U)
#define CodeGen_subsystem_IN_three_four ((uint8_T)4U)

/* Named constants for Chart: '<Root>/Chart1' */
#define CodeGen_subsystem0_IN_safe     ((uint8_T)1U)
#define CodeGen_subsystem_IN_unsafe_sum ((uint8_T)2U)

/* Block signals (default storage) */
B_CodeGen_subsystem0_T CodeGen_subsystem0_B;

/* Block states (default storage) */
DW_CodeGen_subsystem0_T CodeGen_subsystem0_DW;

/* External inputs (root inport signals with default storage) */
ExtU_CodeGen_subsystem0_T CodeGen_subsystem0_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_CodeGen_subsystem0_T CodeGen_subsystem0_Y;

/* Real-time model */
static RT_MODEL_CodeGen_subsystem0_T CodeGen_subsystem0_M_;
RT_MODEL_CodeGen_subsystem0_T *const CodeGen_subsystem0_M =
  &CodeGen_subsystem0_M_;

/* Forward declaration for local functions */
static void CodeGen_subsystem0_two_three(void);
static void CodeGen_subsystem0_two_four(void);

/* Function for Chart: '<Root>/Chart' */
static void CodeGen_subsystem0_two_three(void)
{
  /* Inport: '<Root>/temp_rooms' */
  if ((CodeGen_subsystem0_U.temp_rooms[2] - CodeGen_subsystem0_U.temp_rooms[0] >=
       CodeGen_subsystem0_P.Diff_i[0]) && (CodeGen_subsystem0_U.temp_rooms[0] <=
       CodeGen_subsystem0_P.Get_i[0])) {
    CodeGen_subsystem0_B.controlling_signals[0] = 0.0;
    CodeGen_subsystem0_B.controlling_signals[1] = 0.0;
    CodeGen_subsystem0_B.controlling_signals[2] = 0.0;
    CodeGen_subsystem0_B.controlling_signals[3] = 0.0;
    CodeGen_subsystem0_DW.is_c2_CodeGen_subsystem0 =
      CodeGen_subsystem0_IN_one_two;
  } else if ((CodeGen_subsystem0_U.temp_rooms[2] -
              CodeGen_subsystem0_U.temp_rooms[3] >= CodeGen_subsystem0_P.Diff_i
              [3]) && (CodeGen_subsystem0_U.temp_rooms[3] <=
                       CodeGen_subsystem0_P.Get_i[3])) {
    CodeGen_subsystem0_B.controlling_signals[0] = 0.0;
    CodeGen_subsystem0_B.controlling_signals[1] = 0.0;
    CodeGen_subsystem0_B.controlling_signals[2] = 0.0;
    CodeGen_subsystem0_B.controlling_signals[3] = 0.0;
    CodeGen_subsystem0_DW.is_c2_CodeGen_subsystem0 =
      CodeGen_subsystem0_IN_two_four;
  } else if ((CodeGen_subsystem0_U.temp_rooms[1] -
              CodeGen_subsystem0_U.temp_rooms[0] >= CodeGen_subsystem0_P.Diff_i
              [0]) && (CodeGen_subsystem0_U.temp_rooms[0] <=
                       CodeGen_subsystem0_P.Get_i[0])) {
    CodeGen_subsystem0_B.controlling_signals[0] = 0.0;
    CodeGen_subsystem0_B.controlling_signals[1] = 0.0;
    CodeGen_subsystem0_B.controlling_signals[2] = 0.0;
    CodeGen_subsystem0_B.controlling_signals[3] = 0.0;
    CodeGen_subsystem0_DW.is_c2_CodeGen_subsystem0 =
      CodeGen_subsystem0_IN_one_three;
  } else if ((CodeGen_subsystem0_U.temp_rooms[1] -
              CodeGen_subsystem0_U.temp_rooms[3] >= CodeGen_subsystem0_P.Diff_i
              [3]) && (CodeGen_subsystem0_U.temp_rooms[3] <=
                       CodeGen_subsystem0_P.Get_i[3])) {
    CodeGen_subsystem0_B.controlling_signals[0] = 0.0;
    CodeGen_subsystem0_B.controlling_signals[1] = 0.0;
    CodeGen_subsystem0_B.controlling_signals[2] = 0.0;
    CodeGen_subsystem0_B.controlling_signals[3] = 0.0;
    CodeGen_subsystem0_DW.is_c2_CodeGen_subsystem0 =
      CodeGen_subsystem_IN_three_four;
  } else {
    if (CodeGen_subsystem0_U.temp_rooms[1] <= CodeGen_subsystem0_P.On_i[1]) {
      CodeGen_subsystem0_B.controlling_signals[1] = 1.0;
    }

    if (CodeGen_subsystem0_U.temp_rooms[2] <= CodeGen_subsystem0_P.On_i[2]) {
      CodeGen_subsystem0_B.controlling_signals[2] = 1.0;
    }

    if (CodeGen_subsystem0_U.temp_rooms[1] >= CodeGen_subsystem0_P.Off_i[1]) {
      CodeGen_subsystem0_B.controlling_signals[1] = 0.0;
    }

    if (CodeGen_subsystem0_U.temp_rooms[2] >= CodeGen_subsystem0_P.Off_i[2]) {
      CodeGen_subsystem0_B.controlling_signals[2] = 0.0;
    }
  }

  /* End of Inport: '<Root>/temp_rooms' */
}

/* Function for Chart: '<Root>/Chart' */
static void CodeGen_subsystem0_two_four(void)
{
  /* Inport: '<Root>/temp_rooms' */
  if ((CodeGen_subsystem0_U.temp_rooms[1] - CodeGen_subsystem0_U.temp_rooms[0] >=
       CodeGen_subsystem0_P.Diff_i[0]) && (CodeGen_subsystem0_U.temp_rooms[0] <=
       CodeGen_subsystem0_P.Get_i[0])) {
    CodeGen_subsystem0_B.controlling_signals[0] = 0.0;
    CodeGen_subsystem0_B.controlling_signals[1] = 0.0;
    CodeGen_subsystem0_B.controlling_signals[2] = 0.0;
    CodeGen_subsystem0_B.controlling_signals[3] = 0.0;
    CodeGen_subsystem0_DW.is_c2_CodeGen_subsystem0 =
      CodeGen_subsystem0_IN_one_four;
  } else if ((CodeGen_subsystem0_U.temp_rooms[1] -
              CodeGen_subsystem0_U.temp_rooms[2] >= CodeGen_subsystem0_P.Diff_i
              [2]) && (CodeGen_subsystem0_U.temp_rooms[2] <=
                       CodeGen_subsystem0_P.Get_i[2])) {
    CodeGen_subsystem0_B.controlling_signals[0] = 0.0;
    CodeGen_subsystem0_B.controlling_signals[1] = 0.0;
    CodeGen_subsystem0_B.controlling_signals[2] = 0.0;
    CodeGen_subsystem0_B.controlling_signals[3] = 0.0;
    CodeGen_subsystem0_DW.is_c2_CodeGen_subsystem0 =
      CodeGen_subsystem_IN_three_four;
  } else if ((CodeGen_subsystem0_U.temp_rooms[3] -
              CodeGen_subsystem0_U.temp_rooms[0] >= CodeGen_subsystem0_P.Diff_i
              [0]) && (CodeGen_subsystem0_U.temp_rooms[0] <=
                       CodeGen_subsystem0_P.Get_i[0])) {
    CodeGen_subsystem0_B.controlling_signals[0] = 0.0;
    CodeGen_subsystem0_B.controlling_signals[1] = 0.0;
    CodeGen_subsystem0_B.controlling_signals[2] = 0.0;
    CodeGen_subsystem0_B.controlling_signals[3] = 0.0;
    CodeGen_subsystem0_DW.is_c2_CodeGen_subsystem0 =
      CodeGen_subsystem0_IN_one_two;
  } else if ((CodeGen_subsystem0_U.temp_rooms[3] -
              CodeGen_subsystem0_U.temp_rooms[2] >= CodeGen_subsystem0_P.Diff_i
              [2]) && (CodeGen_subsystem0_U.temp_rooms[2] <=
                       CodeGen_subsystem0_P.Get_i[2])) {
    CodeGen_subsystem0_B.controlling_signals[0] = 0.0;
    CodeGen_subsystem0_B.controlling_signals[1] = 0.0;
    CodeGen_subsystem0_B.controlling_signals[2] = 0.0;
    CodeGen_subsystem0_B.controlling_signals[3] = 0.0;
    CodeGen_subsystem0_DW.is_c2_CodeGen_subsystem0 =
      CodeGen_subsystem0_IN_two_three;
  } else {
    if (CodeGen_subsystem0_U.temp_rooms[1] <= CodeGen_subsystem0_P.On_i[1]) {
      CodeGen_subsystem0_B.controlling_signals[1] = 1.0;
    }

    if (CodeGen_subsystem0_U.temp_rooms[3] <= CodeGen_subsystem0_P.On_i[3]) {
      CodeGen_subsystem0_B.controlling_signals[3] = 1.0;
    }

    if (CodeGen_subsystem0_U.temp_rooms[1] >= CodeGen_subsystem0_P.Off_i[1]) {
      CodeGen_subsystem0_B.controlling_signals[1] = 0.0;
    }

    if (CodeGen_subsystem0_U.temp_rooms[3] >= CodeGen_subsystem0_P.Off_i[3]) {
      CodeGen_subsystem0_B.controlling_signals[3] = 0.0;
    }
  }

  /* End of Inport: '<Root>/temp_rooms' */
}

/* Model step function */
void CodeGen_subsystem0_step(void)
{
  boolean_T b;

  /* Chart: '<Root>/Chart' incorporates:
   *  Inport: '<Root>/temp_rooms'
   */
  if (CodeGen_subsystem0_DW.is_active_c2_CodeGen_subsystem0 == 0U) {
    CodeGen_subsystem0_DW.is_active_c2_CodeGen_subsystem0 = 1U;
    CodeGen_subsystem0_DW.is_c2_CodeGen_subsystem0 =
      CodeGen_subsystem0_IN_two_three;
  } else {
    switch (CodeGen_subsystem0_DW.is_c2_CodeGen_subsystem0) {
     case CodeGen_subsystem0_IN_one_four:
      if ((CodeGen_subsystem0_U.temp_rooms[0] - CodeGen_subsystem0_U.temp_rooms
           [1] >= CodeGen_subsystem0_P.Diff_i[1]) &&
          (CodeGen_subsystem0_U.temp_rooms[1] <= CodeGen_subsystem0_P.Get_i[1]))
      {
        CodeGen_subsystem0_B.controlling_signals[0] = 0.0;
        CodeGen_subsystem0_B.controlling_signals[1] = 0.0;
        CodeGen_subsystem0_B.controlling_signals[2] = 0.0;
        CodeGen_subsystem0_B.controlling_signals[3] = 0.0;
        CodeGen_subsystem0_DW.is_c2_CodeGen_subsystem0 =
          CodeGen_subsystem0_IN_two_four;
      } else if ((CodeGen_subsystem0_U.temp_rooms[0] -
                  CodeGen_subsystem0_U.temp_rooms[2] >=
                  CodeGen_subsystem0_P.Diff_i[2]) &&
                 (CodeGen_subsystem0_U.temp_rooms[2] <=
                  CodeGen_subsystem0_P.Get_i[2])) {
        CodeGen_subsystem0_B.controlling_signals[0] = 0.0;
        CodeGen_subsystem0_B.controlling_signals[1] = 0.0;
        CodeGen_subsystem0_B.controlling_signals[2] = 0.0;
        CodeGen_subsystem0_B.controlling_signals[3] = 0.0;
        CodeGen_subsystem0_DW.is_c2_CodeGen_subsystem0 =
          CodeGen_subsystem_IN_three_four;
      } else if ((CodeGen_subsystem0_U.temp_rooms[3] -
                  CodeGen_subsystem0_U.temp_rooms[1] >=
                  CodeGen_subsystem0_P.Diff_i[1]) &&
                 (CodeGen_subsystem0_U.temp_rooms[1] <=
                  CodeGen_subsystem0_P.Get_i[1])) {
        CodeGen_subsystem0_B.controlling_signals[0] = 0.0;
        CodeGen_subsystem0_B.controlling_signals[1] = 0.0;
        CodeGen_subsystem0_B.controlling_signals[2] = 0.0;
        CodeGen_subsystem0_B.controlling_signals[3] = 0.0;
        CodeGen_subsystem0_DW.is_c2_CodeGen_subsystem0 =
          CodeGen_subsystem0_IN_one_two;
      } else if ((CodeGen_subsystem0_U.temp_rooms[3] -
                  CodeGen_subsystem0_U.temp_rooms[2] >=
                  CodeGen_subsystem0_P.Diff_i[2]) &&
                 (CodeGen_subsystem0_U.temp_rooms[2] <=
                  CodeGen_subsystem0_P.Get_i[2])) {
        CodeGen_subsystem0_B.controlling_signals[0] = 0.0;
        CodeGen_subsystem0_B.controlling_signals[1] = 0.0;
        CodeGen_subsystem0_B.controlling_signals[2] = 0.0;
        CodeGen_subsystem0_B.controlling_signals[3] = 0.0;
        CodeGen_subsystem0_DW.is_c2_CodeGen_subsystem0 =
          CodeGen_subsystem0_IN_one_three;
      } else {
        if (CodeGen_subsystem0_U.temp_rooms[0] <= CodeGen_subsystem0_P.On_i[0])
        {
          CodeGen_subsystem0_B.controlling_signals[0] = 1.0;
        }

        if (CodeGen_subsystem0_U.temp_rooms[3] <= CodeGen_subsystem0_P.On_i[3])
        {
          CodeGen_subsystem0_B.controlling_signals[3] = 1.0;
        }

        if (CodeGen_subsystem0_U.temp_rooms[0] >= CodeGen_subsystem0_P.Off_i[0])
        {
          CodeGen_subsystem0_B.controlling_signals[0] = 0.0;
        }

        if (CodeGen_subsystem0_U.temp_rooms[3] >= CodeGen_subsystem0_P.Off_i[3])
        {
          CodeGen_subsystem0_B.controlling_signals[3] = 0.0;
        }
      }
      break;

     case CodeGen_subsystem0_IN_one_three:
      if ((CodeGen_subsystem0_U.temp_rooms[2] - CodeGen_subsystem0_U.temp_rooms
           [1] >= CodeGen_subsystem0_P.Diff_i[1]) &&
          (CodeGen_subsystem0_U.temp_rooms[1] <= CodeGen_subsystem0_P.Get_i[1]))
      {
        CodeGen_subsystem0_B.controlling_signals[0] = 0.0;
        CodeGen_subsystem0_B.controlling_signals[1] = 0.0;
        CodeGen_subsystem0_B.controlling_signals[2] = 0.0;
        CodeGen_subsystem0_B.controlling_signals[3] = 0.0;
        CodeGen_subsystem0_DW.is_c2_CodeGen_subsystem0 =
          CodeGen_subsystem0_IN_one_two;
      } else if ((CodeGen_subsystem0_U.temp_rooms[2] -
                  CodeGen_subsystem0_U.temp_rooms[3] >=
                  CodeGen_subsystem0_P.Diff_i[3]) &&
                 (CodeGen_subsystem0_U.temp_rooms[3] <=
                  CodeGen_subsystem0_P.Get_i[3])) {
        CodeGen_subsystem0_B.controlling_signals[0] = 0.0;
        CodeGen_subsystem0_B.controlling_signals[1] = 0.0;
        CodeGen_subsystem0_B.controlling_signals[2] = 0.0;
        CodeGen_subsystem0_B.controlling_signals[3] = 0.0;
        CodeGen_subsystem0_DW.is_c2_CodeGen_subsystem0 =
          CodeGen_subsystem0_IN_one_four;
      } else if ((CodeGen_subsystem0_U.temp_rooms[0] -
                  CodeGen_subsystem0_U.temp_rooms[1] >=
                  CodeGen_subsystem0_P.Diff_i[1]) &&
                 (CodeGen_subsystem0_U.temp_rooms[1] <=
                  CodeGen_subsystem0_P.Get_i[1])) {
        CodeGen_subsystem0_B.controlling_signals[0] = 0.0;
        CodeGen_subsystem0_B.controlling_signals[1] = 0.0;
        CodeGen_subsystem0_B.controlling_signals[2] = 0.0;
        CodeGen_subsystem0_B.controlling_signals[3] = 0.0;
        CodeGen_subsystem0_DW.is_c2_CodeGen_subsystem0 =
          CodeGen_subsystem0_IN_two_three;
      } else if ((CodeGen_subsystem0_U.temp_rooms[2] -
                  CodeGen_subsystem0_U.temp_rooms[0] >=
                  CodeGen_subsystem0_P.Diff_i[0]) &&
                 (CodeGen_subsystem0_U.temp_rooms[0] <=
                  CodeGen_subsystem0_P.Get_i[0])) {
        CodeGen_subsystem0_B.controlling_signals[0] = 0.0;
        CodeGen_subsystem0_B.controlling_signals[1] = 0.0;
        CodeGen_subsystem0_B.controlling_signals[2] = 0.0;
        CodeGen_subsystem0_B.controlling_signals[3] = 0.0;
        CodeGen_subsystem0_DW.is_c2_CodeGen_subsystem0 =
          CodeGen_subsystem_IN_three_four;
      } else {
        if (CodeGen_subsystem0_U.temp_rooms[0] <= CodeGen_subsystem0_P.On_i[0])
        {
          CodeGen_subsystem0_B.controlling_signals[0] = 1.0;
        }

        if (CodeGen_subsystem0_U.temp_rooms[2] <= CodeGen_subsystem0_P.On_i[2])
        {
          CodeGen_subsystem0_B.controlling_signals[2] = 1.0;
        }

        if (CodeGen_subsystem0_U.temp_rooms[0] >= CodeGen_subsystem0_P.Off_i[0])
        {
          CodeGen_subsystem0_B.controlling_signals[0] = 0.0;
        }

        if (CodeGen_subsystem0_U.temp_rooms[2] >= CodeGen_subsystem0_P.Off_i[2])
        {
          CodeGen_subsystem0_B.controlling_signals[2] = 0.0;
        }
      }
      break;

     case CodeGen_subsystem0_IN_one_two:
      if ((CodeGen_subsystem0_U.temp_rooms[0] - CodeGen_subsystem0_U.temp_rooms
           [2] >= CodeGen_subsystem0_P.Diff_i[2]) &&
          (CodeGen_subsystem0_U.temp_rooms[2] <= CodeGen_subsystem0_P.Get_i[2]))
      {
        CodeGen_subsystem0_B.controlling_signals[0] = 0.0;
        CodeGen_subsystem0_B.controlling_signals[1] = 0.0;
        CodeGen_subsystem0_B.controlling_signals[2] = 0.0;
        CodeGen_subsystem0_B.controlling_signals[3] = 0.0;
        CodeGen_subsystem0_DW.is_c2_CodeGen_subsystem0 =
          CodeGen_subsystem0_IN_two_three;
      } else if ((CodeGen_subsystem0_U.temp_rooms[0] -
                  CodeGen_subsystem0_U.temp_rooms[3] >=
                  CodeGen_subsystem0_P.Diff_i[3]) &&
                 (CodeGen_subsystem0_U.temp_rooms[3] <=
                  CodeGen_subsystem0_P.Get_i[3])) {
        CodeGen_subsystem0_B.controlling_signals[0] = 0.0;
        CodeGen_subsystem0_B.controlling_signals[1] = 0.0;
        CodeGen_subsystem0_B.controlling_signals[2] = 0.0;
        CodeGen_subsystem0_B.controlling_signals[3] = 0.0;
        CodeGen_subsystem0_DW.is_c2_CodeGen_subsystem0 =
          CodeGen_subsystem0_IN_two_four;
      } else if ((CodeGen_subsystem0_U.temp_rooms[1] -
                  CodeGen_subsystem0_U.temp_rooms[2] >=
                  CodeGen_subsystem0_P.Diff_i[2]) &&
                 (CodeGen_subsystem0_U.temp_rooms[2] <=
                  CodeGen_subsystem0_P.Get_i[2])) {
        CodeGen_subsystem0_B.controlling_signals[0] = 0.0;
        CodeGen_subsystem0_B.controlling_signals[1] = 0.0;
        CodeGen_subsystem0_B.controlling_signals[2] = 0.0;
        CodeGen_subsystem0_B.controlling_signals[3] = 0.0;
        CodeGen_subsystem0_DW.is_c2_CodeGen_subsystem0 =
          CodeGen_subsystem0_IN_one_three;
      } else if ((CodeGen_subsystem0_U.temp_rooms[1] -
                  CodeGen_subsystem0_U.temp_rooms[3] >=
                  CodeGen_subsystem0_P.Diff_i[3]) &&
                 (CodeGen_subsystem0_U.temp_rooms[3] <=
                  CodeGen_subsystem0_P.Get_i[3])) {
        CodeGen_subsystem0_B.controlling_signals[0] = 0.0;
        CodeGen_subsystem0_B.controlling_signals[1] = 0.0;
        CodeGen_subsystem0_B.controlling_signals[2] = 0.0;
        CodeGen_subsystem0_B.controlling_signals[3] = 0.0;
        CodeGen_subsystem0_DW.is_c2_CodeGen_subsystem0 =
          CodeGen_subsystem0_IN_one_four;
      } else {
        if (CodeGen_subsystem0_U.temp_rooms[0] <= CodeGen_subsystem0_P.On_i[0])
        {
          CodeGen_subsystem0_B.controlling_signals[0] = 1.0;
        }

        if (CodeGen_subsystem0_U.temp_rooms[1] <= CodeGen_subsystem0_P.On_i[1])
        {
          CodeGen_subsystem0_B.controlling_signals[1] = 1.0;
        }

        if (CodeGen_subsystem0_U.temp_rooms[0] >= CodeGen_subsystem0_P.Off_i[0])
        {
          CodeGen_subsystem0_B.controlling_signals[0] = 0.0;
        }

        if (CodeGen_subsystem0_U.temp_rooms[1] >= CodeGen_subsystem0_P.Off_i[1])
        {
          CodeGen_subsystem0_B.controlling_signals[2] = 0.0;
        }
      }
      break;

     case CodeGen_subsystem_IN_three_four:
      if ((CodeGen_subsystem0_U.temp_rooms[2] - CodeGen_subsystem0_U.temp_rooms
           [1] >= CodeGen_subsystem0_P.Diff_i[1]) &&
          (CodeGen_subsystem0_U.temp_rooms[1] <= CodeGen_subsystem0_P.Get_i[1]))
      {
        CodeGen_subsystem0_B.controlling_signals[0] = 0.0;
        CodeGen_subsystem0_B.controlling_signals[1] = 0.0;
        CodeGen_subsystem0_B.controlling_signals[2] = 0.0;
        CodeGen_subsystem0_B.controlling_signals[3] = 0.0;
        CodeGen_subsystem0_DW.is_c2_CodeGen_subsystem0 =
          CodeGen_subsystem0_IN_two_four;
      } else if ((CodeGen_subsystem0_U.temp_rooms[2] -
                  CodeGen_subsystem0_U.temp_rooms[0] >=
                  CodeGen_subsystem0_P.Diff_i[0]) &&
                 (CodeGen_subsystem0_U.temp_rooms[0] <=
                  CodeGen_subsystem0_P.Get_i[0])) {
        CodeGen_subsystem0_B.controlling_signals[0] = 0.0;
        CodeGen_subsystem0_B.controlling_signals[1] = 0.0;
        CodeGen_subsystem0_B.controlling_signals[2] = 0.0;
        CodeGen_subsystem0_B.controlling_signals[3] = 0.0;
        CodeGen_subsystem0_DW.is_c2_CodeGen_subsystem0 =
          CodeGen_subsystem0_IN_one_four;
      } else if ((CodeGen_subsystem0_U.temp_rooms[3] -
                  CodeGen_subsystem0_U.temp_rooms[1] >=
                  CodeGen_subsystem0_P.Diff_i[1]) &&
                 (CodeGen_subsystem0_U.temp_rooms[1] <=
                  CodeGen_subsystem0_P.Get_i[1])) {
        CodeGen_subsystem0_B.controlling_signals[0] = 0.0;
        CodeGen_subsystem0_B.controlling_signals[1] = 0.0;
        CodeGen_subsystem0_B.controlling_signals[2] = 0.0;
        CodeGen_subsystem0_B.controlling_signals[3] = 0.0;
        CodeGen_subsystem0_DW.is_c2_CodeGen_subsystem0 =
          CodeGen_subsystem0_IN_two_three;
      } else if ((CodeGen_subsystem0_U.temp_rooms[3] -
                  CodeGen_subsystem0_U.temp_rooms[0] >=
                  CodeGen_subsystem0_P.Diff_i[0]) &&
                 (CodeGen_subsystem0_U.temp_rooms[0] <=
                  CodeGen_subsystem0_P.Get_i[0])) {
        CodeGen_subsystem0_B.controlling_signals[0] = 0.0;
        CodeGen_subsystem0_B.controlling_signals[1] = 0.0;
        CodeGen_subsystem0_B.controlling_signals[2] = 0.0;
        CodeGen_subsystem0_B.controlling_signals[3] = 0.0;
        CodeGen_subsystem0_DW.is_c2_CodeGen_subsystem0 =
          CodeGen_subsystem0_IN_one_three;
      } else {
        if (CodeGen_subsystem0_U.temp_rooms[2] <= CodeGen_subsystem0_P.On_i[2])
        {
          CodeGen_subsystem0_B.controlling_signals[2] = 1.0;
        }

        if (CodeGen_subsystem0_U.temp_rooms[3] <= CodeGen_subsystem0_P.On_i[3])
        {
          CodeGen_subsystem0_B.controlling_signals[3] = 1.0;
        }

        if (CodeGen_subsystem0_U.temp_rooms[2] >= CodeGen_subsystem0_P.Off_i[2])
        {
          CodeGen_subsystem0_B.controlling_signals[2] = 0.0;
        }

        if (CodeGen_subsystem0_U.temp_rooms[3] >= CodeGen_subsystem0_P.Off_i[3])
        {
          CodeGen_subsystem0_B.controlling_signals[3] = 0.0;
        }
      }
      break;

     case CodeGen_subsystem0_IN_two_four:
      CodeGen_subsystem0_two_four();
      break;

     default:
      /* case IN_two_three: */
      CodeGen_subsystem0_two_three();
      break;
    }
  }

  /* End of Chart: '<Root>/Chart' */

  /* Chart: '<Root>/Chart1' incorporates:
   *  Inport: '<Root>/temp_rooms'
   */
  if (CodeGen_subsystem0_DW.is_active_c4_CodeGen_subsystem0 == 0U) {
    CodeGen_subsystem0_DW.is_active_c4_CodeGen_subsystem0 = 1U;
    CodeGen_subsystem0_DW.is_c4_CodeGen_subsystem0 = CodeGen_subsystem0_IN_safe;
  } else if (CodeGen_subsystem0_DW.is_c4_CodeGen_subsystem0 ==
             CodeGen_subsystem0_IN_safe) {
    if (((CodeGen_subsystem0_B.controlling_signals[0] +
          CodeGen_subsystem0_B.controlling_signals[1]) +
         CodeGen_subsystem0_B.controlling_signals[2]) +
        CodeGen_subsystem0_B.controlling_signals[3] > 2.0) {
      b = true;
    } else if ((CodeGen_subsystem0_B.controlling_signals[0] == 1.0) &&
               (CodeGen_subsystem0_U.temp_rooms[0] > CodeGen_subsystem0_P.Off_i
                [0])) {
      b = true;
    } else if ((CodeGen_subsystem0_B.controlling_signals[1] == 1.0) &&
               (CodeGen_subsystem0_U.temp_rooms[1] > CodeGen_subsystem0_P.Off_i
                [1])) {
      b = true;
    } else if ((CodeGen_subsystem0_B.controlling_signals[2] == 1.0) &&
               (CodeGen_subsystem0_U.temp_rooms[2] > CodeGen_subsystem0_P.Off_i
                [2])) {
      b = true;
    } else {
      b = ((CodeGen_subsystem0_B.controlling_signals[3] == 1.0) &&
           (CodeGen_subsystem0_U.temp_rooms[3] > CodeGen_subsystem0_P.Off_i[3]));
    }

    if (b) {
      /* Outport: '<Root>/checked_controlling_signals' */
      CodeGen_subsystem0_Y.checked_controlling_signals[0] = 0.0;
      CodeGen_subsystem0_Y.checked_controlling_signals[1] = 0.0;
      CodeGen_subsystem0_Y.checked_controlling_signals[2] = 0.0;
      CodeGen_subsystem0_Y.checked_controlling_signals[3] = 0.0;
      CodeGen_subsystem0_DW.is_c4_CodeGen_subsystem0 =
        CodeGen_subsystem_IN_unsafe_sum;
    } else {
      /* Outport: '<Root>/checked_controlling_signals' */
      CodeGen_subsystem0_Y.checked_controlling_signals[0] =
        CodeGen_subsystem0_B.controlling_signals[0];
      CodeGen_subsystem0_Y.checked_controlling_signals[1] =
        CodeGen_subsystem0_B.controlling_signals[1];
      CodeGen_subsystem0_Y.checked_controlling_signals[2] =
        CodeGen_subsystem0_B.controlling_signals[2];
      CodeGen_subsystem0_Y.checked_controlling_signals[3] =
        CodeGen_subsystem0_B.controlling_signals[3];
    }
  } else {
    /* case IN_unsafe_sum: */
    if (((CodeGen_subsystem0_B.controlling_signals[0] +
          CodeGen_subsystem0_B.controlling_signals[1]) +
         CodeGen_subsystem0_B.controlling_signals[2]) +
        CodeGen_subsystem0_B.controlling_signals[3] > 2.0) {
      b = true;
    } else if ((CodeGen_subsystem0_B.controlling_signals[0] == 1.0) &&
               (CodeGen_subsystem0_U.temp_rooms[0] > CodeGen_subsystem0_P.Off_i
                [0])) {
      b = true;
    } else if ((CodeGen_subsystem0_B.controlling_signals[1] == 1.0) &&
               (CodeGen_subsystem0_U.temp_rooms[1] > CodeGen_subsystem0_P.Off_i
                [1])) {
      b = true;
    } else if ((CodeGen_subsystem0_B.controlling_signals[2] == 1.0) &&
               (CodeGen_subsystem0_U.temp_rooms[2] > CodeGen_subsystem0_P.Off_i
                [2])) {
      b = true;
    } else {
      b = ((CodeGen_subsystem0_B.controlling_signals[3] == 1.0) &&
           (CodeGen_subsystem0_U.temp_rooms[3] > CodeGen_subsystem0_P.Off_i[3]));
    }

    if (!b) {
      CodeGen_subsystem0_DW.is_c4_CodeGen_subsystem0 =
        CodeGen_subsystem0_IN_safe;
    }
  }

  /* End of Chart: '<Root>/Chart1' */
}

/* Model initialize function */
void CodeGen_subsystem0_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void CodeGen_subsystem0_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
