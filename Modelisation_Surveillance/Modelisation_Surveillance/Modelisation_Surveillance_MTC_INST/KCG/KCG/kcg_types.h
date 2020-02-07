/* $********** SCADE Suite KCG 64-bit 6.6 (build i19) ***********
** Command: kcg66_x64.exe -config J:/Modelisation_Surveillance/Modelisation_Surveillance_MTC_INST/KCG/KCG/config.txt
** Generation date: 2020-02-07T16:46:46
*************************************************************$ */
#ifndef _KCG_TYPES_H_
#define _KCG_TYPES_H_

#include "stddef.h"

#define KCG_MAPW_CPY

#include "./user_macros.h"

#ifndef kcg_char
#define kcg_char kcg_char
typedef char kcg_char;
#endif /* kcg_char */

#ifndef kcg_bool
#define kcg_bool kcg_bool
typedef unsigned char kcg_bool;
#endif /* kcg_bool */

#ifndef kcg_float32
#define kcg_float32 kcg_float32
typedef float kcg_float32;
#endif /* kcg_float32 */

#ifndef kcg_float64
#define kcg_float64 kcg_float64
typedef double kcg_float64;
#endif /* kcg_float64 */

#ifndef kcg_size
#define kcg_size kcg_size
typedef ptrdiff_t kcg_size;
#endif /* kcg_size */

#ifndef kcg_uint64
#define kcg_uint64 kcg_uint64
typedef unsigned long long kcg_uint64;
#endif /* kcg_uint64 */

#ifndef kcg_uint32
#define kcg_uint32 kcg_uint32
typedef unsigned long kcg_uint32;
#endif /* kcg_uint32 */

#ifndef kcg_uint16
#define kcg_uint16 kcg_uint16
typedef unsigned short kcg_uint16;
#endif /* kcg_uint16 */

#ifndef kcg_uint8
#define kcg_uint8 kcg_uint8
typedef unsigned char kcg_uint8;
#endif /* kcg_uint8 */

#ifndef kcg_int64
#define kcg_int64 kcg_int64
typedef signed long long kcg_int64;
#endif /* kcg_int64 */

#ifndef kcg_int32
#define kcg_int32 kcg_int32
typedef signed long kcg_int32;
#endif /* kcg_int32 */

#ifndef kcg_int16
#define kcg_int16 kcg_int16
typedef signed short kcg_int16;
#endif /* kcg_int16 */

#ifndef kcg_int8
#define kcg_int8 kcg_int8
typedef signed char kcg_int8;
#endif /* kcg_int8 */

#include "kcg_imported_types.h"

#ifndef kcg_lit_float32
#define kcg_lit_float32(kcg_C1) ((kcg_float32) (kcg_C1))
#endif /* kcg_lit_float32 */

#ifndef kcg_lit_float64
#define kcg_lit_float64(kcg_C1) ((kcg_float64) (kcg_C1))
#endif /* kcg_lit_float64 */

#ifndef kcg_lit_size
#define kcg_lit_size(kcg_C1) ((kcg_size) (kcg_C1))
#endif /* kcg_lit_size */

#ifndef kcg_lit_uint64
#define kcg_lit_uint64(kcg_C1) ((kcg_uint64) (kcg_C1))
#endif /* kcg_lit_uint64 */

#ifndef kcg_lit_uint32
#define kcg_lit_uint32(kcg_C1) ((kcg_uint32) (kcg_C1))
#endif /* kcg_lit_uint32 */

#ifndef kcg_lit_uint16
#define kcg_lit_uint16(kcg_C1) ((kcg_uint16) (kcg_C1))
#endif /* kcg_lit_uint16 */

#ifndef kcg_lit_uint8
#define kcg_lit_uint8(kcg_C1) ((kcg_uint8) (kcg_C1))
#endif /* kcg_lit_uint8 */

#ifndef kcg_lit_int64
#define kcg_lit_int64(kcg_C1) ((kcg_int64) (kcg_C1))
#endif /* kcg_lit_int64 */

#ifndef kcg_lit_int32
#define kcg_lit_int32(kcg_C1) ((kcg_int32) (kcg_C1))
#endif /* kcg_lit_int32 */

#ifndef kcg_lit_int16
#define kcg_lit_int16(kcg_C1) ((kcg_int16) (kcg_C1))
#endif /* kcg_lit_int16 */

#ifndef kcg_lit_int8
#define kcg_lit_int8(kcg_C1) ((kcg_int8) (kcg_C1))
#endif /* kcg_lit_int8 */

#ifndef kcg_false
#define kcg_false ((kcg_bool) 0)
#endif /* kcg_false */

#ifndef kcg_true
#define kcg_true ((kcg_bool) 1)
#endif /* kcg_true */

#ifndef kcg_lsl_uint64
#define kcg_lsl_uint64(kcg_C1, kcg_C2)                                        \
  ((kcg_uint64) ((kcg_C1) << (kcg_C2)) & 0xffffffffffffffff)
#endif /* kcg_lsl_uint64 */

#ifndef kcg_lsl_uint32
#define kcg_lsl_uint32(kcg_C1, kcg_C2)                                        \
  ((kcg_uint32) ((kcg_C1) << (kcg_C2)) & 0xffffffff)
#endif /* kcg_lsl_uint32 */

#ifndef kcg_lsl_uint16
#define kcg_lsl_uint16(kcg_C1, kcg_C2)                                        \
  ((kcg_uint16) ((kcg_C1) << (kcg_C2)) & 0xffff)
#endif /* kcg_lsl_uint16 */

#ifndef kcg_lsl_uint8
#define kcg_lsl_uint8(kcg_C1, kcg_C2)                                         \
  ((kcg_uint8) ((kcg_C1) << (kcg_C2)) & 0xff)
#endif /* kcg_lsl_uint8 */

#ifndef kcg_lnot_uint64
#define kcg_lnot_uint64(kcg_C1) ((kcg_C1) ^ 0xffffffffffffffff)
#endif /* kcg_lnot_uint64 */

#ifndef kcg_lnot_uint32
#define kcg_lnot_uint32(kcg_C1) ((kcg_C1) ^ 0xffffffff)
#endif /* kcg_lnot_uint32 */

#ifndef kcg_lnot_uint16
#define kcg_lnot_uint16(kcg_C1) ((kcg_C1) ^ 0xffff)
#endif /* kcg_lnot_uint16 */

#ifndef kcg_lnot_uint8
#define kcg_lnot_uint8(kcg_C1) ((kcg_C1) ^ 0xff)
#endif /* kcg_lnot_uint8 */

#ifndef kcg_assign
#include "kcg_assign.h"
#endif /* kcg_assign */

#ifndef kcg_assign_struct
#define kcg_assign_struct kcg_assign
#endif /* kcg_assign_struct */

#ifndef kcg_assign_array
#define kcg_assign_array kcg_assign
#endif /* kcg_assign_array */

/* truthtables::TruthTableValues/ */
typedef enum kcg_tag_TruthTableValues_truthtables {
  T_truthtables,
  F_truthtables,
  X_truthtables
} TruthTableValues_truthtables;
/* Controller/SM1: */
typedef enum kcg_tag_SSM_TR_SM1 {
  SSM_TR_no_trans_SM1,
  SSM_TR_Normal_Station_Defaillance_Station_1_Normal_Station_SM1,
  SSM_TR_Normal_Station_Calculate_2_Normal_Station_SM1,
  SSM_TR_Calculate_Pollution_1_Calculate_SM1,
  SSM_TR_Calculate_Timer_2_Calculate_SM1,
  SSM_TR_Pollution_Defaillance_Station_1_Pollution_SM1,
  SSM_TR_Pollution_Timer_2_Pollution_SM1,
  SSM_TR_Timer_Normal_Station_1_Timer_SM1
} SSM_TR_SM1;
/* Controller/SM1: */
typedef enum kcg_tag_SSM_ST_SM1 {
  SSM_st_Normal_Station_SM1,
  SSM_st_Defaillance_Station_SM1,
  SSM_st_Calculate_SM1,
  SSM_st_Pollution_SM1,
  SSM_st_Timer_SM1
} SSM_ST_SM1;
/* position/ */
typedef kcg_float64 position[2];

/* Statation_data/ */
typedef struct kcg_tag_Statation_data {
  kcg_float64 Temperature;
  kcg_float64 pH;
  kcg_float64 Redox;
  position Position;
  kcg_float64 Time;
} Statation_data;

/* Controller/SM1:Calculate:IfBlock1:else:, Data/ */
typedef kcg_float64 Data[3];

typedef Data array_float64_3_9[9];

/* Ten_Values_Table/ */
typedef Data Ten_Values_Table[10];

#ifndef kcg_copy_Statation_data
#define kcg_copy_Statation_data(kcg_C1, kcg_C2)                               \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Statation_data)))
#endif /* kcg_copy_Statation_data */

#ifndef kcg_copy_Ten_Values_Table
#define kcg_copy_Ten_Values_Table(kcg_C1, kcg_C2)                             \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (Ten_Values_Table)))
#endif /* kcg_copy_Ten_Values_Table */

#ifndef kcg_copy_Data
#define kcg_copy_Data(kcg_C1, kcg_C2)                                         \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (Data)))
#endif /* kcg_copy_Data */

#ifndef kcg_copy_array_float64_3_9
#define kcg_copy_array_float64_3_9(kcg_C1, kcg_C2)                            \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_float64_3_9)))
#endif /* kcg_copy_array_float64_3_9 */

#ifndef kcg_copy_position
#define kcg_copy_position(kcg_C1, kcg_C2)                                     \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (position)))
#endif /* kcg_copy_position */

#ifdef kcg_use_Statation_data
#ifndef kcg_comp_Statation_data
extern kcg_bool kcg_comp_Statation_data(
  Statation_data *kcg_c1,
  Statation_data *kcg_c2);
#endif /* kcg_comp_Statation_data */
#endif /* kcg_use_Statation_data */

#ifdef kcg_use_Ten_Values_Table
#ifndef kcg_comp_Ten_Values_Table
extern kcg_bool kcg_comp_Ten_Values_Table(
  Ten_Values_Table *kcg_c1,
  Ten_Values_Table *kcg_c2);
#endif /* kcg_comp_Ten_Values_Table */
#endif /* kcg_use_Ten_Values_Table */

#ifdef kcg_use_Data
#ifndef kcg_comp_Data
extern kcg_bool kcg_comp_Data(Data *kcg_c1, Data *kcg_c2);
#endif /* kcg_comp_Data */
#endif /* kcg_use_Data */

#ifdef kcg_use_array_float64_3_9
#ifndef kcg_comp_array_float64_3_9
extern kcg_bool kcg_comp_array_float64_3_9(
  array_float64_3_9 *kcg_c1,
  array_float64_3_9 *kcg_c2);
#endif /* kcg_comp_array_float64_3_9 */
#endif /* kcg_use_array_float64_3_9 */

#ifdef kcg_use_position
#ifndef kcg_comp_position
extern kcg_bool kcg_comp_position(position *kcg_c1, position *kcg_c2);
#endif /* kcg_comp_position */
#endif /* kcg_use_position */

#endif /* _KCG_TYPES_H_ */
/* $********** SCADE Suite KCG 64-bit 6.6 (build i19) ***********
** kcg_types.h
** Generation date: 2020-02-07T16:46:46
*************************************************************$ */

