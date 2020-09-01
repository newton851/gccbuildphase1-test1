/* Generated automatically by the program `genextract'
   from the machine description file `md'.  */

#define IN_TARGET_CODE 1
#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "insn-config.h"
#include "recog.h"
#include "diagnostic-core.h"

/* This variable is used as the "location" of any missing operand
   whose numbers are skipped by a given pattern.  */
static rtx junk ATTRIBUTE_UNUSED;

void
insn_extract (rtx_insn *insn)
{
  rtx *ro = recog_data.operand;
  rtx **ro_loc = recog_data.operand_loc;
  rtx pat = PATTERN (insn);
  int i ATTRIBUTE_UNUSED; /* only for peepholes */

  if (flag_checking)
    {
      memset (ro, 0xab, sizeof (*ro) * MAX_RECOG_OPERANDS);
      memset (ro_loc, 0xab, sizeof (*ro_loc) * MAX_RECOG_OPERANDS);
    }

  switch (INSN_CODE (insn))
    {
    default:
      /* Control reaches here if insn_extract has been called with an
         unrecognizable insn (code -1), or an insn whose INSN_CODE
         corresponds to a DEFINE_EXPAND in the machine description;
         either way, a bug.  */
      if (INSN_CODE (insn) < 0)
        fatal_insn ("unrecognizable insn:", insn);
      else
        fatal_insn ("insn with invalid code number:", insn);

    case 6027:  /* atomic_bit_test_and_complementdi_1 */
    case 6026:  /* atomic_bit_test_and_complementsi_1 */
    case 6025:  /* atomic_bit_test_and_complementhi_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 2));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[1] = 0;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 2);
      recog_data.dup_num[2] = 1;
      break;

    case 6030:  /* atomic_bit_test_and_resetdi_1 */
    case 6029:  /* atomic_bit_test_and_resetsi_1 */
    case 6028:  /* atomic_bit_test_and_resethi_1 */
    case 6024:  /* atomic_bit_test_and_setdi_1 */
    case 6023:  /* atomic_bit_test_and_setsi_1 */
    case 6022:  /* atomic_bit_test_and_sethi_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 2));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 6021:  /* atomic_xordi */
    case 6020:  /* atomic_ordi */
    case 6019:  /* atomic_anddi */
    case 6018:  /* atomic_xorsi */
    case 6017:  /* atomic_orsi */
    case 6016:  /* atomic_andsi */
    case 6015:  /* atomic_xorhi */
    case 6014:  /* atomic_orhi */
    case 6013:  /* atomic_andhi */
    case 6012:  /* atomic_xorqi */
    case 6011:  /* atomic_orqi */
    case 6010:  /* atomic_andqi */
    case 6009:  /* atomic_subdi */
    case 6008:  /* atomic_subsi */
    case 6007:  /* atomic_subhi */
    case 6006:  /* atomic_subqi */
    case 6005:  /* atomic_adddi */
    case 6004:  /* atomic_addsi */
    case 6003:  /* atomic_addhi */
    case 6002:  /* atomic_addqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 6001:  /* atomic_exchangedi */
    case 6000:  /* atomic_exchangesi */
    case 5999:  /* atomic_exchangehi */
    case 5998:  /* atomic_exchangeqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 5997:  /* *atomic_fetch_add_cmpdi */
    case 5996:  /* *atomic_fetch_add_cmpsi */
    case 5995:  /* *atomic_fetch_add_cmphi */
    case 5994:  /* *atomic_fetch_add_cmpqi */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 0;
      break;

    case 5993:  /* atomic_fetch_adddi */
    case 5992:  /* atomic_fetch_addsi */
    case 5991:  /* atomic_fetch_addhi */
    case 5990:  /* atomic_fetch_addqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 5989:  /* atomic_compare_and_swapdi_1 */
    case 5988:  /* atomic_compare_and_swapsi_1 */
    case 5987:  /* atomic_compare_and_swaphi_1 */
    case 5986:  /* atomic_compare_and_swapqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 5985:  /* atomic_compare_and_swapti_doubleword */
    case 5984:  /* atomic_compare_and_swapdi_doubleword */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 5973:  /* mfence_nosse */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 5765:  /* *restore_multiple_leave_returndi */
    case 5764:  /* *restore_multiple_leave_returnsi */
    case 5763:  /* *restore_multiple_and_returndi */
    case 5762:  /* *restore_multiple_and_returnsi */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 5761:  /* *restore_multipledi */
    case 5760:  /* *restore_multiplesi */
    case 5759:  /* *save_multipledi */
    case 5758:  /* *save_multiplesi */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      break;

    case 5626:  /* avx512dq_vmfpclassv2df_mask */
    case 5624:  /* avx512dq_vmfpclassv4sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 5658:  /* avx512f_vgetmantv2df_mask_round */
    case 5654:  /* avx512f_vgetmantv4sf_mask_round */
    case 5610:  /* avx512dq_rangesv2df_mask_round */
    case 5606:  /* avx512dq_rangesv4sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 5657:  /* avx512f_vgetmantv2df_round */
    case 5653:  /* avx512f_vgetmantv4sf_round */
    case 5609:  /* avx512dq_rangesv2df_round */
    case 5605:  /* avx512dq_rangesv4sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 5568:  /* compressstorev8hi_mask */
    case 5567:  /* compressstorev16hi_mask */
    case 5566:  /* compressstorev32hi_mask */
    case 5565:  /* compressstorev32qi_mask */
    case 5564:  /* compressstorev16qi_mask */
    case 5563:  /* compressstorev64qi_mask */
    case 5562:  /* avx512vl_compressstorev2df_mask */
    case 5561:  /* avx512vl_compressstorev2di_mask */
    case 5560:  /* avx512vl_compressstorev4sf_mask */
    case 5559:  /* avx512vl_compressstorev4si_mask */
    case 5558:  /* avx512vl_compressstorev4df_mask */
    case 5557:  /* avx512vl_compressstorev4di_mask */
    case 5556:  /* avx512vl_compressstorev8sf_mask */
    case 5555:  /* avx512vl_compressstorev8si_mask */
    case 5554:  /* avx512f_compressstorev8df_mask */
    case 5553:  /* avx512f_compressstorev8di_mask */
    case 5552:  /* avx512f_compressstorev16sf_mask */
    case 5551:  /* avx512f_compressstorev16si_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 1);
      recog_data.dup_num[0] = 0;
      break;

    case 5532:  /* *avx512f_scatterdiv2df */
    case 5531:  /* *avx512f_scatterdiv2df */
    case 5530:  /* *avx512f_scatterdiv2di */
    case 5529:  /* *avx512f_scatterdiv2di */
    case 5528:  /* *avx512f_scatterdiv4sf */
    case 5527:  /* *avx512f_scatterdiv4sf */
    case 5526:  /* *avx512f_scatterdiv4si */
    case 5525:  /* *avx512f_scatterdiv4si */
    case 5524:  /* *avx512f_scatterdiv4df */
    case 5523:  /* *avx512f_scatterdiv4df */
    case 5522:  /* *avx512f_scatterdiv4di */
    case 5521:  /* *avx512f_scatterdiv4di */
    case 5520:  /* *avx512f_scatterdiv8sf */
    case 5519:  /* *avx512f_scatterdiv8sf */
    case 5518:  /* *avx512f_scatterdiv8si */
    case 5517:  /* *avx512f_scatterdiv8si */
    case 5516:  /* *avx512f_scatterdiv8df */
    case 5515:  /* *avx512f_scatterdiv8df */
    case 5514:  /* *avx512f_scatterdiv8di */
    case 5513:  /* *avx512f_scatterdiv8di */
    case 5512:  /* *avx512f_scatterdiv16sf */
    case 5511:  /* *avx512f_scatterdiv16sf */
    case 5510:  /* *avx512f_scatterdiv16si */
    case 5509:  /* *avx512f_scatterdiv16si */
    case 5508:  /* *avx512f_scattersiv2df */
    case 5507:  /* *avx512f_scattersiv2df */
    case 5506:  /* *avx512f_scattersiv2di */
    case 5505:  /* *avx512f_scattersiv2di */
    case 5504:  /* *avx512f_scattersiv4sf */
    case 5503:  /* *avx512f_scattersiv4sf */
    case 5502:  /* *avx512f_scattersiv4si */
    case 5501:  /* *avx512f_scattersiv4si */
    case 5500:  /* *avx512f_scattersiv4df */
    case 5499:  /* *avx512f_scattersiv4df */
    case 5498:  /* *avx512f_scattersiv4di */
    case 5497:  /* *avx512f_scattersiv4di */
    case 5496:  /* *avx512f_scattersiv8sf */
    case 5495:  /* *avx512f_scattersiv8sf */
    case 5494:  /* *avx512f_scattersiv8si */
    case 5493:  /* *avx512f_scattersiv8si */
    case 5492:  /* *avx512f_scattersiv8df */
    case 5491:  /* *avx512f_scattersiv8df */
    case 5490:  /* *avx512f_scattersiv8di */
    case 5489:  /* *avx512f_scattersiv8di */
    case 5488:  /* *avx512f_scattersiv16sf */
    case 5487:  /* *avx512f_scattersiv16sf */
    case 5486:  /* *avx512f_scattersiv16si */
    case 5485:  /* *avx512f_scattersiv16si */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0, 2));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 5484:  /* *avx512f_gatherdiv2df_2 */
    case 5483:  /* *avx512f_gatherdiv2df_2 */
    case 5482:  /* *avx512f_gatherdiv2di_2 */
    case 5481:  /* *avx512f_gatherdiv2di_2 */
    case 5480:  /* *avx512f_gatherdiv4sf_2 */
    case 5479:  /* *avx512f_gatherdiv4sf_2 */
    case 5478:  /* *avx512f_gatherdiv4si_2 */
    case 5477:  /* *avx512f_gatherdiv4si_2 */
    case 5476:  /* *avx512f_gatherdiv4df_2 */
    case 5475:  /* *avx512f_gatherdiv4df_2 */
    case 5474:  /* *avx512f_gatherdiv4di_2 */
    case 5473:  /* *avx512f_gatherdiv4di_2 */
    case 5472:  /* *avx512f_gatherdiv8sf_2 */
    case 5471:  /* *avx512f_gatherdiv8sf_2 */
    case 5470:  /* *avx512f_gatherdiv8si_2 */
    case 5469:  /* *avx512f_gatherdiv8si_2 */
    case 5468:  /* *avx512f_gatherdiv8df_2 */
    case 5467:  /* *avx512f_gatherdiv8df_2 */
    case 5466:  /* *avx512f_gatherdiv8di_2 */
    case 5465:  /* *avx512f_gatherdiv8di_2 */
    case 5464:  /* *avx512f_gatherdiv16sf_2 */
    case 5463:  /* *avx512f_gatherdiv16sf_2 */
    case 5462:  /* *avx512f_gatherdiv16si_2 */
    case 5461:  /* *avx512f_gatherdiv16si_2 */
    case 5436:  /* *avx512f_gathersiv2df_2 */
    case 5435:  /* *avx512f_gathersiv2df_2 */
    case 5434:  /* *avx512f_gathersiv2di_2 */
    case 5433:  /* *avx512f_gathersiv2di_2 */
    case 5432:  /* *avx512f_gathersiv4sf_2 */
    case 5431:  /* *avx512f_gathersiv4sf_2 */
    case 5430:  /* *avx512f_gathersiv4si_2 */
    case 5429:  /* *avx512f_gathersiv4si_2 */
    case 5428:  /* *avx512f_gathersiv4df_2 */
    case 5427:  /* *avx512f_gathersiv4df_2 */
    case 5426:  /* *avx512f_gathersiv4di_2 */
    case 5425:  /* *avx512f_gathersiv4di_2 */
    case 5424:  /* *avx512f_gathersiv8sf_2 */
    case 5423:  /* *avx512f_gathersiv8sf_2 */
    case 5422:  /* *avx512f_gathersiv8si_2 */
    case 5421:  /* *avx512f_gathersiv8si_2 */
    case 5420:  /* *avx512f_gathersiv8df_2 */
    case 5419:  /* *avx512f_gathersiv8df_2 */
    case 5418:  /* *avx512f_gathersiv8di_2 */
    case 5417:  /* *avx512f_gathersiv8di_2 */
    case 5416:  /* *avx512f_gathersiv16sf_2 */
    case 5415:  /* *avx512f_gathersiv16sf_2 */
    case 5414:  /* *avx512f_gathersiv16si_2 */
    case 5413:  /* *avx512f_gathersiv16si_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 5460:  /* *avx512f_gatherdiv2df */
    case 5459:  /* *avx512f_gatherdiv2df */
    case 5458:  /* *avx512f_gatherdiv2di */
    case 5457:  /* *avx512f_gatherdiv2di */
    case 5456:  /* *avx512f_gatherdiv4sf */
    case 5455:  /* *avx512f_gatherdiv4sf */
    case 5454:  /* *avx512f_gatherdiv4si */
    case 5453:  /* *avx512f_gatherdiv4si */
    case 5452:  /* *avx512f_gatherdiv4df */
    case 5451:  /* *avx512f_gatherdiv4df */
    case 5450:  /* *avx512f_gatherdiv4di */
    case 5449:  /* *avx512f_gatherdiv4di */
    case 5448:  /* *avx512f_gatherdiv8sf */
    case 5447:  /* *avx512f_gatherdiv8sf */
    case 5446:  /* *avx512f_gatherdiv8si */
    case 5445:  /* *avx512f_gatherdiv8si */
    case 5444:  /* *avx512f_gatherdiv8df */
    case 5443:  /* *avx512f_gatherdiv8df */
    case 5442:  /* *avx512f_gatherdiv8di */
    case 5441:  /* *avx512f_gatherdiv8di */
    case 5440:  /* *avx512f_gatherdiv16sf */
    case 5439:  /* *avx512f_gatherdiv16sf */
    case 5438:  /* *avx512f_gatherdiv16si */
    case 5437:  /* *avx512f_gatherdiv16si */
    case 5412:  /* *avx512f_gathersiv2df */
    case 5411:  /* *avx512f_gathersiv2df */
    case 5410:  /* *avx512f_gathersiv2di */
    case 5409:  /* *avx512f_gathersiv2di */
    case 5408:  /* *avx512f_gathersiv4sf */
    case 5407:  /* *avx512f_gathersiv4sf */
    case 5406:  /* *avx512f_gathersiv4si */
    case 5405:  /* *avx512f_gathersiv4si */
    case 5404:  /* *avx512f_gathersiv4df */
    case 5403:  /* *avx512f_gathersiv4df */
    case 5402:  /* *avx512f_gathersiv4di */
    case 5401:  /* *avx512f_gathersiv4di */
    case 5400:  /* *avx512f_gathersiv8sf */
    case 5399:  /* *avx512f_gathersiv8sf */
    case 5398:  /* *avx512f_gathersiv8si */
    case 5397:  /* *avx512f_gathersiv8si */
    case 5396:  /* *avx512f_gathersiv8df */
    case 5395:  /* *avx512f_gathersiv8df */
    case 5394:  /* *avx512f_gathersiv8di */
    case 5393:  /* *avx512f_gathersiv8di */
    case 5392:  /* *avx512f_gathersiv16sf */
    case 5391:  /* *avx512f_gathersiv16sf */
    case 5390:  /* *avx512f_gathersiv16si */
    case 5389:  /* *avx512f_gathersiv16si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 5388:  /* *avx2_gatherdiv8sf_4 */
    case 5387:  /* *avx2_gatherdiv8sf_4 */
    case 5386:  /* *avx2_gatherdiv8si_4 */
    case 5385:  /* *avx2_gatherdiv8si_4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 5384:  /* *avx2_gatherdiv8sf_3 */
    case 5383:  /* *avx2_gatherdiv8sf_3 */
    case 5382:  /* *avx2_gatherdiv8si_3 */
    case 5381:  /* *avx2_gatherdiv8si_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 5380:  /* *avx2_gatherdiv8sf_2 */
    case 5379:  /* *avx2_gatherdiv8sf_2 */
    case 5378:  /* *avx2_gatherdiv8si_2 */
    case 5377:  /* *avx2_gatherdiv8si_2 */
    case 5376:  /* *avx2_gatherdiv4sf_2 */
    case 5375:  /* *avx2_gatherdiv4sf_2 */
    case 5374:  /* *avx2_gatherdiv4si_2 */
    case 5373:  /* *avx2_gatherdiv4si_2 */
    case 5372:  /* *avx2_gatherdiv4df_2 */
    case 5371:  /* *avx2_gatherdiv4df_2 */
    case 5370:  /* *avx2_gatherdiv4di_2 */
    case 5369:  /* *avx2_gatherdiv4di_2 */
    case 5368:  /* *avx2_gatherdiv2df_2 */
    case 5367:  /* *avx2_gatherdiv2df_2 */
    case 5366:  /* *avx2_gatherdiv2di_2 */
    case 5365:  /* *avx2_gatherdiv2di_2 */
    case 5348:  /* *avx2_gathersiv8sf_2 */
    case 5347:  /* *avx2_gathersiv8sf_2 */
    case 5346:  /* *avx2_gathersiv8si_2 */
    case 5345:  /* *avx2_gathersiv8si_2 */
    case 5344:  /* *avx2_gathersiv4sf_2 */
    case 5343:  /* *avx2_gathersiv4sf_2 */
    case 5342:  /* *avx2_gathersiv4si_2 */
    case 5341:  /* *avx2_gathersiv4si_2 */
    case 5340:  /* *avx2_gathersiv4df_2 */
    case 5339:  /* *avx2_gathersiv4df_2 */
    case 5338:  /* *avx2_gathersiv4di_2 */
    case 5337:  /* *avx2_gathersiv4di_2 */
    case 5336:  /* *avx2_gathersiv2df_2 */
    case 5335:  /* *avx2_gathersiv2df_2 */
    case 5334:  /* *avx2_gathersiv2di_2 */
    case 5333:  /* *avx2_gathersiv2di_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 5364:  /* *avx2_gatherdiv8sf */
    case 5363:  /* *avx2_gatherdiv8sf */
    case 5362:  /* *avx2_gatherdiv8si */
    case 5361:  /* *avx2_gatherdiv8si */
    case 5360:  /* *avx2_gatherdiv4sf */
    case 5359:  /* *avx2_gatherdiv4sf */
    case 5358:  /* *avx2_gatherdiv4si */
    case 5357:  /* *avx2_gatherdiv4si */
    case 5356:  /* *avx2_gatherdiv4df */
    case 5355:  /* *avx2_gatherdiv4df */
    case 5354:  /* *avx2_gatherdiv4di */
    case 5353:  /* *avx2_gatherdiv4di */
    case 5352:  /* *avx2_gatherdiv2df */
    case 5351:  /* *avx2_gatherdiv2df */
    case 5350:  /* *avx2_gatherdiv2di */
    case 5349:  /* *avx2_gatherdiv2di */
    case 5332:  /* *avx2_gathersiv8sf */
    case 5331:  /* *avx2_gathersiv8sf */
    case 5330:  /* *avx2_gathersiv8si */
    case 5329:  /* *avx2_gathersiv8si */
    case 5328:  /* *avx2_gathersiv4sf */
    case 5327:  /* *avx2_gathersiv4sf */
    case 5326:  /* *avx2_gathersiv4si */
    case 5325:  /* *avx2_gathersiv4si */
    case 5324:  /* *avx2_gathersiv4df */
    case 5323:  /* *avx2_gathersiv4df */
    case 5322:  /* *avx2_gathersiv4di */
    case 5321:  /* *avx2_gathersiv4di */
    case 5320:  /* *avx2_gathersiv2df */
    case 5319:  /* *avx2_gathersiv2df */
    case 5318:  /* *avx2_gathersiv2di */
    case 5317:  /* *avx2_gathersiv2di */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 5311:  /* *vcvtps2ph_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 5301:  /* vcvtph2ps_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 5230:  /* avx2_maskstoreq256 */
    case 5229:  /* avx2_maskstored256 */
    case 5228:  /* avx2_maskstoreq */
    case 5227:  /* avx2_maskstored */
    case 5226:  /* avx_maskstorepd256 */
    case 5225:  /* avx_maskstoreps256 */
    case 5224:  /* avx_maskstorepd */
    case 5223:  /* avx_maskstoreps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 2);
      recog_data.dup_num[0] = 0;
      break;

    case 5222:  /* avx2_maskloadq256 */
    case 5221:  /* avx2_maskloadd256 */
    case 5220:  /* avx2_maskloadq */
    case 5219:  /* avx2_maskloadd */
    case 5218:  /* avx_maskloadpd256 */
    case 5217:  /* avx_maskloadps256 */
    case 5216:  /* avx_maskloadpd */
    case 5215:  /* avx_maskloadps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 5188:  /* *avx_vperm2f128v4df_nozero */
    case 5187:  /* *avx_vperm2f128v8sf_nozero */
    case 5186:  /* *avx_vperm2f128v8si_nozero */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 5182:  /* avx512vl_vpermt2varv16qi3_mask */
    case 5181:  /* avx512vl_vpermt2varv32qi3_mask */
    case 5180:  /* avx512bw_vpermt2varv64qi3_mask */
    case 5179:  /* avx512vl_vpermt2varv8hi3_mask */
    case 5178:  /* avx512vl_vpermt2varv16hi3_mask */
    case 5177:  /* avx512bw_vpermt2varv32hi3_mask */
    case 5176:  /* avx512vl_vpermt2varv2df3_mask */
    case 5175:  /* avx512vl_vpermt2varv2di3_mask */
    case 5174:  /* avx512vl_vpermt2varv4sf3_mask */
    case 5173:  /* avx512vl_vpermt2varv4si3_mask */
    case 5172:  /* avx512vl_vpermt2varv4df3_mask */
    case 5171:  /* avx512vl_vpermt2varv4di3_mask */
    case 5170:  /* avx512vl_vpermt2varv8sf3_mask */
    case 5169:  /* avx512vl_vpermt2varv8si3_mask */
    case 5168:  /* avx512f_vpermt2varv8df3_mask */
    case 5167:  /* avx512f_vpermt2varv8di3_mask */
    case 5166:  /* avx512f_vpermt2varv16sf3_mask */
    case 5165:  /* avx512f_vpermt2varv16si3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 5128:  /* *avx512vl_vpermi2varv2df3_mask */
    case 5127:  /* *avx512vl_vpermi2varv4df3_mask */
    case 5126:  /* *avx512f_vpermi2varv8df3_mask */
    case 5125:  /* *avx512vl_vpermi2varv4sf3_mask */
    case 5124:  /* *avx512vl_vpermi2varv8sf3_mask */
    case 5123:  /* *avx512f_vpermi2varv16sf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 5122:  /* *avx512vl_vpermi2varv16qi3_mask */
    case 5121:  /* *avx512vl_vpermi2varv32qi3_mask */
    case 5120:  /* *avx512bw_vpermi2varv64qi3_mask */
    case 5119:  /* *avx512vl_vpermi2varv8hi3_mask */
    case 5118:  /* *avx512vl_vpermi2varv16hi3_mask */
    case 5117:  /* *avx512bw_vpermi2varv32hi3_mask */
    case 5116:  /* *avx512vl_vpermi2varv2di3_mask */
    case 5115:  /* *avx512vl_vpermi2varv4di3_mask */
    case 5114:  /* *avx512vl_vpermi2varv4si3_mask */
    case 5113:  /* *avx512vl_vpermi2varv8si3_mask */
    case 5112:  /* *avx512f_vpermi2varv8di3_mask */
    case 5111:  /* *avx512f_vpermi2varv16si3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 5066:  /* avx_vbroadcastf128_v4df */
    case 5065:  /* avx_vbroadcastf128_v8sf */
    case 5064:  /* avx_vbroadcastf128_v4di */
    case 5063:  /* avx_vbroadcastf128_v8si */
    case 5062:  /* avx_vbroadcastf128_v16hi */
    case 5061:  /* avx_vbroadcastf128_v32qi */
    case 5050:  /* avx2_vbroadcasti128_v4di */
    case 5049:  /* avx2_vbroadcasti128_v8si */
    case 5048:  /* avx2_vbroadcasti128_v16hi */
    case 5047:  /* avx2_vbroadcasti128_v32qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 4949:  /* *avx_vpermilpv2df_mask */
    case 4947:  /* *avx_vpermilpv4df_mask */
    case 4945:  /* *avx512f_vpermilpv8df_mask */
    case 4943:  /* *avx_vpermilpv4sf_mask */
    case 4941:  /* *avx_vpermilpv8sf_mask */
    case 4939:  /* *avx512f_vpermilpv16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 5194:  /* *ssse3_palignrv2df_perm */
    case 5193:  /* *ssse3_palignrv4sf_perm */
    case 5192:  /* *ssse3_palignrv2di_perm */
    case 5191:  /* *ssse3_palignrv4si_perm */
    case 5190:  /* *ssse3_palignrv8hi_perm */
    case 5189:  /* *ssse3_palignrv16qi_perm */
    case 4948:  /* *avx_vpermilpv2df */
    case 4946:  /* *avx_vpermilpv4df */
    case 4944:  /* *avx512f_vpermilpv8df */
    case 4942:  /* *avx_vpermilpv4sf */
    case 4940:  /* *avx_vpermilpv8sf */
    case 4938:  /* *avx512f_vpermilpv16sf */
    case 4937:  /* *avx_vperm_broadcast_v4df */
    case 4936:  /* *avx_vperm_broadcast_v8sf */
    case 4935:  /* *avx_vperm_broadcast_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 4890:  /* *avx_vzeroupper_1 */
    case 4889:  /* *avx_vzeroupper */
    case 4888:  /* *avx_vzeroall */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      break;

    case 4872:  /* xop_maskcmp_uns2v2di3 */
    case 4871:  /* xop_maskcmp_uns2v4si3 */
    case 4870:  /* xop_maskcmp_uns2v8hi3 */
    case 4869:  /* xop_maskcmp_uns2v16qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 4868:  /* xop_maskcmp_unsv2di3 */
    case 4867:  /* xop_maskcmp_unsv4si3 */
    case 4866:  /* xop_maskcmp_unsv8hi3 */
    case 4865:  /* xop_maskcmp_unsv16qi3 */
    case 4864:  /* xop_maskcmpv2di3 */
    case 4863:  /* xop_maskcmpv4si3 */
    case 4862:  /* xop_maskcmpv8hi3 */
    case 4861:  /* xop_maskcmpv16qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 4852:  /* xop_shlv2di3 */
    case 4851:  /* xop_shlv4si3 */
    case 4850:  /* xop_shlv8hi3 */
    case 4849:  /* xop_shlv16qi3 */
    case 4848:  /* xop_shav2di3 */
    case 4847:  /* xop_shav4si3 */
    case 4846:  /* xop_shav8hi3 */
    case 4845:  /* xop_shav16qi3 */
    case 4844:  /* xop_vrotlv2di3 */
    case 4843:  /* xop_vrotlv4si3 */
    case 4842:  /* xop_vrotlv8hi3 */
    case 4841:  /* xop_vrotlv16qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 2), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 2), 1), 0);
      recog_data.dup_num[2] = 2;
      break;

    case 4832:  /* xop_pperm_pack_v8hi_v16qi */
    case 4831:  /* xop_pperm_pack_v4si_v8hi */
    case 4830:  /* xop_pperm_pack_v2di_v4si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 4819:  /* xop_phaddubq */
    case 4818:  /* xop_phaddbq */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[5] = 1;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[6] = 1;
      break;

    case 4823:  /* xop_phadduwq */
    case 4822:  /* xop_phaddwq */
    case 4817:  /* xop_phaddubd */
    case 4816:  /* xop_phaddbd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      break;

    case 4828:  /* xop_phsubdq */
    case 4827:  /* xop_phsubwd */
    case 4826:  /* xop_phsubbw */
    case 4825:  /* xop_phaddudq */
    case 4824:  /* xop_phadddq */
    case 4821:  /* xop_phadduwd */
    case 4820:  /* xop_phaddwd */
    case 4815:  /* xop_phaddubw */
    case 4814:  /* xop_phaddbw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 4813:  /* xop_pcmov_v2df */
    case 4812:  /* xop_pcmov_v4df256 */
    case 4811:  /* xop_pcmov_v4sf */
    case 4810:  /* xop_pcmov_v8sf256 */
    case 4809:  /* xop_pcmov_v2di */
    case 4808:  /* xop_pcmov_v4di256 */
    case 4807:  /* xop_pcmov_v4si */
    case 4806:  /* xop_pcmov_v8si256 */
    case 4805:  /* xop_pcmov_v8hi */
    case 4804:  /* xop_pcmov_v16hi256 */
    case 4803:  /* xop_pcmov_v16qi */
    case 4802:  /* xop_pcmov_v32qi256 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 4801:  /* xop_pmadcsswd */
    case 4800:  /* xop_pmadcswd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 4799:  /* xop_pmacsswd */
    case 4798:  /* xop_pmacswd */
    case 4797:  /* xop_pmacssdqh */
    case 4796:  /* xop_pmacsdqh */
    case 4795:  /* xop_pmacssdql */
    case 4794:  /* xop_pmacsdql */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 4789:  /* avx512er_vmrsqrt28v2df_round */
    case 4787:  /* avx512er_vmrsqrt28v4sf_round */
    case 4777:  /* avx512er_vmrcp28v2df_round */
    case 4775:  /* avx512er_vmrcp28v4sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 4757:  /* *avx512pf_scatterpfv8didf_mask */
    case 4756:  /* *avx512pf_scatterpfv8didf_mask */
    case 4755:  /* *avx512pf_scatterpfv8sidf_mask */
    case 4754:  /* *avx512pf_scatterpfv8sidf_mask */
    case 4753:  /* *avx512pf_scatterpfv8disf_mask */
    case 4752:  /* *avx512pf_scatterpfv8disf_mask */
    case 4751:  /* *avx512pf_scatterpfv16sisf_mask */
    case 4750:  /* *avx512pf_scatterpfv16sisf_mask */
    case 4749:  /* *avx512pf_gatherpfv8didf_mask */
    case 4748:  /* *avx512pf_gatherpfv8didf_mask */
    case 4747:  /* *avx512pf_gatherpfv8sidf_mask */
    case 4746:  /* *avx512pf_gatherpfv8sidf_mask */
    case 4745:  /* *avx512pf_gatherpfv8disf_mask */
    case 4744:  /* *avx512pf_gatherpfv8disf_mask */
    case 4743:  /* *avx512pf_gatherpfv16sisf_mask */
    case 4742:  /* *avx512pf_gatherpfv16sisf_mask */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (pat, 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (pat, 0, 1));
      break;

    case 4741:  /* sse4_2_pcmpistr_cconly */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      break;

    case 4740:  /* sse4_2_pcmpistrm */
    case 4739:  /* sse4_2_pcmpistri */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[2] = 1;
      break;

    case 4738:  /* sse4_2_pcmpistr */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 2);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[3] = 4;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[4] = 3;
      recog_data.dup_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[5] = 2;
      break;

    case 4737:  /* sse4_2_pcmpestr_cconly */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      break;

    case 4736:  /* sse4_2_pcmpestrm */
    case 4735:  /* sse4_2_pcmpestri */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 4);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 3);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[4] = 1;
      break;

    case 4734:  /* sse4_2_pcmpestr */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 4);
      recog_data.dup_num[0] = 6;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 3);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 2);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[3] = 3;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 4);
      recog_data.dup_num[5] = 6;
      recog_data.dup_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 3);
      recog_data.dup_num[6] = 5;
      recog_data.dup_loc[7] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[7] = 4;
      recog_data.dup_loc[8] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[8] = 3;
      recog_data.dup_loc[9] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[9] = 2;
      break;

    case 4688:  /* *sse4_1_zero_extendv2hiv2di2_mask_2 */
    case 4686:  /* *sse4_1_sign_extendv2hiv2di2_mask_2 */
    case 4656:  /* *avx2_zero_extendv4qiv4di2_mask_2 */
    case 4654:  /* *avx2_sign_extendv4qiv4di2_mask_2 */
    case 4612:  /* *sse4_1_zero_extendv4qiv4si2_mask_2 */
    case 4610:  /* *sse4_1_sign_extendv4qiv4si2_mask_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4687:  /* *sse4_1_zero_extendv2hiv2di2_2 */
    case 4685:  /* *sse4_1_sign_extendv2hiv2di2_2 */
    case 4655:  /* *avx2_zero_extendv4qiv4di2_2 */
    case 4653:  /* *avx2_sign_extendv4qiv4di2_2 */
    case 4611:  /* *sse4_1_zero_extendv4qiv4si2_2 */
    case 4609:  /* *sse4_1_sign_extendv4qiv4si2_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      break;

    case 4708:  /* *sse4_1_zero_extendv2siv2di2_mask_2 */
    case 4706:  /* *sse4_1_sign_extendv2siv2di2_mask_2 */
    case 4676:  /* *avx2_zero_extendv4hiv4di2_mask_2 */
    case 4674:  /* *avx2_sign_extendv4hiv4di2_mask_2 */
    case 4644:  /* *avx512f_zero_extendv8qiv8di2_mask_2 */
    case 4642:  /* *avx512f_sign_extendv8qiv8di2_mask_2 */
    case 4632:  /* *sse4_1_zero_extendv4hiv4si2_mask_2 */
    case 4630:  /* *sse4_1_sign_extendv4hiv4si2_mask_2 */
    case 4600:  /* *avx2_zero_extendv8qiv8si2_mask_2 */
    case 4598:  /* *avx2_sign_extendv8qiv8si2_mask_2 */
    case 4584:  /* *sse4_1_zero_extendv8qiv8hi2_mask_2 */
    case 4582:  /* *sse4_1_sign_extendv8qiv8hi2_mask_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4707:  /* *sse4_1_zero_extendv2siv2di2_2 */
    case 4705:  /* *sse4_1_sign_extendv2siv2di2_2 */
    case 4675:  /* *avx2_zero_extendv4hiv4di2_2 */
    case 4673:  /* *avx2_sign_extendv4hiv4di2_2 */
    case 4643:  /* *avx512f_zero_extendv8qiv8di2_2 */
    case 4641:  /* *avx512f_sign_extendv8qiv8di2_2 */
    case 4631:  /* *sse4_1_zero_extendv4hiv4si2_2 */
    case 4629:  /* *sse4_1_sign_extendv4hiv4si2_2 */
    case 4599:  /* *avx2_zero_extendv8qiv8si2_2 */
    case 4597:  /* *avx2_sign_extendv8qiv8si2_2 */
    case 4583:  /* *sse4_1_zero_extendv8qiv8hi2_2 */
    case 4581:  /* *sse4_1_sign_extendv8qiv8hi2_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      break;

    case 4540:  /* *avx_blendvpd256_ltint */
    case 4539:  /* *avx_blendvps256_ltint */
    case 4538:  /* *sse4_1_blendvpd_ltint */
    case 4537:  /* *sse4_1_blendvps_ltint */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 1));
      break;

    case 4559:  /* *sse4_1_pblendvb_lt */
    case 4558:  /* *avx2_pblendvb_lt */
    case 4536:  /* *sse4_1_blendvpd_lt */
    case 4535:  /* *avx_blendvpd256_lt */
    case 4534:  /* *sse4_1_blendvps_lt */
    case 4533:  /* *avx_blendvps256_lt */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      break;

    case 4460:  /* *ssse3_pmulhrswv8hi3_mask */
    case 4458:  /* *avx2_pmulhrswv16hi3_mask */
    case 4456:  /* *avx512bw_pmulhrswv32hi3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4461:  /* *ssse3_pmulhrswv4hi3 */
    case 4459:  /* *ssse3_pmulhrswv8hi3 */
    case 4457:  /* *avx2_pmulhrswv16hi3 */
    case 4455:  /* *avx512bw_pmulhrswv32hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 4452:  /* avx512bw_umulhrswv32hi3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4451:  /* avx512bw_umulhrswv32hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 1), 0));
      break;

    case 4433:  /* ssse3_phsubswv8hi3 */
    case 4432:  /* ssse3_phsubwv8hi3 */
    case 4431:  /* ssse3_phaddswv8hi3 */
    case 4430:  /* ssse3_phaddwv8hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[5] = 1;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 1), 0);
      recog_data.dup_num[6] = 1;
      recog_data.dup_loc[7] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[7] = 2;
      recog_data.dup_loc[8] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[8] = 2;
      recog_data.dup_loc[9] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1), 0);
      recog_data.dup_num[9] = 2;
      recog_data.dup_loc[10] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[10] = 2;
      recog_data.dup_loc[11] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 0);
      recog_data.dup_num[11] = 2;
      recog_data.dup_loc[12] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[12] = 2;
      recog_data.dup_loc[13] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 1), 0);
      recog_data.dup_num[13] = 2;
      break;

    case 4429:  /* avx2_phsubswv16hi3 */
    case 4428:  /* avx2_phsubwv16hi3 */
    case 4427:  /* avx2_phaddswv16hi3 */
    case 4426:  /* avx2_phaddwv16hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 1), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 1), 0), 0);
      recog_data.dup_num[5] = 1;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 1), 1), 0);
      recog_data.dup_num[6] = 1;
      recog_data.dup_loc[7] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 1), 0);
      recog_data.dup_num[7] = 2;
      recog_data.dup_loc[8] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1), 0), 0);
      recog_data.dup_num[8] = 2;
      recog_data.dup_loc[9] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1), 1), 0);
      recog_data.dup_num[9] = 2;
      recog_data.dup_loc[10] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0), 0);
      recog_data.dup_num[10] = 2;
      recog_data.dup_loc[11] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 1), 0);
      recog_data.dup_num[11] = 2;
      recog_data.dup_loc[12] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 1), 0), 0);
      recog_data.dup_num[12] = 2;
      recog_data.dup_loc[13] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 1), 1), 0);
      recog_data.dup_num[13] = 2;
      recog_data.dup_loc[14] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0), 0);
      recog_data.dup_num[14] = 1;
      recog_data.dup_loc[15] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 1), 0);
      recog_data.dup_num[15] = 1;
      recog_data.dup_loc[16] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[16] = 1;
      recog_data.dup_loc[17] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 1), 0);
      recog_data.dup_num[17] = 1;
      recog_data.dup_loc[18] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[18] = 1;
      recog_data.dup_loc[19] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 1), 0);
      recog_data.dup_num[19] = 1;
      recog_data.dup_loc[20] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[20] = 1;
      recog_data.dup_loc[21] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1), 1), 0);
      recog_data.dup_num[21] = 1;
      recog_data.dup_loc[22] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[22] = 2;
      recog_data.dup_loc[23] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[23] = 2;
      recog_data.dup_loc[24] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[24] = 2;
      recog_data.dup_loc[25] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 1), 0);
      recog_data.dup_num[25] = 2;
      recog_data.dup_loc[26] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[26] = 2;
      recog_data.dup_loc[27] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 1), 0);
      recog_data.dup_num[27] = 2;
      recog_data.dup_loc[28] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[28] = 2;
      recog_data.dup_loc[29] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 1), 1), 0);
      recog_data.dup_num[29] = 2;
      break;

    case 4407:  /* *sse2_movmskpd_uext_shift */
    case 4406:  /* *sse2_movmskpd_ext_shift */
    case 4405:  /* *avx_movmskpd256_uext_shift */
    case 4404:  /* *avx_movmskpd256_ext_shift */
    case 4403:  /* *sse_movmskps_uext_shift */
    case 4402:  /* *sse_movmskps_ext_shift */
    case 4401:  /* *avx_movmskps256_uext_shift */
    case 4400:  /* *avx_movmskps256_ext_shift */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0), 0), 1));
      break;

    case 4399:  /* *sse2_movmskpd_shift */
    case 4398:  /* *avx_movmskpd256_shift */
    case 4397:  /* *sse_movmskps_shift */
    case 4396:  /* *avx_movmskps256_shift */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      break;

    case 4417:  /* *sse2_pmovmskb_ext_lt */
    case 4416:  /* *sse2_pmovmskb_zext_lt */
    case 4415:  /* *avx2_pmovmskb_zext_lt */
    case 4395:  /* *sse2_movmskpd_uext_lt */
    case 4394:  /* *sse2_movmskpd_ext_lt */
    case 4393:  /* *avx_movmskpd256_uext_lt */
    case 4392:  /* *avx_movmskpd256_ext_lt */
    case 4391:  /* *sse_movmskps_uext_lt */
    case 4390:  /* *sse_movmskps_ext_lt */
    case 4389:  /* *avx_movmskps256_uext_lt */
    case 4388:  /* *avx_movmskps256_ext_lt */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0), 1));
      break;

    case 4368:  /* *sse2_uavgv8hi3_mask */
    case 4366:  /* *avx2_uavgv16hi3_mask */
    case 4364:  /* *avx512bw_uavgv32hi3_mask */
    case 4362:  /* *sse2_uavgv16qi3_mask */
    case 4360:  /* *avx2_uavgv32qi3_mask */
    case 4358:  /* *avx512bw_uavgv64qi3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      break;

    case 4367:  /* *sse2_uavgv8hi3 */
    case 4365:  /* *avx2_uavgv16hi3 */
    case 4363:  /* *avx512bw_uavgv32hi3 */
    case 4361:  /* *sse2_uavgv16qi3 */
    case 4359:  /* *avx2_uavgv32qi3 */
    case 4357:  /* *avx512bw_uavgv64qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 4326:  /* sse2_pshufhw_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 1));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4325:  /* sse2_pshufhw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      break;

    case 4324:  /* avx2_pshufhw_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 12));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 13));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 14));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 15));
      ro[10] = *(ro_loc[10] = &XEXP (XEXP (pat, 1), 1));
      ro[11] = *(ro_loc[11] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4323:  /* avx2_pshufhw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 12));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 13));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 14));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 15));
      break;

    case 4318:  /* avx2_pshuflw_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 8));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 9));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 10));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 11));
      ro[10] = *(ro_loc[10] = &XEXP (XEXP (pat, 1), 1));
      ro[11] = *(ro_loc[11] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4317:  /* avx2_pshuflw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 8));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 9));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 10));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 11));
      break;

    case 4957:  /* avx512f_permv8di_1_mask */
    case 4955:  /* avx512f_permv8df_1_mask */
    case 4312:  /* avx2_pshufd_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[10] = *(ro_loc[10] = &XEXP (XEXP (pat, 1), 1));
      ro[11] = *(ro_loc[11] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4956:  /* avx512f_permv8di_1 */
    case 4954:  /* avx512f_permv8df_1 */
    case 4311:  /* avx2_pshufd_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      break;

    case 4310:  /* avx512f_pshufd_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 8));
      ro[11] = *(ro_loc[11] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 9));
      ro[12] = *(ro_loc[12] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 10));
      ro[13] = *(ro_loc[13] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 11));
      ro[14] = *(ro_loc[14] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 12));
      ro[15] = *(ro_loc[15] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 13));
      ro[16] = *(ro_loc[16] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 14));
      ro[17] = *(ro_loc[17] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 15));
      ro[18] = *(ro_loc[18] = &XEXP (XEXP (pat, 1), 1));
      ro[19] = *(ro_loc[19] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4309:  /* avx512f_pshufd_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 8));
      ro[11] = *(ro_loc[11] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 9));
      ro[12] = *(ro_loc[12] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 10));
      ro[13] = *(ro_loc[13] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 11));
      ro[14] = *(ro_loc[14] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 12));
      ro[15] = *(ro_loc[15] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 13));
      ro[16] = *(ro_loc[16] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 14));
      ro[17] = *(ro_loc[17] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 15));
      break;

    case 5206:  /* vec_set_lo_v8sf_mask */
    case 5204:  /* vec_set_lo_v8si_mask */
    case 5198:  /* vec_set_lo_v4df_mask */
    case 5196:  /* vec_set_lo_v4di_mask */
    case 4288:  /* vec_set_lo_v8di_mask */
    case 4286:  /* vec_set_lo_v8df_mask */
    case 4280:  /* vec_set_lo_v16si_mask */
    case 4278:  /* vec_set_lo_v16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4555:  /* sse4_1_packusdw_mask */
    case 4553:  /* avx2_packusdw_mask */
    case 4551:  /* avx512bw_packusdw_mask */
    case 4224:  /* sse2_packuswb_mask */
    case 4222:  /* avx2_packuswb_mask */
    case 4220:  /* avx512bw_packuswb_mask */
    case 4218:  /* sse2_packssdw_mask */
    case 4216:  /* avx2_packssdw_mask */
    case 4214:  /* avx512bw_packssdw_mask */
    case 4212:  /* sse2_packsswb_mask */
    case 4210:  /* avx2_packsswb_mask */
    case 4208:  /* avx512bw_packsswb_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4206:  /* *avx512vl_testnmv2di3_zext_mask */
    case 4205:  /* *avx512vl_testnmv2di3_zext_mask */
    case 4204:  /* *avx512vl_testnmv2di3_zext_mask */
    case 4203:  /* *avx512vl_testnmv4di3_zext_mask */
    case 4202:  /* *avx512vl_testnmv4di3_zext_mask */
    case 4201:  /* *avx512vl_testnmv4di3_zext_mask */
    case 4200:  /* *avx512f_testnmv8di3_zext_mask */
    case 4199:  /* *avx512f_testnmv8di3_zext_mask */
    case 4198:  /* *avx512f_testnmv8di3_zext_mask */
    case 4197:  /* *avx512vl_testnmv4si3_zext_mask */
    case 4196:  /* *avx512vl_testnmv4si3_zext_mask */
    case 4195:  /* *avx512vl_testnmv4si3_zext_mask */
    case 4194:  /* *avx512vl_testnmv8si3_zext_mask */
    case 4193:  /* *avx512vl_testnmv8si3_zext_mask */
    case 4192:  /* *avx512vl_testnmv8si3_zext_mask */
    case 4191:  /* *avx512f_testnmv16si3_zext_mask */
    case 4190:  /* *avx512f_testnmv16si3_zext_mask */
    case 4189:  /* *avx512f_testnmv16si3_zext_mask */
    case 4188:  /* *avx512vl_testnmv8hi3_zext_mask */
    case 4187:  /* *avx512vl_testnmv8hi3_zext_mask */
    case 4186:  /* *avx512vl_testnmv8hi3_zext_mask */
    case 4185:  /* *avx512vl_testnmv16hi3_zext_mask */
    case 4184:  /* *avx512vl_testnmv16hi3_zext_mask */
    case 4183:  /* *avx512vl_testnmv16hi3_zext_mask */
    case 4182:  /* *avx512bw_testnmv32hi3_zext_mask */
    case 4181:  /* *avx512bw_testnmv32hi3_zext_mask */
    case 4180:  /* *avx512bw_testnmv32hi3_zext_mask */
    case 4179:  /* *avx512vl_testnmv16qi3_zext_mask */
    case 4178:  /* *avx512vl_testnmv16qi3_zext_mask */
    case 4177:  /* *avx512vl_testnmv16qi3_zext_mask */
    case 4176:  /* *avx512vl_testnmv32qi3_zext_mask */
    case 4175:  /* *avx512vl_testnmv32qi3_zext_mask */
    case 4174:  /* *avx512vl_testnmv32qi3_zext_mask */
    case 4173:  /* *avx512bw_testnmv64qi3_zext_mask */
    case 4172:  /* *avx512bw_testnmv64qi3_zext_mask */
    case 4171:  /* *avx512bw_testnmv64qi3_zext_mask */
    case 4134:  /* *avx512vl_testmv2di3_zext_mask */
    case 4133:  /* *avx512vl_testmv2di3_zext_mask */
    case 4132:  /* *avx512vl_testmv2di3_zext_mask */
    case 4131:  /* *avx512vl_testmv4di3_zext_mask */
    case 4130:  /* *avx512vl_testmv4di3_zext_mask */
    case 4129:  /* *avx512vl_testmv4di3_zext_mask */
    case 4128:  /* *avx512f_testmv8di3_zext_mask */
    case 4127:  /* *avx512f_testmv8di3_zext_mask */
    case 4126:  /* *avx512f_testmv8di3_zext_mask */
    case 4125:  /* *avx512vl_testmv4si3_zext_mask */
    case 4124:  /* *avx512vl_testmv4si3_zext_mask */
    case 4123:  /* *avx512vl_testmv4si3_zext_mask */
    case 4122:  /* *avx512vl_testmv8si3_zext_mask */
    case 4121:  /* *avx512vl_testmv8si3_zext_mask */
    case 4120:  /* *avx512vl_testmv8si3_zext_mask */
    case 4119:  /* *avx512f_testmv16si3_zext_mask */
    case 4118:  /* *avx512f_testmv16si3_zext_mask */
    case 4117:  /* *avx512f_testmv16si3_zext_mask */
    case 4116:  /* *avx512vl_testmv8hi3_zext_mask */
    case 4115:  /* *avx512vl_testmv8hi3_zext_mask */
    case 4114:  /* *avx512vl_testmv8hi3_zext_mask */
    case 4113:  /* *avx512vl_testmv16hi3_zext_mask */
    case 4112:  /* *avx512vl_testmv16hi3_zext_mask */
    case 4111:  /* *avx512vl_testmv16hi3_zext_mask */
    case 4110:  /* *avx512bw_testmv32hi3_zext_mask */
    case 4109:  /* *avx512bw_testmv32hi3_zext_mask */
    case 4108:  /* *avx512bw_testmv32hi3_zext_mask */
    case 4107:  /* *avx512vl_testmv16qi3_zext_mask */
    case 4106:  /* *avx512vl_testmv16qi3_zext_mask */
    case 4105:  /* *avx512vl_testmv16qi3_zext_mask */
    case 4104:  /* *avx512vl_testmv32qi3_zext_mask */
    case 4103:  /* *avx512vl_testmv32qi3_zext_mask */
    case 4102:  /* *avx512vl_testmv32qi3_zext_mask */
    case 4101:  /* *avx512bw_testmv64qi3_zext_mask */
    case 4100:  /* *avx512bw_testmv64qi3_zext_mask */
    case 4099:  /* *avx512bw_testmv64qi3_zext_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 5625:  /* avx512dq_vmfpclassv2df */
    case 5623:  /* avx512dq_vmfpclassv4sf */
    case 4170:  /* *avx512vl_testnmv2di3_zext */
    case 4169:  /* *avx512vl_testnmv2di3_zext */
    case 4168:  /* *avx512vl_testnmv2di3_zext */
    case 4167:  /* *avx512vl_testnmv4di3_zext */
    case 4166:  /* *avx512vl_testnmv4di3_zext */
    case 4165:  /* *avx512vl_testnmv4di3_zext */
    case 4164:  /* *avx512f_testnmv8di3_zext */
    case 4163:  /* *avx512f_testnmv8di3_zext */
    case 4162:  /* *avx512f_testnmv8di3_zext */
    case 4161:  /* *avx512vl_testnmv4si3_zext */
    case 4160:  /* *avx512vl_testnmv4si3_zext */
    case 4159:  /* *avx512vl_testnmv4si3_zext */
    case 4158:  /* *avx512vl_testnmv8si3_zext */
    case 4157:  /* *avx512vl_testnmv8si3_zext */
    case 4156:  /* *avx512vl_testnmv8si3_zext */
    case 4155:  /* *avx512f_testnmv16si3_zext */
    case 4154:  /* *avx512f_testnmv16si3_zext */
    case 4153:  /* *avx512f_testnmv16si3_zext */
    case 4152:  /* *avx512vl_testnmv8hi3_zext */
    case 4151:  /* *avx512vl_testnmv8hi3_zext */
    case 4150:  /* *avx512vl_testnmv8hi3_zext */
    case 4149:  /* *avx512vl_testnmv16hi3_zext */
    case 4148:  /* *avx512vl_testnmv16hi3_zext */
    case 4147:  /* *avx512vl_testnmv16hi3_zext */
    case 4146:  /* *avx512bw_testnmv32hi3_zext */
    case 4145:  /* *avx512bw_testnmv32hi3_zext */
    case 4144:  /* *avx512bw_testnmv32hi3_zext */
    case 4143:  /* *avx512vl_testnmv16qi3_zext */
    case 4142:  /* *avx512vl_testnmv16qi3_zext */
    case 4141:  /* *avx512vl_testnmv16qi3_zext */
    case 4140:  /* *avx512vl_testnmv32qi3_zext */
    case 4139:  /* *avx512vl_testnmv32qi3_zext */
    case 4138:  /* *avx512vl_testnmv32qi3_zext */
    case 4137:  /* *avx512bw_testnmv64qi3_zext */
    case 4136:  /* *avx512bw_testnmv64qi3_zext */
    case 4135:  /* *avx512bw_testnmv64qi3_zext */
    case 4098:  /* *avx512vl_testmv2di3_zext */
    case 4097:  /* *avx512vl_testmv2di3_zext */
    case 4096:  /* *avx512vl_testmv2di3_zext */
    case 4095:  /* *avx512vl_testmv4di3_zext */
    case 4094:  /* *avx512vl_testmv4di3_zext */
    case 4093:  /* *avx512vl_testmv4di3_zext */
    case 4092:  /* *avx512f_testmv8di3_zext */
    case 4091:  /* *avx512f_testmv8di3_zext */
    case 4090:  /* *avx512f_testmv8di3_zext */
    case 4089:  /* *avx512vl_testmv4si3_zext */
    case 4088:  /* *avx512vl_testmv4si3_zext */
    case 4087:  /* *avx512vl_testmv4si3_zext */
    case 4086:  /* *avx512vl_testmv8si3_zext */
    case 4085:  /* *avx512vl_testmv8si3_zext */
    case 4084:  /* *avx512vl_testmv8si3_zext */
    case 4083:  /* *avx512f_testmv16si3_zext */
    case 4082:  /* *avx512f_testmv16si3_zext */
    case 4081:  /* *avx512f_testmv16si3_zext */
    case 4080:  /* *avx512vl_testmv8hi3_zext */
    case 4079:  /* *avx512vl_testmv8hi3_zext */
    case 4078:  /* *avx512vl_testmv8hi3_zext */
    case 4077:  /* *avx512vl_testmv16hi3_zext */
    case 4076:  /* *avx512vl_testmv16hi3_zext */
    case 4075:  /* *avx512vl_testmv16hi3_zext */
    case 4074:  /* *avx512bw_testmv32hi3_zext */
    case 4073:  /* *avx512bw_testmv32hi3_zext */
    case 4072:  /* *avx512bw_testmv32hi3_zext */
    case 4071:  /* *avx512vl_testmv16qi3_zext */
    case 4070:  /* *avx512vl_testmv16qi3_zext */
    case 4069:  /* *avx512vl_testmv16qi3_zext */
    case 4068:  /* *avx512vl_testmv32qi3_zext */
    case 4067:  /* *avx512vl_testmv32qi3_zext */
    case 4066:  /* *avx512vl_testmv32qi3_zext */
    case 4065:  /* *avx512bw_testmv64qi3_zext */
    case 4064:  /* *avx512bw_testmv64qi3_zext */
    case 4063:  /* *avx512bw_testmv64qi3_zext */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      break;

    case 5942:  /* avx512vl_vpshufbitqmbv16qi_mask */
    case 5940:  /* avx512vl_vpshufbitqmbv32qi_mask */
    case 5938:  /* avx512vl_vpshufbitqmbv64qi_mask */
    case 5622:  /* avx512dq_fpclassv2df_mask */
    case 5620:  /* avx512dq_fpclassv4df_mask */
    case 5618:  /* avx512dq_fpclassv8df_mask */
    case 5616:  /* avx512dq_fpclassv4sf_mask */
    case 5614:  /* avx512dq_fpclassv8sf_mask */
    case 5612:  /* avx512dq_fpclassv16sf_mask */
    case 5310:  /* *vcvtps2ph */
    case 4062:  /* avx512vl_testnmv2di3_mask */
    case 4060:  /* avx512vl_testnmv4di3_mask */
    case 4058:  /* avx512f_testnmv8di3_mask */
    case 4056:  /* avx512vl_testnmv4si3_mask */
    case 4054:  /* avx512vl_testnmv8si3_mask */
    case 4052:  /* avx512f_testnmv16si3_mask */
    case 4050:  /* avx512vl_testnmv8hi3_mask */
    case 4048:  /* avx512vl_testnmv16hi3_mask */
    case 4046:  /* avx512bw_testnmv32hi3_mask */
    case 4044:  /* avx512vl_testnmv16qi3_mask */
    case 4042:  /* avx512vl_testnmv32qi3_mask */
    case 4040:  /* avx512bw_testnmv64qi3_mask */
    case 4038:  /* avx512vl_testmv2di3_mask */
    case 4036:  /* avx512vl_testmv4di3_mask */
    case 4034:  /* avx512f_testmv8di3_mask */
    case 4032:  /* avx512vl_testmv4si3_mask */
    case 4030:  /* avx512vl_testmv8si3_mask */
    case 4028:  /* avx512f_testmv16si3_mask */
    case 4026:  /* avx512vl_testmv8hi3_mask */
    case 4024:  /* avx512vl_testmv16hi3_mask */
    case 4022:  /* avx512bw_testmv32hi3_mask */
    case 4020:  /* avx512vl_testmv16qi3_mask */
    case 4018:  /* avx512vl_testmv32qi3_mask */
    case 4016:  /* avx512bw_testmv64qi3_mask */
    case 3879:  /* avx512vl_gtv8hi3_mask */
    case 3877:  /* avx512vl_gtv16hi3_mask */
    case 3875:  /* avx512bw_gtv32hi3_mask */
    case 3873:  /* avx512vl_gtv32qi3_mask */
    case 3871:  /* avx512vl_gtv16qi3_mask */
    case 3869:  /* avx512bw_gtv64qi3_mask */
    case 3867:  /* avx512vl_gtv2di3_mask */
    case 3865:  /* avx512vl_gtv4di3_mask */
    case 3863:  /* avx512f_gtv8di3_mask */
    case 3861:  /* avx512vl_gtv4si3_mask */
    case 3859:  /* avx512vl_gtv8si3_mask */
    case 3857:  /* avx512f_gtv16si3_mask */
    case 3846:  /* avx512vl_eqv2di3_mask_1 */
    case 3844:  /* avx512vl_eqv4di3_mask_1 */
    case 3842:  /* avx512f_eqv8di3_mask_1 */
    case 3840:  /* avx512vl_eqv4si3_mask_1 */
    case 3838:  /* avx512vl_eqv8si3_mask_1 */
    case 3836:  /* avx512f_eqv16si3_mask_1 */
    case 3834:  /* avx512vl_eqv8hi3_mask_1 */
    case 3832:  /* avx512vl_eqv16hi3_mask_1 */
    case 3830:  /* avx512bw_eqv32hi3_mask_1 */
    case 3828:  /* avx512vl_eqv32qi3_mask_1 */
    case 3826:  /* avx512vl_eqv16qi3_mask_1 */
    case 3824:  /* avx512bw_eqv64qi3_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 3542:  /* *sse4_1_mulv2siv2di3_mask */
    case 3540:  /* *vec_widen_smult_even_v8si_mask */
    case 3538:  /* *vec_widen_smult_even_v16si_mask */
    case 3536:  /* *vec_widen_umult_even_v4si_mask */
    case 3534:  /* *vec_widen_umult_even_v8si_mask */
    case 3532:  /* *vec_widen_umult_even_v16si_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3530:  /* *umulv8hi3_highpart_mask */
    case 3528:  /* *smulv8hi3_highpart_mask */
    case 3526:  /* *umulv16hi3_highpart_mask */
    case 3524:  /* *smulv16hi3_highpart_mask */
    case 3522:  /* *umulv32hi3_highpart_mask */
    case 3520:  /* *smulv32hi3_highpart_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3404:  /* avx512f_us_truncatev8div16qi2_mask_store */
    case 3403:  /* avx512f_truncatev8div16qi2_mask_store */
    case 3402:  /* avx512f_ss_truncatev8div16qi2_mask_store */
    case 3389:  /* avx512vl_us_truncatev2div2si2_mask_store */
    case 3388:  /* avx512vl_truncatev2div2si2_mask_store */
    case 3387:  /* avx512vl_ss_truncatev2div2si2_mask_store */
    case 3374:  /* avx512vl_us_truncatev2div2hi2_mask_store */
    case 3373:  /* avx512vl_truncatev2div2hi2_mask_store */
    case 3372:  /* avx512vl_ss_truncatev2div2hi2_mask_store */
    case 3362:  /* avx512vl_us_truncatev4div4hi2_mask_store */
    case 3361:  /* avx512vl_truncatev4div4hi2_mask_store */
    case 3360:  /* avx512vl_ss_truncatev4div4hi2_mask_store */
    case 3359:  /* avx512vl_us_truncatev4siv4hi2_mask_store */
    case 3358:  /* avx512vl_truncatev4siv4hi2_mask_store */
    case 3357:  /* avx512vl_ss_truncatev4siv4hi2_mask_store */
    case 3329:  /* avx512vl_us_truncatev8siv8qi2_mask_store */
    case 3328:  /* avx512vl_truncatev8siv8qi2_mask_store */
    case 3327:  /* avx512vl_ss_truncatev8siv8qi2_mask_store */
    case 3326:  /* avx512vl_us_truncatev8hiv8qi2_mask_store */
    case 3325:  /* avx512vl_truncatev8hiv8qi2_mask_store */
    case 3324:  /* avx512vl_ss_truncatev8hiv8qi2_mask_store */
    case 3305:  /* avx512vl_us_truncatev4div4qi2_mask_store */
    case 3304:  /* avx512vl_truncatev4div4qi2_mask_store */
    case 3303:  /* avx512vl_ss_truncatev4div4qi2_mask_store */
    case 3302:  /* avx512vl_us_truncatev4siv4qi2_mask_store */
    case 3301:  /* avx512vl_truncatev4siv4qi2_mask_store */
    case 3300:  /* avx512vl_ss_truncatev4siv4qi2_mask_store */
    case 3281:  /* avx512vl_us_truncatev2div2qi2_mask_store */
    case 3280:  /* avx512vl_truncatev2div2qi2_mask_store */
    case 3279:  /* avx512vl_ss_truncatev2div2qi2_mask_store */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[1] = 0;
      break;

    case 3395:  /* *avx512f_us_truncatev8div16qi2_store */
    case 3394:  /* *avx512f_truncatev8div16qi2_store */
    case 3393:  /* *avx512f_ss_truncatev8div16qi2_store */
    case 3380:  /* *avx512vl_us_truncatev2div2si2_store */
    case 3379:  /* *avx512vl_truncatev2div2si2_store */
    case 3378:  /* *avx512vl_ss_truncatev2div2si2_store */
    case 3365:  /* *avx512vl_us_truncatev2div2hi2_store */
    case 3364:  /* *avx512vl_truncatev2div2hi2_store */
    case 3363:  /* *avx512vl_ss_truncatev2div2hi2_store */
    case 3344:  /* *avx512vl_us_truncatev4div4hi2_store */
    case 3343:  /* *avx512vl_truncatev4div4hi2_store */
    case 3342:  /* *avx512vl_ss_truncatev4div4hi2_store */
    case 3341:  /* *avx512vl_us_truncatev4siv4hi2_store */
    case 3340:  /* *avx512vl_truncatev4siv4hi2_store */
    case 3339:  /* *avx512vl_ss_truncatev4siv4hi2_store */
    case 3311:  /* *avx512vl_us_truncatev8siv8qi2_store */
    case 3310:  /* *avx512vl_truncatev8siv8qi2_store */
    case 3309:  /* *avx512vl_ss_truncatev8siv8qi2_store */
    case 3308:  /* *avx512vl_us_truncatev8hiv8qi2_store */
    case 3307:  /* *avx512vl_truncatev8hiv8qi2_store */
    case 3306:  /* *avx512vl_ss_truncatev8hiv8qi2_store */
    case 3287:  /* *avx512vl_us_truncatev4div4qi2_store */
    case 3286:  /* *avx512vl_truncatev4div4qi2_store */
    case 3285:  /* *avx512vl_ss_truncatev4div4qi2_store */
    case 3284:  /* *avx512vl_us_truncatev4siv4qi2_store */
    case 3283:  /* *avx512vl_truncatev4siv4qi2_store */
    case 3282:  /* *avx512vl_ss_truncatev4siv4qi2_store */
    case 3272:  /* *avx512vl_us_truncatev2div2qi2_store */
    case 3271:  /* *avx512vl_truncatev2div2qi2_store */
    case 3270:  /* *avx512vl_ss_truncatev2div2qi2_store */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 3194:  /* sse2_shufpd_v2df */
    case 3193:  /* sse2_shufpd_v2di */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      break;

    case 3180:  /* sse2_shufpd_v2df_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4308:  /* avx512f_shuf_i32x4_1_mask */
    case 4306:  /* avx512f_shuf_f32x4_1_mask */
    case 3175:  /* avx512f_shufps512_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[11] = *(ro_loc[11] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 8));
      ro[12] = *(ro_loc[12] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 9));
      ro[13] = *(ro_loc[13] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 10));
      ro[14] = *(ro_loc[14] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 11));
      ro[15] = *(ro_loc[15] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 12));
      ro[16] = *(ro_loc[16] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 13));
      ro[17] = *(ro_loc[17] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 14));
      ro[18] = *(ro_loc[18] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 15));
      ro[19] = *(ro_loc[19] = &XEXP (XEXP (pat, 1), 1));
      ro[20] = *(ro_loc[20] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4307:  /* avx512f_shuf_i32x4_1 */
    case 4305:  /* avx512f_shuf_f32x4_1 */
    case 3174:  /* avx512f_shufps512_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      ro[11] = *(ro_loc[11] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 8));
      ro[12] = *(ro_loc[12] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 9));
      ro[13] = *(ro_loc[13] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 10));
      ro[14] = *(ro_loc[14] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 11));
      ro[15] = *(ro_loc[15] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 12));
      ro[16] = *(ro_loc[16] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 13));
      ro[17] = *(ro_loc[17] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 14));
      ro[18] = *(ro_loc[18] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 15));
      break;

    case 3173:  /* *avx512f_rndscalev2df_round */
    case 3171:  /* *avx512f_rndscalev4sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 4733:  /* *sse4_1_roundsd */
    case 4732:  /* *sse4_1_roundss */
    case 3172:  /* *avx512f_rndscalev2df */
    case 3170:  /* *avx512f_rndscalev4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      break;

    case 3169:  /* avx512f_rndscalev2df_mask_round */
    case 3165:  /* avx512f_rndscalev4sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3168:  /* avx512f_rndscalev2df_round */
    case 3164:  /* avx512f_rndscalev4sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3167:  /* avx512f_rndscalev2df_mask */
    case 3163:  /* avx512f_rndscalev4sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 4731:  /* sse4_1_roundsd */
    case 4730:  /* sse4_1_roundss */
    case 3166:  /* avx512f_rndscalev2df */
    case 3162:  /* avx512f_rndscalev4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      break;

    case 3137:  /* avx512f_sfixupimmv2df_mask_round */
    case 3135:  /* avx512f_sfixupimmv4sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 3136:  /* avx512f_sfixupimmv2df_mask */
    case 3134:  /* avx512f_sfixupimmv4sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 3133:  /* avx512f_sfixupimmv2df_maskz_1_round */
    case 3129:  /* avx512f_sfixupimmv4sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3132:  /* avx512f_sfixupimmv2df_maskz_1 */
    case 3128:  /* avx512f_sfixupimmv4sf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3131:  /* avx512f_sfixupimmv2df_round */
    case 3127:  /* avx512f_sfixupimmv4sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3130:  /* avx512f_sfixupimmv2df */
    case 3126:  /* avx512f_sfixupimmv4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 3));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3125:  /* avx512vl_fixupimmv2df_mask_round */
    case 3123:  /* avx512vl_fixupimmv4df_mask_round */
    case 3121:  /* avx512f_fixupimmv8df_mask_round */
    case 3119:  /* avx512vl_fixupimmv4sf_mask_round */
    case 3117:  /* avx512vl_fixupimmv8sf_mask_round */
    case 3115:  /* avx512f_fixupimmv16sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3113:  /* avx512vl_fixupimmv2df_maskz_1_round */
    case 3109:  /* avx512vl_fixupimmv4df_maskz_1_round */
    case 3105:  /* avx512f_fixupimmv8df_maskz_1_round */
    case 3101:  /* avx512vl_fixupimmv4sf_maskz_1_round */
    case 3097:  /* avx512vl_fixupimmv8sf_maskz_1_round */
    case 3093:  /* avx512f_fixupimmv16sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3111:  /* avx512vl_fixupimmv2df_round */
    case 3107:  /* avx512vl_fixupimmv4df_round */
    case 3103:  /* avx512f_fixupimmv8df_round */
    case 3099:  /* avx512vl_fixupimmv4sf_round */
    case 3095:  /* avx512vl_fixupimmv8sf_round */
    case 3091:  /* avx512f_fixupimmv16sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3124:  /* avx512vl_fixupimmv2df_mask */
    case 3122:  /* avx512vl_fixupimmv4df_mask */
    case 3120:  /* avx512f_fixupimmv8df_mask */
    case 3118:  /* avx512vl_fixupimmv4sf_mask */
    case 3116:  /* avx512vl_fixupimmv8sf_mask */
    case 3114:  /* avx512f_fixupimmv16sf_mask */
    case 3045:  /* avx512vl_vternlogv2di_mask */
    case 3044:  /* avx512vl_vternlogv4di_mask */
    case 3043:  /* avx512f_vternlogv8di_mask */
    case 3042:  /* avx512vl_vternlogv4si_mask */
    case 3041:  /* avx512vl_vternlogv8si_mask */
    case 3040:  /* avx512f_vternlogv16si_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3112:  /* avx512vl_fixupimmv2df_maskz_1 */
    case 3108:  /* avx512vl_fixupimmv4df_maskz_1 */
    case 3104:  /* avx512f_fixupimmv8df_maskz_1 */
    case 3100:  /* avx512vl_fixupimmv4sf_maskz_1 */
    case 3096:  /* avx512vl_fixupimmv8sf_maskz_1 */
    case 3092:  /* avx512f_fixupimmv16sf_maskz_1 */
    case 3039:  /* avx512vl_vternlogv2di_maskz_1 */
    case 3037:  /* avx512vl_vternlogv4di_maskz_1 */
    case 3035:  /* avx512f_vternlogv8di_maskz_1 */
    case 3033:  /* avx512vl_vternlogv4si_maskz_1 */
    case 3031:  /* avx512vl_vternlogv8si_maskz_1 */
    case 3029:  /* avx512f_vternlogv16si_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4880:  /* xop_vpermil2v2df3 */
    case 4879:  /* xop_vpermil2v4df3 */
    case 4878:  /* xop_vpermil2v4sf3 */
    case 4877:  /* xop_vpermil2v8sf3 */
    case 4521:  /* sse4a_insertqi */
    case 3110:  /* avx512vl_fixupimmv2df */
    case 3106:  /* avx512vl_fixupimmv4df */
    case 3102:  /* avx512f_fixupimmv8df */
    case 3098:  /* avx512vl_fixupimmv4sf */
    case 3094:  /* avx512vl_fixupimmv8sf */
    case 3090:  /* avx512f_fixupimmv16sf */
    case 3038:  /* avx512vl_vternlogv2di */
    case 3036:  /* avx512vl_vternlogv4di */
    case 3034:  /* avx512f_vternlogv8di */
    case 3032:  /* avx512vl_vternlogv4si */
    case 3030:  /* avx512vl_vternlogv8si */
    case 3028:  /* avx512f_vternlogv16si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 3));
      break;

    case 3077:  /* avx512f_sgetexpv2df_mask_round */
    case 3073:  /* avx512f_sgetexpv4sf_mask_round */
    case 3003:  /* avx512f_vmscalefv2df_mask_round */
    case 2999:  /* avx512f_vmscalefv4sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3075:  /* avx512f_sgetexpv2df_mask */
    case 3071:  /* avx512f_sgetexpv4sf_mask */
    case 3002:  /* avx512f_vmscalefv2df_mask */
    case 2998:  /* avx512f_vmscalefv4sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3076:  /* avx512f_sgetexpv2df_round */
    case 3072:  /* avx512f_sgetexpv4sf_round */
    case 3001:  /* avx512f_vmscalefv2df_round */
    case 2997:  /* avx512f_vmscalefv4sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3074:  /* avx512f_sgetexpv2df */
    case 3070:  /* avx512f_sgetexpv4sf */
    case 3000:  /* avx512f_vmscalefv2df */
    case 2996:  /* avx512f_vmscalefv4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2928:  /* *avx512dq_vextracti64x2_1 */
    case 2926:  /* *avx512dq_vextractf64x2_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      break;

    case 4953:  /* avx2_permv4df_1_mask */
    case 4951:  /* avx2_permv4di_1_mask */
    case 4320:  /* sse2_pshuflw_1_mask */
    case 4314:  /* sse2_pshufd_1_mask */
    case 2933:  /* avx512f_vextracti32x4_1_mask */
    case 2931:  /* avx512f_vextractf32x4_1_mask */
    case 2925:  /* avx512f_vextracti32x4_1_maskm */
    case 2924:  /* avx512f_vextractf32x4_1_maskm */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 1));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2929:  /* avx512dq_vextracti64x2_1_mask */
    case 2927:  /* avx512dq_vextractf64x2_1_mask */
    case 2923:  /* avx512dq_vextracti64x2_1_maskm */
    case 2922:  /* avx512dq_vextractf64x2_1_maskm */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2917:  /* sse4_1_insertps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 4356:  /* vec_setv4di_0 */
    case 4355:  /* vec_setv8di_0 */
    case 4327:  /* sse2_loadld */
    case 3206:  /* vec_setv4df_0 */
    case 3205:  /* vec_setv8df_0 */
    case 2918:  /* vec_setv2df_0 */
    case 2916:  /* vec_setv16sf_0 */
    case 2915:  /* vec_setv16si_0 */
    case 2914:  /* vec_setv8sf_0 */
    case 2913:  /* vec_setv8si_0 */
    case 2911:  /* vec_setv4sf_0 */
    case 2910:  /* vec_setv4si_0 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 3201:  /* sse2_movsd */
    case 2900:  /* sse_movss */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 5213:  /* vec_set_lo_v32qi */
    case 5211:  /* vec_set_lo_v16hi */
    case 5205:  /* vec_set_lo_v8sf */
    case 5203:  /* vec_set_lo_v8si */
    case 5197:  /* vec_set_lo_v4df */
    case 5195:  /* vec_set_lo_v4di */
    case 4287:  /* vec_set_lo_v8di */
    case 4285:  /* vec_set_lo_v8df */
    case 4279:  /* vec_set_lo_v16si */
    case 4277:  /* vec_set_lo_v16sf */
    case 3200:  /* sse2_loadlpd */
    case 2899:  /* sse_loadlps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 4295:  /* *avx512dq_shuf_f64x2_1 */
    case 4293:  /* *avx512dq_shuf_i64x2_1 */
    case 3178:  /* avx_shufpd256_1 */
    case 2895:  /* sse_shufps_v4sf */
    case 2894:  /* sse_shufps_v4si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      break;

    case 4296:  /* avx512dq_shuf_f64x2_1_mask */
    case 4294:  /* avx512dq_shuf_i64x2_1_mask */
    case 3179:  /* avx_shufpd256_1_mask */
    case 2893:  /* sse_shufps_v4sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 1), 1));
      ro[8] = *(ro_loc[8] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4304:  /* avx512vl_shuf_f32x4_1_mask */
    case 4302:  /* avx512vl_shuf_i32x4_1_mask */
    case 4300:  /* avx512f_shuf_i64x2_1_mask */
    case 4298:  /* avx512f_shuf_f64x2_1_mask */
    case 3177:  /* avx512f_shufpd512_1_mask */
    case 2892:  /* avx_shufps256_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[11] = *(ro_loc[11] = &XEXP (XEXP (pat, 1), 1));
      ro[12] = *(ro_loc[12] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4303:  /* avx512vl_shuf_f32x4_1 */
    case 4301:  /* avx512vl_shuf_i32x4_1 */
    case 4299:  /* avx512f_shuf_i64x2_1 */
    case 4297:  /* avx512f_shuf_f64x2_1 */
    case 3176:  /* avx512f_shufpd512_1 */
    case 2891:  /* avx_shufps256_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      break;

    case 2890:  /* avx512f_movsldup512_mask */
    case 2888:  /* sse3_movsldup_mask */
    case 2886:  /* avx_movsldup256_mask */
    case 2884:  /* avx512f_movshdup512_mask */
    case 2882:  /* sse3_movshdup_mask */
    case 2880:  /* avx_movshdup256_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2889:  /* *avx512f_movsldup512 */
    case 2887:  /* sse3_movsldup */
    case 2885:  /* avx_movsldup256 */
    case 2883:  /* *avx512f_movshdup512 */
    case 2881:  /* sse3_movshdup */
    case 2879:  /* avx_movshdup256 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 4260:  /* vec_interleave_lowv4si_mask */
    case 4258:  /* avx512f_interleave_lowv16si_mask */
    case 4256:  /* avx2_interleave_lowv8si_mask */
    case 4254:  /* vec_interleave_highv4si_mask */
    case 4252:  /* avx512f_interleave_highv16si_mask */
    case 4250:  /* avx2_interleave_highv8si_mask */
    case 4248:  /* vec_interleave_lowv8hi_mask */
    case 4246:  /* avx2_interleave_lowv16hi_mask */
    case 4244:  /* avx512bw_interleave_lowv32hi_mask */
    case 4242:  /* vec_interleave_highv8hi_mask */
    case 4240:  /* avx2_interleave_highv16hi_mask */
    case 4238:  /* avx512bw_interleave_highv32hi_mask */
    case 4236:  /* vec_interleave_lowv16qi_mask */
    case 4234:  /* avx2_interleave_lowv32qi_mask */
    case 4232:  /* avx512bw_interleave_lowv64qi_mask */
    case 4230:  /* vec_interleave_highv16qi_mask */
    case 4228:  /* avx2_interleave_highv32qi_mask */
    case 4226:  /* avx512bw_interleave_highv64qi_mask */
    case 3192:  /* vec_interleave_lowv2di_mask */
    case 3190:  /* avx512f_interleave_lowv8di_mask */
    case 3188:  /* avx2_interleave_lowv4di_mask */
    case 3186:  /* vec_interleave_highv2di_mask */
    case 3184:  /* avx512f_interleave_highv8di_mask */
    case 3182:  /* avx2_interleave_highv4di_mask */
    case 2994:  /* avx512vl_unpcklpd128_mask */
    case 2993:  /* *avx_unpcklpd256_mask */
    case 2991:  /* *avx512f_unpcklpd512_mask */
    case 2988:  /* avx512vl_unpckhpd128_mask */
    case 2987:  /* avx_unpckhpd256_mask */
    case 2985:  /* avx512f_unpckhpd512_mask */
    case 2877:  /* unpcklps128_mask */
    case 2876:  /* avx_unpcklps256_mask */
    case 2874:  /* avx512f_unpcklps512_mask */
    case 2872:  /* vec_interleave_highv4sf_mask */
    case 2870:  /* avx_unpckhps256_mask */
    case 2868:  /* avx512f_unpckhps512_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2862:  /* *avx512vl_cvtmask2qv2di */
    case 2861:  /* *avx512vl_cvtmask2qv4di */
    case 2860:  /* *avx512f_cvtmask2qv8di */
    case 2859:  /* *avx512vl_cvtmask2dv4si */
    case 2858:  /* *avx512vl_cvtmask2dv8si */
    case 2857:  /* *avx512f_cvtmask2dv16si */
    case 2856:  /* *avx512vl_cvtmask2wv8hi */
    case 2855:  /* *avx512vl_cvtmask2wv16hi */
    case 2854:  /* *avx512bw_cvtmask2wv32hi */
    case 2853:  /* *avx512vl_cvtmask2bv32qi */
    case 2852:  /* *avx512vl_cvtmask2bv16qi */
    case 2851:  /* *avx512bw_cvtmask2bv64qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 3401:  /* *avx512f_us_truncatev8div16qi2_mask_1 */
    case 3400:  /* *avx512f_truncatev8div16qi2_mask_1 */
    case 3399:  /* *avx512f_ss_truncatev8div16qi2_mask_1 */
    case 3386:  /* *avx512vl_us_truncatev2div2si2_mask_1 */
    case 3385:  /* *avx512vl_truncatev2div2si2_mask_1 */
    case 3384:  /* *avx512vl_ss_truncatev2div2si2_mask_1 */
    case 3371:  /* *avx512vl_us_truncatev2div2hi2_mask_1 */
    case 3370:  /* *avx512vl_truncatev2div2hi2_mask_1 */
    case 3369:  /* *avx512vl_ss_truncatev2div2hi2_mask_1 */
    case 3356:  /* *avx512vl_us_truncatev4div4hi2_mask_1 */
    case 3355:  /* *avx512vl_truncatev4div4hi2_mask_1 */
    case 3354:  /* *avx512vl_ss_truncatev4div4hi2_mask_1 */
    case 3353:  /* *avx512vl_us_truncatev4siv4hi2_mask_1 */
    case 3352:  /* *avx512vl_truncatev4siv4hi2_mask_1 */
    case 3351:  /* *avx512vl_ss_truncatev4siv4hi2_mask_1 */
    case 3323:  /* *avx512vl_us_truncatev8siv8qi2_mask_1 */
    case 3322:  /* *avx512vl_truncatev8siv8qi2_mask_1 */
    case 3321:  /* *avx512vl_ss_truncatev8siv8qi2_mask_1 */
    case 3320:  /* *avx512vl_us_truncatev8hiv8qi2_mask_1 */
    case 3319:  /* *avx512vl_truncatev8hiv8qi2_mask_1 */
    case 3318:  /* *avx512vl_ss_truncatev8hiv8qi2_mask_1 */
    case 3299:  /* *avx512vl_us_truncatev4div4qi2_mask_1 */
    case 3298:  /* *avx512vl_truncatev4div4qi2_mask_1 */
    case 3297:  /* *avx512vl_ss_truncatev4div4qi2_mask_1 */
    case 3296:  /* *avx512vl_us_truncatev4siv4qi2_mask_1 */
    case 3295:  /* *avx512vl_truncatev4siv4qi2_mask_1 */
    case 3294:  /* *avx512vl_ss_truncatev4siv4qi2_mask_1 */
    case 3278:  /* *avx512vl_us_truncatev2div2qi2_mask_1 */
    case 3277:  /* *avx512vl_truncatev2div2qi2_mask_1 */
    case 3276:  /* *avx512vl_ss_truncatev2div2qi2_mask_1 */
    case 2815:  /* *sse2_cvttpd2dq_mask_1 */
    case 2756:  /* *ufix_truncv2dfv2si2_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 3398:  /* avx512f_us_truncatev8div16qi2_mask */
    case 3397:  /* avx512f_truncatev8div16qi2_mask */
    case 3396:  /* avx512f_ss_truncatev8div16qi2_mask */
    case 3383:  /* avx512vl_us_truncatev2div2si2_mask */
    case 3382:  /* avx512vl_truncatev2div2si2_mask */
    case 3381:  /* avx512vl_ss_truncatev2div2si2_mask */
    case 3368:  /* avx512vl_us_truncatev2div2hi2_mask */
    case 3367:  /* avx512vl_truncatev2div2hi2_mask */
    case 3366:  /* avx512vl_ss_truncatev2div2hi2_mask */
    case 3350:  /* avx512vl_us_truncatev4div4hi2_mask */
    case 3349:  /* avx512vl_truncatev4div4hi2_mask */
    case 3348:  /* avx512vl_ss_truncatev4div4hi2_mask */
    case 3347:  /* avx512vl_us_truncatev4siv4hi2_mask */
    case 3346:  /* avx512vl_truncatev4siv4hi2_mask */
    case 3345:  /* avx512vl_ss_truncatev4siv4hi2_mask */
    case 3317:  /* avx512vl_us_truncatev8siv8qi2_mask */
    case 3316:  /* avx512vl_truncatev8siv8qi2_mask */
    case 3315:  /* avx512vl_ss_truncatev8siv8qi2_mask */
    case 3314:  /* avx512vl_us_truncatev8hiv8qi2_mask */
    case 3313:  /* avx512vl_truncatev8hiv8qi2_mask */
    case 3312:  /* avx512vl_ss_truncatev8hiv8qi2_mask */
    case 3293:  /* avx512vl_us_truncatev4div4qi2_mask */
    case 3292:  /* avx512vl_truncatev4div4qi2_mask */
    case 3291:  /* avx512vl_ss_truncatev4div4qi2_mask */
    case 3290:  /* avx512vl_us_truncatev4siv4qi2_mask */
    case 3289:  /* avx512vl_truncatev4siv4qi2_mask */
    case 3288:  /* avx512vl_ss_truncatev4siv4qi2_mask */
    case 3275:  /* avx512vl_us_truncatev2div2qi2_mask */
    case 3274:  /* avx512vl_truncatev2div2qi2_mask */
    case 3273:  /* avx512vl_ss_truncatev2div2qi2_mask */
    case 2814:  /* sse2_cvttpd2dq_mask */
    case 2755:  /* ufix_truncv2dfv2si2_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 2745:  /* *ufix_notruncv2dfv2si2_mask_1 */
    case 2734:  /* *sse2_cvtpd2dq_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 2744:  /* ufix_notruncv2dfv2si2_mask */
    case 2733:  /* sse2_cvtpd2dq_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 2830:  /* *sse2_cvtpd2ps_mask_1 */
    case 2714:  /* *floatunsv2div2sf2_mask_1 */
    case 2713:  /* *floatv2div2sf2_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 2829:  /* *sse2_cvtpd2ps_mask */
    case 2712:  /* *floatunsv2div2sf2_mask */
    case 2711:  /* *floatv2div2sf2_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 2624:  /* avx512dq_cvtps2uqqv2di_mask */
    case 2616:  /* avx512dq_cvtps2qqv2di_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 5309:  /* avx512f_vcvtph2ps512_mask_round */
    case 4785:  /* avx512er_rsqrt28v8df_mask_round */
    case 4781:  /* avx512er_rsqrt28v16sf_mask_round */
    case 4773:  /* avx512er_rcp28v8df_mask_round */
    case 4769:  /* avx512er_rcp28v16sf_mask_round */
    case 4765:  /* avx512er_exp2v8df_mask_round */
    case 4761:  /* avx512er_exp2v16sf_mask_round */
    case 3069:  /* avx512vl_getexpv2df_mask_round */
    case 3065:  /* avx512vl_getexpv4df_mask_round */
    case 3061:  /* avx512f_getexpv8df_mask_round */
    case 3057:  /* avx512vl_getexpv4sf_mask_round */
    case 3053:  /* avx512vl_getexpv8sf_mask_round */
    case 3049:  /* avx512f_getexpv16sf_mask_round */
    case 2788:  /* ufix_notruncv8dfv8di2_mask_round */
    case 2780:  /* fix_notruncv8dfv8di2_mask_round */
    case 2742:  /* ufix_notruncv4dfv4si2_mask_round */
    case 2738:  /* ufix_notruncv8dfv8si2_mask_round */
    case 2728:  /* avx512f_cvtpd2dq512_mask_round */
    case 2620:  /* avx512dq_cvtps2uqqv8di_mask_round */
    case 2612:  /* avx512dq_cvtps2qqv8di_mask_round */
    case 2608:  /* avx512vl_ufix_notruncv4sfv4si_mask_round */
    case 2604:  /* avx512vl_ufix_notruncv8sfv8si_mask_round */
    case 2600:  /* avx512f_ufix_notruncv16sfv16si_mask_round */
    case 2596:  /* avx512f_fix_notruncv16sfv16si_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 5307:  /* *avx512f_vcvtph2ps512_round */
    case 4783:  /* *avx512er_rsqrt28v8df_round */
    case 4779:  /* *avx512er_rsqrt28v16sf_round */
    case 4771:  /* *avx512er_rcp28v8df_round */
    case 4767:  /* *avx512er_rcp28v16sf_round */
    case 4763:  /* avx512er_exp2v8df_round */
    case 4759:  /* avx512er_exp2v16sf_round */
    case 3067:  /* avx512vl_getexpv2df_round */
    case 3063:  /* avx512vl_getexpv4df_round */
    case 3059:  /* avx512f_getexpv8df_round */
    case 3055:  /* avx512vl_getexpv4sf_round */
    case 3051:  /* avx512vl_getexpv8sf_round */
    case 3047:  /* avx512f_getexpv16sf_round */
    case 2786:  /* ufix_notruncv8dfv8di2_round */
    case 2778:  /* fix_notruncv8dfv8di2_round */
    case 2740:  /* ufix_notruncv4dfv4si2_round */
    case 2736:  /* ufix_notruncv8dfv8si2_round */
    case 2726:  /* avx512f_cvtpd2dq512_round */
    case 2618:  /* *avx512dq_cvtps2uqqv8di_round */
    case 2610:  /* *avx512dq_cvtps2qqv8di_round */
    case 2606:  /* *avx512vl_ufix_notruncv4sfv4si_round */
    case 2602:  /* *avx512vl_ufix_notruncv8sfv8si_round */
    case 2598:  /* *avx512f_ufix_notruncv16sfv16si_round */
    case 2594:  /* avx512f_fix_notruncv16sfv16si_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2668:  /* sse2_cvttsd2siq_round */
    case 2666:  /* sse2_cvttsd2si_round */
    case 2658:  /* avx512f_vcvttsd2usiq_round */
    case 2656:  /* avx512f_vcvttsd2usi_round */
    case 2650:  /* avx512f_vcvttss2usiq_round */
    case 2648:  /* avx512f_vcvttss2usi_round */
    case 2561:  /* sse_cvttss2siq_round */
    case 2559:  /* sse_cvttss2si_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2662:  /* sse2_cvtsd2siq_round */
    case 2660:  /* sse2_cvtsd2si_round */
    case 2654:  /* avx512f_vcvtsd2usiq_round */
    case 2652:  /* avx512f_vcvtsd2usi_round */
    case 2646:  /* avx512f_vcvtss2usiq_round */
    case 2644:  /* avx512f_vcvtss2usi_round */
    case 2555:  /* sse_cvtss2siq_round */
    case 2553:  /* sse_cvtss2si_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2820:  /* sse2_cvtss2sd_round */
    case 2817:  /* sse2_cvtsd2ss_round */
    case 2642:  /* sse2_cvtsi2sdq_round */
    case 2568:  /* cvtusi2sd64_round */
    case 2566:  /* cvtusi2ss64_round */
    case 2563:  /* cvtusi2ss32_round */
    case 2551:  /* sse_cvtsi2ssq_round */
    case 2549:  /* sse_cvtsi2ss_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2821:  /* *sse2_vd_cvtss2sd */
    case 2819:  /* sse2_cvtss2sd */
    case 2818:  /* *sse2_vd_cvtsd2ss */
    case 2816:  /* sse2_cvtsd2ss */
    case 2641:  /* sse2_cvtsi2sdq */
    case 2640:  /* sse2_cvtsi2sd */
    case 2567:  /* cvtusi2sd64 */
    case 2565:  /* cvtusi2ss64 */
    case 2564:  /* cvtusi2sd32 */
    case 2562:  /* cvtusi2ss32 */
    case 2550:  /* sse_cvtsi2ssq */
    case 2548:  /* sse_cvtsi2ss */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 5300:  /* vcvtph2ps */
    case 4412:  /* *sse2_pmovmskb_ext */
    case 4411:  /* *sse2_pmovmskb_zext */
    case 4410:  /* *avx2_pmovmskb_zext */
    case 4383:  /* *sse2_movmskpd_uext */
    case 4382:  /* *sse2_movmskpd_ext */
    case 4381:  /* *avx_movmskpd256_uext */
    case 4380:  /* *avx_movmskpd256_ext */
    case 4379:  /* *sse_movmskps_uext */
    case 4378:  /* *sse_movmskps_ext */
    case 4377:  /* *avx_movmskps256_uext */
    case 4376:  /* *avx_movmskps256_ext */
    case 2743:  /* ufix_notruncv2dfv2si2 */
    case 2732:  /* sse2_cvtpd2dq */
    case 2546:  /* sse_cvtps2pi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      break;

    case 2545:  /* sse_cvtpi2ps */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 2544:  /* *fma4i_vmfnmsub_v2df */
    case 2543:  /* *fma4i_vmfnmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 2540:  /* *fma4i_vmfmsub_v2df */
    case 2539:  /* *fma4i_vmfmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 2538:  /* *fma4i_vmfmadd_v2df */
    case 2537:  /* *fma4i_vmfmadd_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 2536:  /* *avx512f_vmfnmsub_v2df_maskz_1_round */
    case 2534:  /* *avx512f_vmfnmsub_v4sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2535:  /* *avx512f_vmfnmsub_v2df_maskz_1 */
    case 2533:  /* *avx512f_vmfnmsub_v4sf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2532:  /* *avx512f_vmfnmsub_v2df_mask3_round */
    case 2530:  /* *avx512f_vmfnmsub_v4sf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 2531:  /* *avx512f_vmfnmsub_v2df_mask3 */
    case 2529:  /* *avx512f_vmfnmsub_v4sf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 2528:  /* *avx512f_vmfnmsub_v2df_mask_round */
    case 2526:  /* *avx512f_vmfnmsub_v4sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 2527:  /* *avx512f_vmfnmsub_v2df_mask */
    case 2525:  /* *avx512f_vmfnmsub_v4sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 2524:  /* *avx512f_vmfnmadd_v2df_maskz_1_round */
    case 2522:  /* *avx512f_vmfnmadd_v4sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2523:  /* *avx512f_vmfnmadd_v2df_maskz_1 */
    case 2521:  /* *avx512f_vmfnmadd_v4sf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2520:  /* *avx512f_vmfnmadd_v2df_mask3_round */
    case 2518:  /* *avx512f_vmfnmadd_v4sf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 2519:  /* *avx512f_vmfnmadd_v2df_mask3 */
    case 2517:  /* *avx512f_vmfnmadd_v4sf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 2516:  /* *avx512f_vmfnmadd_v2df_mask_round */
    case 2514:  /* *avx512f_vmfnmadd_v4sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 2515:  /* *avx512f_vmfnmadd_v2df_mask */
    case 2513:  /* *avx512f_vmfnmadd_v4sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 2512:  /* *avx512f_vmfmsub_v2df_maskz_1_round */
    case 2510:  /* *avx512f_vmfmsub_v4sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2511:  /* *avx512f_vmfmsub_v2df_maskz_1 */
    case 2509:  /* *avx512f_vmfmsub_v4sf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2508:  /* avx512f_vmfmsub_v2df_mask3_round */
    case 2506:  /* avx512f_vmfmsub_v4sf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 2507:  /* avx512f_vmfmsub_v2df_mask3 */
    case 2505:  /* avx512f_vmfmsub_v4sf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 2504:  /* *avx512f_vmfmsub_v2df_mask_round */
    case 2502:  /* *avx512f_vmfmsub_v4sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 2503:  /* *avx512f_vmfmsub_v2df_mask */
    case 2501:  /* *avx512f_vmfmsub_v4sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 2500:  /* avx512f_vmfmadd_v2df_maskz_1_round */
    case 2498:  /* avx512f_vmfmadd_v4sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2499:  /* avx512f_vmfmadd_v2df_maskz_1 */
    case 2497:  /* avx512f_vmfmadd_v4sf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2496:  /* avx512f_vmfmadd_v2df_mask3_round */
    case 2494:  /* avx512f_vmfmadd_v4sf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 2495:  /* avx512f_vmfmadd_v2df_mask3 */
    case 2493:  /* avx512f_vmfmadd_v4sf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 2492:  /* avx512f_vmfmadd_v2df_mask_round */
    case 2490:  /* avx512f_vmfmadd_v4sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 2491:  /* avx512f_vmfmadd_v2df_mask */
    case 2489:  /* avx512f_vmfmadd_v4sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 2488:  /* *fmai_fnmsub_v2df_round */
    case 2486:  /* *fmai_fnmsub_v4sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2487:  /* *fmai_fnmsub_v2df */
    case 2485:  /* *fmai_fnmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2484:  /* *fmai_fnmadd_v2df_round */
    case 2482:  /* *fmai_fnmadd_v4sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2483:  /* *fmai_fnmadd_v2df */
    case 2481:  /* *fmai_fnmadd_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2480:  /* *fmai_fmsub_v2df */
    case 2478:  /* *fmai_fmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2479:  /* *fmai_fmsub_v2df */
    case 2477:  /* *fmai_fmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2476:  /* *fmai_fmadd_v2df */
    case 2474:  /* *fmai_fmadd_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2475:  /* *fmai_fmadd_v2df */
    case 2473:  /* *fmai_fmadd_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2472:  /* avx512vl_fmsubadd_v2df_mask3_round */
    case 2470:  /* avx512vl_fmsubadd_v4df_mask3_round */
    case 2468:  /* avx512f_fmsubadd_v8df_mask3_round */
    case 2466:  /* avx512vl_fmsubadd_v4sf_mask3_round */
    case 2464:  /* avx512vl_fmsubadd_v8sf_mask3_round */
    case 2462:  /* avx512f_fmsubadd_v16sf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 2471:  /* avx512vl_fmsubadd_v2df_mask3 */
    case 2469:  /* avx512vl_fmsubadd_v4df_mask3 */
    case 2467:  /* avx512f_fmsubadd_v8df_mask3 */
    case 2465:  /* avx512vl_fmsubadd_v4sf_mask3 */
    case 2463:  /* avx512vl_fmsubadd_v8sf_mask3 */
    case 2461:  /* avx512f_fmsubadd_v16sf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 2460:  /* avx512vl_fmsubadd_v2df_mask_round */
    case 2458:  /* avx512vl_fmsubadd_v4df_mask_round */
    case 2456:  /* avx512f_fmsubadd_v8df_mask_round */
    case 2454:  /* avx512vl_fmsubadd_v4sf_mask_round */
    case 2452:  /* avx512vl_fmsubadd_v8sf_mask_round */
    case 2450:  /* avx512f_fmsubadd_v16sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2459:  /* avx512vl_fmsubadd_v2df_mask */
    case 2457:  /* avx512vl_fmsubadd_v4df_mask */
    case 2455:  /* avx512f_fmsubadd_v8df_mask */
    case 2453:  /* avx512vl_fmsubadd_v4sf_mask */
    case 2451:  /* avx512vl_fmsubadd_v8sf_mask */
    case 2449:  /* avx512f_fmsubadd_v16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2444:  /* fma_fmsubadd_v8df_maskz_1_round */
    case 2435:  /* fma_fmsubadd_v16sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2443:  /* *fma_fmsubadd_v8df_round */
    case 2434:  /* *fma_fmsubadd_v16sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2448:  /* fma_fmsubadd_v2df_maskz_1 */
    case 2446:  /* fma_fmsubadd_v4df_maskz_1 */
    case 2442:  /* fma_fmsubadd_v8df_maskz_1 */
    case 2439:  /* fma_fmsubadd_v4sf_maskz_1 */
    case 2437:  /* fma_fmsubadd_v8sf_maskz_1 */
    case 2433:  /* fma_fmsubadd_v16sf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2447:  /* *fma_fmsubadd_v2df */
    case 2445:  /* *fma_fmsubadd_v4df */
    case 2441:  /* *fma_fmsubadd_v8df */
    case 2440:  /* *fma_fmsubadd_df */
    case 2438:  /* *fma_fmsubadd_v4sf */
    case 2436:  /* *fma_fmsubadd_v8sf */
    case 2432:  /* *fma_fmsubadd_v16sf */
    case 2431:  /* *fma_fmsubadd_sf */
    case 2430:  /* *fma_fmsubadd_v2df */
    case 2429:  /* *fma_fmsubadd_v4df */
    case 2428:  /* *fma_fmsubadd_v4sf */
    case 2427:  /* *fma_fmsubadd_v8sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      break;

    case 2426:  /* avx512vl_fmaddsub_v2df_mask3_round */
    case 2424:  /* avx512vl_fmaddsub_v4df_mask3_round */
    case 2422:  /* avx512f_fmaddsub_v8df_mask3_round */
    case 2420:  /* avx512vl_fmaddsub_v4sf_mask3_round */
    case 2418:  /* avx512vl_fmaddsub_v8sf_mask3_round */
    case 2416:  /* avx512f_fmaddsub_v16sf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 2425:  /* avx512vl_fmaddsub_v2df_mask3 */
    case 2423:  /* avx512vl_fmaddsub_v4df_mask3 */
    case 2421:  /* avx512f_fmaddsub_v8df_mask3 */
    case 2419:  /* avx512vl_fmaddsub_v4sf_mask3 */
    case 2417:  /* avx512vl_fmaddsub_v8sf_mask3 */
    case 2415:  /* avx512f_fmaddsub_v16sf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 2414:  /* avx512vl_fmaddsub_v2df_mask_round */
    case 2412:  /* avx512vl_fmaddsub_v4df_mask_round */
    case 2410:  /* avx512f_fmaddsub_v8df_mask_round */
    case 2408:  /* avx512vl_fmaddsub_v4sf_mask_round */
    case 2406:  /* avx512vl_fmaddsub_v8sf_mask_round */
    case 2404:  /* avx512f_fmaddsub_v16sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 5969:  /* avx512f_dpbf16ps_v4sf_mask */
    case 5968:  /* avx512f_dpbf16ps_v8sf_mask */
    case 5967:  /* avx512f_dpbf16ps_v16sf_mask */
    case 5918:  /* vpdpwssds_v4si_mask */
    case 5917:  /* vpdpwssds_v8si_mask */
    case 5916:  /* vpdpwssds_v16si_mask */
    case 5909:  /* vpdpwssd_v4si_mask */
    case 5908:  /* vpdpwssd_v8si_mask */
    case 5907:  /* vpdpwssd_v16si_mask */
    case 5900:  /* vpdpbusds_v4si_mask */
    case 5899:  /* vpdpbusds_v8si_mask */
    case 5898:  /* vpdpbusds_v16si_mask */
    case 5891:  /* vpdpbusd_v4si_mask */
    case 5890:  /* vpdpbusd_v8si_mask */
    case 5889:  /* vpdpbusd_v16si_mask */
    case 5876:  /* vpshldv_v2di_mask */
    case 5875:  /* vpshldv_v4si_mask */
    case 5874:  /* vpshldv_v8hi_mask */
    case 5873:  /* vpshldv_v4di_mask */
    case 5872:  /* vpshldv_v8si_mask */
    case 5871:  /* vpshldv_v16hi_mask */
    case 5870:  /* vpshldv_v8di_mask */
    case 5869:  /* vpshldv_v16si_mask */
    case 5868:  /* vpshldv_v32hi_mask */
    case 5849:  /* vpshrdv_v2di_mask */
    case 5848:  /* vpshrdv_v4si_mask */
    case 5847:  /* vpshrdv_v8hi_mask */
    case 5846:  /* vpshrdv_v4di_mask */
    case 5845:  /* vpshrdv_v8si_mask */
    case 5844:  /* vpshrdv_v16hi_mask */
    case 5843:  /* vpshrdv_v8di_mask */
    case 5842:  /* vpshrdv_v16si_mask */
    case 5841:  /* vpshrdv_v32hi_mask */
    case 5719:  /* vpamdd52huqv2di_mask */
    case 5718:  /* vpamdd52luqv2di_mask */
    case 5717:  /* vpamdd52huqv4di_mask */
    case 5716:  /* vpamdd52luqv4di_mask */
    case 5715:  /* vpamdd52huqv8di_mask */
    case 5714:  /* vpamdd52luqv8di_mask */
    case 2413:  /* avx512vl_fmaddsub_v2df_mask */
    case 2411:  /* avx512vl_fmaddsub_v4df_mask */
    case 2409:  /* avx512f_fmaddsub_v8df_mask */
    case 2407:  /* avx512vl_fmaddsub_v4sf_mask */
    case 2405:  /* avx512vl_fmaddsub_v8sf_mask */
    case 2403:  /* avx512f_fmaddsub_v16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 5598:  /* avx512dq_rangepv8df_mask_round */
    case 5590:  /* avx512dq_rangepv16sf_mask_round */
    case 2398:  /* fma_fmaddsub_v8df_maskz_1_round */
    case 2389:  /* fma_fmaddsub_v16sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 5966:  /* avx512f_dpbf16ps_v4sf_maskz_1 */
    case 5964:  /* avx512f_dpbf16ps_v8sf_maskz_1 */
    case 5962:  /* avx512f_dpbf16ps_v16sf_maskz_1 */
    case 5921:  /* vpdpwssds_v4si_maskz_1 */
    case 5920:  /* vpdpwssds_v8si_maskz_1 */
    case 5919:  /* vpdpwssds_v16si_maskz_1 */
    case 5912:  /* vpdpwssd_v4si_maskz_1 */
    case 5911:  /* vpdpwssd_v8si_maskz_1 */
    case 5910:  /* vpdpwssd_v16si_maskz_1 */
    case 5903:  /* vpdpbusds_v4si_maskz_1 */
    case 5902:  /* vpdpbusds_v8si_maskz_1 */
    case 5901:  /* vpdpbusds_v16si_maskz_1 */
    case 5894:  /* vpdpbusd_v4si_maskz_1 */
    case 5893:  /* vpdpbusd_v8si_maskz_1 */
    case 5892:  /* vpdpbusd_v16si_maskz_1 */
    case 5885:  /* vpshldv_v2di_maskz_1 */
    case 5884:  /* vpshldv_v4si_maskz_1 */
    case 5883:  /* vpshldv_v8hi_maskz_1 */
    case 5882:  /* vpshldv_v4di_maskz_1 */
    case 5881:  /* vpshldv_v8si_maskz_1 */
    case 5880:  /* vpshldv_v16hi_maskz_1 */
    case 5879:  /* vpshldv_v8di_maskz_1 */
    case 5878:  /* vpshldv_v16si_maskz_1 */
    case 5877:  /* vpshldv_v32hi_maskz_1 */
    case 5858:  /* vpshrdv_v2di_maskz_1 */
    case 5857:  /* vpshrdv_v4si_maskz_1 */
    case 5856:  /* vpshrdv_v8hi_maskz_1 */
    case 5855:  /* vpshrdv_v4di_maskz_1 */
    case 5854:  /* vpshrdv_v8si_maskz_1 */
    case 5853:  /* vpshrdv_v16hi_maskz_1 */
    case 5852:  /* vpshrdv_v8di_maskz_1 */
    case 5851:  /* vpshrdv_v16si_maskz_1 */
    case 5850:  /* vpshrdv_v32hi_maskz_1 */
    case 5831:  /* vpshld_v2di_mask */
    case 5829:  /* vpshld_v4si_mask */
    case 5827:  /* vpshld_v8hi_mask */
    case 5825:  /* vpshld_v4di_mask */
    case 5823:  /* vpshld_v8si_mask */
    case 5821:  /* vpshld_v16hi_mask */
    case 5819:  /* vpshld_v8di_mask */
    case 5817:  /* vpshld_v16si_mask */
    case 5815:  /* vpshld_v32hi_mask */
    case 5813:  /* vpshrd_v2di_mask */
    case 5811:  /* vpshrd_v4si_mask */
    case 5809:  /* vpshrd_v8hi_mask */
    case 5807:  /* vpshrd_v4di_mask */
    case 5805:  /* vpshrd_v8si_mask */
    case 5803:  /* vpshrd_v16hi_mask */
    case 5801:  /* vpshrd_v8di_mask */
    case 5799:  /* vpshrd_v16si_mask */
    case 5797:  /* vpshrd_v32hi_mask */
    case 5789:  /* vgf2p8affineqb_v16qi_mask */
    case 5787:  /* vgf2p8affineqb_v32qi_mask */
    case 5785:  /* vgf2p8affineqb_v64qi_mask */
    case 5783:  /* vgf2p8affineinvqb_v16qi_mask */
    case 5781:  /* vgf2p8affineinvqb_v32qi_mask */
    case 5779:  /* vgf2p8affineinvqb_v64qi_mask */
    case 5745:  /* avx5124vnniw_vp4dpwssds_maskz */
    case 5742:  /* avx5124vnniw_vp4dpwssd_maskz */
    case 5739:  /* avx5124fmaddps_4fnmaddss_maskz */
    case 5736:  /* avx5124fmaddps_4fnmaddps_maskz */
    case 5733:  /* avx5124fmaddps_4fmaddss_maskz */
    case 5730:  /* avx5124fmaddps_4fmaddps_maskz */
    case 5713:  /* vpamdd52huqv2di_maskz_1 */
    case 5711:  /* vpamdd52luqv2di_maskz_1 */
    case 5709:  /* vpamdd52huqv4di_maskz_1 */
    case 5707:  /* vpamdd52luqv4di_maskz_1 */
    case 5705:  /* vpamdd52huqv8di_maskz_1 */
    case 5703:  /* vpamdd52luqv8di_maskz_1 */
    case 5664:  /* avx512bw_dbpsadbwv32hi_mask */
    case 5662:  /* avx512bw_dbpsadbwv16hi_mask */
    case 5660:  /* avx512bw_dbpsadbwv8hi_mask */
    case 5602:  /* avx512dq_rangepv2df_mask */
    case 5600:  /* avx512dq_rangepv4df_mask */
    case 5597:  /* avx512dq_rangepv8df_mask */
    case 5594:  /* avx512dq_rangepv4sf_mask */
    case 5592:  /* avx512dq_rangepv8sf_mask */
    case 5589:  /* avx512dq_rangepv16sf_mask */
    case 5164:  /* avx512vl_vpermt2varv16qi3_maskz_1 */
    case 5162:  /* avx512vl_vpermt2varv32qi3_maskz_1 */
    case 5160:  /* avx512bw_vpermt2varv64qi3_maskz_1 */
    case 5158:  /* avx512vl_vpermt2varv8hi3_maskz_1 */
    case 5156:  /* avx512vl_vpermt2varv16hi3_maskz_1 */
    case 5154:  /* avx512bw_vpermt2varv32hi3_maskz_1 */
    case 5152:  /* avx512vl_vpermt2varv2df3_maskz_1 */
    case 5150:  /* avx512vl_vpermt2varv2di3_maskz_1 */
    case 5148:  /* avx512vl_vpermt2varv4sf3_maskz_1 */
    case 5146:  /* avx512vl_vpermt2varv4si3_maskz_1 */
    case 5144:  /* avx512vl_vpermt2varv4df3_maskz_1 */
    case 5142:  /* avx512vl_vpermt2varv4di3_maskz_1 */
    case 5140:  /* avx512vl_vpermt2varv8sf3_maskz_1 */
    case 5138:  /* avx512vl_vpermt2varv8si3_maskz_1 */
    case 5136:  /* avx512f_vpermt2varv8df3_maskz_1 */
    case 5134:  /* avx512f_vpermt2varv8di3_maskz_1 */
    case 5132:  /* avx512f_vpermt2varv16sf3_maskz_1 */
    case 5130:  /* avx512f_vpermt2varv16si3_maskz_1 */
    case 4480:  /* ssse3_palignrv16qi_mask */
    case 4479:  /* avx2_palignrv32qi_mask */
    case 4478:  /* avx512bw_palignrv64qi_mask */
    case 3089:  /* avx512vl_alignv2di_mask */
    case 3087:  /* avx512vl_alignv4di_mask */
    case 3085:  /* avx512f_alignv8di_mask */
    case 3083:  /* avx512vl_alignv4si_mask */
    case 3081:  /* avx512vl_alignv8si_mask */
    case 3079:  /* avx512f_alignv16si_mask */
    case 2402:  /* fma_fmaddsub_v2df_maskz_1 */
    case 2400:  /* fma_fmaddsub_v4df_maskz_1 */
    case 2396:  /* fma_fmaddsub_v8df_maskz_1 */
    case 2393:  /* fma_fmaddsub_v4sf_maskz_1 */
    case 2391:  /* fma_fmaddsub_v8sf_maskz_1 */
    case 2387:  /* fma_fmaddsub_v16sf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2380:  /* avx512vl_fnmsub_v2df_mask3_round */
    case 2378:  /* avx512vl_fnmsub_v4df_mask3_round */
    case 2376:  /* avx512f_fnmsub_v8df_mask3_round */
    case 2374:  /* avx512vl_fnmsub_v4sf_mask3_round */
    case 2372:  /* avx512vl_fnmsub_v8sf_mask3_round */
    case 2370:  /* avx512f_fnmsub_v16sf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 2379:  /* avx512vl_fnmsub_v2df_mask3 */
    case 2377:  /* avx512vl_fnmsub_v4df_mask3 */
    case 2375:  /* avx512f_fnmsub_v8df_mask3 */
    case 2373:  /* avx512vl_fnmsub_v4sf_mask3 */
    case 2371:  /* avx512vl_fnmsub_v8sf_mask3 */
    case 2369:  /* avx512f_fnmsub_v16sf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 2366:  /* avx512f_fnmsub_v8df_mask_round */
    case 2362:  /* avx512f_fnmsub_v16sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2368:  /* avx512vl_fnmsub_v2df_mask */
    case 2367:  /* avx512vl_fnmsub_v4df_mask */
    case 2365:  /* avx512f_fnmsub_v8df_mask */
    case 2364:  /* avx512vl_fnmsub_v4sf_mask */
    case 2363:  /* avx512vl_fnmsub_v8sf_mask */
    case 2361:  /* avx512f_fnmsub_v16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2360:  /* *fma_fnmsub_v8df_maskz_1_bcst_3 */
    case 2358:  /* *fma_fnmsub_v16sf_maskz_1_bcst_3 */
    case 2356:  /* *fma_fnmsub_v4df_maskz_1_bcst_3 */
    case 2354:  /* *fma_fnmsub_v8sf_maskz_1_bcst_3 */
    case 2352:  /* *fma_fnmsub_v2df_maskz_1_bcst_3 */
    case 2350:  /* *fma_fnmsub_v4sf_maskz_1_bcst_3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2359:  /* **fma_fnmsub_v8df_bcst_3 */
    case 2357:  /* **fma_fnmsub_v16sf_bcst_3 */
    case 2355:  /* **fma_fnmsub_v4df_bcst_3 */
    case 2353:  /* **fma_fnmsub_v8sf_bcst_3 */
    case 2351:  /* **fma_fnmsub_v2df_bcst_3 */
    case 2349:  /* **fma_fnmsub_v4sf_bcst_3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 2348:  /* *fma_fnmsub_v8df_maskz_1_bcst_2 */
    case 2346:  /* *fma_fnmsub_v16sf_maskz_1_bcst_2 */
    case 2344:  /* *fma_fnmsub_v4df_maskz_1_bcst_2 */
    case 2342:  /* *fma_fnmsub_v8sf_maskz_1_bcst_2 */
    case 2340:  /* *fma_fnmsub_v2df_maskz_1_bcst_2 */
    case 2338:  /* *fma_fnmsub_v4sf_maskz_1_bcst_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2347:  /* **fma_fnmsub_v8df_bcst_2 */
    case 2345:  /* **fma_fnmsub_v16sf_bcst_2 */
    case 2343:  /* **fma_fnmsub_v4df_bcst_2 */
    case 2341:  /* **fma_fnmsub_v8sf_bcst_2 */
    case 2339:  /* **fma_fnmsub_v2df_bcst_2 */
    case 2337:  /* **fma_fnmsub_v4sf_bcst_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 2336:  /* *fma_fnmsub_v8df_maskz_1_bcst_1 */
    case 2334:  /* *fma_fnmsub_v16sf_maskz_1_bcst_1 */
    case 2332:  /* *fma_fnmsub_v4df_maskz_1_bcst_1 */
    case 2330:  /* *fma_fnmsub_v8sf_maskz_1_bcst_1 */
    case 2328:  /* *fma_fnmsub_v2df_maskz_1_bcst_1 */
    case 2326:  /* *fma_fnmsub_v4sf_maskz_1_bcst_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2335:  /* **fma_fnmsub_v8df_bcst_1 */
    case 2333:  /* **fma_fnmsub_v16sf_bcst_1 */
    case 2331:  /* **fma_fnmsub_v4df_bcst_1 */
    case 2329:  /* **fma_fnmsub_v8sf_bcst_1 */
    case 2327:  /* **fma_fnmsub_v2df_bcst_1 */
    case 2325:  /* **fma_fnmsub_v4sf_bcst_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 2), 0), 0));
      break;

    case 2320:  /* fma_fnmsub_v8df_maskz_1_round */
    case 2311:  /* fma_fnmsub_v16sf_maskz_1_round */
    case 2306:  /* *fma_fnmsub_v4df */
    case 2302:  /* *fma_fnmsub_v8sf */
    case 2298:  /* *fma_fnmsub_v2df */
    case 2294:  /* *fma_fnmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2319:  /* *fma_fnmsub_v8df_round */
    case 2310:  /* *fma_fnmsub_v16sf_round */
    case 2305:  /* *fma_fnmsub_v4df */
    case 2301:  /* *fma_fnmsub_v8sf */
    case 2297:  /* *fma_fnmsub_v2df */
    case 2293:  /* *fma_fnmsub_v4sf */
    case 2290:  /* *fma_fnmsub_df */
    case 2288:  /* *fma_fnmsub_sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2284:  /* avx512f_fnmadd_v8df_mask3_round */
    case 2280:  /* avx512f_fnmadd_v16sf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 2286:  /* avx512vl_fnmadd_v2df_mask3 */
    case 2285:  /* avx512vl_fnmadd_v4df_mask3 */
    case 2283:  /* avx512f_fnmadd_v8df_mask3 */
    case 2282:  /* avx512vl_fnmadd_v4sf_mask3 */
    case 2281:  /* avx512vl_fnmadd_v8sf_mask3 */
    case 2279:  /* avx512f_fnmadd_v16sf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 2276:  /* avx512f_fnmadd_v8df_mask_round */
    case 2272:  /* avx512f_fnmadd_v16sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2278:  /* avx512vl_fnmadd_v2df_mask */
    case 2277:  /* avx512vl_fnmadd_v4df_mask */
    case 2275:  /* avx512f_fnmadd_v8df_mask */
    case 2274:  /* avx512vl_fnmadd_v4sf_mask */
    case 2273:  /* avx512vl_fnmadd_v8sf_mask */
    case 2271:  /* avx512f_fnmadd_v16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2270:  /* *fma_fnmadd_v8df_maskz_1_bcst_3 */
    case 2268:  /* *fma_fnmadd_v16sf_maskz_1_bcst_3 */
    case 2266:  /* *fma_fnmadd_v4df_maskz_1_bcst_3 */
    case 2264:  /* *fma_fnmadd_v8sf_maskz_1_bcst_3 */
    case 2262:  /* *fma_fnmadd_v2df_maskz_1_bcst_3 */
    case 2260:  /* *fma_fnmadd_v4sf_maskz_1_bcst_3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2269:  /* **fma_fnmadd_v8df_bcst_3 */
    case 2267:  /* **fma_fnmadd_v16sf_bcst_3 */
    case 2265:  /* **fma_fnmadd_v4df_bcst_3 */
    case 2263:  /* **fma_fnmadd_v8sf_bcst_3 */
    case 2261:  /* **fma_fnmadd_v2df_bcst_3 */
    case 2259:  /* **fma_fnmadd_v4sf_bcst_3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2258:  /* *fma_fnmadd_v8df_maskz_1_bcst_2 */
    case 2256:  /* *fma_fnmadd_v16sf_maskz_1_bcst_2 */
    case 2254:  /* *fma_fnmadd_v4df_maskz_1_bcst_2 */
    case 2252:  /* *fma_fnmadd_v8sf_maskz_1_bcst_2 */
    case 2250:  /* *fma_fnmadd_v2df_maskz_1_bcst_2 */
    case 2248:  /* *fma_fnmadd_v4sf_maskz_1_bcst_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 5076:  /* avx512dq_broadcastv8sf_mask */
    case 5074:  /* avx512dq_broadcastv16sf_mask */
    case 5072:  /* avx512dq_broadcastv4si_mask */
    case 5070:  /* avx512dq_broadcastv8si_mask */
    case 5068:  /* avx512dq_broadcastv16si_mask */
    case 4999:  /* avx512vl_vec_dupv8hi_mask */
    case 4997:  /* avx512vl_vec_dupv16hi_mask */
    case 4995:  /* avx512bw_vec_dupv32hi_mask */
    case 4993:  /* avx512vl_vec_dupv32qi_mask */
    case 4991:  /* avx512vl_vec_dupv16qi_mask */
    case 4989:  /* avx512bw_vec_dupv64qi_mask */
    case 4987:  /* avx512vl_vec_dupv2df_mask */
    case 4985:  /* avx512vl_vec_dupv4df_mask */
    case 4983:  /* avx512f_vec_dupv8df_mask */
    case 4981:  /* avx512vl_vec_dupv4sf_mask */
    case 4979:  /* avx512vl_vec_dupv8sf_mask */
    case 4977:  /* avx512f_vec_dupv16sf_mask */
    case 4975:  /* avx512vl_vec_dupv2di_mask */
    case 4973:  /* avx512vl_vec_dupv4di_mask */
    case 4971:  /* avx512f_vec_dupv8di_mask */
    case 4969:  /* avx512vl_vec_dupv4si_mask */
    case 4967:  /* avx512vl_vec_dupv8si_mask */
    case 4965:  /* avx512f_vec_dupv16si_mask */
    case 4700:  /* sse4_1_zero_extendv2siv2di2_mask */
    case 4698:  /* sse4_1_sign_extendv2siv2di2_mask */
    case 4680:  /* sse4_1_zero_extendv2hiv2di2_mask */
    case 4678:  /* sse4_1_sign_extendv2hiv2di2_mask */
    case 4668:  /* avx2_zero_extendv4hiv4di2_mask */
    case 4666:  /* avx2_sign_extendv4hiv4di2_mask */
    case 4660:  /* sse4_1_zero_extendv2qiv2di2_mask */
    case 4658:  /* sse4_1_sign_extendv2qiv2di2_mask */
    case 4648:  /* avx2_zero_extendv4qiv4di2_mask */
    case 4646:  /* avx2_sign_extendv4qiv4di2_mask */
    case 4636:  /* avx512f_zero_extendv8qiv8di2_mask */
    case 4634:  /* avx512f_sign_extendv8qiv8di2_mask */
    case 4624:  /* sse4_1_zero_extendv4hiv4si2_mask */
    case 4622:  /* sse4_1_sign_extendv4hiv4si2_mask */
    case 4604:  /* sse4_1_zero_extendv4qiv4si2_mask */
    case 4602:  /* sse4_1_sign_extendv4qiv4si2_mask */
    case 4592:  /* avx2_zero_extendv8qiv8si2_mask */
    case 4590:  /* avx2_sign_extendv8qiv8si2_mask */
    case 4576:  /* sse4_1_zero_extendv8qiv8hi2_mask */
    case 4574:  /* sse4_1_sign_extendv8qiv8hi2_mask */
    case 2864:  /* sse2_cvtps2pd_mask */
    case 2808:  /* fixuns_truncv2sfv2di2_mask */
    case 2806:  /* fix_truncv2sfv2di2_mask */
    case 2724:  /* sse2_cvtdq2pd_mask */
    case 2720:  /* ufloatv2siv2df2_mask */
    case 2257:  /* **fma_fnmadd_v8df_bcst_2 */
    case 2255:  /* **fma_fnmadd_v16sf_bcst_2 */
    case 2253:  /* **fma_fnmadd_v4df_bcst_2 */
    case 2251:  /* **fma_fnmadd_v8sf_bcst_2 */
    case 2249:  /* **fma_fnmadd_v2df_bcst_2 */
    case 2247:  /* **fma_fnmadd_v4sf_bcst_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2230:  /* fma_fnmadd_v8df_maskz_1_round */
    case 2221:  /* fma_fnmadd_v16sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2208:  /* avx512f_fmsub_v8df_mask3_round */
    case 2204:  /* avx512f_fmsub_v16sf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 2210:  /* avx512vl_fmsub_v2df_mask3 */
    case 2209:  /* avx512vl_fmsub_v4df_mask3 */
    case 2207:  /* avx512f_fmsub_v8df_mask3 */
    case 2206:  /* avx512vl_fmsub_v4sf_mask3 */
    case 2205:  /* avx512vl_fmsub_v8sf_mask3 */
    case 2203:  /* avx512f_fmsub_v16sf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 2202:  /* avx512vl_fmsub_v2df_mask_round */
    case 2200:  /* avx512vl_fmsub_v4df_mask_round */
    case 2198:  /* avx512f_fmsub_v8df_mask_round */
    case 2196:  /* avx512vl_fmsub_v4sf_mask_round */
    case 2194:  /* avx512vl_fmsub_v8sf_mask_round */
    case 2192:  /* avx512f_fmsub_v16sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2201:  /* avx512vl_fmsub_v2df_mask */
    case 2199:  /* avx512vl_fmsub_v4df_mask */
    case 2197:  /* avx512f_fmsub_v8df_mask */
    case 2195:  /* avx512vl_fmsub_v4sf_mask */
    case 2193:  /* avx512vl_fmsub_v8sf_mask */
    case 2191:  /* avx512f_fmsub_v16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2190:  /* *fma_fmsub_v8df_maskz_1_bcst_3 */
    case 2188:  /* *fma_fmsub_v16sf_maskz_1_bcst_3 */
    case 2186:  /* *fma_fmsub_v4df_maskz_1_bcst_3 */
    case 2184:  /* *fma_fmsub_v8sf_maskz_1_bcst_3 */
    case 2182:  /* *fma_fmsub_v2df_maskz_1_bcst_3 */
    case 2180:  /* *fma_fmsub_v4sf_maskz_1_bcst_3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2324:  /* fma_fnmsub_v2df_maskz_1 */
    case 2322:  /* fma_fnmsub_v4df_maskz_1 */
    case 2318:  /* fma_fnmsub_v8df_maskz_1 */
    case 2315:  /* fma_fnmsub_v4sf_maskz_1 */
    case 2313:  /* fma_fnmsub_v8sf_maskz_1 */
    case 2309:  /* fma_fnmsub_v16sf_maskz_1 */
    case 2304:  /* *fma_fnmsub_v4df */
    case 2300:  /* *fma_fnmsub_v8sf */
    case 2296:  /* *fma_fnmsub_v2df */
    case 2292:  /* *fma_fnmsub_v4sf */
    case 2246:  /* *fma_fnmadd_v8df_maskz_1_bcst_1 */
    case 2244:  /* *fma_fnmadd_v16sf_maskz_1_bcst_1 */
    case 2242:  /* *fma_fnmadd_v4df_maskz_1_bcst_1 */
    case 2240:  /* *fma_fnmadd_v8sf_maskz_1_bcst_1 */
    case 2238:  /* *fma_fnmadd_v2df_maskz_1_bcst_1 */
    case 2236:  /* *fma_fnmadd_v4sf_maskz_1_bcst_1 */
    case 2178:  /* *fma_fmsub_v8df_maskz_1_bcst_2 */
    case 2176:  /* *fma_fmsub_v16sf_maskz_1_bcst_2 */
    case 2174:  /* *fma_fmsub_v4df_maskz_1_bcst_2 */
    case 2172:  /* *fma_fmsub_v8sf_maskz_1_bcst_2 */
    case 2170:  /* *fma_fmsub_v2df_maskz_1_bcst_2 */
    case 2168:  /* *fma_fmsub_v4sf_maskz_1_bcst_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2323:  /* *fma_fnmsub_v2df */
    case 2321:  /* *fma_fnmsub_v4df */
    case 2317:  /* *fma_fnmsub_v8df */
    case 2316:  /* *fma_fnmsub_df */
    case 2314:  /* *fma_fnmsub_v4sf */
    case 2312:  /* *fma_fnmsub_v8sf */
    case 2308:  /* *fma_fnmsub_v16sf */
    case 2307:  /* *fma_fnmsub_sf */
    case 2303:  /* *fma_fnmsub_v4df */
    case 2299:  /* *fma_fnmsub_v8sf */
    case 2295:  /* *fma_fnmsub_v2df */
    case 2291:  /* *fma_fnmsub_v4sf */
    case 2289:  /* *fma_fnmsub_df */
    case 2287:  /* *fma_fnmsub_sf */
    case 2245:  /* **fma_fnmadd_v8df_bcst_1 */
    case 2243:  /* **fma_fnmadd_v16sf_bcst_1 */
    case 2241:  /* **fma_fnmadd_v4df_bcst_1 */
    case 2239:  /* **fma_fnmadd_v8sf_bcst_1 */
    case 2237:  /* **fma_fnmadd_v2df_bcst_1 */
    case 2235:  /* **fma_fnmadd_v4sf_bcst_1 */
    case 2177:  /* **fma_fmsub_v8df_bcst_2 */
    case 2175:  /* **fma_fmsub_v16sf_bcst_2 */
    case 2173:  /* **fma_fmsub_v4df_bcst_2 */
    case 2171:  /* **fma_fmsub_v8sf_bcst_2 */
    case 2169:  /* **fma_fmsub_v2df_bcst_2 */
    case 2167:  /* **fma_fmsub_v4sf_bcst_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 2166:  /* *fma_fmsub_v8df_maskz_1_bcst_1 */
    case 2164:  /* *fma_fmsub_v16sf_maskz_1_bcst_1 */
    case 2162:  /* *fma_fmsub_v4df_maskz_1_bcst_1 */
    case 2160:  /* *fma_fmsub_v8sf_maskz_1_bcst_1 */
    case 2158:  /* *fma_fmsub_v2df_maskz_1_bcst_1 */
    case 2156:  /* *fma_fmsub_v4sf_maskz_1_bcst_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2165:  /* **fma_fmsub_v8df_bcst_1 */
    case 2163:  /* **fma_fmsub_v16sf_bcst_1 */
    case 2161:  /* **fma_fmsub_v4df_bcst_1 */
    case 2159:  /* **fma_fmsub_v8sf_bcst_1 */
    case 2157:  /* **fma_fmsub_v2df_bcst_1 */
    case 2155:  /* **fma_fmsub_v4sf_bcst_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 2), 0), 0));
      break;

    case 2150:  /* fma_fmsub_v8df_maskz_1_round */
    case 2141:  /* fma_fmsub_v16sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2149:  /* *fma_fmsub_v8df_round */
    case 2140:  /* *fma_fmsub_v16sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2130:  /* avx512vl_fmadd_v2df_mask3_round */
    case 2128:  /* avx512vl_fmadd_v4df_mask3_round */
    case 2126:  /* avx512f_fmadd_v8df_mask3_round */
    case 2124:  /* avx512vl_fmadd_v4sf_mask3_round */
    case 2122:  /* avx512vl_fmadd_v8sf_mask3_round */
    case 2120:  /* avx512f_fmadd_v16sf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 2129:  /* avx512vl_fmadd_v2df_mask3 */
    case 2127:  /* avx512vl_fmadd_v4df_mask3 */
    case 2125:  /* avx512f_fmadd_v8df_mask3 */
    case 2123:  /* avx512vl_fmadd_v4sf_mask3 */
    case 2121:  /* avx512vl_fmadd_v8sf_mask3 */
    case 2119:  /* avx512f_fmadd_v16sf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 2116:  /* avx512f_fmadd_v8df_mask_round */
    case 2112:  /* avx512f_fmadd_v16sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2118:  /* avx512vl_fmadd_v2df_mask */
    case 2117:  /* avx512vl_fmadd_v4df_mask */
    case 2115:  /* avx512f_fmadd_v8df_mask */
    case 2114:  /* avx512vl_fmadd_v4sf_mask */
    case 2113:  /* avx512vl_fmadd_v8sf_mask */
    case 2111:  /* avx512f_fmadd_v16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 4276:  /* avx512f_vinserti32x4_1_mask */
    case 4274:  /* avx512f_vinsertf32x4_1_mask */
    case 4272:  /* avx512dq_vinserti64x2_1_mask */
    case 4270:  /* avx512dq_vinsertf64x2_1_mask */
    case 2110:  /* *fma_fmadd_v8df_maskz_1_bcst_3 */
    case 2108:  /* *fma_fmadd_v16sf_maskz_1_bcst_3 */
    case 2106:  /* *fma_fmadd_v4df_maskz_1_bcst_3 */
    case 2104:  /* *fma_fmadd_v8sf_maskz_1_bcst_3 */
    case 2102:  /* *fma_fmadd_v2df_maskz_1_bcst_3 */
    case 2100:  /* *fma_fmadd_v4sf_maskz_1_bcst_3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4275:  /* *avx512f_vinserti32x4_1 */
    case 4273:  /* *avx512f_vinsertf32x4_1 */
    case 4271:  /* *avx512dq_vinserti64x2_1 */
    case 4269:  /* *avx512dq_vinsertf64x2_1 */
    case 4268:  /* *avx512f_vinserti32x4_0 */
    case 4267:  /* *avx512f_vinsertf32x4_0 */
    case 4266:  /* *avx512dq_vinserti64x2_0 */
    case 4265:  /* *avx512dq_vinsertf64x2_0 */
    case 2109:  /* **fma_fmadd_v8df_bcst_3 */
    case 2107:  /* **fma_fmadd_v16sf_bcst_3 */
    case 2105:  /* **fma_fmadd_v4df_bcst_3 */
    case 2103:  /* **fma_fmadd_v8sf_bcst_3 */
    case 2101:  /* **fma_fmadd_v2df_bcst_3 */
    case 2099:  /* **fma_fmadd_v4sf_bcst_3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2234:  /* fma_fnmadd_v2df_maskz_1 */
    case 2232:  /* fma_fnmadd_v4df_maskz_1 */
    case 2228:  /* fma_fnmadd_v8df_maskz_1 */
    case 2225:  /* fma_fnmadd_v4sf_maskz_1 */
    case 2223:  /* fma_fnmadd_v8sf_maskz_1 */
    case 2219:  /* fma_fnmadd_v16sf_maskz_1 */
    case 2098:  /* *fma_fmadd_v8df_maskz_1_bcst_2 */
    case 2096:  /* *fma_fmadd_v16sf_maskz_1_bcst_2 */
    case 2094:  /* *fma_fmadd_v4df_maskz_1_bcst_2 */
    case 2092:  /* *fma_fmadd_v8sf_maskz_1_bcst_2 */
    case 2090:  /* *fma_fmadd_v2df_maskz_1_bcst_2 */
    case 2088:  /* *fma_fmadd_v4sf_maskz_1_bcst_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2154:  /* fma_fmsub_v2df_maskz_1 */
    case 2152:  /* fma_fmsub_v4df_maskz_1 */
    case 2148:  /* fma_fmsub_v8df_maskz_1 */
    case 2145:  /* fma_fmsub_v4sf_maskz_1 */
    case 2143:  /* fma_fmsub_v8sf_maskz_1 */
    case 2139:  /* fma_fmsub_v16sf_maskz_1 */
    case 2086:  /* *fma_fmadd_v8df_maskz_1_bcst_1 */
    case 2084:  /* *fma_fmadd_v16sf_maskz_1_bcst_1 */
    case 2082:  /* *fma_fmadd_v4df_maskz_1_bcst_1 */
    case 2080:  /* *fma_fmadd_v8sf_maskz_1_bcst_1 */
    case 2078:  /* *fma_fmadd_v2df_maskz_1_bcst_1 */
    case 2076:  /* *fma_fmadd_v4sf_maskz_1_bcst_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2153:  /* *fma_fmsub_v2df */
    case 2151:  /* *fma_fmsub_v4df */
    case 2147:  /* *fma_fmsub_v8df */
    case 2146:  /* *fma_fmsub_df */
    case 2144:  /* *fma_fmsub_v4sf */
    case 2142:  /* *fma_fmsub_v8sf */
    case 2138:  /* *fma_fmsub_v16sf */
    case 2137:  /* *fma_fmsub_sf */
    case 2136:  /* *fma_fmsub_v4df */
    case 2135:  /* *fma_fmsub_v8sf */
    case 2134:  /* *fma_fmsub_v2df */
    case 2133:  /* *fma_fmsub_v4sf */
    case 2132:  /* *fma_fmsub_df */
    case 2131:  /* *fma_fmsub_sf */
    case 2085:  /* **fma_fmadd_v8df_bcst_1 */
    case 2083:  /* **fma_fmadd_v16sf_bcst_1 */
    case 2081:  /* **fma_fmadd_v4df_bcst_1 */
    case 2079:  /* **fma_fmadd_v8sf_bcst_1 */
    case 2077:  /* **fma_fmadd_v2df_bcst_1 */
    case 2075:  /* **fma_fmadd_v4sf_bcst_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 2070:  /* fma_fmadd_v8df_maskz_1_round */
    case 2061:  /* fma_fmadd_v16sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2069:  /* *fma_fmadd_v8df_round */
    case 2060:  /* *fma_fmadd_v16sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2074:  /* fma_fmadd_v2df_maskz_1 */
    case 2072:  /* fma_fmadd_v4df_maskz_1 */
    case 2068:  /* fma_fmadd_v8df_maskz_1 */
    case 2065:  /* fma_fmadd_v4sf_maskz_1 */
    case 2063:  /* fma_fmadd_v8sf_maskz_1 */
    case 2059:  /* fma_fmadd_v16sf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1990:  /* sse2_ucomi_round */
    case 1986:  /* sse_ucomi_round */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1989:  /* sse2_ucomi */
    case 1985:  /* sse_ucomi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      break;

    case 1988:  /* sse2_comi_round */
    case 1984:  /* sse_comi_round */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1987:  /* sse2_comi */
    case 1983:  /* sse_comi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 1976:  /* avx512f_vmcmpv2df3_mask_round */
    case 1974:  /* avx512f_vmcmpv4sf3_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1975:  /* avx512f_vmcmpv2df3_mask */
    case 1973:  /* avx512f_vmcmpv4sf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 1972:  /* avx512f_vmcmpv2df3_round */
    case 1970:  /* avx512f_vmcmpv4sf3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1971:  /* avx512f_vmcmpv2df3 */
    case 1969:  /* avx512f_vmcmpv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      break;

    case 1892:  /* *avx512f_cmpv8di3_mask_round */
    case 1884:  /* *avx512f_cmpv16si3_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1968:  /* *avx512vl_ucmpv2di3_mask */
    case 1966:  /* *avx512vl_ucmpv4di3_mask */
    case 1964:  /* *avx512f_ucmpv8di3_mask */
    case 1962:  /* *avx512vl_ucmpv4si3_mask */
    case 1960:  /* *avx512vl_ucmpv8si3_mask */
    case 1958:  /* *avx512f_ucmpv16si3_mask */
    case 1944:  /* *avx512vl_ucmpv8hi3_mask */
    case 1942:  /* *avx512vl_ucmpv16hi3_mask */
    case 1940:  /* *avx512bw_ucmpv32hi3_mask */
    case 1938:  /* *avx512vl_ucmpv32qi3_mask */
    case 1936:  /* *avx512vl_ucmpv16qi3_mask */
    case 1934:  /* *avx512bw_ucmpv64qi3_mask */
    case 1920:  /* *avx512vl_cmpv8hi3_mask */
    case 1918:  /* *avx512vl_cmpv16hi3_mask */
    case 1916:  /* *avx512bw_cmpv32hi3_mask */
    case 1914:  /* *avx512vl_cmpv32qi3_mask */
    case 1912:  /* *avx512vl_cmpv16qi3_mask */
    case 1910:  /* *avx512bw_cmpv64qi3_mask */
    case 1896:  /* *avx512vl_cmpv2di3_mask */
    case 1894:  /* *avx512vl_cmpv4di3_mask */
    case 1891:  /* *avx512f_cmpv8di3_mask */
    case 1888:  /* *avx512vl_cmpv4si3_mask */
    case 1886:  /* *avx512vl_cmpv8si3_mask */
    case 1883:  /* *avx512f_cmpv16si3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1890:  /* *avx512f_cmpv8di3_round */
    case 1882:  /* *avx512f_cmpv16si3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1876:  /* avx512f_cmpv8df3_mask_round */
    case 1868:  /* avx512f_cmpv16sf3_mask_round */
    case 1860:  /* avx512f_cmpv8di3_mask_round */
    case 1852:  /* avx512f_cmpv16si3_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1956:  /* avx512vl_ucmpv2di3_mask */
    case 1954:  /* avx512vl_ucmpv4di3_mask */
    case 1952:  /* avx512f_ucmpv8di3_mask */
    case 1950:  /* avx512vl_ucmpv4si3_mask */
    case 1948:  /* avx512vl_ucmpv8si3_mask */
    case 1946:  /* avx512f_ucmpv16si3_mask */
    case 1932:  /* avx512vl_ucmpv8hi3_mask */
    case 1930:  /* avx512vl_ucmpv16hi3_mask */
    case 1928:  /* avx512bw_ucmpv32hi3_mask */
    case 1926:  /* avx512vl_ucmpv32qi3_mask */
    case 1924:  /* avx512vl_ucmpv16qi3_mask */
    case 1922:  /* avx512bw_ucmpv64qi3_mask */
    case 1908:  /* avx512vl_cmpv8hi3_mask */
    case 1906:  /* avx512vl_cmpv16hi3_mask */
    case 1904:  /* avx512bw_cmpv32hi3_mask */
    case 1902:  /* avx512vl_cmpv32qi3_mask */
    case 1900:  /* avx512vl_cmpv16qi3_mask */
    case 1898:  /* avx512bw_cmpv64qi3_mask */
    case 1880:  /* avx512vl_cmpv2df3_mask */
    case 1878:  /* avx512vl_cmpv4df3_mask */
    case 1875:  /* avx512f_cmpv8df3_mask */
    case 1872:  /* avx512vl_cmpv4sf3_mask */
    case 1870:  /* avx512vl_cmpv8sf3_mask */
    case 1867:  /* avx512f_cmpv16sf3_mask */
    case 1864:  /* avx512vl_cmpv2di3_mask */
    case 1862:  /* avx512vl_cmpv4di3_mask */
    case 1859:  /* avx512f_cmpv8di3_mask */
    case 1856:  /* avx512vl_cmpv4si3_mask */
    case 1854:  /* avx512vl_cmpv8si3_mask */
    case 1851:  /* avx512f_cmpv16si3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 5596:  /* avx512dq_rangepv8df_round */
    case 5588:  /* avx512dq_rangepv16sf_round */
    case 2397:  /* *fma_fmaddsub_v8df_round */
    case 2388:  /* *fma_fmaddsub_v16sf_round */
    case 1874:  /* avx512f_cmpv8df3_round */
    case 1866:  /* avx512f_cmpv16sf3_round */
    case 1858:  /* avx512f_cmpv8di3_round */
    case 1850:  /* avx512f_cmpv16si3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1848:  /* sse2_vmmaskcmpv2df3 */
    case 1847:  /* sse_vmmaskcmpv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 5656:  /* avx512f_vgetmantv2df_mask */
    case 5652:  /* avx512f_vgetmantv4sf_mask */
    case 5608:  /* avx512dq_rangesv2df_mask */
    case 5604:  /* avx512dq_rangesv4sf_mask */
    case 1832:  /* reducesv2df_mask */
    case 1830:  /* reducesv4sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 5655:  /* avx512f_vgetmantv2df */
    case 5651:  /* avx512f_vgetmantv4sf */
    case 5607:  /* avx512dq_rangesv2df */
    case 5603:  /* avx512dq_rangesv4sf */
    case 1838:  /* avx_vmcmpv2df3 */
    case 1837:  /* avx_vmcmpv4sf3 */
    case 1831:  /* reducesv2df */
    case 1829:  /* reducesv4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 4441:  /* ssse3_phsubdv4si3 */
    case 4440:  /* ssse3_phadddv4si3 */
    case 4437:  /* ssse3_phsubswv4hi3 */
    case 4436:  /* ssse3_phsubwv4hi3 */
    case 4435:  /* ssse3_phaddswv4hi3 */
    case 4434:  /* ssse3_phaddwv4hi3 */
    case 1816:  /* sse3_hsubv4sf3 */
    case 1815:  /* sse3_haddv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0);
      recog_data.dup_num[5] = 2;
      break;

    case 4439:  /* avx2_phsubdv8si3 */
    case 4438:  /* avx2_phadddv8si3 */
    case 1814:  /* avx_hsubv8sf3 */
    case 1813:  /* avx_haddv8sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1), 0);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 1), 0);
      recog_data.dup_num[5] = 2;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[6] = 1;
      recog_data.dup_loc[7] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[7] = 1;
      recog_data.dup_loc[8] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[8] = 1;
      recog_data.dup_loc[9] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1), 0);
      recog_data.dup_num[9] = 1;
      recog_data.dup_loc[10] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[10] = 2;
      recog_data.dup_loc[11] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 0);
      recog_data.dup_num[11] = 2;
      recog_data.dup_loc[12] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[12] = 2;
      recog_data.dup_loc[13] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 1), 0);
      recog_data.dup_num[13] = 2;
      break;

    case 1812:  /* *sse3_hsubv2df3_low */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1811:  /* *sse3_haddv2df3_low */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1809:  /* *sse3_haddv2df3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0, 0));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 1808:  /* avx_hsubv4df3 */
    case 1807:  /* avx_haddv4df3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0);
      recog_data.dup_num[5] = 2;
      break;

    case 1806:  /* sse3_addsubv4sf3 */
    case 1805:  /* avx_addsubv8sf3 */
    case 1804:  /* sse3_addsubv2df3 */
    case 1803:  /* avx_addsubv4df3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 1786:  /* *ieee_minv2df3 */
    case 1785:  /* *ieee_maxv2df3 */
    case 1784:  /* *ieee_minv4sf3 */
    case 1783:  /* *ieee_maxv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 5650:  /* avx512vl_getmantv2df_mask_round */
    case 5646:  /* avx512vl_getmantv4df_mask_round */
    case 5642:  /* avx512f_getmantv8df_mask_round */
    case 5638:  /* avx512vl_getmantv4sf_mask_round */
    case 5634:  /* avx512vl_getmantv8sf_mask_round */
    case 5630:  /* avx512f_getmantv16sf_mask_round */
    case 3161:  /* avx512vl_rndscalev2df_mask_round */
    case 3157:  /* avx512vl_rndscalev4df_mask_round */
    case 3153:  /* avx512f_rndscalev8df_mask_round */
    case 3149:  /* avx512vl_rndscalev4sf_mask_round */
    case 3145:  /* avx512vl_rndscalev8sf_mask_round */
    case 3141:  /* avx512f_rndscalev16sf_mask_round */
    case 3027:  /* avx512vl_scalefv2df_mask_round */
    case 3023:  /* avx512vl_scalefv4df_mask_round */
    case 3019:  /* avx512f_scalefv8df_mask_round */
    case 3015:  /* avx512vl_scalefv4sf_mask_round */
    case 3011:  /* avx512vl_scalefv8sf_mask_round */
    case 3007:  /* avx512f_scalefv16sf_mask_round */
    case 1774:  /* ieee_minv8df3_mask_round */
    case 1770:  /* ieee_maxv8df3_mask_round */
    case 1758:  /* ieee_minv16sf3_mask_round */
    case 1754:  /* ieee_maxv16sf3_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 5954:  /* avx512f_cvtne2ps2bf16_v8hi_mask */
    case 5952:  /* avx512f_cvtne2ps2bf16_v16hi_mask */
    case 5950:  /* avx512f_cvtne2ps2bf16_v32hi_mask */
    case 5795:  /* vgf2p8mulb_v16qi_mask */
    case 5793:  /* vgf2p8mulb_v32qi_mask */
    case 5791:  /* vgf2p8mulb_v64qi_mask */
    case 5744:  /* avx5124vnniw_vp4dpwssds_mask */
    case 5741:  /* avx5124vnniw_vp4dpwssd_mask */
    case 5738:  /* avx5124fmaddps_4fnmaddss_mask */
    case 5735:  /* avx5124fmaddps_4fnmaddps_mask */
    case 5732:  /* avx5124fmaddps_4fmaddss_mask */
    case 5729:  /* avx5124fmaddps_4fmaddps_mask */
    case 5725:  /* vpmultishiftqbv32qi_mask */
    case 5723:  /* vpmultishiftqbv16qi_mask */
    case 5721:  /* vpmultishiftqbv64qi_mask */
    case 5649:  /* avx512vl_getmantv2df_mask */
    case 5645:  /* avx512vl_getmantv4df_mask */
    case 5641:  /* avx512f_getmantv8df_mask */
    case 5637:  /* avx512vl_getmantv4sf_mask */
    case 5633:  /* avx512vl_getmantv8sf_mask */
    case 5629:  /* avx512f_getmantv16sf_mask */
    case 5316:  /* avx512f_vcvtps2ph512_mask */
    case 5314:  /* vcvtps2ph256_mask */
    case 5110:  /* avx_vpermilvarv2df3_mask */
    case 5108:  /* avx_vpermilvarv4df3_mask */
    case 5106:  /* avx512f_vpermilvarv8df3_mask */
    case 5104:  /* avx_vpermilvarv4sf3_mask */
    case 5102:  /* avx_vpermilvarv8sf3_mask */
    case 5100:  /* avx512f_vpermilvarv16sf3_mask */
    case 4934:  /* avx512bw_permvarv32hi_mask */
    case 4932:  /* avx512vl_permvarv16hi_mask */
    case 4930:  /* avx512vl_permvarv8hi_mask */
    case 4928:  /* avx512vl_permvarv32qi_mask */
    case 4926:  /* avx512vl_permvarv16qi_mask */
    case 4924:  /* avx512bw_permvarv64qi_mask */
    case 4922:  /* avx2_permvarv4df_mask */
    case 4920:  /* avx2_permvarv4di_mask */
    case 4918:  /* avx512f_permvarv8df_mask */
    case 4916:  /* avx512f_permvarv8di_mask */
    case 4914:  /* avx512f_permvarv16sf_mask */
    case 4912:  /* avx512f_permvarv16si_mask */
    case 4910:  /* avx2_permvarv8sf_mask */
    case 4908:  /* avx2_permvarv8si_mask */
    case 4467:  /* ssse3_pshufbv16qi3_mask */
    case 4465:  /* avx2_pshufbv32qi3_mask */
    case 4463:  /* avx512bw_pshufbv64qi3_mask */
    case 4450:  /* avx512bw_pmaddubsw512v32hi_mask */
    case 4448:  /* avx512bw_pmaddubsw512v16hi_mask */
    case 4446:  /* avx512bw_pmaddubsw512v8hi_mask */
    case 4322:  /* avx512bw_pshufhwv32hi_mask */
    case 4316:  /* avx512bw_pshuflwv32hi_mask */
    case 3548:  /* avx512bw_pmaddwd512v8hi_mask */
    case 3546:  /* avx512bw_pmaddwd512v16hi_mask */
    case 3544:  /* avx512bw_pmaddwd512v32hi_mask */
    case 3160:  /* avx512vl_rndscalev2df_mask */
    case 3156:  /* avx512vl_rndscalev4df_mask */
    case 3152:  /* avx512f_rndscalev8df_mask */
    case 3148:  /* avx512vl_rndscalev4sf_mask */
    case 3144:  /* avx512vl_rndscalev8sf_mask */
    case 3140:  /* avx512f_rndscalev16sf_mask */
    case 3026:  /* avx512vl_scalefv2df_mask */
    case 3022:  /* avx512vl_scalefv4df_mask */
    case 3018:  /* avx512f_scalefv8df_mask */
    case 3014:  /* avx512vl_scalefv4sf_mask */
    case 3010:  /* avx512vl_scalefv8sf_mask */
    case 3006:  /* avx512f_scalefv16sf_mask */
    case 1828:  /* reducepv2df_mask */
    case 1826:  /* reducepv4df_mask */
    case 1824:  /* reducepv8df_mask */
    case 1822:  /* reducepv4sf_mask */
    case 1820:  /* reducepv8sf_mask */
    case 1818:  /* reducepv16sf_mask */
    case 1782:  /* ieee_minv2df3_mask */
    case 1780:  /* ieee_maxv2df3_mask */
    case 1778:  /* ieee_minv4df3_mask */
    case 1776:  /* ieee_maxv4df3_mask */
    case 1773:  /* ieee_minv8df3_mask */
    case 1769:  /* ieee_maxv8df3_mask */
    case 1766:  /* ieee_minv4sf3_mask */
    case 1764:  /* ieee_maxv4sf3_mask */
    case 1762:  /* ieee_minv8sf3_mask */
    case 1760:  /* ieee_maxv8sf3_mask */
    case 1757:  /* ieee_minv16sf3_mask */
    case 1753:  /* ieee_maxv16sf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 5648:  /* avx512vl_getmantv2df_round */
    case 5644:  /* avx512vl_getmantv4df_round */
    case 5640:  /* avx512f_getmantv8df_round */
    case 5636:  /* avx512vl_getmantv4sf_round */
    case 5632:  /* avx512vl_getmantv8sf_round */
    case 5628:  /* avx512f_getmantv16sf_round */
    case 3159:  /* avx512vl_rndscalev2df_round */
    case 3155:  /* avx512vl_rndscalev4df_round */
    case 3151:  /* avx512f_rndscalev8df_round */
    case 3147:  /* avx512vl_rndscalev4sf_round */
    case 3143:  /* avx512vl_rndscalev8sf_round */
    case 3139:  /* avx512f_rndscalev16sf_round */
    case 3025:  /* avx512vl_scalefv2df_round */
    case 3021:  /* avx512vl_scalefv4df_round */
    case 3017:  /* avx512f_scalefv8df_round */
    case 3013:  /* avx512vl_scalefv4sf_round */
    case 3009:  /* avx512vl_scalefv8sf_round */
    case 3005:  /* avx512f_scalefv16sf_round */
    case 1772:  /* ieee_minv8df3_round */
    case 1768:  /* ieee_maxv8df3_round */
    case 1756:  /* ieee_minv16sf3_round */
    case 1752:  /* ieee_maxv16sf3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1698:  /* *sse2_vmsqrtv2df2_mask_round */
    case 1694:  /* *sse_vmsqrtv4sf2_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1697:  /* *sse2_vmsqrtv2df2_mask */
    case 1693:  /* *sse_vmsqrtv4sf2_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 1696:  /* *sse2_vmsqrtv2df2_round */
    case 1692:  /* *sse_vmsqrtv4sf2_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1690:  /* sse2_vmsqrtv2df2_mask_round */
    case 1686:  /* sse_vmsqrtv4sf2_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1689:  /* sse2_vmsqrtv2df2_mask */
    case 1685:  /* sse_vmsqrtv4sf2_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 1688:  /* sse2_vmsqrtv2df2_round */
    case 1684:  /* sse_vmsqrtv4sf2_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2834:  /* avx512f_cvtps2pd512_mask_round */
    case 2825:  /* avx512f_cvtpd2ps512_mask_round */
    case 2800:  /* fixuns_truncv8sfv8di2_mask_round */
    case 2796:  /* fix_truncv8sfv8di2_mask_round */
    case 2768:  /* fixuns_truncv8dfv8di2_mask_round */
    case 2764:  /* fix_truncv8dfv8di2_mask_round */
    case 2753:  /* fixuns_truncv8dfv8si2_mask_round */
    case 2749:  /* fix_truncv8dfv8si2_mask_round */
    case 2704:  /* floatunsv8div8sf2_mask_round */
    case 2700:  /* floatv8div8sf2_mask_round */
    case 2696:  /* floatunsv2div2df2_mask_round */
    case 2692:  /* floatv2div2df2_mask_round */
    case 2688:  /* floatunsv4div4df2_mask_round */
    case 2684:  /* floatv4div4df2_mask_round */
    case 2680:  /* floatunsv8div8df2_mask_round */
    case 2676:  /* floatv8div8df2_mask_round */
    case 2632:  /* ufix_truncv16sfv16si2_mask_round */
    case 2628:  /* fix_truncv16sfv16si2_mask_round */
    case 2588:  /* ufloatv4siv4sf2_mask_round */
    case 2584:  /* ufloatv8siv8sf2_mask_round */
    case 2580:  /* ufloatv16siv16sf2_mask_round */
    case 2572:  /* floatv16siv16sf2_mask_round */
    case 2229:  /* *fma_fnmadd_v8df_round */
    case 2220:  /* *fma_fnmadd_v16sf_round */
    case 1678:  /* avx512f_sqrtv8df2_mask_round */
    case 1670:  /* avx512f_sqrtv16sf2_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 5777:  /* vpopcountv8hi_mask */
    case 5775:  /* vpopcountv16hi_mask */
    case 5773:  /* vpopcountv32hi_mask */
    case 5771:  /* vpopcountv32qi_mask */
    case 5769:  /* vpopcountv16qi_mask */
    case 5767:  /* vpopcountv64qi_mask */
    case 5757:  /* vpopcountv2di_mask */
    case 5755:  /* vpopcountv4di_mask */
    case 5753:  /* vpopcountv8di_mask */
    case 5751:  /* vpopcountv4si_mask */
    case 5749:  /* vpopcountv8si_mask */
    case 5747:  /* vpopcountv16si_mask */
    case 5676:  /* clzv2di2_mask */
    case 5674:  /* clzv4di2_mask */
    case 5672:  /* clzv8di2_mask */
    case 5670:  /* clzv4si2_mask */
    case 5668:  /* clzv8si2_mask */
    case 5666:  /* clzv16si2_mask */
    case 5092:  /* avx512dq_broadcastv4df_mask_1 */
    case 5090:  /* avx512dq_broadcastv4di_mask_1 */
    case 5088:  /* avx512dq_broadcastv8df_mask_1 */
    case 5086:  /* avx512dq_broadcastv8di_mask_1 */
    case 5084:  /* avx512dq_broadcastv16si_mask_1 */
    case 5082:  /* avx512dq_broadcastv16sf_mask_1 */
    case 5080:  /* avx512vl_broadcastv8sf_mask_1 */
    case 5078:  /* avx512vl_broadcastv8si_mask_1 */
    case 5043:  /* avx512vl_vec_dup_gprv2df_mask */
    case 5041:  /* avx512vl_vec_dup_gprv4df_mask */
    case 5039:  /* avx512f_vec_dup_gprv8df_mask */
    case 5037:  /* avx512vl_vec_dup_gprv4sf_mask */
    case 5035:  /* avx512vl_vec_dup_gprv8sf_mask */
    case 5033:  /* avx512f_vec_dup_gprv16sf_mask */
    case 5031:  /* avx512vl_vec_dup_gprv2di_mask */
    case 5029:  /* avx512vl_vec_dup_gprv4di_mask */
    case 5027:  /* avx512f_vec_dup_gprv8di_mask */
    case 5025:  /* avx512vl_vec_dup_gprv4si_mask */
    case 5023:  /* avx512vl_vec_dup_gprv8si_mask */
    case 5021:  /* avx512f_vec_dup_gprv16si_mask */
    case 5019:  /* avx512vl_vec_dup_gprv8hi_mask */
    case 5017:  /* avx512vl_vec_dup_gprv16hi_mask */
    case 5015:  /* avx512bw_vec_dup_gprv32hi_mask */
    case 5013:  /* avx512vl_vec_dup_gprv32qi_mask */
    case 5011:  /* avx512vl_vec_dup_gprv16qi_mask */
    case 5009:  /* avx512bw_vec_dup_gprv64qi_mask */
    case 5007:  /* avx512f_broadcastv8di_mask */
    case 5005:  /* avx512f_broadcastv8df_mask */
    case 5003:  /* avx512f_broadcastv16si_mask */
    case 5001:  /* avx512f_broadcastv16sf_mask */
    case 4704:  /* *sse4_1_zero_extendv2siv2di2_mask_1 */
    case 4702:  /* *sse4_1_sign_extendv2siv2di2_mask_1 */
    case 4696:  /* avx2_zero_extendv4siv4di2_mask */
    case 4694:  /* avx2_sign_extendv4siv4di2_mask */
    case 4692:  /* avx512f_zero_extendv8siv8di2_mask */
    case 4690:  /* avx512f_sign_extendv8siv8di2_mask */
    case 4684:  /* *sse4_1_zero_extendv2hiv2di2_mask_1 */
    case 4682:  /* *sse4_1_sign_extendv2hiv2di2_mask_1 */
    case 4672:  /* *avx2_zero_extendv4hiv4di2_mask_1 */
    case 4670:  /* *avx2_sign_extendv4hiv4di2_mask_1 */
    case 4664:  /* avx512f_zero_extendv8hiv8di2_mask */
    case 4662:  /* avx512f_sign_extendv8hiv8di2_mask */
    case 4652:  /* *avx2_zero_extendv4qiv4di2_mask_1 */
    case 4650:  /* *avx2_sign_extendv4qiv4di2_mask_1 */
    case 4640:  /* *avx512f_zero_extendv8qiv8di2_mask_1 */
    case 4638:  /* *avx512f_sign_extendv8qiv8di2_mask_1 */
    case 4628:  /* *sse4_1_zero_extendv4hiv4si2_mask_1 */
    case 4626:  /* *sse4_1_sign_extendv4hiv4si2_mask_1 */
    case 4620:  /* avx2_zero_extendv8hiv8si2_mask */
    case 4618:  /* avx2_sign_extendv8hiv8si2_mask */
    case 4616:  /* avx512f_zero_extendv16hiv16si2_mask */
    case 4614:  /* avx512f_sign_extendv16hiv16si2_mask */
    case 4608:  /* *sse4_1_zero_extendv4qiv4si2_mask_1 */
    case 4606:  /* *sse4_1_sign_extendv4qiv4si2_mask_1 */
    case 4596:  /* *avx2_zero_extendv8qiv8si2_mask_1 */
    case 4594:  /* *avx2_sign_extendv8qiv8si2_mask_1 */
    case 4588:  /* avx512f_zero_extendv16qiv16si2_mask */
    case 4586:  /* avx512f_sign_extendv16qiv16si2_mask */
    case 4580:  /* *sse4_1_zero_extendv8qiv8hi2_mask_1 */
    case 4578:  /* *sse4_1_sign_extendv8qiv8hi2_mask_1 */
    case 4572:  /* avx512bw_zero_extendv32qiv32hi2_mask */
    case 4570:  /* avx512bw_sign_extendv32qiv32hi2_mask */
    case 4568:  /* avx2_zero_extendv16qiv16hi2_mask */
    case 4566:  /* avx2_sign_extendv16qiv16hi2_mask */
    case 4508:  /* absv8hi2_mask */
    case 4507:  /* absv16hi2_mask */
    case 4506:  /* absv32hi2_mask */
    case 4505:  /* absv32qi2_mask */
    case 4504:  /* absv16qi2_mask */
    case 4503:  /* absv64qi2_mask */
    case 4502:  /* absv2di2_mask */
    case 4501:  /* absv4di2_mask */
    case 4500:  /* absv8di2_mask */
    case 4499:  /* absv4si2_mask */
    case 4498:  /* absv8si2_mask */
    case 4497:  /* absv16si2_mask */
    case 3254:  /* avx512vl_us_truncatev16hiv16qi2_mask */
    case 3253:  /* avx512vl_truncatev16hiv16qi2_mask */
    case 3252:  /* avx512vl_ss_truncatev16hiv16qi2_mask */
    case 3251:  /* avx512vl_us_truncatev8siv8hi2_mask */
    case 3250:  /* avx512vl_truncatev8siv8hi2_mask */
    case 3249:  /* avx512vl_ss_truncatev8siv8hi2_mask */
    case 3248:  /* avx512vl_us_truncatev4div4si2_mask */
    case 3247:  /* avx512vl_truncatev4div4si2_mask */
    case 3246:  /* avx512vl_ss_truncatev4div4si2_mask */
    case 3236:  /* avx512bw_us_truncatev32hiv32qi2_mask */
    case 3235:  /* avx512bw_truncatev32hiv32qi2_mask */
    case 3234:  /* avx512bw_ss_truncatev32hiv32qi2_mask */
    case 3230:  /* avx512f_us_truncatev8div8hi2_mask */
    case 3229:  /* avx512f_truncatev8div8hi2_mask */
    case 3228:  /* avx512f_ss_truncatev8div8hi2_mask */
    case 3227:  /* avx512f_us_truncatev8div8si2_mask */
    case 3226:  /* avx512f_truncatev8div8si2_mask */
    case 3225:  /* avx512f_ss_truncatev8div8si2_mask */
    case 3224:  /* avx512f_us_truncatev16siv16hi2_mask */
    case 3223:  /* avx512f_truncatev16siv16hi2_mask */
    case 3222:  /* avx512f_ss_truncatev16siv16hi2_mask */
    case 3221:  /* avx512f_us_truncatev16siv16qi2_mask */
    case 3220:  /* avx512f_truncatev16siv16qi2_mask */
    case 3219:  /* avx512f_ss_truncatev16siv16qi2_mask */
    case 3203:  /* vec_dupv2df_mask */
    case 2973:  /* vec_extract_hi_v8sf_mask */
    case 2972:  /* vec_extract_hi_v8si_mask */
    case 2971:  /* vec_extract_hi_v8sf_maskm */
    case 2970:  /* vec_extract_hi_v8si_maskm */
    case 2969:  /* vec_extract_lo_v8sf_maskm */
    case 2968:  /* vec_extract_lo_v8si_maskm */
    case 2967:  /* vec_extract_lo_v8sf_mask */
    case 2965:  /* vec_extract_lo_v8si_mask */
    case 2963:  /* vec_extract_hi_v4df_mask */
    case 2961:  /* vec_extract_hi_v4di_mask */
    case 2959:  /* vec_extract_lo_v4df_mask */
    case 2957:  /* vec_extract_lo_v4di_mask */
    case 2955:  /* vec_extract_lo_v16si_mask */
    case 2953:  /* vec_extract_lo_v16sf_mask */
    case 2951:  /* vec_extract_hi_v16si_mask */
    case 2949:  /* vec_extract_hi_v16sf_mask */
    case 2947:  /* vec_extract_hi_v16si_maskm */
    case 2946:  /* vec_extract_hi_v16sf_maskm */
    case 2945:  /* vec_extract_hi_v8di_mask */
    case 2943:  /* vec_extract_hi_v8df_mask */
    case 2941:  /* vec_extract_hi_v8di_maskm */
    case 2940:  /* vec_extract_hi_v8df_maskm */
    case 2939:  /* vec_extract_lo_v8di_mask */
    case 2937:  /* vec_extract_lo_v8df_mask */
    case 2935:  /* vec_extract_lo_v8di_maskm */
    case 2934:  /* vec_extract_lo_v8df_maskm */
    case 2836:  /* avx_cvtps2pd256_mask */
    case 2833:  /* avx512f_cvtps2pd512_mask */
    case 2827:  /* avx_cvtpd2ps256_mask */
    case 2824:  /* avx512f_cvtpd2ps512_mask */
    case 2812:  /* ufix_truncv4sfv4si2_mask */
    case 2810:  /* ufix_truncv8sfv8si2_mask */
    case 2804:  /* fixuns_truncv4sfv4di2_mask */
    case 2802:  /* fix_truncv4sfv4di2_mask */
    case 2799:  /* fixuns_truncv8sfv8di2_mask */
    case 2795:  /* fix_truncv8sfv8di2_mask */
    case 2776:  /* fixuns_truncv2dfv2di2_mask */
    case 2774:  /* fix_truncv2dfv2di2_mask */
    case 2772:  /* fixuns_truncv4dfv4di2_mask */
    case 2770:  /* fix_truncv4dfv4di2_mask */
    case 2767:  /* fixuns_truncv8dfv8di2_mask */
    case 2763:  /* fix_truncv8dfv8di2_mask */
    case 2760:  /* ufix_truncv4dfv4si2_mask */
    case 2758:  /* fix_truncv4dfv4si2_mask */
    case 2752:  /* fixuns_truncv8dfv8si2_mask */
    case 2748:  /* fix_truncv8dfv8si2_mask */
    case 2718:  /* ufloatv4siv4df2_mask */
    case 2716:  /* ufloatv8siv8df2_mask */
    case 2708:  /* floatunsv4div4sf2_mask */
    case 2706:  /* floatv4div4sf2_mask */
    case 2703:  /* floatunsv8div8sf2_mask */
    case 2699:  /* floatv8div8sf2_mask */
    case 2695:  /* floatunsv2div2df2_mask */
    case 2691:  /* floatv2div2df2_mask */
    case 2687:  /* floatunsv4div4df2_mask */
    case 2683:  /* floatv4div4df2_mask */
    case 2679:  /* floatunsv8div8df2_mask */
    case 2675:  /* floatv8div8df2_mask */
    case 2672:  /* floatv4siv4df2_mask */
    case 2670:  /* floatv8siv8df2_mask */
    case 2636:  /* fix_truncv4sfv4si2_mask */
    case 2634:  /* fix_truncv8sfv8si2_mask */
    case 2631:  /* ufix_truncv16sfv16si2_mask */
    case 2627:  /* fix_truncv16sfv16si2_mask */
    case 2587:  /* ufloatv4siv4sf2_mask */
    case 2583:  /* ufloatv8siv8sf2_mask */
    case 2579:  /* ufloatv16siv16sf2_mask */
    case 2576:  /* floatv4siv4sf2_mask */
    case 2574:  /* floatv8siv8sf2_mask */
    case 2571:  /* floatv16siv16sf2_mask */
    case 2233:  /* *fma_fnmadd_v2df */
    case 2231:  /* *fma_fnmadd_v4df */
    case 2227:  /* *fma_fnmadd_v8df */
    case 2226:  /* *fma_fnmadd_df */
    case 2224:  /* *fma_fnmadd_v4sf */
    case 2222:  /* *fma_fnmadd_v8sf */
    case 2218:  /* *fma_fnmadd_v16sf */
    case 2217:  /* *fma_fnmadd_sf */
    case 2216:  /* *fma_fnmadd_v4df */
    case 2215:  /* *fma_fnmadd_v8sf */
    case 2214:  /* *fma_fnmadd_v2df */
    case 2213:  /* *fma_fnmadd_v4sf */
    case 2212:  /* *fma_fnmadd_df */
    case 2211:  /* *fma_fnmadd_sf */
    case 2097:  /* **fma_fmadd_v8df_bcst_2 */
    case 2095:  /* **fma_fmadd_v16sf_bcst_2 */
    case 2093:  /* **fma_fmadd_v4df_bcst_2 */
    case 2091:  /* **fma_fmadd_v8sf_bcst_2 */
    case 2089:  /* **fma_fmadd_v2df_bcst_2 */
    case 2087:  /* **fma_fmadd_v4sf_bcst_2 */
    case 1682:  /* sse2_sqrtv2df2_mask */
    case 1680:  /* avx_sqrtv4df2_mask */
    case 1677:  /* avx512f_sqrtv8df2_mask */
    case 1674:  /* sse_sqrtv4sf2_mask */
    case 1672:  /* avx_sqrtv8sf2_mask */
    case 1669:  /* avx512f_sqrtv16sf2_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2832:  /* avx512f_cvtps2pd512_round */
    case 2823:  /* *avx512f_cvtpd2ps512_round */
    case 2798:  /* fixuns_truncv8sfv8di2_round */
    case 2794:  /* fix_truncv8sfv8di2_round */
    case 2766:  /* fixuns_truncv8dfv8di2_round */
    case 2762:  /* fix_truncv8dfv8di2_round */
    case 2751:  /* fixuns_truncv8dfv8si2_round */
    case 2747:  /* fix_truncv8dfv8si2_round */
    case 2702:  /* floatunsv8div8sf2_round */
    case 2698:  /* floatv8div8sf2_round */
    case 2694:  /* floatunsv2div2df2_round */
    case 2690:  /* floatv2div2df2_round */
    case 2686:  /* floatunsv4div4df2_round */
    case 2682:  /* floatv4div4df2_round */
    case 2678:  /* floatunsv8div8df2_round */
    case 2674:  /* floatv8div8df2_round */
    case 2630:  /* ufix_truncv16sfv16si2_round */
    case 2626:  /* fix_truncv16sfv16si2_round */
    case 2586:  /* ufloatv4siv4sf2_round */
    case 2582:  /* ufloatv8siv8sf2_round */
    case 2578:  /* ufloatv16siv16sf2_round */
    case 2570:  /* floatv16siv16sf2_round */
    case 1676:  /* avx512f_sqrtv8df2_round */
    case 1668:  /* avx512f_sqrtv16sf2_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1716:  /* rsqrt14_v2df_mask */
    case 1715:  /* rsqrt14_v4sf_mask */
    case 1666:  /* srcp14v2df_mask */
    case 1665:  /* srcp14v4sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 5960:  /* avx512f_cvtneps2bf16_v4sf_mask */
    case 5958:  /* avx512f_cvtneps2bf16_v8sf_mask */
    case 5956:  /* avx512f_cvtneps2bf16_v16sf_mask */
    case 5688:  /* conflictv2di_mask */
    case 5686:  /* conflictv4di_mask */
    case 5684:  /* conflictv8di_mask */
    case 5682:  /* conflictv4si_mask */
    case 5680:  /* conflictv8si_mask */
    case 5678:  /* conflictv16si_mask */
    case 5308:  /* avx512f_vcvtph2ps512_mask */
    case 5305:  /* vcvtph2ps256_mask */
    case 5303:  /* *vcvtph2ps_load_mask */
    case 4784:  /* avx512er_rsqrt28v8df_mask */
    case 4780:  /* avx512er_rsqrt28v16sf_mask */
    case 4772:  /* avx512er_rcp28v8df_mask */
    case 4768:  /* avx512er_rcp28v16sf_mask */
    case 4764:  /* avx512er_exp2v8df_mask */
    case 4760:  /* avx512er_exp2v16sf_mask */
    case 3068:  /* avx512vl_getexpv2df_mask */
    case 3064:  /* avx512vl_getexpv4df_mask */
    case 3060:  /* avx512f_getexpv8df_mask */
    case 3056:  /* avx512vl_getexpv4sf_mask */
    case 3052:  /* avx512vl_getexpv8sf_mask */
    case 3048:  /* avx512f_getexpv16sf_mask */
    case 2792:  /* ufix_notruncv2dfv2di2_mask */
    case 2790:  /* ufix_notruncv4dfv4di2_mask */
    case 2787:  /* ufix_notruncv8dfv8di2_mask */
    case 2784:  /* fix_notruncv2dfv2di2_mask */
    case 2782:  /* fix_notruncv4dfv4di2_mask */
    case 2779:  /* fix_notruncv8dfv8di2_mask */
    case 2741:  /* ufix_notruncv4dfv4si2_mask */
    case 2737:  /* ufix_notruncv8dfv8si2_mask */
    case 2730:  /* avx_cvtpd2dq256_mask */
    case 2727:  /* avx512f_cvtpd2dq512_mask */
    case 2622:  /* avx512dq_cvtps2uqqv4di_mask */
    case 2619:  /* avx512dq_cvtps2uqqv8di_mask */
    case 2614:  /* avx512dq_cvtps2qqv4di_mask */
    case 2611:  /* avx512dq_cvtps2qqv8di_mask */
    case 2607:  /* avx512vl_ufix_notruncv4sfv4si_mask */
    case 2603:  /* avx512vl_ufix_notruncv8sfv8si_mask */
    case 2599:  /* avx512f_ufix_notruncv16sfv16si_mask */
    case 2595:  /* avx512f_fix_notruncv16sfv16si_mask */
    case 2592:  /* sse2_fix_notruncv4sfv4si_mask */
    case 2590:  /* avx_fix_notruncv8sfv8si_mask */
    case 1712:  /* rsqrt14v2df_mask */
    case 1710:  /* rsqrt14v4df_mask */
    case 1708:  /* rsqrt14v8df_mask */
    case 1706:  /* rsqrt14v4sf_mask */
    case 1704:  /* rsqrt14v8sf_mask */
    case 1702:  /* rsqrt14v16sf_mask */
    case 1662:  /* rcp14v2df_mask */
    case 1660:  /* rcp14v4df_mask */
    case 1658:  /* rcp14v8df_mask */
    case 1656:  /* rcp14v4sf_mask */
    case 1654:  /* rcp14v8sf_mask */
    case 1652:  /* rcp14v16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1718:  /* *sse_vmrsqrtv4sf2 */
    case 1650:  /* *sse_vmrcpv4sf2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 4860:  /* *xop_vmfrczv2df2 */
    case 4859:  /* *xop_vmfrczv4sf2 */
    case 4788:  /* avx512er_vmrsqrt28v2df */
    case 4786:  /* avx512er_vmrsqrt28v4sf */
    case 4776:  /* avx512er_vmrcp28v2df */
    case 4774:  /* avx512er_vmrcp28v4sf */
    case 2731:  /* *avx_cvtpd2dq256_2 */
    case 1717:  /* sse_vmrsqrtv4sf2 */
    case 1714:  /* rsqrt14v2df */
    case 1713:  /* rsqrt14v4sf */
    case 1664:  /* srcp14v2df */
    case 1663:  /* srcp14v4sf */
    case 1649:  /* sse_vmrcpv4sf2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1802:  /* sse2_vmsminv2df3_mask_round */
    case 1798:  /* sse2_vmsmaxv2df3_mask_round */
    case 1794:  /* sse_vmsminv4sf3_mask_round */
    case 1790:  /* sse_vmsmaxv4sf3_mask_round */
    case 1618:  /* sse2_vmdivv2df3_mask_round */
    case 1614:  /* sse2_vmmulv2df3_mask_round */
    case 1610:  /* sse_vmdivv4sf3_mask_round */
    case 1606:  /* sse_vmmulv4sf3_mask_round */
    case 1570:  /* sse2_vmsubv2df3_mask_round */
    case 1566:  /* sse2_vmaddv2df3_mask_round */
    case 1562:  /* sse_vmsubv4sf3_mask_round */
    case 1558:  /* sse_vmaddv4sf3_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1800:  /* sse2_vmsminv2df3_mask */
    case 1796:  /* sse2_vmsmaxv2df3_mask */
    case 1792:  /* sse_vmsminv4sf3_mask */
    case 1788:  /* sse_vmsmaxv4sf3_mask */
    case 1617:  /* sse2_vmdivv2df3_mask */
    case 1613:  /* sse2_vmmulv2df3_mask */
    case 1609:  /* sse_vmdivv4sf3_mask */
    case 1605:  /* sse_vmmulv4sf3_mask */
    case 1569:  /* sse2_vmsubv2df3_mask */
    case 1565:  /* sse2_vmaddv2df3_mask */
    case 1561:  /* sse_vmsubv4sf3_mask */
    case 1557:  /* sse_vmaddv4sf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1801:  /* sse2_vmsminv2df3_round */
    case 1797:  /* sse2_vmsmaxv2df3_round */
    case 1793:  /* sse_vmsminv4sf3_round */
    case 1789:  /* sse_vmsmaxv4sf3_round */
    case 1616:  /* sse2_vmdivv2df3_round */
    case 1612:  /* sse2_vmmulv2df3_round */
    case 1608:  /* sse_vmdivv4sf3_round */
    case 1604:  /* sse_vmmulv4sf3_round */
    case 1568:  /* sse2_vmsubv2df3_round */
    case 1564:  /* sse2_vmaddv2df3_round */
    case 1560:  /* sse_vmsubv4sf3_round */
    case 1556:  /* sse_vmaddv4sf3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1799:  /* sse2_vmsminv2df3 */
    case 1795:  /* sse2_vmsmaxv2df3 */
    case 1791:  /* sse_vmsminv4sf3 */
    case 1787:  /* sse_vmsmaxv4sf3 */
    case 1615:  /* sse2_vmdivv2df3 */
    case 1611:  /* sse2_vmmulv2df3 */
    case 1607:  /* sse_vmdivv4sf3 */
    case 1603:  /* sse_vmmulv4sf3 */
    case 1567:  /* sse2_vmsubv2df3 */
    case 1563:  /* sse2_vmaddv2df3 */
    case 1559:  /* sse_vmsubv4sf3 */
    case 1555:  /* sse_vmaddv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1602:  /* *sse2_vmdivv2df3 */
    case 1601:  /* *sse2_vmmulv2df3 */
    case 1600:  /* *sse_vmdivv4sf3 */
    case 1599:  /* *sse_vmmulv4sf3 */
    case 1554:  /* *sse2_vmsubv2df3 */
    case 1553:  /* *sse2_vmaddv2df3 */
    case 1552:  /* *sse_vmsubv4sf3 */
    case 1551:  /* *sse_vmaddv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 5210:  /* vec_set_hi_v8sf_mask */
    case 5208:  /* vec_set_hi_v8si_mask */
    case 5202:  /* vec_set_hi_v4df_mask */
    case 5200:  /* vec_set_hi_v4di_mask */
    case 4292:  /* vec_set_hi_v8di_mask */
    case 4290:  /* vec_set_hi_v8df_mask */
    case 4284:  /* vec_set_hi_v16si_mask */
    case 4282:  /* vec_set_hi_v16sf_mask */
    case 4014:  /* *xorv2di3_bcst */
    case 4012:  /* *iorv2di3_bcst */
    case 4010:  /* *andv2di3_bcst */
    case 4008:  /* *xorv4di3_bcst */
    case 4006:  /* *iorv4di3_bcst */
    case 4004:  /* *andv4di3_bcst */
    case 4002:  /* *xorv8di3_bcst */
    case 4000:  /* *iorv8di3_bcst */
    case 3998:  /* *andv8di3_bcst */
    case 3996:  /* *xorv4si3_bcst */
    case 3994:  /* *iorv4si3_bcst */
    case 3992:  /* *andv4si3_bcst */
    case 3990:  /* *xorv8si3_bcst */
    case 3988:  /* *iorv8si3_bcst */
    case 3986:  /* *andv8si3_bcst */
    case 3984:  /* *xorv16si3_bcst */
    case 3982:  /* *iorv16si3_bcst */
    case 3980:  /* *andv16si3_bcst */
    case 3924:  /* *andnotv2di3_mask */
    case 3923:  /* *andnotv4di3_mask */
    case 3922:  /* *andnotv8di3_mask */
    case 3921:  /* *andnotv4si3_mask */
    case 3920:  /* *andnotv8si3_mask */
    case 3919:  /* *andnotv16si3_mask */
    case 2002:  /* avx512f_andnotv8df3_mask */
    case 2000:  /* avx512f_andnotv16sf3_mask */
    case 1998:  /* sse2_andnotv2df3_mask */
    case 1996:  /* avx_andnotv4df3_mask */
    case 1994:  /* sse_andnotv4sf3_mask */
    case 1992:  /* avx_andnotv8sf3_mask */
    case 1598:  /* *mulv8df3_mask_bcst */
    case 1596:  /* *mulv16sf3_mask_bcst */
    case 1594:  /* *mulv4df3_mask_bcst */
    case 1592:  /* *mulv8sf3_mask_bcst */
    case 1590:  /* *mulv2df3_mask_bcst */
    case 1588:  /* *mulv4sf3_mask_bcst */
    case 1550:  /* *addv8df3_mask_bcst */
    case 1548:  /* *addv16sf3_mask_bcst */
    case 1546:  /* *addv4df3_mask_bcst */
    case 1544:  /* *addv8sf3_mask_bcst */
    case 1542:  /* *addv2df3_mask_bcst */
    case 1540:  /* *addv4sf3_mask_bcst */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1646:  /* *avx512f_divv8df3_mask_bcst */
    case 1644:  /* *avx512f_divv16sf3_mask_bcst */
    case 1642:  /* *avx512vl_divv4df3_mask_bcst */
    case 1640:  /* *avx512vl_divv8sf3_mask_bcst */
    case 1638:  /* *avx512vl_divv2df3_mask_bcst */
    case 1636:  /* *avx512vl_divv4sf3_mask_bcst */
    case 1538:  /* *subv8df3_mask_bcst */
    case 1536:  /* *subv16sf3_mask_bcst */
    case 1534:  /* *subv4df3_mask_bcst */
    case 1532:  /* *subv8sf3_mask_bcst */
    case 1530:  /* *subv2df3_mask_bcst */
    case 1528:  /* *subv4sf3_mask_bcst */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3434:  /* *subv2di3_bcst */
    case 3433:  /* *subv4di3_bcst */
    case 3432:  /* *subv8di3_bcst */
    case 3431:  /* *subv4si3_bcst */
    case 3430:  /* *subv8si3_bcst */
    case 3429:  /* *subv16si3_bcst */
    case 1645:  /* *avx512f_divv8df3_bcst */
    case 1643:  /* *avx512f_divv16sf3_bcst */
    case 1641:  /* *avx512vl_divv4df3_bcst */
    case 1639:  /* *avx512vl_divv8sf3_bcst */
    case 1637:  /* *avx512vl_divv2df3_bcst */
    case 1635:  /* *avx512vl_divv4sf3_bcst */
    case 1537:  /* *subv8df3_bcst */
    case 1535:  /* *subv16sf3_bcst */
    case 1533:  /* *subv4df3_bcst */
    case 1531:  /* *subv8sf3_bcst */
    case 1529:  /* *subv2df3_bcst */
    case 1527:  /* *subv4sf3_bcst */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 1742:  /* *sminv8df3_mask_round */
    case 1738:  /* *smaxv8df3_mask_round */
    case 1726:  /* *sminv16sf3_mask_round */
    case 1722:  /* *smaxv16sf3_mask_round */
    case 1630:  /* avx512f_divv8df3_mask_round */
    case 1622:  /* avx512f_divv16sf3_mask_round */
    case 1582:  /* *mulv8df3_mask_round */
    case 1574:  /* *mulv16sf3_mask_round */
    case 1526:  /* *subv2df3_mask_round */
    case 1522:  /* *addv2df3_mask_round */
    case 1518:  /* *subv4df3_mask_round */
    case 1514:  /* *addv4df3_mask_round */
    case 1510:  /* *subv8df3_mask_round */
    case 1506:  /* *addv8df3_mask_round */
    case 1502:  /* *subv4sf3_mask_round */
    case 1498:  /* *addv4sf3_mask_round */
    case 1494:  /* *subv8sf3_mask_round */
    case 1490:  /* *addv8sf3_mask_round */
    case 1486:  /* *subv16sf3_mask_round */
    case 1482:  /* *addv16sf3_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 5287:  /* avx512bw_lshrvv32hi_mask */
    case 5285:  /* avx512bw_ashlvv32hi_mask */
    case 5283:  /* avx512vl_lshrvv16hi_mask */
    case 5281:  /* avx512vl_ashlvv16hi_mask */
    case 5279:  /* avx512vl_lshrvv8hi_mask */
    case 5277:  /* avx512vl_ashlvv8hi_mask */
    case 5275:  /* avx2_lshrvv2di_mask */
    case 5273:  /* avx2_ashlvv2di_mask */
    case 5271:  /* avx2_lshrvv4di_mask */
    case 5269:  /* avx2_ashlvv4di_mask */
    case 5267:  /* avx512f_lshrvv8di_mask */
    case 5265:  /* avx512f_ashlvv8di_mask */
    case 5263:  /* avx2_lshrvv4si_mask */
    case 5261:  /* avx2_ashlvv4si_mask */
    case 5259:  /* avx2_lshrvv8si_mask */
    case 5257:  /* avx2_ashlvv8si_mask */
    case 5255:  /* avx512f_lshrvv16si_mask */
    case 5253:  /* avx512f_ashlvv16si_mask */
    case 5251:  /* avx512bw_ashrvv32hi_mask */
    case 5249:  /* avx512vl_ashrvv16hi_mask */
    case 5247:  /* avx512vl_ashrvv8hi_mask */
    case 5245:  /* avx512f_ashrvv8di_mask */
    case 5243:  /* avx2_ashrvv4di_mask */
    case 5241:  /* avx2_ashrvv2di_mask */
    case 5239:  /* avx512f_ashrvv16si_mask */
    case 5237:  /* avx2_ashrvv8si_mask */
    case 5235:  /* avx2_ashrvv4si_mask */
    case 3960:  /* xorv2di3_mask */
    case 3958:  /* iorv2di3_mask */
    case 3956:  /* andv2di3_mask */
    case 3954:  /* xorv4di3_mask */
    case 3952:  /* iorv4di3_mask */
    case 3950:  /* andv4di3_mask */
    case 3948:  /* xorv8di3_mask */
    case 3946:  /* iorv8di3_mask */
    case 3944:  /* andv8di3_mask */
    case 3942:  /* xorv4si3_mask */
    case 3940:  /* iorv4si3_mask */
    case 3938:  /* andv4si3_mask */
    case 3936:  /* xorv8si3_mask */
    case 3934:  /* iorv8si3_mask */
    case 3932:  /* andv8si3_mask */
    case 3930:  /* xorv16si3_mask */
    case 3928:  /* iorv16si3_mask */
    case 3926:  /* andv16si3_mask */
    case 3900:  /* one_cmplv2di2_mask */
    case 3898:  /* one_cmplv4di2_mask */
    case 3896:  /* one_cmplv4si2_mask */
    case 3894:  /* one_cmplv8si2_mask */
    case 3886:  /* one_cmplv8di2_mask */
    case 3884:  /* one_cmplv16si2_mask */
    case 3816:  /* *sse4_1_uminv4si3_mask */
    case 3814:  /* *sse4_1_umaxv4si3_mask */
    case 3812:  /* *sse4_1_uminv8hi3_mask */
    case 3810:  /* *sse4_1_umaxv8hi3_mask */
    case 3806:  /* *sse4_1_sminv4si3_mask */
    case 3804:  /* *sse4_1_smaxv4si3_mask */
    case 3802:  /* *sse4_1_sminv16qi3_mask */
    case 3800:  /* *sse4_1_smaxv16qi3_mask */
    case 3798:  /* uminv8hi3_mask */
    case 3796:  /* umaxv8hi3_mask */
    case 3794:  /* sminv8hi3_mask */
    case 3792:  /* smaxv8hi3_mask */
    case 3790:  /* uminv16hi3_mask */
    case 3788:  /* umaxv16hi3_mask */
    case 3786:  /* sminv16hi3_mask */
    case 3784:  /* smaxv16hi3_mask */
    case 3782:  /* uminv32hi3_mask */
    case 3780:  /* umaxv32hi3_mask */
    case 3778:  /* sminv32hi3_mask */
    case 3776:  /* smaxv32hi3_mask */
    case 3774:  /* uminv32qi3_mask */
    case 3772:  /* umaxv32qi3_mask */
    case 3770:  /* sminv32qi3_mask */
    case 3768:  /* smaxv32qi3_mask */
    case 3766:  /* uminv16qi3_mask */
    case 3764:  /* umaxv16qi3_mask */
    case 3762:  /* sminv16qi3_mask */
    case 3760:  /* smaxv16qi3_mask */
    case 3758:  /* uminv64qi3_mask */
    case 3756:  /* umaxv64qi3_mask */
    case 3754:  /* sminv64qi3_mask */
    case 3752:  /* smaxv64qi3_mask */
    case 3750:  /* *avx512f_uminv2di3_mask */
    case 3748:  /* *avx512f_umaxv2di3_mask */
    case 3746:  /* *avx512f_sminv2di3_mask */
    case 3744:  /* *avx512f_smaxv2di3_mask */
    case 3742:  /* *avx512f_uminv4di3_mask */
    case 3740:  /* *avx512f_umaxv4di3_mask */
    case 3738:  /* *avx512f_sminv4di3_mask */
    case 3736:  /* *avx512f_smaxv4di3_mask */
    case 3734:  /* *avx512f_uminv8di3_mask */
    case 3732:  /* *avx512f_umaxv8di3_mask */
    case 3730:  /* *avx512f_sminv8di3_mask */
    case 3728:  /* *avx512f_smaxv8di3_mask */
    case 3726:  /* *avx512f_uminv4si3_mask */
    case 3724:  /* *avx512f_umaxv4si3_mask */
    case 3722:  /* *avx512f_sminv4si3_mask */
    case 3720:  /* *avx512f_smaxv4si3_mask */
    case 3718:  /* *avx512f_uminv8si3_mask */
    case 3716:  /* *avx512f_umaxv8si3_mask */
    case 3714:  /* *avx512f_sminv8si3_mask */
    case 3712:  /* *avx512f_smaxv8si3_mask */
    case 3710:  /* *avx512f_uminv16si3_mask */
    case 3708:  /* *avx512f_umaxv16si3_mask */
    case 3706:  /* *avx512f_sminv16si3_mask */
    case 3704:  /* *avx512f_smaxv16si3_mask */
    case 3690:  /* avx512vl_rorv2di_mask */
    case 3688:  /* avx512vl_rolv2di_mask */
    case 3686:  /* avx512vl_rorv4di_mask */
    case 3684:  /* avx512vl_rolv4di_mask */
    case 3682:  /* avx512f_rorv8di_mask */
    case 3680:  /* avx512f_rolv8di_mask */
    case 3678:  /* avx512vl_rorv4si_mask */
    case 3676:  /* avx512vl_rolv4si_mask */
    case 3674:  /* avx512vl_rorv8si_mask */
    case 3672:  /* avx512vl_rolv8si_mask */
    case 3670:  /* avx512f_rorv16si_mask */
    case 3668:  /* avx512f_rolv16si_mask */
    case 3666:  /* avx512vl_rorvv2di_mask */
    case 3664:  /* avx512vl_rolvv2di_mask */
    case 3662:  /* avx512vl_rorvv4di_mask */
    case 3660:  /* avx512vl_rolvv4di_mask */
    case 3658:  /* avx512f_rorvv8di_mask */
    case 3656:  /* avx512f_rolvv8di_mask */
    case 3654:  /* avx512vl_rorvv4si_mask */
    case 3652:  /* avx512vl_rolvv4si_mask */
    case 3650:  /* avx512vl_rorvv8si_mask */
    case 3648:  /* avx512vl_rolvv8si_mask */
    case 3646:  /* avx512f_rorvv16si_mask */
    case 3644:  /* avx512f_rolvv16si_mask */
    case 3632:  /* lshrv8di3_mask */
    case 3630:  /* ashlv8di3_mask */
    case 3628:  /* lshrv16si3_mask */
    case 3626:  /* ashlv16si3_mask */
    case 3624:  /* lshrv32hi3_mask */
    case 3622:  /* ashlv32hi3_mask */
    case 3608:  /* lshrv2di3_mask */
    case 3606:  /* ashlv2di3_mask */
    case 3604:  /* lshrv4di3_mask */
    case 3602:  /* ashlv4di3_mask */
    case 3600:  /* lshrv4si3_mask */
    case 3598:  /* ashlv4si3_mask */
    case 3596:  /* lshrv8si3_mask */
    case 3594:  /* ashlv8si3_mask */
    case 3592:  /* lshrv8hi3_mask */
    case 3590:  /* ashlv8hi3_mask */
    case 3588:  /* lshrv16hi3_mask */
    case 3586:  /* ashlv16hi3_mask */
    case 3584:  /* ashrv8di3_mask */
    case 3582:  /* ashrv16si3_mask */
    case 3580:  /* ashrv4di3_mask */
    case 3578:  /* ashrv32hi3_mask */
    case 3572:  /* ashrv2di3_mask */
    case 3570:  /* ashrv4si3_mask */
    case 3568:  /* ashrv8si3_mask */
    case 3566:  /* ashrv8hi3_mask */
    case 3564:  /* ashrv16hi3_mask */
    case 3562:  /* *sse4_1_mulv4si3_mask */
    case 3560:  /* *avx2_mulv8si3_mask */
    case 3558:  /* *avx512f_mulv16si3_mask */
    case 3556:  /* avx512dq_mulv2di3_mask */
    case 3554:  /* avx512dq_mulv4di3_mask */
    case 3552:  /* avx512dq_mulv8di3_mask */
    case 3518:  /* *mulv8hi3_mask */
    case 3516:  /* *mulv16hi3_mask */
    case 3514:  /* *mulv32hi3_mask */
    case 3512:  /* *sse2_ussubv8hi3_mask */
    case 3510:  /* *sse2_sssubv8hi3_mask */
    case 3508:  /* *sse2_usaddv8hi3_mask */
    case 3506:  /* *sse2_ssaddv8hi3_mask */
    case 3504:  /* *avx2_ussubv16hi3_mask */
    case 3502:  /* *avx2_sssubv16hi3_mask */
    case 3500:  /* *avx2_usaddv16hi3_mask */
    case 3498:  /* *avx2_ssaddv16hi3_mask */
    case 3496:  /* *avx512bw_ussubv32hi3_mask */
    case 3494:  /* *avx512bw_sssubv32hi3_mask */
    case 3492:  /* *avx512bw_usaddv32hi3_mask */
    case 3490:  /* *avx512bw_ssaddv32hi3_mask */
    case 3488:  /* *sse2_ussubv16qi3_mask */
    case 3486:  /* *sse2_sssubv16qi3_mask */
    case 3484:  /* *sse2_usaddv16qi3_mask */
    case 3482:  /* *sse2_ssaddv16qi3_mask */
    case 3480:  /* *avx2_ussubv32qi3_mask */
    case 3478:  /* *avx2_sssubv32qi3_mask */
    case 3476:  /* *avx2_usaddv32qi3_mask */
    case 3474:  /* *avx2_ssaddv32qi3_mask */
    case 3472:  /* *avx512bw_ussubv64qi3_mask */
    case 3470:  /* *avx512bw_sssubv64qi3_mask */
    case 3468:  /* *avx512bw_usaddv64qi3_mask */
    case 3466:  /* *avx512bw_ssaddv64qi3_mask */
    case 3464:  /* *subv8hi3_mask */
    case 3463:  /* *addv8hi3_mask */
    case 3462:  /* *subv16hi3_mask */
    case 3461:  /* *addv16hi3_mask */
    case 3460:  /* *subv32hi3_mask */
    case 3459:  /* *addv32hi3_mask */
    case 3458:  /* *subv32qi3_mask */
    case 3457:  /* *addv32qi3_mask */
    case 3456:  /* *subv16qi3_mask */
    case 3455:  /* *addv16qi3_mask */
    case 3454:  /* *subv64qi3_mask */
    case 3453:  /* *addv64qi3_mask */
    case 3452:  /* *subv2di3_mask */
    case 3451:  /* *addv2di3_mask */
    case 3450:  /* *subv4di3_mask */
    case 3449:  /* *addv4di3_mask */
    case 3448:  /* *subv8di3_mask */
    case 3447:  /* *addv8di3_mask */
    case 3446:  /* *subv4si3_mask */
    case 3445:  /* *addv4si3_mask */
    case 3444:  /* *subv8si3_mask */
    case 3443:  /* *addv8si3_mask */
    case 3442:  /* *subv16si3_mask */
    case 3441:  /* *addv16si3_mask */
    case 2038:  /* *xorv8df3_mask */
    case 2036:  /* *iorv8df3_mask */
    case 2034:  /* *andv8df3_mask */
    case 2032:  /* *xorv16sf3_mask */
    case 2030:  /* *iorv16sf3_mask */
    case 2028:  /* *andv16sf3_mask */
    case 2026:  /* *xorv2df3_mask */
    case 2024:  /* *iorv2df3_mask */
    case 2022:  /* *andv2df3_mask */
    case 2020:  /* *xorv4df3_mask */
    case 2018:  /* *iorv4df3_mask */
    case 2016:  /* *andv4df3_mask */
    case 2014:  /* *xorv4sf3_mask */
    case 2012:  /* *iorv4sf3_mask */
    case 2010:  /* *andv4sf3_mask */
    case 2008:  /* *xorv8sf3_mask */
    case 2006:  /* *iorv8sf3_mask */
    case 2004:  /* *andv8sf3_mask */
    case 1750:  /* *sminv2df3_mask */
    case 1748:  /* *smaxv2df3_mask */
    case 1746:  /* *sminv4df3_mask */
    case 1744:  /* *smaxv4df3_mask */
    case 1741:  /* *sminv8df3_mask */
    case 1737:  /* *smaxv8df3_mask */
    case 1734:  /* *sminv4sf3_mask */
    case 1732:  /* *smaxv4sf3_mask */
    case 1730:  /* *sminv8sf3_mask */
    case 1728:  /* *smaxv8sf3_mask */
    case 1725:  /* *sminv16sf3_mask */
    case 1721:  /* *smaxv16sf3_mask */
    case 1634:  /* sse2_divv2df3_mask */
    case 1632:  /* avx_divv4df3_mask */
    case 1629:  /* avx512f_divv8df3_mask */
    case 1626:  /* sse_divv4sf3_mask */
    case 1624:  /* avx_divv8sf3_mask */
    case 1621:  /* avx512f_divv16sf3_mask */
    case 1586:  /* *mulv2df3_mask */
    case 1584:  /* *mulv4df3_mask */
    case 1581:  /* *mulv8df3_mask */
    case 1578:  /* *mulv4sf3_mask */
    case 1576:  /* *mulv8sf3_mask */
    case 1573:  /* *mulv16sf3_mask */
    case 1525:  /* *subv2df3_mask */
    case 1521:  /* *addv2df3_mask */
    case 1517:  /* *subv4df3_mask */
    case 1513:  /* *addv4df3_mask */
    case 1509:  /* *subv8df3_mask */
    case 1505:  /* *addv8df3_mask */
    case 1501:  /* *subv4sf3_mask */
    case 1497:  /* *addv4sf3_mask */
    case 1493:  /* *subv8sf3_mask */
    case 1489:  /* *addv8sf3_mask */
    case 1485:  /* *subv16sf3_mask */
    case 1481:  /* *addv16sf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1740:  /* *sminv8df3_round */
    case 1736:  /* *smaxv8df3_round */
    case 1724:  /* *sminv16sf3_round */
    case 1720:  /* *smaxv16sf3_round */
    case 1628:  /* avx512f_divv8df3_round */
    case 1620:  /* avx512f_divv16sf3_round */
    case 1580:  /* *mulv8df3_round */
    case 1572:  /* *mulv16sf3_round */
    case 1524:  /* *subv2df3_round */
    case 1520:  /* *addv2df3_round */
    case 1516:  /* *subv4df3_round */
    case 1512:  /* *addv4df3_round */
    case 1508:  /* *subv8df3_round */
    case 1504:  /* *addv8df3_round */
    case 1500:  /* *subv4sf3_round */
    case 1496:  /* *addv4sf3_round */
    case 1492:  /* *subv8sf3_round */
    case 1488:  /* *addv8sf3_round */
    case 1484:  /* *subv16sf3_round */
    case 1480:  /* *addv16sf3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1460:  /* kunpckdi */
    case 1459:  /* kunpcksi */
    case 1458:  /* kunpckhi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 1398:  /* avx512vl_storev8hi_mask */
    case 1397:  /* avx512vl_storev16hi_mask */
    case 1396:  /* avx512bw_storev32hi_mask */
    case 1395:  /* avx512vl_storev32qi_mask */
    case 1394:  /* avx512vl_storev16qi_mask */
    case 1393:  /* avx512bw_storev64qi_mask */
    case 1392:  /* avx512vl_storev2df_mask */
    case 1391:  /* avx512vl_storev4df_mask */
    case 1390:  /* avx512f_storev8df_mask */
    case 1389:  /* avx512vl_storev4sf_mask */
    case 1388:  /* avx512vl_storev8sf_mask */
    case 1387:  /* avx512f_storev16sf_mask */
    case 1386:  /* avx512vl_storev2di_mask */
    case 1385:  /* avx512vl_storev4di_mask */
    case 1384:  /* avx512f_storev8di_mask */
    case 1383:  /* avx512vl_storev4si_mask */
    case 1382:  /* avx512vl_storev8si_mask */
    case 1381:  /* avx512f_storev16si_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 4563:  /* avx2_pblenddv4si */
    case 4562:  /* avx2_pblenddv8si */
    case 4561:  /* *avx2_pblendw */
    case 4560:  /* sse4_1_pblendw */
    case 4526:  /* sse4_1_blendpd */
    case 4525:  /* avx_blendpd256 */
    case 4524:  /* sse4_1_blendps */
    case 4523:  /* avx_blendps256 */
    case 1380:  /* avx512vl_blendmv8hi */
    case 1379:  /* avx512vl_blendmv16hi */
    case 1378:  /* avx512bw_blendmv32hi */
    case 1377:  /* avx512vl_blendmv32qi */
    case 1376:  /* avx512vl_blendmv16qi */
    case 1375:  /* avx512bw_blendmv64qi */
    case 1374:  /* avx512vl_blendmv2df */
    case 1373:  /* avx512vl_blendmv4df */
    case 1372:  /* avx512f_blendmv8df */
    case 1371:  /* avx512vl_blendmv4sf */
    case 1370:  /* avx512vl_blendmv8sf */
    case 1369:  /* avx512f_blendmv16sf */
    case 1368:  /* avx512vl_blendmv2di */
    case 1367:  /* avx512vl_blendmv4di */
    case 1366:  /* avx512f_blendmv8di */
    case 1365:  /* avx512vl_blendmv4si */
    case 1364:  /* avx512vl_blendmv8si */
    case 1363:  /* avx512f_blendmv16si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1362:  /* avx512f_storedf_mask */
    case 1361:  /* avx512f_storesf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 2);
      recog_data.dup_num[0] = 0;
      break;

    case 2542:  /* *fma4i_vmfnmadd_v2df */
    case 2541:  /* *fma4i_vmfnmadd_v4sf */
    case 1360:  /* *avx512f_loaddf_mask */
    case 1359:  /* *avx512f_loadsf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1358:  /* avx512f_movdf_mask */
    case 1357:  /* avx512f_movsf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 4419:  /* *sse2_maskmovdqu */
    case 4418:  /* *sse2_maskmovdqu */
    case 1315:  /* *mmx_maskmovq */
    case 1314:  /* *mmx_maskmovq */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 4952:  /* avx2_permv4df_1 */
    case 4950:  /* avx2_permv4di_1 */
    case 4319:  /* sse2_pshuflw_1 */
    case 4313:  /* sse2_pshufd_1 */
    case 2932:  /* *avx512f_vextracti32x4_1 */
    case 2930:  /* *avx512f_vextractf32x4_1 */
    case 1299:  /* mmx_pshufw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      break;

    case 4345:  /* *vec_extractv4si_zext_mem */
    case 4343:  /* *vec_extractv4si_zext */
    case 4334:  /* *vec_extractv16qi_zext */
    case 4333:  /* *vec_extractv8hi_zext */
    case 4332:  /* *vec_extractv8hi_zext */
    case 4331:  /* *vec_extractv16qi_zext */
    case 4330:  /* *vec_extractv16qi_zext */
    case 1309:  /* *vec_extractv2si_zext_mem */
    case 1298:  /* *mmx_pextrb_zext */
    case 1297:  /* *mmx_pextrb_zext */
    case 1296:  /* *mmx_pextrb_zext */
    case 1294:  /* *mmx_pextrw_zext */
    case 1293:  /* *mmx_pextrw_zext */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      break;

    case 4348:  /* *vec_extractv4ti */
    case 4347:  /* *vec_extractv2ti */
    case 4344:  /* *vec_extractv4si_mem */
    case 4342:  /* *vec_extractv4si */
    case 4336:  /* *vec_extractv8hi_mem */
    case 4335:  /* *vec_extractv16qi_mem */
    case 4329:  /* *vec_extractv8hi */
    case 4328:  /* *vec_extractv16qi */
    case 2921:  /* *vec_extractv4sf_mem */
    case 2920:  /* *sse4_1_extractps */
    case 1295:  /* *mmx_pextrb */
    case 1292:  /* *mmx_pextrw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 4264:  /* sse4_1_pinsrq */
    case 4263:  /* sse4_1_pinsrd */
    case 4262:  /* sse2_pinsrw */
    case 4261:  /* sse4_1_pinsrb */
    case 2912:  /* *vec_setv4sf_sse4_1 */
    case 1291:  /* *mmx_pinsrb */
    case 1290:  /* *mmx_pinsrw */
    case 1289:  /* *mmx_pinsrd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4554:  /* sse4_1_packusdw */
    case 4552:  /* avx2_packusdw */
    case 4550:  /* avx512bw_packusdw */
    case 4223:  /* sse2_packuswb */
    case 4221:  /* avx2_packuswb */
    case 4219:  /* avx512bw_packuswb */
    case 4217:  /* sse2_packssdw */
    case 4215:  /* avx2_packssdw */
    case 4213:  /* avx512bw_packssdw */
    case 4211:  /* sse2_packsswb */
    case 4209:  /* avx2_packsswb */
    case 4207:  /* avx512bw_packsswb */
    case 3918:  /* *andnotv2di3_bcst */
    case 3917:  /* *andnotv4di3_bcst */
    case 3916:  /* *andnotv8di3_bcst */
    case 3915:  /* *andnotv4si3_bcst */
    case 3914:  /* *andnotv8si3_bcst */
    case 3913:  /* *andnotv16si3_bcst */
    case 1282:  /* mmx_packssdw */
    case 1281:  /* mmx_packuswb */
    case 1280:  /* mmx_packsswb */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 3541:  /* *sse4_1_mulv2siv2di3 */
    case 3539:  /* *vec_widen_smult_even_v8si */
    case 3537:  /* *vec_widen_smult_even_v16si */
    case 3535:  /* *vec_widen_umult_even_v4si */
    case 3533:  /* *vec_widen_umult_even_v8si */
    case 3531:  /* *vec_widen_umult_even_v16si */
    case 1249:  /* *sse2_umulv1siv1di3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 1311:  /* *mmx_uavgv4hi3 */
    case 1310:  /* *mmx_uavgv8qi3 */
    case 1248:  /* *mmx_pmulhrwv4hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0));
      break;

    case 4454:  /* ssse3_pmaddubsw */
    case 4453:  /* ssse3_pmaddubsw128 */
    case 4444:  /* avx2_pmaddubsw256 */
    case 3550:  /* *sse2_pmaddwd */
    case 3549:  /* *avx2_pmaddwd */
    case 1247:  /* *mmx_pmaddwd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 3529:  /* *umulv8hi3_highpart */
    case 3527:  /* *smulv8hi3_highpart */
    case 3525:  /* *umulv16hi3_highpart */
    case 3523:  /* *smulv16hi3_highpart */
    case 3521:  /* *umulv32hi3_highpart */
    case 3519:  /* *smulv32hi3_highpart */
    case 1246:  /* *mmx_umulv4hi3_highpart */
    case 1245:  /* *mmx_smulv4hi3_highpart */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0));
      break;

    case 1221:  /* mmx_pi2fw */
    case 1220:  /* mmx_pf2iw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 4443:  /* ssse3_phsubdv2si3 */
    case 4442:  /* ssse3_phadddv2si3 */
    case 1810:  /* sse3_hsubv2df3 */
    case 1215:  /* mmx_addsubv2sf3 */
    case 1214:  /* mmx_hsubv2sf3 */
    case 1213:  /* mmx_haddv2sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 4725:  /* ptesttf2 */
    case 4724:  /* avx_ptestv4df */
    case 4723:  /* avx_ptestv8sf */
    case 4722:  /* avx_ptestv4di */
    case 4721:  /* avx_ptestv8si */
    case 4720:  /* avx_ptestv16hi */
    case 4719:  /* avx_ptestv32qi */
    case 4718:  /* sse4_1_ptestv2df */
    case 4717:  /* sse4_1_ptestv4sf */
    case 4716:  /* sse4_1_ptestv2di */
    case 4715:  /* sse4_1_ptestv4si */
    case 4714:  /* sse4_1_ptestv8hi */
    case 4713:  /* sse4_1_ptestv16qi */
    case 4712:  /* avx_vtestpd */
    case 4711:  /* avx_vtestpd256 */
    case 4710:  /* avx_vtestps */
    case 4709:  /* avx_vtestps256 */
    case 1457:  /* kortestdi */
    case 1456:  /* kortestsi */
    case 1455:  /* kortesthi */
    case 1454:  /* kortestqi */
    case 1453:  /* ktestdi */
    case 1452:  /* ktestsi */
    case 1451:  /* ktesthi */
    case 1450:  /* ktestqi */
    case 1191:  /* tpause */
    case 1187:  /* umwait */
    case 1186:  /* enqcmds_di */
    case 1185:  /* enqcmd_di */
    case 1184:  /* enqcmds_si */
    case 1183:  /* enqcmd_si */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1173:  /* *rdpkru */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 1162:  /* xbegin_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 1192:  /* tpause_rex64 */
    case 1188:  /* umwait_rex64 */
    case 1129:  /* *lwp_lwpinsdi3_1 */
    case 1128:  /* *lwp_lwpinssi3_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 1119:  /* fldenv */
      ro[0] = *(ro_loc[0] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 0));
      break;

    case 4425:  /* sse3_monitor_di */
    case 4424:  /* sse3_monitor_si */
    case 1174:  /* *wrpkru */
    case 1170:  /* monitorx_di */
    case 1169:  /* monitorx_si */
    case 1168:  /* mwaitx */
    case 1127:  /* *lwp_lwpvaldi3_1 */
    case 1126:  /* *lwp_lwpvalsi3_1 */
    case 1115:  /* xsetbv_rex64 */
    case 1113:  /* xrstors64 */
    case 1112:  /* xrstor64 */
    case 1111:  /* xrstors_rex64 */
    case 1110:  /* xrstor_rex64 */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (pat, 0, 2));
      break;

    case 4423:  /* sse3_mwait */
    case 1182:  /* movdir64b_di */
    case 1181:  /* movdir64b_si */
    case 1180:  /* movdiridi */
    case 1179:  /* movdirisi */
    case 1157:  /* wrussdi */
    case 1156:  /* wrusssi */
    case 1155:  /* wrssdi */
    case 1154:  /* wrsssi */
    case 1114:  /* xsetbv */
    case 1109:  /* xrstors */
    case 1108:  /* xrstor */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      break;

    case 1091:  /* rdtscp_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 1090:  /* rdtscp */
    case 1089:  /* rdtsc_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1079:  /* *stack_protect_set_3 */
    case 1078:  /* *stack_protect_set_2_di */
    case 1077:  /* *stack_protect_set_2_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 1072:  /* *prefetch_sse */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 2));
      break;

    case 1067:  /* adjust_stack_and_probe_di */
    case 1066:  /* adjust_stack_and_probe_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 2189:  /* **fma_fmsub_v8df_bcst_3 */
    case 2187:  /* **fma_fmsub_v16sf_bcst_3 */
    case 2185:  /* **fma_fmsub_v4df_bcst_3 */
    case 2183:  /* **fma_fmsub_v8sf_bcst_3 */
    case 2181:  /* **fma_fmsub_v2df_bcst_3 */
    case 2179:  /* **fma_fmsub_v4sf_bcst_3 */
    case 1031:  /* *movsicc_noc_zext */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 2073:  /* *fma_fmadd_v2df */
    case 2071:  /* *fma_fmadd_v4df */
    case 2067:  /* *fma_fmadd_v8df */
    case 2066:  /* *fma_fmadd_df */
    case 2064:  /* *fma_fmadd_v4sf */
    case 2062:  /* *fma_fmadd_v8sf */
    case 2058:  /* *fma_fmadd_v16sf */
    case 2057:  /* *fma_fmadd_sf */
    case 2056:  /* *fma_fmadd_v4df */
    case 2055:  /* *fma_fmadd_v8sf */
    case 2054:  /* *fma_fmadd_v2df */
    case 2053:  /* *fma_fmadd_v4sf */
    case 2052:  /* *fma_fmadd_df */
    case 2051:  /* *fma_fmadd_sf */
    case 1356:  /* avx512vl_loadv8hi_mask */
    case 1355:  /* avx512vl_loadv16hi_mask */
    case 1354:  /* avx512bw_loadv32hi_mask */
    case 1353:  /* avx512vl_loadv32qi_mask */
    case 1352:  /* avx512vl_loadv16qi_mask */
    case 1351:  /* avx512bw_loadv64qi_mask */
    case 1350:  /* avx512vl_loadv2df_mask */
    case 1349:  /* avx512vl_loadv4df_mask */
    case 1348:  /* avx512f_loadv8df_mask */
    case 1347:  /* avx512vl_loadv4sf_mask */
    case 1346:  /* avx512vl_loadv8sf_mask */
    case 1345:  /* avx512f_loadv16sf_mask */
    case 1344:  /* avx512vl_loadv2di_mask */
    case 1343:  /* avx512vl_loadv4di_mask */
    case 1342:  /* avx512f_loadv8di_mask */
    case 1341:  /* avx512vl_loadv4si_mask */
    case 1340:  /* avx512vl_loadv8si_mask */
    case 1339:  /* avx512f_loadv16si_mask */
    case 1037:  /* *xop_pcmov_df */
    case 1036:  /* *xop_pcmov_sf */
    case 1035:  /* *movsfcc_1_387 */
    case 1034:  /* *movdfcc_1 */
    case 1033:  /* *movxfcc_1 */
    case 1032:  /* *movqicc_noc */
    case 1030:  /* *movdicc_noc */
    case 1029:  /* *movsicc_noc */
    case 1028:  /* *movhicc_noc */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1013:  /* *strlenqi_1 */
    case 1012:  /* *strlenqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      break;

    case 1011:  /* *cmpstrnqi_1 */
    case 1010:  /* *cmpstrnqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 5), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 1009:  /* *cmpstrnqi_nz_1 */
    case 1008:  /* *cmpstrnqi_nz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 5), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1007:  /* *rep_stosqi */
    case 1006:  /* *rep_stosqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 1005:  /* *rep_stossi */
    case 1004:  /* *rep_stossi */
    case 1003:  /* *rep_stosdi_rex64 */
    case 1002:  /* *rep_stosdi_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 1001:  /* *strsetqi_1 */
    case 1000:  /* *strsetqi_1 */
    case 999:  /* *strsethi_1 */
    case 998:  /* *strsethi_1 */
    case 997:  /* *strsetsi_1 */
    case 996:  /* *strsetsi_1 */
    case 995:  /* *strsetdi_rex_1 */
    case 994:  /* *strsetdi_rex_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 993:  /* *rep_movqi */
    case 992:  /* *rep_movqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 1);
      recog_data.dup_num[3] = 5;
      break;

    case 991:  /* *rep_movsi */
    case 990:  /* *rep_movsi */
    case 989:  /* *rep_movdi_rex64 */
    case 988:  /* *rep_movdi_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[3] = 5;
      break;

    case 987:  /* *strmovqi_1 */
    case 986:  /* *strmovqi_1 */
    case 985:  /* *strmovhi_1 */
    case 984:  /* *strmovhi_1 */
    case 983:  /* *strmovsi_1 */
    case 982:  /* *strmovsi_1 */
    case 981:  /* *strmovdi_rex_1 */
    case 980:  /* *strmovdi_rex_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 970:  /* fistdi2_ceil */
    case 969:  /* fistdi2_floor */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 5979:  /* atomic_storedi_fpu */
    case 5974:  /* atomic_loaddi_fpu */
    case 974:  /* fistsi2_ceil */
    case 973:  /* fistsi2_floor */
    case 972:  /* fisthi2_ceil */
    case 971:  /* fisthi2_floor */
    case 962:  /* frndintxf2_trunc_i387 */
    case 961:  /* frndintxf2_ceil_i387 */
    case 960:  /* frndintxf2_floor_i387 */
    case 959:  /* frndintxf2_roundeven_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 1400:  /* movdi_to_sse */
    case 1076:  /* stack_protect_set_1_di */
    case 1075:  /* stack_protect_set_1_si */
    case 952:  /* lrintxfdi2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 948:  /* fscalexf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 2;
      break;

    case 4468:  /* ssse3_pshufbv8qi3 */
    case 1081:  /* stack_protect_test_1_di */
    case 1080:  /* stack_protect_test_1_si */
    case 945:  /* fyl2xp1xf3_i387 */
    case 944:  /* fyl2xxf3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 943:  /* atan2xf3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 942:  /* fptanxf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 1117:  /* xgetbv_rex64 */
    case 1087:  /* rdpmc_rex64 */
    case 946:  /* fxtractxf3_i387 */
    case 941:  /* sincosxf3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[0] = 2;
      break;

    case 938:  /* fprem1xf4_i387 */
    case 937:  /* fpremxf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[3] = 2;
      break;

    case 929:  /* *fop_df_6_i387 */
    case 928:  /* *fop_xf_6_i387 */
    case 927:  /* *fop_xf_6_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 926:  /* *fop_df_5_i387 */
    case 925:  /* *fop_xf_5_i387 */
    case 924:  /* *fop_xf_5_i387 */
    case 920:  /* *fop_xf_3_i387 */
    case 919:  /* *fop_df_3_i387 */
    case 918:  /* *fop_sf_3_i387 */
    case 917:  /* *fop_xf_3_i387 */
    case 916:  /* *fop_df_3_i387 */
    case 915:  /* *fop_sf_3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 923:  /* *fop_df_4_i387 */
    case 922:  /* *fop_xf_4_i387 */
    case 921:  /* *fop_xf_4_i387 */
    case 914:  /* *fop_xf_2_i387 */
    case 913:  /* *fop_df_2_i387 */
    case 912:  /* *fop_sf_2_i387 */
    case 911:  /* *fop_xf_2_i387 */
    case 910:  /* *fop_df_2_i387 */
    case 909:  /* *fop_sf_2_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 901:  /* *tls_dynamic_gnu2_combine_64_di */
    case 900:  /* *tls_dynamic_gnu2_combine_64_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 5983:  /* storedi_via_sse */
    case 5982:  /* loaddi_via_sse */
    case 5981:  /* storedi_via_fpu */
    case 5980:  /* loaddi_via_fpu */
    case 5959:  /* avx512f_cvtneps2bf16_v4sf */
    case 5957:  /* avx512f_cvtneps2bf16_v8sf */
    case 5955:  /* avx512f_cvtneps2bf16_v16sf */
    case 5687:  /* *conflictv2di */
    case 5685:  /* *conflictv4di */
    case 5683:  /* *conflictv8di */
    case 5681:  /* *conflictv4si */
    case 5679:  /* *conflictv8si */
    case 5677:  /* *conflictv16si */
    case 5306:  /* *avx512f_vcvtph2ps512 */
    case 5304:  /* vcvtph2ps256 */
    case 5302:  /* *vcvtph2ps_load */
    case 4885:  /* aesimc */
    case 4858:  /* xop_frczv4df2 */
    case 4857:  /* xop_frczv8sf2 */
    case 4856:  /* xop_frczv2df2 */
    case 4855:  /* xop_frczv4sf2 */
    case 4854:  /* xop_frczdf2 */
    case 4853:  /* xop_frczsf2 */
    case 4782:  /* *avx512er_rsqrt28v8df */
    case 4778:  /* *avx512er_rsqrt28v16sf */
    case 4770:  /* *avx512er_rcp28v8df */
    case 4766:  /* *avx512er_rcp28v16sf */
    case 4762:  /* avx512er_exp2v8df */
    case 4758:  /* avx512er_exp2v16sf */
    case 4564:  /* sse4_1_phminposuw */
    case 4547:  /* sse4_1_movntdqa */
    case 4546:  /* avx2_movntdqa */
    case 4545:  /* avx512f_movntdqa */
    case 4516:  /* sse4a_movntdf */
    case 4515:  /* sse4a_movntsf */
    case 4409:  /* sse2_pmovmskb */
    case 4408:  /* avx2_pmovmskb */
    case 4375:  /* sse2_movmskpd */
    case 4374:  /* avx_movmskpd256 */
    case 4373:  /* sse_movmskps */
    case 4372:  /* avx_movmskps256 */
    case 3066:  /* avx512vl_getexpv2df */
    case 3062:  /* avx512vl_getexpv4df */
    case 3058:  /* avx512f_getexpv8df */
    case 3054:  /* avx512vl_getexpv4sf */
    case 3050:  /* avx512vl_getexpv8sf */
    case 3046:  /* avx512f_getexpv16sf */
    case 2850:  /* avx512vl_cvtq2maskv2di */
    case 2849:  /* avx512vl_cvtq2maskv4di */
    case 2848:  /* avx512f_cvtq2maskv8di */
    case 2847:  /* avx512vl_cvtd2maskv4si */
    case 2846:  /* avx512vl_cvtd2maskv8si */
    case 2845:  /* avx512f_cvtd2maskv16si */
    case 2844:  /* avx512vl_cvtw2maskv8hi */
    case 2843:  /* avx512vl_cvtw2maskv16hi */
    case 2842:  /* avx512bw_cvtw2maskv32hi */
    case 2841:  /* avx512vl_cvtb2maskv32qi */
    case 2840:  /* avx512vl_cvtb2maskv16qi */
    case 2839:  /* avx512bw_cvtb2maskv64qi */
    case 2791:  /* ufix_notruncv2dfv2di2 */
    case 2789:  /* ufix_notruncv4dfv4di2 */
    case 2785:  /* ufix_notruncv8dfv8di2 */
    case 2783:  /* fix_notruncv2dfv2di2 */
    case 2781:  /* fix_notruncv4dfv4di2 */
    case 2777:  /* fix_notruncv8dfv8di2 */
    case 2739:  /* ufix_notruncv4dfv4si2 */
    case 2735:  /* ufix_notruncv8dfv8si2 */
    case 2729:  /* avx_cvtpd2dq256 */
    case 2725:  /* avx512f_cvtpd2dq512 */
    case 2664:  /* sse2_cvtsd2siq_2 */
    case 2663:  /* sse2_cvtsd2si_2 */
    case 2638:  /* sse2_cvtpd2pi */
    case 2621:  /* *avx512dq_cvtps2uqqv4di */
    case 2617:  /* *avx512dq_cvtps2uqqv8di */
    case 2613:  /* *avx512dq_cvtps2qqv4di */
    case 2609:  /* *avx512dq_cvtps2qqv8di */
    case 2605:  /* *avx512vl_ufix_notruncv4sfv4si */
    case 2601:  /* *avx512vl_ufix_notruncv8sfv8si */
    case 2597:  /* *avx512f_ufix_notruncv16sfv16si */
    case 2593:  /* avx512f_fix_notruncv16sfv16si */
    case 2591:  /* sse2_fix_notruncv4sfv4si */
    case 2589:  /* avx_fix_notruncv8sfv8si */
    case 2557:  /* sse_cvtss2siq_2 */
    case 2556:  /* sse_cvtss2si_2 */
    case 1711:  /* *rsqrt14v2df */
    case 1709:  /* *rsqrt14v4df */
    case 1707:  /* *rsqrt14v8df */
    case 1705:  /* *rsqrt14v4sf */
    case 1703:  /* *rsqrt14v8sf */
    case 1701:  /* *rsqrt14v16sf */
    case 1700:  /* sse_rsqrtv4sf2 */
    case 1699:  /* avx_rsqrtv8sf2 */
    case 1661:  /* *rcp14v2df */
    case 1659:  /* *rcp14v4df */
    case 1657:  /* *rcp14v8df */
    case 1655:  /* *rcp14v4sf */
    case 1653:  /* *rcp14v8sf */
    case 1651:  /* *rcp14v16sf */
    case 1648:  /* sse_rcpv4sf2 */
    case 1647:  /* avx_rcpv8sf2 */
    case 1413:  /* sse2_movntv2di */
    case 1412:  /* avx_movntv4di */
    case 1411:  /* avx512f_movntv8di */
    case 1410:  /* sse2_movntv2df */
    case 1409:  /* avx_movntv4df */
    case 1408:  /* avx512f_movntv8df */
    case 1407:  /* sse_movntv4sf */
    case 1406:  /* avx_movntv8sf */
    case 1405:  /* avx512f_movntv16sf */
    case 1404:  /* sse2_movntidi */
    case 1403:  /* sse2_movntisi */
    case 1402:  /* sse3_lddqu */
    case 1401:  /* avx_lddqu256 */
    case 1313:  /* mmx_pmovmskb */
    case 1211:  /* mmx_rsqrtv2sf2 */
    case 1208:  /* mmx_rcpv2sf2 */
    case 1200:  /* sse_movntq */
    case 1116:  /* xgetbv */
    case 1099:  /* xsaves */
    case 1098:  /* xsavec */
    case 1097:  /* xsaveopt */
    case 1096:  /* xsave */
    case 1086:  /* rdpmc */
    case 978:  /* movmsk_df */
    case 977:  /* fxamxf2_i387 */
    case 976:  /* fxamdf2_i387 */
    case 975:  /* fxamsf2_i387 */
    case 954:  /* lrintxfsi2 */
    case 953:  /* lrintxfhi2 */
    case 951:  /* rintxf2 */
    case 947:  /* *f2xm1xf2_i387 */
    case 940:  /* cosxf2 */
    case 939:  /* sinxf2 */
    case 933:  /* *rsqrtsf2_sse */
    case 931:  /* truncxfdf2_i387_noop_unspec */
    case 930:  /* truncxfsf2_i387_noop_unspec */
    case 905:  /* *rcpsf2_sse */
    case 897:  /* *tls_dynamic_gnu2_lea_64_di */
    case 896:  /* *tls_dynamic_gnu2_lea_64_si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 895:  /* *tls_dynamic_gnu2_combine_32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 894:  /* *tls_dynamic_gnu2_call_32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      break;

    case 893:  /* *tls_dynamic_gnu2_lea_32 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0, 0));
      break;

    case 892:  /* *add_tp_x32_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 891:  /* *add_tp_di */
    case 890:  /* *add_tp_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 886:  /* *tls_local_dynamic_32_once */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 885:  /* *tls_local_dynamic_base_64_largepic */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 882:  /* *tls_local_dynamic_base_32_gnu */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 881:  /* *tls_global_dynamic_64_largepic */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 880:  /* *tls_global_dynamic_64_di */
    case 879:  /* *tls_global_dynamic_64_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 878:  /* *tls_global_dynamic_32_gnu */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 877:  /* *parityhi2_cmp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 876:  /* paritysi2_cmp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 875:  /* paritydi2_cmp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 874:  /* bswaphi_lowpart */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 866:  /* *popcountsi2_zext_falsedep */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 865:  /* *popcountsi2_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      break;

    case 860:  /* *tbm_tzmsk_di */
    case 859:  /* *tbm_tzmsk_si */
    case 858:  /* *tbm_t1mskc_di */
    case 857:  /* *tbm_t1mskc_si */
    case 856:  /* *tbm_blsic_di */
    case 855:  /* *tbm_blsic_si */
    case 848:  /* *tbm_blcic_di */
    case 847:  /* *tbm_blcic_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 846:  /* *tbm_blci_di */
    case 845:  /* *tbm_blci_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 842:  /* *tbm_bextri_di */
    case 841:  /* *tbm_bextri_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      break;

    case 5978:  /* atomic_storedi_1 */
    case 5977:  /* atomic_storesi_1 */
    case 5976:  /* atomic_storehi_1 */
    case 5975:  /* atomic_storeqi_1 */
    case 5953:  /* avx512f_cvtne2ps2bf16_v8hi */
    case 5951:  /* avx512f_cvtne2ps2bf16_v16hi */
    case 5949:  /* avx512f_cvtne2ps2bf16_v32hi */
    case 5948:  /* avx512vp2intersect_2intersectv16si */
    case 5947:  /* avx512vp2intersect_2intersectv4si */
    case 5946:  /* avx512vp2intersect_2intersectv8si */
    case 5945:  /* avx512vp2intersect_2intersectv2di */
    case 5944:  /* avx512vp2intersect_2intersectv4di */
    case 5943:  /* avx512vp2intersect_2intersectv8di */
    case 5941:  /* avx512vl_vpshufbitqmbv16qi */
    case 5939:  /* avx512vl_vpshufbitqmbv32qi */
    case 5937:  /* avx512vl_vpshufbitqmbv64qi */
    case 5933:  /* vaesenclast_v64qi */
    case 5932:  /* vaesenclast_v16qi */
    case 5931:  /* vaesenclast_v32qi */
    case 5930:  /* vaesenc_v64qi */
    case 5929:  /* vaesenc_v16qi */
    case 5928:  /* vaesenc_v32qi */
    case 5927:  /* vaesdeclast_v64qi */
    case 5926:  /* vaesdeclast_v16qi */
    case 5925:  /* vaesdeclast_v32qi */
    case 5924:  /* vaesdec_v64qi */
    case 5923:  /* vaesdec_v16qi */
    case 5922:  /* vaesdec_v32qi */
    case 5794:  /* vgf2p8mulb_v16qi */
    case 5792:  /* vgf2p8mulb_v32qi */
    case 5790:  /* vgf2p8mulb_v64qi */
    case 5724:  /* vpmultishiftqbv32qi */
    case 5722:  /* vpmultishiftqbv16qi */
    case 5720:  /* vpmultishiftqbv64qi */
    case 5694:  /* sha256msg2 */
    case 5693:  /* sha256msg1 */
    case 5691:  /* sha1nexte */
    case 5690:  /* sha1msg2 */
    case 5689:  /* sha1msg1 */
    case 5647:  /* avx512vl_getmantv2df */
    case 5643:  /* avx512vl_getmantv4df */
    case 5639:  /* avx512f_getmantv8df */
    case 5635:  /* avx512vl_getmantv4sf */
    case 5631:  /* avx512vl_getmantv8sf */
    case 5627:  /* avx512f_getmantv16sf */
    case 5621:  /* avx512dq_fpclassv2df */
    case 5619:  /* avx512dq_fpclassv4df */
    case 5617:  /* avx512dq_fpclassv8df */
    case 5615:  /* avx512dq_fpclassv4sf */
    case 5613:  /* avx512dq_fpclassv8sf */
    case 5611:  /* avx512dq_fpclassv16sf */
    case 5315:  /* *avx512f_vcvtps2ph512 */
    case 5313:  /* vcvtps2ph256 */
    case 5312:  /* *vcvtps2ph_store */
    case 5109:  /* avx_vpermilvarv2df3 */
    case 5107:  /* avx_vpermilvarv4df3 */
    case 5105:  /* avx512f_vpermilvarv8df3 */
    case 5103:  /* avx_vpermilvarv4sf3 */
    case 5101:  /* avx_vpermilvarv8sf3 */
    case 5099:  /* avx512f_vpermilvarv16sf3 */
    case 4933:  /* avx512bw_permvarv32hi */
    case 4931:  /* avx512vl_permvarv16hi */
    case 4929:  /* avx512vl_permvarv8hi */
    case 4927:  /* avx512vl_permvarv32qi */
    case 4925:  /* avx512vl_permvarv16qi */
    case 4923:  /* avx512bw_permvarv64qi */
    case 4921:  /* avx2_permvarv4df */
    case 4919:  /* avx2_permvarv4di */
    case 4917:  /* avx512f_permvarv8df */
    case 4915:  /* avx512f_permvarv8di */
    case 4913:  /* avx512f_permvarv16sf */
    case 4911:  /* avx512f_permvarv16si */
    case 4909:  /* avx2_permvarv8sf */
    case 4907:  /* avx2_permvarv8si */
    case 4886:  /* aeskeygenassist */
    case 4884:  /* aesdeclast */
    case 4883:  /* aesdec */
    case 4882:  /* aesenclast */
    case 4881:  /* aesenc */
    case 4729:  /* sse4_1_roundpd */
    case 4728:  /* avx_roundpd256 */
    case 4727:  /* sse4_1_roundps */
    case 4726:  /* avx_roundps256 */
    case 4522:  /* sse4a_insertq */
    case 4520:  /* sse4a_extrq */
    case 4477:  /* ssse3_psignv2si3 */
    case 4476:  /* ssse3_psignv4hi3 */
    case 4475:  /* ssse3_psignv8qi3 */
    case 4474:  /* ssse3_psignv4si3 */
    case 4473:  /* avx2_psignv8si3 */
    case 4472:  /* ssse3_psignv8hi3 */
    case 4471:  /* avx2_psignv16hi3 */
    case 4470:  /* ssse3_psignv16qi3 */
    case 4469:  /* avx2_psignv32qi3 */
    case 4466:  /* ssse3_pshufbv16qi3 */
    case 4464:  /* avx2_pshufbv32qi3 */
    case 4462:  /* avx512bw_pshufbv64qi3 */
    case 4449:  /* avx512bw_pmaddubsw512v32hi */
    case 4447:  /* avx512bw_pmaddubsw512v16hi */
    case 4445:  /* avx512bw_pmaddubsw512v8hi */
    case 4371:  /* sse2_psadbw */
    case 4370:  /* avx2_psadbw */
    case 4369:  /* avx512f_psadbw */
    case 4321:  /* *avx512bw_pshufhwv32hi */
    case 4315:  /* *avx512bw_pshuflwv32hi */
    case 4061:  /* avx512vl_testnmv2di3 */
    case 4059:  /* avx512vl_testnmv4di3 */
    case 4057:  /* avx512f_testnmv8di3 */
    case 4055:  /* avx512vl_testnmv4si3 */
    case 4053:  /* avx512vl_testnmv8si3 */
    case 4051:  /* avx512f_testnmv16si3 */
    case 4049:  /* avx512vl_testnmv8hi3 */
    case 4047:  /* avx512vl_testnmv16hi3 */
    case 4045:  /* avx512bw_testnmv32hi3 */
    case 4043:  /* avx512vl_testnmv16qi3 */
    case 4041:  /* avx512vl_testnmv32qi3 */
    case 4039:  /* avx512bw_testnmv64qi3 */
    case 4037:  /* avx512vl_testmv2di3 */
    case 4035:  /* avx512vl_testmv4di3 */
    case 4033:  /* avx512f_testmv8di3 */
    case 4031:  /* avx512vl_testmv4si3 */
    case 4029:  /* avx512vl_testmv8si3 */
    case 4027:  /* avx512f_testmv16si3 */
    case 4025:  /* avx512vl_testmv8hi3 */
    case 4023:  /* avx512vl_testmv16hi3 */
    case 4021:  /* avx512bw_testmv32hi3 */
    case 4019:  /* avx512vl_testmv16qi3 */
    case 4017:  /* avx512vl_testmv32qi3 */
    case 4015:  /* avx512bw_testmv64qi3 */
    case 3878:  /* avx512vl_gtv8hi3 */
    case 3876:  /* avx512vl_gtv16hi3 */
    case 3874:  /* avx512bw_gtv32hi3 */
    case 3872:  /* avx512vl_gtv32qi3 */
    case 3870:  /* avx512vl_gtv16qi3 */
    case 3868:  /* avx512bw_gtv64qi3 */
    case 3866:  /* avx512vl_gtv2di3 */
    case 3864:  /* avx512vl_gtv4di3 */
    case 3862:  /* avx512f_gtv8di3 */
    case 3860:  /* avx512vl_gtv4si3 */
    case 3858:  /* avx512vl_gtv8si3 */
    case 3856:  /* avx512f_gtv16si3 */
    case 3845:  /* avx512vl_eqv2di3_1 */
    case 3843:  /* avx512vl_eqv4di3_1 */
    case 3841:  /* avx512f_eqv8di3_1 */
    case 3839:  /* avx512vl_eqv4si3_1 */
    case 3837:  /* avx512vl_eqv8si3_1 */
    case 3835:  /* avx512f_eqv16si3_1 */
    case 3833:  /* avx512vl_eqv8hi3_1 */
    case 3831:  /* avx512vl_eqv16hi3_1 */
    case 3829:  /* avx512bw_eqv32hi3_1 */
    case 3827:  /* avx512vl_eqv32qi3_1 */
    case 3825:  /* avx512vl_eqv16qi3_1 */
    case 3823:  /* avx512bw_eqv64qi3_1 */
    case 3547:  /* avx512bw_pmaddwd512v8hi */
    case 3545:  /* avx512bw_pmaddwd512v16hi */
    case 3543:  /* avx512bw_pmaddwd512v32hi */
    case 3158:  /* avx512vl_rndscalev2df */
    case 3154:  /* avx512vl_rndscalev4df */
    case 3150:  /* avx512f_rndscalev8df */
    case 3146:  /* avx512vl_rndscalev4sf */
    case 3142:  /* avx512vl_rndscalev8sf */
    case 3138:  /* avx512f_rndscalev16sf */
    case 3024:  /* avx512vl_scalefv2df */
    case 3020:  /* avx512vl_scalefv4df */
    case 3016:  /* avx512f_scalefv8df */
    case 3012:  /* avx512vl_scalefv4sf */
    case 3008:  /* avx512vl_scalefv8sf */
    case 3004:  /* avx512f_scalefv16sf */
    case 1827:  /* *reducepv2df */
    case 1825:  /* *reducepv4df */
    case 1823:  /* *reducepv8df */
    case 1821:  /* *reducepv4sf */
    case 1819:  /* *reducepv8sf */
    case 1817:  /* *reducepv16sf */
    case 1781:  /* ieee_minv2df3 */
    case 1779:  /* ieee_maxv2df3 */
    case 1777:  /* ieee_minv4df3 */
    case 1775:  /* ieee_maxv4df3 */
    case 1771:  /* ieee_minv8df3 */
    case 1767:  /* ieee_maxv8df3 */
    case 1765:  /* ieee_minv4sf3 */
    case 1763:  /* ieee_maxv4sf3 */
    case 1761:  /* ieee_minv8sf3 */
    case 1759:  /* ieee_maxv8sf3 */
    case 1755:  /* ieee_minv16sf3 */
    case 1751:  /* ieee_maxv16sf3 */
    case 1312:  /* mmx_psadbw */
    case 1212:  /* mmx_rsqit1v2sf3 */
    case 1210:  /* mmx_rcpit2v2sf3 */
    case 1209:  /* mmx_rcpit1v2sf3 */
    case 1207:  /* mmx_ieee_minv2sf3 */
    case 1206:  /* mmx_ieee_maxv2sf3 */
    case 1107:  /* xsaves64 */
    case 1106:  /* xsavec64 */
    case 1105:  /* xsaveopt64 */
    case 1104:  /* xsave64 */
    case 1103:  /* xsaves_rex64 */
    case 1102:  /* xsavec_rex64 */
    case 1101:  /* xsaveopt_rex64 */
    case 1100:  /* xsave_rex64 */
    case 1085:  /* sse4_2_crc32di */
    case 1084:  /* sse4_2_crc32si */
    case 1083:  /* sse4_2_crc32hi */
    case 1082:  /* sse4_2_crc32qi */
    case 1045:  /* *ieee_smindf3 */
    case 1044:  /* *ieee_smaxdf3 */
    case 1043:  /* *ieee_sminsf3 */
    case 1042:  /* *ieee_smaxsf3 */
    case 950:  /* sse4_1_rounddf2 */
    case 949:  /* sse4_1_roundsf2 */
    case 840:  /* bmi2_pext_di3 */
    case 839:  /* bmi2_pext_si3 */
    case 838:  /* bmi2_pdep_di3 */
    case 837:  /* bmi2_pdep_si3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 836:  /* *bmi2_bzhi_di3_3 */
    case 835:  /* *bmi2_bzhi_si3_3 */
    case 834:  /* *bmi2_bzhi_di3_2 */
    case 833:  /* *bmi2_bzhi_si3_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      break;

    case 832:  /* *bmi2_bzhi_di3_1_ccz */
    case 831:  /* *bmi2_bzhi_si3_1_ccz */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 830:  /* *bmi2_bzhi_di3_1 */
    case 829:  /* *bmi2_bzhi_si3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 828:  /* *bmi2_bzhi_di3 */
    case 827:  /* *bmi2_bzhi_si3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 826:  /* *bmi_blsr_di_ccz */
    case 825:  /* *bmi_blsr_si_ccz */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 824:  /* *bmi_blsr_di_cmp */
    case 823:  /* *bmi_blsr_si_cmp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 854:  /* *tbm_blsfill_di */
    case 853:  /* *tbm_blsfill_si */
    case 852:  /* *tbm_blcs_di */
    case 851:  /* *tbm_blcs_si */
    case 850:  /* *tbm_blcmsk_di */
    case 849:  /* *tbm_blcmsk_si */
    case 844:  /* *tbm_blcfill_di */
    case 843:  /* *tbm_blcfill_si */
    case 822:  /* *bmi_blsr_di */
    case 821:  /* *bmi_blsr_si */
    case 820:  /* *bmi_blsmsk_di */
    case 819:  /* *bmi_blsmsk_si */
    case 818:  /* *bmi_blsi_di */
    case 817:  /* *bmi_blsi_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 816:  /* *bmi_bextr_di_ccz */
    case 815:  /* *bmi_bextr_si_ccz */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 1069:  /* probe_stack_range_di */
    case 1068:  /* probe_stack_range_si */
    case 899:  /* *tls_dynamic_gnu2_call_64_di */
    case 898:  /* *tls_dynamic_gnu2_call_64_si */
    case 814:  /* bmi_bextr_di */
    case 813:  /* bmi_bextr_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 810:  /* *lzcnt_di_falsedep */
    case 809:  /* *tzcnt_di_falsedep */
    case 808:  /* *lzcnt_si_falsedep */
    case 807:  /* *tzcnt_si_falsedep */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1065:  /* probe_stack_1_di */
    case 1064:  /* probe_stack_1_si */
    case 1063:  /* allocate_stack_worker_probe_di */
    case 1062:  /* allocate_stack_worker_probe_si */
    case 968:  /* *fistdi2_ceil_1 */
    case 967:  /* *fistdi2_floor_1 */
    case 966:  /* *fistsi2_ceil_1 */
    case 965:  /* *fistsi2_floor_1 */
    case 964:  /* *fisthi2_ceil_1 */
    case 963:  /* *fisthi2_floor_1 */
    case 958:  /* frndintxf2_trunc */
    case 957:  /* frndintxf2_ceil */
    case 956:  /* frndintxf2_floor */
    case 955:  /* frndintxf2_roundeven */
    case 812:  /* lzcnt_hi */
    case 811:  /* tzcnt_hi */
    case 806:  /* lzcnt_di */
    case 805:  /* tzcnt_di */
    case 804:  /* lzcnt_si */
    case 803:  /* tzcnt_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 798:  /* *bsrhi */
    case 797:  /* bsr */
    case 796:  /* bsr_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 864:  /* *popcountdi2_falsedep */
    case 863:  /* *popcountsi2_falsedep */
    case 802:  /* *clzdi2_lzcnt_falsedep */
    case 801:  /* *clzsi2_lzcnt_falsedep */
    case 795:  /* *ctzdi2_falsedep */
    case 794:  /* *ctzsi2_falsedep */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 789:  /* *tzcntdi_1_falsedep */
    case 788:  /* *tzcntsi_1_falsedep */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 2), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 791:  /* *bsfdi_1 */
    case 790:  /* *bsfsi_1 */
    case 787:  /* *tzcntdi_1 */
    case 786:  /* *tzcntsi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 4518:  /* sse4a_vmmovntv2df */
    case 4517:  /* sse4a_vmmovntv4sf */
    case 2661:  /* sse2_cvtsd2siq */
    case 2659:  /* sse2_cvtsd2si */
    case 2653:  /* avx512f_vcvtsd2usiq */
    case 2651:  /* avx512f_vcvtsd2usi */
    case 2645:  /* avx512f_vcvtss2usiq */
    case 2643:  /* avx512f_vcvtss2usi */
    case 2623:  /* *avx512dq_cvtps2uqqv2di */
    case 2615:  /* *avx512dq_cvtps2qqv2di */
    case 2554:  /* sse_cvtss2siq */
    case 2552:  /* sse_cvtss2si */
    case 780:  /* set_got_offset_rex64 */
    case 779:  /* set_rip_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      break;

    case 777:  /* *set_got_labelled */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      break;

    case 1145:  /* rdseeddi_1 */
    case 1144:  /* rdseedsi_1 */
    case 1143:  /* rdseedhi_1 */
    case 1142:  /* rdranddi_1 */
    case 1141:  /* rdrandsi_1 */
    case 1140:  /* rdrandhi_1 */
    case 1118:  /* fnstenv */
    case 776:  /* *set_got */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      break;

    case 772:  /* *simple_return_indirect_internaldi */
    case 771:  /* *simple_return_indirect_internalsi */
    case 770:  /* simple_return_pop_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 4422:  /* sse2_clflush */
    case 4420:  /* sse_ldmxcsr */
    case 1193:  /* cldemote */
    case 1190:  /* umonitor_di */
    case 1189:  /* umonitor_si */
    case 1172:  /* clzero_di */
    case 1171:  /* clzero_si */
    case 1167:  /* clflushopt */
    case 1166:  /* clwb */
    case 1164:  /* xabort */
    case 1160:  /* *clrssbsydi */
    case 1159:  /* *clrssbsysi */
    case 1153:  /* *rstorsspdi */
    case 1152:  /* *rstorsspsi */
    case 1150:  /* incsspdi */
    case 1149:  /* incsspsi */
    case 1139:  /* ptwritedi */
    case 1138:  /* ptwritesi */
    case 1137:  /* wrgsbasedi */
    case 1136:  /* wrfsbasedi */
    case 1135:  /* wrgsbasesi */
    case 1134:  /* wrfsbasesi */
    case 1123:  /* *lwp_llwpcbdi_1 */
    case 1122:  /* *lwp_llwpcbsi_1 */
    case 1095:  /* fxrstor64 */
    case 1094:  /* fxrstor */
    case 784:  /* split_stack_return */
    case 775:  /* pad */
    case 774:  /* nops */
    case 766:  /* prologue_use */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      break;

    case 5972:  /* mfence_sse2 */
    case 5971:  /* *sse_sfence */
    case 5970:  /* *sse2_lfence */
    case 1146:  /* *pause */
    case 765:  /* *memory_blockage */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 1317:  /* *mmx_femms */
    case 1316:  /* *mmx_emms */
    case 1194:  /* speculation_barrier */
    case 1178:  /* wbnoinvd */
    case 1177:  /* wbinvd */
    case 1165:  /* xtest_1 */
    case 1163:  /* xend */
    case 1161:  /* nop_endbr */
    case 1158:  /* setssbsy */
    case 1151:  /* saveprevssp */
    case 1121:  /* fnclex */
    case 1071:  /* ud2 */
    case 1070:  /* trap */
    case 979:  /* cld */
    case 783:  /* *leave_rex64 */
    case 782:  /* *leave */
    case 781:  /* eh_return_internal */
    case 773:  /* nop */
    case 769:  /* simple_return_internal_long */
    case 768:  /* interrupt_return */
    case 767:  /* simple_return_internal */
    case 764:  /* blockage */
      break;

    case 763:  /* *sibcall_value_pop_memory */
    case 762:  /* *sibcall_value_pop */
    case 761:  /* *call_value_pop */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 756:  /* *sibcall_value_GOT_32 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1695:  /* *sse2_vmsqrtv2df2 */
    case 1691:  /* *sse_vmsqrtv4sf2 */
    case 755:  /* *call_value_got_x32 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 5214:  /* vec_set_hi_v32qi */
    case 5212:  /* vec_set_hi_v16hi */
    case 5209:  /* vec_set_hi_v8sf */
    case 5207:  /* vec_set_hi_v8si */
    case 5201:  /* vec_set_hi_v4df */
    case 5199:  /* vec_set_hi_v4di */
    case 4291:  /* vec_set_hi_v8di */
    case 4289:  /* vec_set_hi_v8df */
    case 4283:  /* vec_set_hi_v16si */
    case 4281:  /* vec_set_hi_v16sf */
    case 4013:  /* *xorv2di3_bcst */
    case 4011:  /* *iorv2di3_bcst */
    case 4009:  /* *andv2di3_bcst */
    case 4007:  /* *xorv4di3_bcst */
    case 4005:  /* *iorv4di3_bcst */
    case 4003:  /* *andv4di3_bcst */
    case 4001:  /* *xorv8di3_bcst */
    case 3999:  /* *iorv8di3_bcst */
    case 3997:  /* *andv8di3_bcst */
    case 3995:  /* *xorv4si3_bcst */
    case 3993:  /* *iorv4si3_bcst */
    case 3991:  /* *andv4si3_bcst */
    case 3989:  /* *xorv8si3_bcst */
    case 3987:  /* *iorv8si3_bcst */
    case 3985:  /* *andv8si3_bcst */
    case 3983:  /* *xorv16si3_bcst */
    case 3981:  /* *iorv16si3_bcst */
    case 3979:  /* *andv16si3_bcst */
    case 3912:  /* *andnotv2di3 */
    case 3911:  /* *andnotv4di3 */
    case 3910:  /* *andnotv4si3 */
    case 3909:  /* *andnotv8si3 */
    case 3908:  /* *andnotv8hi3 */
    case 3907:  /* *andnotv16hi3 */
    case 3906:  /* *andnotv32hi3 */
    case 3905:  /* *andnotv16qi3 */
    case 3904:  /* *andnotv32qi3 */
    case 3903:  /* *andnotv64qi3 */
    case 3902:  /* *andnotv8di3 */
    case 3901:  /* *andnotv16si3 */
    case 3440:  /* *addv2di3_bcst */
    case 3439:  /* *addv4di3_bcst */
    case 3438:  /* *addv8di3_bcst */
    case 3437:  /* *addv4si3_bcst */
    case 3436:  /* *addv8si3_bcst */
    case 3435:  /* *addv16si3_bcst */
    case 3377:  /* *avx512vl_us_truncatev2div2si2 */
    case 3376:  /* *avx512vl_truncatev2div2si2 */
    case 3375:  /* *avx512vl_ss_truncatev2div2si2 */
    case 3338:  /* *avx512vl_us_truncatev4siv4hi2 */
    case 3337:  /* *avx512vl_truncatev4siv4hi2 */
    case 3336:  /* *avx512vl_ss_truncatev4siv4hi2 */
    case 3335:  /* *avx512vl_us_truncatev2div2hi2 */
    case 3334:  /* *avx512vl_truncatev2div2hi2 */
    case 3333:  /* *avx512vl_ss_truncatev2div2hi2 */
    case 3332:  /* *avx512vl_us_truncatev4div4hi2 */
    case 3331:  /* *avx512vl_truncatev4div4hi2 */
    case 3330:  /* *avx512vl_ss_truncatev4div4hi2 */
    case 3269:  /* *avx512vl_us_truncatev8hiv8qi2 */
    case 3268:  /* *avx512vl_truncatev8hiv8qi2 */
    case 3267:  /* *avx512vl_ss_truncatev8hiv8qi2 */
    case 3266:  /* *avx512vl_us_truncatev4siv4qi2 */
    case 3265:  /* *avx512vl_truncatev4siv4qi2 */
    case 3264:  /* *avx512vl_ss_truncatev4siv4qi2 */
    case 3263:  /* *avx512vl_us_truncatev8siv8qi2 */
    case 3262:  /* *avx512vl_truncatev8siv8qi2 */
    case 3261:  /* *avx512vl_ss_truncatev8siv8qi2 */
    case 3260:  /* *avx512vl_us_truncatev2div2qi2 */
    case 3259:  /* *avx512vl_truncatev2div2qi2 */
    case 3258:  /* *avx512vl_ss_truncatev2div2qi2 */
    case 3257:  /* *avx512vl_us_truncatev4div4qi2 */
    case 3256:  /* *avx512vl_truncatev4div4qi2 */
    case 3255:  /* *avx512vl_ss_truncatev4div4qi2 */
    case 3199:  /* sse2_loadhpd */
    case 2897:  /* sse_loadhps */
    case 2828:  /* *sse2_cvtpd2ps */
    case 2710:  /* *floatunsv2div2sf2 */
    case 2709:  /* *floatv2div2sf2 */
    case 2041:  /* *andnottf3 */
    case 2040:  /* *andnotdf3 */
    case 2039:  /* *andnotsf3 */
    case 2001:  /* avx512f_andnotv8df3 */
    case 1999:  /* avx512f_andnotv16sf3 */
    case 1997:  /* sse2_andnotv2df3 */
    case 1995:  /* avx_andnotv4df3 */
    case 1993:  /* sse_andnotv4sf3 */
    case 1991:  /* avx_andnotv8sf3 */
    case 1687:  /* sse2_vmsqrtv2df2 */
    case 1683:  /* sse_vmsqrtv4sf2 */
    case 1597:  /* *mulv8df3_bcst */
    case 1595:  /* *mulv16sf3_bcst */
    case 1593:  /* *mulv4df3_bcst */
    case 1591:  /* *mulv8sf3_bcst */
    case 1589:  /* *mulv2df3_bcst */
    case 1587:  /* *mulv4sf3_bcst */
    case 1549:  /* *addv8df3_bcst */
    case 1547:  /* *addv16sf3_bcst */
    case 1545:  /* *addv4df3_bcst */
    case 1543:  /* *addv8sf3_bcst */
    case 1541:  /* *addv2df3_bcst */
    case 1539:  /* *addv4sf3_bcst */
    case 1270:  /* mmx_andnotv2si3 */
    case 1269:  /* mmx_andnotv4hi3 */
    case 1268:  /* mmx_andnotv8qi3 */
    case 758:  /* *sibcall_value */
    case 757:  /* *sibcall_value */
    case 754:  /* *call_value */
    case 753:  /* *call_value */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 752:  /* *sibcall_pop_memory */
    case 751:  /* *sibcall_pop */
    case 750:  /* *call_pop */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 745:  /* *sibcall_GOT_32 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 0), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 1));
      break;

    case 744:  /* *call_got_x32 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 741:  /* *tablejump_1 */
    case 740:  /* *tablejump_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      break;

    case 737:  /* jump */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 736:  /* *jcc */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 1982:  /* avx512f_maskcmpv2df3 */
    case 1981:  /* avx512f_maskcmpv4df3 */
    case 1980:  /* avx512f_maskcmpv8df3 */
    case 1979:  /* avx512f_maskcmpv4sf3 */
    case 1978:  /* avx512f_maskcmpv8sf3 */
    case 1977:  /* avx512f_maskcmpv16sf3 */
    case 1967:  /* *avx512vl_ucmpv2di3 */
    case 1965:  /* *avx512vl_ucmpv4di3 */
    case 1963:  /* *avx512f_ucmpv8di3 */
    case 1961:  /* *avx512vl_ucmpv4si3 */
    case 1959:  /* *avx512vl_ucmpv8si3 */
    case 1957:  /* *avx512f_ucmpv16si3 */
    case 1943:  /* *avx512vl_ucmpv8hi3 */
    case 1941:  /* *avx512vl_ucmpv16hi3 */
    case 1939:  /* *avx512bw_ucmpv32hi3 */
    case 1937:  /* *avx512vl_ucmpv32qi3 */
    case 1935:  /* *avx512vl_ucmpv16qi3 */
    case 1933:  /* *avx512bw_ucmpv64qi3 */
    case 1919:  /* *avx512vl_cmpv8hi3 */
    case 1917:  /* *avx512vl_cmpv16hi3 */
    case 1915:  /* *avx512bw_cmpv32hi3 */
    case 1913:  /* *avx512vl_cmpv32qi3 */
    case 1911:  /* *avx512vl_cmpv16qi3 */
    case 1909:  /* *avx512bw_cmpv64qi3 */
    case 1895:  /* *avx512vl_cmpv2di3 */
    case 1893:  /* *avx512vl_cmpv4di3 */
    case 1889:  /* *avx512f_cmpv8di3 */
    case 1887:  /* *avx512vl_cmpv4si3 */
    case 1885:  /* *avx512vl_cmpv8si3 */
    case 1881:  /* *avx512f_cmpv16si3 */
    case 1846:  /* sse2_maskcmpv2df3 */
    case 1845:  /* avx_maskcmpv4df3 */
    case 1844:  /* sse_maskcmpv4sf3 */
    case 1843:  /* avx_maskcmpv8sf3 */
    case 1842:  /* *sse2_maskcmpv2df3_comm */
    case 1841:  /* *avx_maskcmpv4df3_comm */
    case 1840:  /* *sse_maskcmpv4sf3_comm */
    case 1839:  /* *avx_maskcmpv8sf3_comm */
    case 908:  /* *fop_df_1 */
    case 907:  /* *fop_sf_1 */
    case 906:  /* *fop_xf_1_i387 */
    case 904:  /* *fop_df_comm */
    case 903:  /* *fop_sf_comm */
    case 902:  /* *fop_xf_comm_i387 */
    case 735:  /* setcc_df_sse */
    case 734:  /* setcc_sf_sse */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 728:  /* *jcc_btdi_mask */
    case 727:  /* *jcc_btsi_mask */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 726:  /* *jcc_btdi_1 */
    case 725:  /* *jcc_btsi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 724:  /* *jcc_btdi */
    case 723:  /* *jcc_btsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 722:  /* *btdi */
    case 721:  /* *btsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 720:  /* *btcq_imm */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2);
      recog_data.dup_num[1] = 1;
      break;

    case 719:  /* *btrq_imm */
    case 718:  /* *btsq_imm */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 2));
      break;

    case 717:  /* *btrdi_mask_1 */
    case 716:  /* *btrsi_mask_1 */
    case 711:  /* *btcdi_mask_1 */
    case 710:  /* *btsdi_mask_1 */
    case 709:  /* *btcsi_mask_1 */
    case 708:  /* *btssi_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 715:  /* *btrdi_mask */
    case 714:  /* *btrsi_mask */
    case 707:  /* *btcdi_mask */
    case 706:  /* *btsdi_mask */
    case 705:  /* *btcsi_mask */
    case 704:  /* *btssi_mask */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 713:  /* *btrdi */
    case 712:  /* *btrsi */
    case 703:  /* *btcdi */
    case 702:  /* *btsdi */
    case 701:  /* *btcsi */
    case 700:  /* *btssi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 682:  /* ix86_rotrti3_doubleword */
    case 681:  /* ix86_rotrdi3_doubleword */
    case 680:  /* ix86_rotlti3_doubleword */
    case 679:  /* ix86_rotldi3_doubleword */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 4259:  /* vec_interleave_lowv4si */
    case 4257:  /* *avx512f_interleave_lowv16si */
    case 4255:  /* avx2_interleave_lowv8si */
    case 4253:  /* vec_interleave_highv4si */
    case 4251:  /* *avx512f_interleave_highv16si */
    case 4249:  /* avx2_interleave_highv8si */
    case 4247:  /* vec_interleave_lowv8hi */
    case 4245:  /* avx2_interleave_lowv16hi */
    case 4243:  /* *avx512bw_interleave_lowv32hi */
    case 4241:  /* vec_interleave_highv8hi */
    case 4239:  /* avx2_interleave_highv16hi */
    case 4237:  /* avx512bw_interleave_highv32hi */
    case 4235:  /* vec_interleave_lowv16qi */
    case 4233:  /* avx2_interleave_lowv32qi */
    case 4231:  /* avx512bw_interleave_lowv64qi */
    case 4229:  /* vec_interleave_highv16qi */
    case 4227:  /* avx2_interleave_highv32qi */
    case 4225:  /* avx512bw_interleave_highv64qi */
    case 3191:  /* vec_interleave_lowv2di */
    case 3189:  /* *avx512f_interleave_lowv8di */
    case 3187:  /* avx2_interleave_lowv4di */
    case 3185:  /* vec_interleave_highv2di */
    case 3183:  /* *avx512f_interleave_highv8di */
    case 3181:  /* avx2_interleave_highv4di */
    case 2995:  /* *vec_interleave_lowv2df */
    case 2992:  /* *avx_unpcklpd256 */
    case 2990:  /* *avx512f_unpcklpd512 */
    case 2989:  /* *vec_interleave_highv2df */
    case 2986:  /* avx_unpckhpd256 */
    case 2984:  /* *avx512f_unpckhpd512 */
    case 2878:  /* vec_interleave_lowv4sf */
    case 2875:  /* avx_unpcklps256 */
    case 2873:  /* *avx512f_unpcklps512 */
    case 2871:  /* vec_interleave_highv4sf */
    case 2869:  /* avx_unpckhps256 */
    case 2867:  /* *avx512f_unpckhps512 */
    case 2866:  /* sse_movlhps */
    case 2865:  /* sse_movhlps */
    case 1288:  /* mmx_punpckldq */
    case 1287:  /* mmx_punpckhdq */
    case 1286:  /* mmx_punpcklwd */
    case 1285:  /* mmx_punpckhwd */
    case 1284:  /* mmx_punpcklbw */
    case 1283:  /* mmx_punpckhbw */
    case 689:  /* *bmi2_rorxsi3_1_zext */
    case 642:  /* *bmi2_ashrsi3_1_zext */
    case 641:  /* *bmi2_lshrsi3_1_zext */
    case 593:  /* *bmi2_ashlsi3_1_zext */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 5299:  /* avx_vec_concatv8df */
    case 5298:  /* avx_vec_concatv16sf */
    case 5297:  /* avx_vec_concatv8di */
    case 5296:  /* avx_vec_concatv16si */
    case 5295:  /* avx_vec_concatv32hi */
    case 5294:  /* avx_vec_concatv64qi */
    case 5293:  /* avx_vec_concatv4df */
    case 5292:  /* avx_vec_concatv8sf */
    case 5291:  /* avx_vec_concatv4di */
    case 5290:  /* avx_vec_concatv8si */
    case 5289:  /* avx_vec_concatv16hi */
    case 5288:  /* avx_vec_concatv32qi */
    case 5286:  /* avx512bw_lshrvv32hi */
    case 5284:  /* avx512bw_ashlvv32hi */
    case 5282:  /* avx512vl_lshrvv16hi */
    case 5280:  /* avx512vl_ashlvv16hi */
    case 5278:  /* avx512vl_lshrvv8hi */
    case 5276:  /* avx512vl_ashlvv8hi */
    case 5274:  /* avx2_lshrvv2di */
    case 5272:  /* avx2_ashlvv2di */
    case 5270:  /* avx2_lshrvv4di */
    case 5268:  /* avx2_ashlvv4di */
    case 5266:  /* avx512f_lshrvv8di */
    case 5264:  /* avx512f_ashlvv8di */
    case 5262:  /* avx2_lshrvv4si */
    case 5260:  /* avx2_ashlvv4si */
    case 5258:  /* avx2_lshrvv8si */
    case 5256:  /* avx2_ashlvv8si */
    case 5254:  /* avx512f_lshrvv16si */
    case 5252:  /* avx512f_ashlvv16si */
    case 5250:  /* avx512bw_ashrvv32hi */
    case 5248:  /* avx512vl_ashrvv16hi */
    case 5246:  /* avx512vl_ashrvv8hi */
    case 5244:  /* avx512f_ashrvv8di */
    case 5242:  /* avx2_ashrvv4di */
    case 5240:  /* avx2_ashrvv2di */
    case 5238:  /* avx512f_ashrvv16si */
    case 5236:  /* avx2_ashrvv8si */
    case 5234:  /* avx2_ashrvv4si */
    case 4840:  /* xop_rotrv2di3 */
    case 4839:  /* xop_rotrv4si3 */
    case 4838:  /* xop_rotrv8hi3 */
    case 4837:  /* xop_rotrv16qi3 */
    case 4836:  /* xop_rotlv2di3 */
    case 4835:  /* xop_rotlv4si3 */
    case 4834:  /* xop_rotlv8hi3 */
    case 4833:  /* xop_rotlv16qi3 */
    case 4354:  /* *vec_concatv2di_0 */
    case 4353:  /* vec_concatv2di */
    case 4352:  /* *vec_concatv4si_0 */
    case 4351:  /* *vec_concatv4si */
    case 4350:  /* *vec_concatv2si */
    case 4349:  /* *vec_concatv2si_sse4_1 */
    case 3978:  /* *xorv8hi3 */
    case 3977:  /* *iorv8hi3 */
    case 3976:  /* *andv8hi3 */
    case 3975:  /* *xorv16hi3 */
    case 3974:  /* *iorv16hi3 */
    case 3973:  /* *andv16hi3 */
    case 3972:  /* *xorv32hi3 */
    case 3971:  /* *iorv32hi3 */
    case 3970:  /* *andv32hi3 */
    case 3969:  /* *xorv16qi3 */
    case 3968:  /* *iorv16qi3 */
    case 3967:  /* *andv16qi3 */
    case 3966:  /* *xorv32qi3 */
    case 3965:  /* *iorv32qi3 */
    case 3964:  /* *andv32qi3 */
    case 3963:  /* *xorv64qi3 */
    case 3962:  /* *iorv64qi3 */
    case 3961:  /* *andv64qi3 */
    case 3959:  /* *xorv2di3 */
    case 3957:  /* *iorv2di3 */
    case 3955:  /* *andv2di3 */
    case 3953:  /* *xorv4di3 */
    case 3951:  /* *iorv4di3 */
    case 3949:  /* *andv4di3 */
    case 3947:  /* *xorv8di3 */
    case 3945:  /* *iorv8di3 */
    case 3943:  /* *andv8di3 */
    case 3941:  /* *xorv4si3 */
    case 3939:  /* *iorv4si3 */
    case 3937:  /* *andv4si3 */
    case 3935:  /* *xorv8si3 */
    case 3933:  /* *iorv8si3 */
    case 3931:  /* *andv8si3 */
    case 3929:  /* *xorv16si3 */
    case 3927:  /* *iorv16si3 */
    case 3925:  /* *andv16si3 */
    case 3899:  /* *one_cmplv2di2 */
    case 3897:  /* *one_cmplv4di2 */
    case 3895:  /* *one_cmplv4si2 */
    case 3893:  /* *one_cmplv8si2 */
    case 3892:  /* *one_cmplv8hi2 */
    case 3891:  /* *one_cmplv16hi2 */
    case 3890:  /* *one_cmplv32hi2 */
    case 3889:  /* *one_cmplv16qi2 */
    case 3888:  /* *one_cmplv32qi2 */
    case 3887:  /* *one_cmplv64qi2 */
    case 3885:  /* *one_cmplv8di2 */
    case 3883:  /* *one_cmplv16si2 */
    case 3882:  /* sse2_gtv4si3 */
    case 3881:  /* sse2_gtv8hi3 */
    case 3880:  /* sse2_gtv16qi3 */
    case 3855:  /* avx2_gtv4di3 */
    case 3854:  /* avx2_gtv8si3 */
    case 3853:  /* avx2_gtv16hi3 */
    case 3852:  /* avx2_gtv32qi3 */
    case 3851:  /* sse4_2_gtv2di3 */
    case 3850:  /* *sse2_eqv4si3 */
    case 3849:  /* *sse2_eqv8hi3 */
    case 3848:  /* *sse2_eqv16qi3 */
    case 3847:  /* *sse4_1_eqv2di3 */
    case 3822:  /* *avx2_eqv4di3 */
    case 3821:  /* *avx2_eqv8si3 */
    case 3820:  /* *avx2_eqv16hi3 */
    case 3819:  /* *avx2_eqv32qi3 */
    case 3818:  /* *uminv16qi3 */
    case 3817:  /* *umaxv16qi3 */
    case 3815:  /* *sse4_1_uminv4si3 */
    case 3813:  /* *sse4_1_umaxv4si3 */
    case 3811:  /* *sse4_1_uminv8hi3 */
    case 3809:  /* *sse4_1_umaxv8hi3 */
    case 3808:  /* *sminv8hi3 */
    case 3807:  /* *smaxv8hi3 */
    case 3805:  /* *sse4_1_sminv4si3 */
    case 3803:  /* *sse4_1_smaxv4si3 */
    case 3801:  /* *sse4_1_sminv16qi3 */
    case 3799:  /* *sse4_1_smaxv16qi3 */
    case 3797:  /* *uminv8hi3 */
    case 3795:  /* *umaxv8hi3 */
    case 3793:  /* *sminv8hi3 */
    case 3791:  /* *smaxv8hi3 */
    case 3789:  /* *uminv16hi3 */
    case 3787:  /* *umaxv16hi3 */
    case 3785:  /* *sminv16hi3 */
    case 3783:  /* *smaxv16hi3 */
    case 3781:  /* *uminv32hi3 */
    case 3779:  /* *umaxv32hi3 */
    case 3777:  /* *sminv32hi3 */
    case 3775:  /* *smaxv32hi3 */
    case 3773:  /* *uminv32qi3 */
    case 3771:  /* *umaxv32qi3 */
    case 3769:  /* *sminv32qi3 */
    case 3767:  /* *smaxv32qi3 */
    case 3765:  /* *uminv16qi3 */
    case 3763:  /* *umaxv16qi3 */
    case 3761:  /* *sminv16qi3 */
    case 3759:  /* *smaxv16qi3 */
    case 3757:  /* *uminv64qi3 */
    case 3755:  /* *umaxv64qi3 */
    case 3753:  /* *sminv64qi3 */
    case 3751:  /* *smaxv64qi3 */
    case 3749:  /* *avx512f_uminv2di3 */
    case 3747:  /* *avx512f_umaxv2di3 */
    case 3745:  /* *avx512f_sminv2di3 */
    case 3743:  /* *avx512f_smaxv2di3 */
    case 3741:  /* *avx512f_uminv4di3 */
    case 3739:  /* *avx512f_umaxv4di3 */
    case 3737:  /* *avx512f_sminv4di3 */
    case 3735:  /* *avx512f_smaxv4di3 */
    case 3733:  /* *avx512f_uminv8di3 */
    case 3731:  /* *avx512f_umaxv8di3 */
    case 3729:  /* *avx512f_sminv8di3 */
    case 3727:  /* *avx512f_smaxv8di3 */
    case 3725:  /* *avx512f_uminv4si3 */
    case 3723:  /* *avx512f_umaxv4si3 */
    case 3721:  /* *avx512f_sminv4si3 */
    case 3719:  /* *avx512f_smaxv4si3 */
    case 3717:  /* *avx512f_uminv8si3 */
    case 3715:  /* *avx512f_umaxv8si3 */
    case 3713:  /* *avx512f_sminv8si3 */
    case 3711:  /* *avx512f_smaxv8si3 */
    case 3709:  /* *avx512f_uminv16si3 */
    case 3707:  /* *avx512f_umaxv16si3 */
    case 3705:  /* *avx512f_sminv16si3 */
    case 3703:  /* *avx512f_smaxv16si3 */
    case 3702:  /* *avx2_uminv8si3 */
    case 3701:  /* *avx2_umaxv8si3 */
    case 3700:  /* *avx2_sminv8si3 */
    case 3699:  /* *avx2_smaxv8si3 */
    case 3698:  /* *avx2_uminv16hi3 */
    case 3697:  /* *avx2_umaxv16hi3 */
    case 3696:  /* *avx2_sminv16hi3 */
    case 3695:  /* *avx2_smaxv16hi3 */
    case 3694:  /* *avx2_uminv32qi3 */
    case 3693:  /* *avx2_umaxv32qi3 */
    case 3692:  /* *avx2_sminv32qi3 */
    case 3691:  /* *avx2_smaxv32qi3 */
    case 3689:  /* avx512vl_rorv2di */
    case 3687:  /* avx512vl_rolv2di */
    case 3685:  /* avx512vl_rorv4di */
    case 3683:  /* avx512vl_rolv4di */
    case 3681:  /* avx512f_rorv8di */
    case 3679:  /* avx512f_rolv8di */
    case 3677:  /* avx512vl_rorv4si */
    case 3675:  /* avx512vl_rolv4si */
    case 3673:  /* avx512vl_rorv8si */
    case 3671:  /* avx512vl_rolv8si */
    case 3669:  /* avx512f_rorv16si */
    case 3667:  /* avx512f_rolv16si */
    case 3665:  /* avx512vl_rorvv2di */
    case 3663:  /* avx512vl_rolvv2di */
    case 3661:  /* avx512vl_rorvv4di */
    case 3659:  /* avx512vl_rolvv4di */
    case 3657:  /* avx512f_rorvv8di */
    case 3655:  /* avx512f_rolvv8di */
    case 3653:  /* avx512vl_rorvv4si */
    case 3651:  /* avx512vl_rolvv4si */
    case 3649:  /* avx512vl_rorvv8si */
    case 3647:  /* avx512vl_rolvv8si */
    case 3645:  /* avx512f_rorvv16si */
    case 3643:  /* avx512f_rolvv16si */
    case 3642:  /* sse2_lshrv1ti3 */
    case 3641:  /* sse2_ashlv1ti3 */
    case 3640:  /* avx2_lshrv2ti3 */
    case 3639:  /* avx2_ashlv2ti3 */
    case 3638:  /* avx512bw_lshrv1ti3 */
    case 3637:  /* avx512bw_ashlv1ti3 */
    case 3636:  /* avx512bw_lshrv2ti3 */
    case 3635:  /* avx512bw_ashlv2ti3 */
    case 3634:  /* avx512bw_lshrv4ti3 */
    case 3633:  /* avx512bw_ashlv4ti3 */
    case 3631:  /* lshrv8di3 */
    case 3629:  /* ashlv8di3 */
    case 3627:  /* lshrv16si3 */
    case 3625:  /* ashlv16si3 */
    case 3623:  /* lshrv32hi3 */
    case 3621:  /* ashlv32hi3 */
    case 3620:  /* lshrv2di3 */
    case 3619:  /* ashlv2di3 */
    case 3618:  /* lshrv4di3 */
    case 3617:  /* ashlv4di3 */
    case 3616:  /* lshrv4si3 */
    case 3615:  /* ashlv4si3 */
    case 3614:  /* lshrv8si3 */
    case 3613:  /* ashlv8si3 */
    case 3612:  /* lshrv8hi3 */
    case 3611:  /* ashlv8hi3 */
    case 3610:  /* lshrv16hi3 */
    case 3609:  /* ashlv16hi3 */
    case 3607:  /* *lshrv2di3 */
    case 3605:  /* *ashlv2di3 */
    case 3603:  /* *lshrv4di3 */
    case 3601:  /* *ashlv4di3 */
    case 3599:  /* *lshrv4si3 */
    case 3597:  /* *ashlv4si3 */
    case 3595:  /* *lshrv8si3 */
    case 3593:  /* *ashlv8si3 */
    case 3591:  /* *lshrv8hi3 */
    case 3589:  /* *ashlv8hi3 */
    case 3587:  /* *lshrv16hi3 */
    case 3585:  /* *ashlv16hi3 */
    case 3583:  /* ashrv8di3 */
    case 3581:  /* ashrv16si3 */
    case 3579:  /* ashrv4di3 */
    case 3577:  /* ashrv32hi3 */
    case 3576:  /* ashrv4si3 */
    case 3575:  /* ashrv8si3 */
    case 3574:  /* ashrv8hi3 */
    case 3573:  /* ashrv16hi3 */
    case 3571:  /* *ashrv2di3 */
    case 3569:  /* *ashrv4si3 */
    case 3567:  /* *ashrv8si3 */
    case 3565:  /* *ashrv8hi3 */
    case 3563:  /* *ashrv16hi3 */
    case 3561:  /* *sse4_1_mulv4si3 */
    case 3559:  /* *avx2_mulv8si3 */
    case 3557:  /* *avx512f_mulv16si3 */
    case 3555:  /* avx512dq_mulv2di3 */
    case 3553:  /* avx512dq_mulv4di3 */
    case 3551:  /* avx512dq_mulv8di3 */
    case 3517:  /* *mulv8hi3 */
    case 3515:  /* *mulv16hi3 */
    case 3513:  /* *mulv32hi3 */
    case 3511:  /* *sse2_ussubv8hi3 */
    case 3509:  /* *sse2_sssubv8hi3 */
    case 3507:  /* *sse2_usaddv8hi3 */
    case 3505:  /* *sse2_ssaddv8hi3 */
    case 3503:  /* *avx2_ussubv16hi3 */
    case 3501:  /* *avx2_sssubv16hi3 */
    case 3499:  /* *avx2_usaddv16hi3 */
    case 3497:  /* *avx2_ssaddv16hi3 */
    case 3495:  /* *avx512bw_ussubv32hi3 */
    case 3493:  /* *avx512bw_sssubv32hi3 */
    case 3491:  /* *avx512bw_usaddv32hi3 */
    case 3489:  /* *avx512bw_ssaddv32hi3 */
    case 3487:  /* *sse2_ussubv16qi3 */
    case 3485:  /* *sse2_sssubv16qi3 */
    case 3483:  /* *sse2_usaddv16qi3 */
    case 3481:  /* *sse2_ssaddv16qi3 */
    case 3479:  /* *avx2_ussubv32qi3 */
    case 3477:  /* *avx2_sssubv32qi3 */
    case 3475:  /* *avx2_usaddv32qi3 */
    case 3473:  /* *avx2_ssaddv32qi3 */
    case 3471:  /* *avx512bw_ussubv64qi3 */
    case 3469:  /* *avx512bw_sssubv64qi3 */
    case 3467:  /* *avx512bw_usaddv64qi3 */
    case 3465:  /* *avx512bw_ssaddv64qi3 */
    case 3428:  /* *subv2di3 */
    case 3427:  /* *addv2di3 */
    case 3426:  /* *subv4di3 */
    case 3425:  /* *addv4di3 */
    case 3424:  /* *subv8di3 */
    case 3423:  /* *addv8di3 */
    case 3422:  /* *subv4si3 */
    case 3421:  /* *addv4si3 */
    case 3420:  /* *subv8si3 */
    case 3419:  /* *addv8si3 */
    case 3418:  /* *subv16si3 */
    case 3417:  /* *addv16si3 */
    case 3416:  /* *subv8hi3 */
    case 3415:  /* *addv8hi3 */
    case 3414:  /* *subv16hi3 */
    case 3413:  /* *addv16hi3 */
    case 3412:  /* *subv32hi3 */
    case 3411:  /* *addv32hi3 */
    case 3410:  /* *subv16qi3 */
    case 3409:  /* *addv16qi3 */
    case 3408:  /* *subv32qi3 */
    case 3407:  /* *addv32qi3 */
    case 3406:  /* *subv64qi3 */
    case 3405:  /* *addv64qi3 */
    case 3204:  /* vec_concatv2df */
    case 2909:  /* *vec_concatv4sf_0 */
    case 2908:  /* *vec_concatv4sf */
    case 2907:  /* *vec_concatv2sf_sse */
    case 2906:  /* *vec_concatv2sf_sse4_1 */
    case 2050:  /* *xortf3 */
    case 2049:  /* *iortf3 */
    case 2048:  /* *andtf3 */
    case 2047:  /* *xordf3 */
    case 2046:  /* *iordf3 */
    case 2045:  /* *anddf3 */
    case 2044:  /* *xorsf3 */
    case 2043:  /* *iorsf3 */
    case 2042:  /* *andsf3 */
    case 2037:  /* *xorv8df3 */
    case 2035:  /* *iorv8df3 */
    case 2033:  /* *andv8df3 */
    case 2031:  /* *xorv16sf3 */
    case 2029:  /* *iorv16sf3 */
    case 2027:  /* *andv16sf3 */
    case 2025:  /* *xorv2df3 */
    case 2023:  /* *iorv2df3 */
    case 2021:  /* *andv2df3 */
    case 2019:  /* *xorv4df3 */
    case 2017:  /* *iorv4df3 */
    case 2015:  /* *andv4df3 */
    case 2013:  /* *xorv4sf3 */
    case 2011:  /* *iorv4sf3 */
    case 2009:  /* *andv4sf3 */
    case 2007:  /* *xorv8sf3 */
    case 2005:  /* *iorv8sf3 */
    case 2003:  /* *andv8sf3 */
    case 1749:  /* *sminv2df3 */
    case 1747:  /* *smaxv2df3 */
    case 1745:  /* *sminv4df3 */
    case 1743:  /* *smaxv4df3 */
    case 1739:  /* *sminv8df3 */
    case 1735:  /* *smaxv8df3 */
    case 1733:  /* *sminv4sf3 */
    case 1731:  /* *smaxv4sf3 */
    case 1729:  /* *sminv8sf3 */
    case 1727:  /* *smaxv8sf3 */
    case 1723:  /* *sminv16sf3 */
    case 1719:  /* *smaxv16sf3 */
    case 1633:  /* sse2_divv2df3 */
    case 1631:  /* avx_divv4df3 */
    case 1627:  /* avx512f_divv8df3 */
    case 1625:  /* sse_divv4sf3 */
    case 1623:  /* avx_divv8sf3 */
    case 1619:  /* avx512f_divv16sf3 */
    case 1585:  /* *mulv2df3 */
    case 1583:  /* *mulv4df3 */
    case 1579:  /* *mulv8df3 */
    case 1577:  /* *mulv4sf3 */
    case 1575:  /* *mulv8sf3 */
    case 1571:  /* *mulv16sf3 */
    case 1523:  /* *subv2df3 */
    case 1519:  /* *addv2df3 */
    case 1515:  /* *subv4df3 */
    case 1511:  /* *addv4df3 */
    case 1507:  /* *subv8df3 */
    case 1503:  /* *addv8df3 */
    case 1499:  /* *subv4sf3 */
    case 1495:  /* *addv4sf3 */
    case 1491:  /* *subv8sf3 */
    case 1487:  /* *addv8sf3 */
    case 1483:  /* *subv16sf3 */
    case 1479:  /* *addv16sf3 */
    case 1303:  /* *mmx_concatv2si */
    case 1279:  /* *mmx_xorv2si3 */
    case 1278:  /* *mmx_iorv2si3 */
    case 1277:  /* *mmx_andv2si3 */
    case 1276:  /* *mmx_xorv4hi3 */
    case 1275:  /* *mmx_iorv4hi3 */
    case 1274:  /* *mmx_andv4hi3 */
    case 1273:  /* *mmx_xorv8qi3 */
    case 1272:  /* *mmx_iorv8qi3 */
    case 1271:  /* *mmx_andv8qi3 */
    case 1267:  /* mmx_gtv2si3 */
    case 1266:  /* mmx_gtv4hi3 */
    case 1265:  /* mmx_gtv8qi3 */
    case 1264:  /* *mmx_eqv2si3 */
    case 1263:  /* *mmx_eqv4hi3 */
    case 1262:  /* *mmx_eqv8qi3 */
    case 1261:  /* mmx_lshrv1di3 */
    case 1260:  /* mmx_ashlv1di3 */
    case 1259:  /* mmx_lshrv2si3 */
    case 1258:  /* mmx_ashlv2si3 */
    case 1257:  /* mmx_lshrv4hi3 */
    case 1256:  /* mmx_ashlv4hi3 */
    case 1255:  /* mmx_ashrv2si3 */
    case 1254:  /* mmx_ashrv4hi3 */
    case 1253:  /* *mmx_uminv8qi3 */
    case 1252:  /* *mmx_umaxv8qi3 */
    case 1251:  /* *mmx_sminv4hi3 */
    case 1250:  /* *mmx_smaxv4hi3 */
    case 1244:  /* *mmx_mulv4hi3 */
    case 1243:  /* *mmx_ussubv4hi3 */
    case 1242:  /* *mmx_sssubv4hi3 */
    case 1241:  /* *mmx_usaddv4hi3 */
    case 1240:  /* *mmx_ssaddv4hi3 */
    case 1239:  /* *mmx_ussubv8qi3 */
    case 1238:  /* *mmx_sssubv8qi3 */
    case 1237:  /* *mmx_usaddv8qi3 */
    case 1236:  /* *mmx_ssaddv8qi3 */
    case 1235:  /* *mmx_subv1di3 */
    case 1234:  /* *mmx_addv1di3 */
    case 1233:  /* *mmx_subv2si3 */
    case 1232:  /* *mmx_addv2si3 */
    case 1231:  /* *mmx_subv4hi3 */
    case 1230:  /* *mmx_addv4hi3 */
    case 1229:  /* *mmx_subv8qi3 */
    case 1228:  /* *mmx_addv8qi3 */
    case 1225:  /* *mmx_concatv2sf */
    case 1218:  /* mmx_gev2sf3 */
    case 1217:  /* mmx_gtv2sf3 */
    case 1216:  /* *mmx_eqv2sf3 */
    case 1205:  /* *mmx_sminv2sf3 */
    case 1204:  /* *mmx_smaxv2sf3 */
    case 1203:  /* *mmx_mulv2sf3 */
    case 1202:  /* *mmx_subv2sf3 */
    case 1201:  /* *mmx_addv2sf3 */
    case 1041:  /* smindf3 */
    case 1040:  /* smaxdf3 */
    case 1039:  /* sminsf3 */
    case 1038:  /* smaxsf3 */
    case 684:  /* *bmi2_rorxdi3_1 */
    case 683:  /* *bmi2_rorxsi3_1 */
    case 636:  /* *bmi2_ashrdi3_1 */
    case 635:  /* *bmi2_lshrdi3_1 */
    case 634:  /* *bmi2_ashrsi3_1 */
    case 633:  /* *bmi2_lshrsi3_1 */
    case 590:  /* *bmi2_ashldi3_1 */
    case 589:  /* *bmi2_ashlsi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 629:  /* x86_shrd */
    case 628:  /* x86_64_shrd */
    case 584:  /* x86_shld */
    case 583:  /* x86_64_shld */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 678:  /* *rotrdi3_mask_1 */
    case 677:  /* *rotldi3_mask_1 */
    case 676:  /* *rotrsi3_mask_1 */
    case 675:  /* *rotlsi3_mask_1 */
    case 623:  /* *ashrti3_doubleword_mask_1 */
    case 622:  /* *lshrti3_doubleword_mask_1 */
    case 621:  /* *ashrdi3_doubleword_mask_1 */
    case 620:  /* *lshrdi3_doubleword_mask_1 */
    case 615:  /* *ashrdi3_mask_1 */
    case 614:  /* *lshrdi3_mask_1 */
    case 613:  /* *ashrsi3_mask_1 */
    case 612:  /* *lshrsi3_mask_1 */
    case 588:  /* *ashldi3_mask_1 */
    case 587:  /* *ashlsi3_mask_1 */
    case 580:  /* *ashlti3_doubleword_mask_1 */
    case 579:  /* *ashldi3_doubleword_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      break;

    case 674:  /* *rotrdi3_mask */
    case 673:  /* *rotldi3_mask */
    case 672:  /* *rotrsi3_mask */
    case 671:  /* *rotlsi3_mask */
    case 619:  /* *ashrti3_doubleword_mask */
    case 618:  /* *lshrti3_doubleword_mask */
    case 617:  /* *ashrdi3_doubleword_mask */
    case 616:  /* *lshrdi3_doubleword_mask */
    case 611:  /* *ashrdi3_mask */
    case 610:  /* *lshrdi3_mask */
    case 609:  /* *ashrsi3_mask */
    case 608:  /* *lshrsi3_mask */
    case 586:  /* *ashldi3_mask */
    case 585:  /* *ashlsi3_mask */
    case 578:  /* *ashlti3_doubleword_mask */
    case 577:  /* *ashldi3_doubleword_mask */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1));
      break;

    case 563:  /* copysigntf3_var */
    case 562:  /* copysigndf3_var */
    case 561:  /* copysignsf3_var */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      break;

    case 5965:  /* avx512f_dpbf16ps_v4sf */
    case 5963:  /* avx512f_dpbf16ps_v8sf */
    case 5961:  /* avx512f_dpbf16ps_v16sf */
    case 5936:  /* vpclmulqdq_v2di */
    case 5935:  /* vpclmulqdq_v4di */
    case 5934:  /* vpclmulqdq_v8di */
    case 5915:  /* vpdpwssds_v4si */
    case 5914:  /* vpdpwssds_v8si */
    case 5913:  /* vpdpwssds_v16si */
    case 5906:  /* vpdpwssd_v4si */
    case 5905:  /* vpdpwssd_v8si */
    case 5904:  /* vpdpwssd_v16si */
    case 5897:  /* vpdpbusds_v4si */
    case 5896:  /* vpdpbusds_v8si */
    case 5895:  /* vpdpbusds_v16si */
    case 5888:  /* vpdpbusd_v4si */
    case 5887:  /* vpdpbusd_v8si */
    case 5886:  /* vpdpbusd_v16si */
    case 5867:  /* vpshldv_v2di */
    case 5866:  /* vpshldv_v4si */
    case 5865:  /* vpshldv_v8hi */
    case 5864:  /* vpshldv_v4di */
    case 5863:  /* vpshldv_v8si */
    case 5862:  /* vpshldv_v16hi */
    case 5861:  /* vpshldv_v8di */
    case 5860:  /* vpshldv_v16si */
    case 5859:  /* vpshldv_v32hi */
    case 5840:  /* vpshrdv_v2di */
    case 5839:  /* vpshrdv_v4si */
    case 5838:  /* vpshrdv_v8hi */
    case 5837:  /* vpshrdv_v4di */
    case 5836:  /* vpshrdv_v8si */
    case 5835:  /* vpshrdv_v16hi */
    case 5834:  /* vpshrdv_v8di */
    case 5833:  /* vpshrdv_v16si */
    case 5832:  /* vpshrdv_v32hi */
    case 5830:  /* vpshld_v2di */
    case 5828:  /* vpshld_v4si */
    case 5826:  /* vpshld_v8hi */
    case 5824:  /* vpshld_v4di */
    case 5822:  /* vpshld_v8si */
    case 5820:  /* vpshld_v16hi */
    case 5818:  /* vpshld_v8di */
    case 5816:  /* vpshld_v16si */
    case 5814:  /* vpshld_v32hi */
    case 5812:  /* vpshrd_v2di */
    case 5810:  /* vpshrd_v4si */
    case 5808:  /* vpshrd_v8hi */
    case 5806:  /* vpshrd_v4di */
    case 5804:  /* vpshrd_v8si */
    case 5802:  /* vpshrd_v16hi */
    case 5800:  /* vpshrd_v8di */
    case 5798:  /* vpshrd_v16si */
    case 5796:  /* vpshrd_v32hi */
    case 5788:  /* vgf2p8affineqb_v16qi */
    case 5786:  /* vgf2p8affineqb_v32qi */
    case 5784:  /* vgf2p8affineqb_v64qi */
    case 5782:  /* vgf2p8affineinvqb_v16qi */
    case 5780:  /* vgf2p8affineinvqb_v32qi */
    case 5778:  /* vgf2p8affineinvqb_v64qi */
    case 5743:  /* avx5124vnniw_vp4dpwssds */
    case 5740:  /* avx5124vnniw_vp4dpwssd */
    case 5737:  /* avx5124fmaddps_4fnmaddss */
    case 5734:  /* avx5124fmaddps_4fnmaddps */
    case 5731:  /* avx5124fmaddps_4fmaddss */
    case 5728:  /* avx5124fmaddps_4fmaddps */
    case 5712:  /* vpamdd52huqv2di */
    case 5710:  /* vpamdd52luqv2di */
    case 5708:  /* vpamdd52huqv4di */
    case 5706:  /* vpamdd52luqv4di */
    case 5704:  /* vpamdd52huqv8di */
    case 5702:  /* vpamdd52luqv8di */
    case 5695:  /* sha256rnds2 */
    case 5692:  /* sha1rnds4 */
    case 5663:  /* *avx512bw_dbpsadbwv32hi */
    case 5661:  /* *avx512bw_dbpsadbwv16hi */
    case 5659:  /* *avx512bw_dbpsadbwv8hi */
    case 5601:  /* avx512dq_rangepv2df */
    case 5599:  /* avx512dq_rangepv4df */
    case 5595:  /* avx512dq_rangepv8df */
    case 5593:  /* avx512dq_rangepv4sf */
    case 5591:  /* avx512dq_rangepv8sf */
    case 5587:  /* avx512dq_rangepv16sf */
    case 5586:  /* expandv8hi_mask */
    case 5585:  /* expandv16hi_mask */
    case 5584:  /* expandv32hi_mask */
    case 5583:  /* expandv32qi_mask */
    case 5582:  /* expandv16qi_mask */
    case 5581:  /* expandv64qi_mask */
    case 5580:  /* avx512vl_expandv2df_mask */
    case 5579:  /* avx512vl_expandv2di_mask */
    case 5578:  /* avx512vl_expandv4sf_mask */
    case 5577:  /* avx512vl_expandv4si_mask */
    case 5576:  /* avx512vl_expandv4df_mask */
    case 5575:  /* avx512vl_expandv4di_mask */
    case 5574:  /* avx512vl_expandv8sf_mask */
    case 5573:  /* avx512vl_expandv8si_mask */
    case 5572:  /* avx512f_expandv8df_mask */
    case 5571:  /* avx512f_expandv8di_mask */
    case 5570:  /* avx512f_expandv16sf_mask */
    case 5569:  /* avx512f_expandv16si_mask */
    case 5550:  /* compressv8hi_mask */
    case 5549:  /* compressv16hi_mask */
    case 5548:  /* compressv32hi_mask */
    case 5547:  /* compressv32qi_mask */
    case 5546:  /* compressv16qi_mask */
    case 5545:  /* compressv64qi_mask */
    case 5544:  /* avx512vl_compressv2df_mask */
    case 5543:  /* avx512vl_compressv2di_mask */
    case 5542:  /* avx512vl_compressv4sf_mask */
    case 5541:  /* avx512vl_compressv4si_mask */
    case 5540:  /* avx512vl_compressv4df_mask */
    case 5539:  /* avx512vl_compressv4di_mask */
    case 5538:  /* avx512vl_compressv8sf_mask */
    case 5537:  /* avx512vl_compressv8si_mask */
    case 5536:  /* avx512f_compressv8df_mask */
    case 5535:  /* avx512f_compressv8di_mask */
    case 5534:  /* avx512f_compressv16sf_mask */
    case 5533:  /* avx512f_compressv16si_mask */
    case 5185:  /* *avx_vperm2f128v4df_full */
    case 5184:  /* *avx_vperm2f128v8sf_full */
    case 5183:  /* *avx_vperm2f128v8si_full */
    case 5163:  /* avx512vl_vpermt2varv16qi3 */
    case 5161:  /* avx512vl_vpermt2varv32qi3 */
    case 5159:  /* avx512bw_vpermt2varv64qi3 */
    case 5157:  /* avx512vl_vpermt2varv8hi3 */
    case 5155:  /* avx512vl_vpermt2varv16hi3 */
    case 5153:  /* avx512bw_vpermt2varv32hi3 */
    case 5151:  /* avx512vl_vpermt2varv2df3 */
    case 5149:  /* avx512vl_vpermt2varv2di3 */
    case 5147:  /* avx512vl_vpermt2varv4sf3 */
    case 5145:  /* avx512vl_vpermt2varv4si3 */
    case 5143:  /* avx512vl_vpermt2varv4df3 */
    case 5141:  /* avx512vl_vpermt2varv4di3 */
    case 5139:  /* avx512vl_vpermt2varv8sf3 */
    case 5137:  /* avx512vl_vpermt2varv8si3 */
    case 5135:  /* avx512f_vpermt2varv8df3 */
    case 5133:  /* avx512f_vpermt2varv8di3 */
    case 5131:  /* avx512f_vpermt2varv16sf3 */
    case 5129:  /* avx512f_vpermt2varv16si3 */
    case 4958:  /* avx2_permv2ti */
    case 4887:  /* pclmulqdq */
    case 4876:  /* xop_pcom_tfv2di3 */
    case 4875:  /* xop_pcom_tfv4si3 */
    case 4874:  /* xop_pcom_tfv8hi3 */
    case 4873:  /* xop_pcom_tfv16qi3 */
    case 4829:  /* xop_pperm */
    case 4557:  /* sse4_1_pblendvb */
    case 4556:  /* avx2_pblendvb */
    case 4549:  /* sse4_1_mpsadbw */
    case 4548:  /* avx2_mpsadbw */
    case 4544:  /* sse4_1_dppd */
    case 4543:  /* avx_dppd256 */
    case 4542:  /* sse4_1_dpps */
    case 4541:  /* avx_dpps256 */
    case 4532:  /* sse4_1_blendvsd */
    case 4531:  /* sse4_1_blendvss */
    case 4530:  /* sse4_1_blendvpd */
    case 4529:  /* avx_blendvpd256 */
    case 4528:  /* sse4_1_blendvps */
    case 4527:  /* avx_blendvps256 */
    case 4519:  /* sse4a_extrqi */
    case 4484:  /* ssse3_palignrdi */
    case 4483:  /* ssse3_palignrti */
    case 4482:  /* avx2_palignrv2ti */
    case 4481:  /* avx512bw_palignrv4ti */
    case 3088:  /* *avx512vl_alignv2di */
    case 3086:  /* *avx512vl_alignv4di */
    case 3084:  /* *avx512f_alignv8di */
    case 3082:  /* *avx512vl_alignv4si */
    case 3080:  /* *avx512vl_alignv8si */
    case 3078:  /* *avx512f_alignv16si */
    case 2401:  /* *fma_fmaddsub_v2df */
    case 2399:  /* *fma_fmaddsub_v4df */
    case 2395:  /* *fma_fmaddsub_v8df */
    case 2394:  /* *fma_fmaddsub_df */
    case 2392:  /* *fma_fmaddsub_v4sf */
    case 2390:  /* *fma_fmaddsub_v8sf */
    case 2386:  /* *fma_fmaddsub_v16sf */
    case 2385:  /* *fma_fmaddsub_sf */
    case 2384:  /* *fma_fmaddsub_v2df */
    case 2383:  /* *fma_fmaddsub_v4df */
    case 2382:  /* *fma_fmaddsub_v4sf */
    case 2381:  /* *fma_fmaddsub_v8sf */
    case 1955:  /* avx512vl_ucmpv2di3 */
    case 1953:  /* avx512vl_ucmpv4di3 */
    case 1951:  /* avx512f_ucmpv8di3 */
    case 1949:  /* avx512vl_ucmpv4si3 */
    case 1947:  /* avx512vl_ucmpv8si3 */
    case 1945:  /* avx512f_ucmpv16si3 */
    case 1931:  /* avx512vl_ucmpv8hi3 */
    case 1929:  /* avx512vl_ucmpv16hi3 */
    case 1927:  /* avx512bw_ucmpv32hi3 */
    case 1925:  /* avx512vl_ucmpv32qi3 */
    case 1923:  /* avx512vl_ucmpv16qi3 */
    case 1921:  /* avx512bw_ucmpv64qi3 */
    case 1907:  /* avx512vl_cmpv8hi3 */
    case 1905:  /* avx512vl_cmpv16hi3 */
    case 1903:  /* avx512bw_cmpv32hi3 */
    case 1901:  /* avx512vl_cmpv32qi3 */
    case 1899:  /* avx512vl_cmpv16qi3 */
    case 1897:  /* avx512bw_cmpv64qi3 */
    case 1879:  /* avx512vl_cmpv2df3 */
    case 1877:  /* avx512vl_cmpv4df3 */
    case 1873:  /* avx512f_cmpv8df3 */
    case 1871:  /* avx512vl_cmpv4sf3 */
    case 1869:  /* avx512vl_cmpv8sf3 */
    case 1865:  /* avx512f_cmpv16sf3 */
    case 1863:  /* avx512vl_cmpv2di3 */
    case 1861:  /* avx512vl_cmpv4di3 */
    case 1857:  /* avx512f_cmpv8di3 */
    case 1855:  /* avx512vl_cmpv4si3 */
    case 1853:  /* avx512vl_cmpv8si3 */
    case 1849:  /* avx512f_cmpv16si3 */
    case 1836:  /* avx_cmpv2df3 */
    case 1835:  /* avx_cmpv4df3 */
    case 1834:  /* avx_cmpv4sf3 */
    case 1833:  /* avx_cmpv8sf3 */
    case 565:  /* xorsigndf3_1 */
    case 564:  /* xorsignsf3_1 */
    case 560:  /* copysigntf3_const */
    case 559:  /* copysigndf3_const */
    case 558:  /* copysignsf3_const */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 1478:  /* *nabsv2df2 */
    case 1477:  /* *nabsv4df2 */
    case 1476:  /* *nabsv8df2 */
    case 1475:  /* *nabsv4sf2 */
    case 1474:  /* *nabsv8sf2 */
    case 1473:  /* *nabsv16sf2 */
    case 551:  /* *nabsdf2_1 */
    case 550:  /* *nabssf2_1 */
    case 539:  /* *nabstf2_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 536:  /* *negvdi3 */
    case 535:  /* *negvsi3 */
    case 534:  /* *negvhi3 */
    case 533:  /* *negvqi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 576:  /* *one_cmplsi2_2_zext */
    case 532:  /* *negsi2_cmpz_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 575:  /* *one_cmpldi2_2 */
    case 574:  /* *one_cmplsi2_2 */
    case 573:  /* *one_cmplhi2_2 */
    case 572:  /* *one_cmplqi2_2 */
    case 531:  /* *negdi2_cmpz */
    case 530:  /* *negsi2_cmpz */
    case 529:  /* *neghi2_cmpz */
    case 528:  /* *negqi2_cmpz */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 867:  /* *popcounthi2_1 */
    case 527:  /* *negsi2_1_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 507:  /* *xorsi_2_zext_imm */
    case 506:  /* *iorsi_2_zext_imm */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 475:  /* *andn_di_ccno */
    case 474:  /* *andn_si_ccno */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 1429:  /* kandndi */
    case 1428:  /* kandnsi */
    case 1427:  /* kandnhi */
    case 1426:  /* kandnqi */
    case 884:  /* *tls_local_dynamic_base_64_di */
    case 883:  /* *tls_local_dynamic_base_64_si */
    case 760:  /* *sibcall_value_memory */
    case 759:  /* *sibcall_value_memory */
    case 489:  /* *xorsi_1_zext_imm */
    case 488:  /* *iorsi_1_zext_imm */
    case 473:  /* *andnhi_1 */
    case 472:  /* *andnqi_1 */
    case 471:  /* *andndi_1 */
    case 470:  /* *andnsi_1 */
    case 469:  /* *andndi3_doubleword */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 520:  /* *xorqi_ext_1_cc */
    case 467:  /* *andqi_ext_1_cc */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 450:  /* *testqi_ext_3 */
    case 449:  /* *testqi_ext_3 */
    case 448:  /* *testqi_ext_3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 447:  /* *testqi_ext_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      break;

    case 446:  /* *testqi_ext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 440:  /* udivmodhiqi3 */
    case 439:  /* divmodhiqi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 438:  /* *udivmodsi4_noext_zext_2 */
    case 437:  /* *divmodsi4_noext_zext_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 436:  /* *udivmodsi4_noext_zext_1 */
    case 435:  /* *divmodsi4_noext_zext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 434:  /* *udivmoddi4_noext */
    case 433:  /* *divmoddi4_noext */
    case 432:  /* *udivmodsi4_noext */
    case 431:  /* *divmodsi4_noext */
    case 430:  /* *udivmodhi4_noext */
    case 429:  /* *divmodhi4_noext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 428:  /* *udivmodsi4_pow2_zext_2 */
    case 427:  /* *udivmodsi4_zext_2 */
    case 426:  /* *divmodsi4_zext_2 */
    case 414:  /* udivmodsi4_zext_2 */
    case 413:  /* divmodsi4_zext_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 425:  /* *udivmodsi4_pow2_zext_1 */
    case 424:  /* *udivmodsi4_zext_1 */
    case 423:  /* *divmodsi4_zext_1 */
    case 412:  /* udivmodsi4_zext_1 */
    case 411:  /* divmodsi4_zext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 422:  /* *udivmoddi4_pow2 */
    case 421:  /* *udivmodsi4_pow2 */
    case 420:  /* *udivmoddi4 */
    case 419:  /* *udivmodsi4 */
    case 418:  /* *udivmodhi4 */
    case 417:  /* *divmoddi4 */
    case 416:  /* *divmodsi4 */
    case 415:  /* *divmodhi4 */
    case 410:  /* udivmoddi4_1 */
    case 409:  /* udivmodsi4_1 */
    case 408:  /* divmoddi4_1 */
    case 407:  /* divmodsi4_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 404:  /* *umulsi3_highpart_zext */
    case 403:  /* *smulsi3_highpart_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 406:  /* *umulsi3_highpart_1 */
    case 405:  /* *smulsi3_highpart_1 */
    case 402:  /* *umuldi3_highpart_1 */
    case 401:  /* *smuldi3_highpart_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 400:  /* *umulqihi3_1 */
    case 399:  /* *mulqihi3_1 */
    case 398:  /* *mulditi3_1 */
    case 397:  /* *mulsidi3_1 */
    case 396:  /* *umulditi3_1 */
    case 395:  /* *umulsidi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 394:  /* *bmi2_umulditi3_1 */
    case 393:  /* *bmi2_umulsidi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 390:  /* *umulvdi4 */
    case 389:  /* *umulvsi4 */
    case 388:  /* *umulvhi4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1);
      recog_data.dup_num[3] = 2;
      break;

    case 376:  /* *subdi3_ne_0 */
    case 375:  /* *subsi3_ne_0 */
    case 374:  /* *subhi3_ne_0 */
    case 373:  /* *subqi3_ne_0 */
    case 372:  /* *subdi3_eq_0 */
    case 371:  /* *subsi3_eq_0 */
    case 370:  /* *subhi3_eq_0 */
    case 369:  /* *subqi3_eq_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 368:  /* *subdi3_eq_1 */
    case 367:  /* *subsi3_eq_1 */
    case 366:  /* *subhi3_eq_1 */
    case 365:  /* *subqi3_eq_1 */
    case 364:  /* *subdi3_ne */
    case 363:  /* *subsi3_ne */
    case 362:  /* *subhi3_ne */
    case 361:  /* *subqi3_ne */
    case 360:  /* *subdi3_eq */
    case 359:  /* *subsi3_eq */
    case 358:  /* *subhi3_eq */
    case 357:  /* *subqi3_eq */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      break;

    case 356:  /* *adddi3_ne_0 */
    case 355:  /* *addsi3_ne_0 */
    case 354:  /* *addhi3_ne_0 */
    case 353:  /* *addqi3_ne_0 */
    case 352:  /* *adddi3_eq_0 */
    case 351:  /* *addsi3_eq_0 */
    case 350:  /* *addhi3_eq_0 */
    case 349:  /* *addqi3_eq_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 348:  /* *adddi3_ne */
    case 347:  /* *addsi3_ne */
    case 346:  /* *addhi3_ne */
    case 345:  /* *addqi3_ne */
    case 344:  /* *adddi3_eq */
    case 343:  /* *addsi3_eq */
    case 342:  /* *addhi3_eq */
    case 341:  /* *addqi3_eq */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      break;

    case 338:  /* *addsi3_zext_cc_overflow_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[2] = 2;
      break;

    case 337:  /* *adddi3_cc_overflow_2 */
    case 336:  /* *addsi3_cc_overflow_2 */
    case 335:  /* *addhi3_cc_overflow_2 */
    case 334:  /* *addqi3_cc_overflow_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[2] = 2;
      break;

    case 333:  /* *adddi3_cconly_overflow_2 */
    case 332:  /* *addsi3_cconly_overflow_2 */
    case 331:  /* *addhi3_cconly_overflow_2 */
    case 330:  /* *addqi3_cconly_overflow_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 329:  /* *addsi3_zext_cc_overflow_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 340:  /* *addti3_doubleword_cc_overflow_1 */
    case 339:  /* *adddi3_doubleword_cc_overflow_1 */
    case 328:  /* *adddi3_cc_overflow_1 */
    case 327:  /* *addsi3_cc_overflow_1 */
    case 326:  /* *addhi3_cc_overflow_1 */
    case 325:  /* *addqi3_cc_overflow_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 324:  /* *adddi3_cconly_overflow_1 */
    case 323:  /* *addsi3_cconly_overflow_1 */
    case 322:  /* *addhi3_cconly_overflow_1 */
    case 321:  /* *addqi3_cconly_overflow_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 320:  /* subborrowdi */
    case 319:  /* subborrowsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 2;
      break;

    case 318:  /* subdi3_carry_ccgz */
    case 317:  /* subsi3_carry_ccgz */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 316:  /* *subdi3_carry_ccc_1 */
    case 315:  /* *subsi3_carry_ccc_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      break;

    case 314:  /* subdi3_carry_ccc */
    case 313:  /* subsi3_carry_ccc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0));
      break;

    case 311:  /* *subsi3_carry_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      break;

    case 310:  /* *subdi3_carry_0 */
    case 309:  /* *subsi3_carry_0 */
    case 308:  /* *subhi3_carry_0 */
    case 307:  /* *subqi3_carry_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 306:  /* subdi3_carry */
    case 305:  /* subsi3_carry */
    case 304:  /* subhi3_carry */
    case 303:  /* subqi3_carry */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 302:  /* *addcarrydi_1 */
    case 301:  /* *addcarrysi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0);
      recog_data.dup_num[4] = 3;
      break;

    case 300:  /* addcarrydi */
    case 299:  /* addcarrysi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0);
      recog_data.dup_num[5] = 3;
      break;

    case 298:  /* *addsi3_carry_zext_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 297:  /* *addsi3_carry_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      break;

    case 296:  /* *adddi3_carry_0 */
    case 295:  /* *addsi3_carry_0 */
    case 294:  /* *addhi3_carry_0 */
    case 293:  /* *addqi3_carry_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 292:  /* adddi3_carry */
    case 291:  /* addsi3_carry */
    case 290:  /* addhi3_carry */
    case 289:  /* addqi3_carry */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 288:  /* *subsi_3_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 287:  /* *subdi_3 */
    case 286:  /* *subsi_3 */
    case 285:  /* *subhi_3 */
    case 284:  /* *subqi_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 283:  /* *subvdi4_overflow_2 */
    case 282:  /* *subvsi4_overflow_2 */
    case 281:  /* *subvhi4_overflow_2 */
    case 280:  /* *subvqi4_overflow_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1), 0);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[5] = 3;
      break;

    case 279:  /* *subvdi4_overflow_1 */
    case 278:  /* *subvsi4_overflow_1 */
    case 277:  /* *subvhi4_overflow_1 */
    case 276:  /* *subvqi4_overflow_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1), 0);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[5] = 3;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1);
      recog_data.dup_num[6] = 2;
      break;

    case 241:  /* *leahi_general_3b */
    case 240:  /* *leaqi_general_3b */
    case 239:  /* *leahi_general_3 */
    case 238:  /* *leaqi_general_3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 4793:  /* xop_pmacssdd */
    case 4792:  /* xop_pmacsdd */
    case 4791:  /* xop_pmacssww */
    case 4790:  /* xop_pmacsww */
    case 249:  /* *leadi_general_4 */
    case 248:  /* *leadi_general_4 */
    case 247:  /* *leasi_general_4 */
    case 246:  /* *leasi_general_4 */
    case 245:  /* *leahi_general_4 */
    case 244:  /* *leahi_general_4 */
    case 243:  /* *leaqi_general_4 */
    case 242:  /* *leaqi_general_4 */
    case 237:  /* *leahi_general_2b */
    case 236:  /* *leaqi_general_2b */
    case 235:  /* *leahi_general_2 */
    case 234:  /* *leaqi_general_2 */
    case 233:  /* *leahi_general_1 */
    case 232:  /* *leaqi_general_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 231:  /* *addvdi4_overflow_2 */
    case 230:  /* *addvsi4_overflow_2 */
    case 229:  /* *addvhi4_overflow_2 */
    case 228:  /* *addvqi4_overflow_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[4] = 3;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1);
      recog_data.dup_num[5] = 1;
      break;

    case 227:  /* *addvdi4_overflow_1 */
    case 226:  /* *addvsi4_overflow_1 */
    case 225:  /* *addvhi4_overflow_1 */
    case 224:  /* *addvqi4_overflow_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[4] = 3;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1);
      recog_data.dup_num[5] = 1;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1);
      recog_data.dup_num[6] = 2;
      break;

    case 387:  /* *mulvdi4_1 */
    case 386:  /* *mulvsi4_1 */
    case 385:  /* *mulvhi4_1 */
    case 275:  /* *subvti4_doubleword_1 */
    case 274:  /* *subvdi4_doubleword_1 */
    case 271:  /* subvdi4_1 */
    case 270:  /* subvsi4_1 */
    case 269:  /* subvhi4_1 */
    case 268:  /* subvqi4_1 */
    case 223:  /* *addvti4_doubleword_1 */
    case 222:  /* *addvdi4_doubleword_1 */
    case 219:  /* addvdi4_1 */
    case 218:  /* addvsi4_1 */
    case 217:  /* addvhi4_1 */
    case 216:  /* addvqi4_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      break;

    case 392:  /* *umulvqi4 */
    case 391:  /* *mulvqi4 */
    case 384:  /* *mulvhi4 */
    case 383:  /* *mulvdi4 */
    case 382:  /* *mulvsi4 */
    case 273:  /* *subvti4_doubleword */
    case 272:  /* *subvdi4_doubleword */
    case 267:  /* *subvdi4 */
    case 266:  /* *subvsi4 */
    case 265:  /* *subvhi4 */
    case 264:  /* *subvqi4 */
    case 221:  /* *addvti4_doubleword */
    case 220:  /* *addvdi4_doubleword */
    case 215:  /* *addvdi4 */
    case 214:  /* *addvsi4 */
    case 213:  /* *addvhi4 */
    case 212:  /* *addvqi4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1);
      recog_data.dup_num[3] = 2;
      break;

    case 519:  /* *xorqi_ext_2 */
    case 518:  /* *iorqi_ext_2 */
    case 468:  /* *andqi_ext_2 */
    case 211:  /* *addqi_ext_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0), 0));
      break;

    case 517:  /* *xorqi_ext_1 */
    case 516:  /* *iorqi_ext_1 */
    case 466:  /* andqi_ext_1 */
    case 210:  /* addqi_ext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 670:  /* *ashrdi3_cconly */
    case 669:  /* *lshrdi3_cconly */
    case 668:  /* *ashrsi3_cconly */
    case 667:  /* *lshrsi3_cconly */
    case 666:  /* *ashrhi3_cconly */
    case 665:  /* *lshrhi3_cconly */
    case 664:  /* *ashrqi3_cconly */
    case 663:  /* *lshrqi3_cconly */
    case 607:  /* *ashldi3_cconly */
    case 606:  /* *ashlsi3_cconly */
    case 605:  /* *ashlhi3_cconly */
    case 604:  /* *ashlqi3_cconly */
    case 515:  /* *xordi_3 */
    case 514:  /* *iordi_3 */
    case 513:  /* *xorsi_3 */
    case 512:  /* *iorsi_3 */
    case 511:  /* *xorhi_3 */
    case 510:  /* *iorhi_3 */
    case 509:  /* *xorqi_3 */
    case 508:  /* *iorqi_3 */
    case 209:  /* *adddi_5 */
    case 208:  /* *addsi_5 */
    case 207:  /* *addhi_5 */
    case 206:  /* *addqi_5 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 205:  /* *addsi_4 */
    case 204:  /* *addhi_4 */
    case 203:  /* *addqi_4 */
    case 202:  /* *adddi_4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 201:  /* *addsi_3_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 200:  /* *adddi_3 */
    case 199:  /* *addsi_3 */
    case 198:  /* *addhi_3 */
    case 197:  /* *addqi_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 662:  /* *ashrsi3_cmp_zext */
    case 661:  /* *lshrsi3_cmp_zext */
    case 603:  /* *ashlsi3_cmp_zext */
    case 505:  /* *xorsi_2_zext */
    case 504:  /* *iorsi_2_zext */
    case 461:  /* *andsi_2_zext */
    case 263:  /* *subsi_2_zext */
    case 196:  /* *addsi_2_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 660:  /* *ashrdi3_cmp */
    case 659:  /* *lshrdi3_cmp */
    case 658:  /* *ashrsi3_cmp */
    case 657:  /* *lshrsi3_cmp */
    case 656:  /* *ashrhi3_cmp */
    case 655:  /* *lshrhi3_cmp */
    case 654:  /* *ashrqi3_cmp */
    case 653:  /* *lshrqi3_cmp */
    case 602:  /* *ashldi3_cmp */
    case 601:  /* *ashlsi3_cmp */
    case 600:  /* *ashlhi3_cmp */
    case 599:  /* *ashlqi3_cmp */
    case 503:  /* *xordi_2 */
    case 502:  /* *iordi_2 */
    case 501:  /* *xorsi_2 */
    case 500:  /* *iorsi_2 */
    case 499:  /* *xorhi_2 */
    case 498:  /* *iorhi_2 */
    case 497:  /* *xorqi_2 */
    case 496:  /* *iorqi_2 */
    case 465:  /* *andsi_2 */
    case 464:  /* *andhi_2 */
    case 463:  /* *andqi_2 */
    case 462:  /* *andqi_2_maybe_si */
    case 460:  /* *anddi_2 */
    case 262:  /* *subdi_2 */
    case 261:  /* *subsi_2 */
    case 260:  /* *subhi_2 */
    case 259:  /* *subqi_2 */
    case 195:  /* *adddi_2 */
    case 194:  /* *addsi_2 */
    case 193:  /* *addhi_2 */
    case 192:  /* *addqi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 699:  /* *rotrhi3_1_slp */
    case 698:  /* *rotlhi3_1_slp */
    case 697:  /* *rotrqi3_1_slp */
    case 696:  /* *rotlqi3_1_slp */
    case 652:  /* *ashrhi3_1_slp */
    case 651:  /* *lshrhi3_1_slp */
    case 650:  /* *ashrqi3_1_slp */
    case 649:  /* *lshrqi3_1_slp */
    case 598:  /* *ashlhi3_1_slp */
    case 597:  /* *ashlqi3_1_slp */
    case 495:  /* *xorhi_1_slp */
    case 494:  /* *iorhi_1_slp */
    case 493:  /* *xorqi_1_slp */
    case 492:  /* *iorqi_1_slp */
    case 459:  /* *andhi_1_slp */
    case 458:  /* *andqi_1_slp */
    case 258:  /* *subhi_1_slp */
    case 257:  /* *subqi_1_slp */
    case 191:  /* *addhi_1_slp */
    case 190:  /* *addqi_1_slp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 1433:  /* kxnordi */
    case 1432:  /* kxnorsi */
    case 1431:  /* kxnorhi */
    case 1430:  /* kxnorqi */
    case 1027:  /* *x86_movdicc_0_m1_neg_leudi */
    case 1026:  /* *x86_movsicc_0_m1_neg_leudi */
    case 1025:  /* *x86_movdicc_0_m1_neg_leusi */
    case 1024:  /* *x86_movsicc_0_m1_neg_leusi */
    case 1023:  /* *x86_movdicc_0_m1_neg_leuhi */
    case 1022:  /* *x86_movsicc_0_m1_neg_leuhi */
    case 1021:  /* *x86_movdicc_0_m1_neg_leuqi */
    case 1020:  /* *x86_movsicc_0_m1_neg_leuqi */
    case 691:  /* *rotrsi3_1_zext */
    case 690:  /* *rotlsi3_1_zext */
    case 644:  /* *ashrsi3_1_zext */
    case 643:  /* *lshrsi3_1_zext */
    case 632:  /* *ashrsi3_cvt_zext */
    case 594:  /* *ashlsi3_1_zext */
    case 487:  /* *xorsi_1_zext */
    case 486:  /* *iorsi_1_zext */
    case 454:  /* *andsi_1_zext */
    case 380:  /* *mulsi3_1_zext */
    case 312:  /* *subsi3_carry_zext_0 */
    case 256:  /* *subsi_1_zext */
    case 187:  /* addsi_1_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 1449:  /* klshiftrtdi */
    case 1448:  /* kashiftdi */
    case 1447:  /* klshiftrtsi */
    case 1446:  /* kashiftsi */
    case 1445:  /* klshiftrthi */
    case 1444:  /* kashifthi */
    case 1443:  /* klshiftrtqi */
    case 1442:  /* kashiftqi */
    case 1441:  /* kadddi */
    case 1440:  /* kaddsi */
    case 1439:  /* kaddhi */
    case 1438:  /* kaddqi */
    case 1425:  /* kxordi */
    case 1424:  /* kiordi */
    case 1423:  /* kanddi */
    case 1422:  /* kxorsi */
    case 1421:  /* kiorsi */
    case 1420:  /* kandsi */
    case 1419:  /* kxorhi */
    case 1418:  /* kiorhi */
    case 1417:  /* kandhi */
    case 1416:  /* kxorqi */
    case 1415:  /* kiorqi */
    case 1414:  /* kandqi */
    case 1061:  /* pro_epilogue_adjust_stack_sub_di */
    case 1060:  /* pro_epilogue_adjust_stack_sub_si */
    case 1059:  /* pro_epilogue_adjust_stack_add_di */
    case 1058:  /* pro_epilogue_adjust_stack_add_si */
    case 1057:  /* *umindi3_doubleword */
    case 1056:  /* *umaxdi3_doubleword */
    case 1055:  /* *smindi3_doubleword */
    case 1054:  /* *smaxdi3_doubleword */
    case 1053:  /* *umindi3_1 */
    case 1052:  /* *umaxdi3_1 */
    case 1051:  /* *smindi3_1 */
    case 1050:  /* *smaxdi3_1 */
    case 1049:  /* *uminsi3_1 */
    case 1048:  /* *umaxsi3_1 */
    case 1047:  /* *sminsi3_1 */
    case 1046:  /* *smaxsi3_1 */
    case 695:  /* *rotrhi3_1 */
    case 694:  /* *rotlhi3_1 */
    case 693:  /* *rotrqi3_1 */
    case 692:  /* *rotlqi3_1 */
    case 688:  /* *rotrdi3_1 */
    case 687:  /* *rotldi3_1 */
    case 686:  /* *rotrsi3_1 */
    case 685:  /* *rotlsi3_1 */
    case 648:  /* *ashrhi3_1 */
    case 647:  /* *lshrhi3_1 */
    case 646:  /* *ashrqi3_1 */
    case 645:  /* *lshrqi3_1 */
    case 640:  /* *ashrdi3_1 */
    case 639:  /* *lshrdi3_1 */
    case 638:  /* *ashrsi3_1 */
    case 637:  /* *lshrsi3_1 */
    case 631:  /* ashrdi3_cvt */
    case 630:  /* ashrsi3_cvt */
    case 627:  /* *ashrti3_doubleword */
    case 626:  /* *lshrti3_doubleword */
    case 625:  /* *ashrdi3_doubleword */
    case 624:  /* *lshrdi3_doubleword */
    case 596:  /* *ashlqi3_1 */
    case 595:  /* *ashlhi3_1 */
    case 592:  /* *ashldi3_1 */
    case 591:  /* *ashlsi3_1 */
    case 582:  /* *ashlti3_doubleword */
    case 581:  /* *ashldi3_doubleword */
    case 491:  /* *xorqi_1 */
    case 490:  /* *iorqi_1 */
    case 485:  /* *xordi_1_btc */
    case 484:  /* *iordi_1_bts */
    case 483:  /* *xordi_1 */
    case 482:  /* *iordi_1 */
    case 481:  /* *xorsi_1 */
    case 480:  /* *iorsi_1 */
    case 479:  /* *xorhi_1 */
    case 478:  /* *iorhi_1 */
    case 477:  /* *xordi3_doubleword */
    case 476:  /* *iordi3_doubleword */
    case 457:  /* *andqi_1 */
    case 456:  /* *andsi_1 */
    case 455:  /* *andhi_1 */
    case 453:  /* *anddi_1_btr */
    case 452:  /* *anddi_1 */
    case 451:  /* *anddi3_doubleword */
    case 381:  /* *mulqi3_1 */
    case 379:  /* *muldi3_1 */
    case 378:  /* *mulsi3_1 */
    case 377:  /* *mulhi3_1 */
    case 255:  /* *subdi_1 */
    case 254:  /* *subsi_1 */
    case 253:  /* *subhi_1 */
    case 252:  /* *subqi_1 */
    case 251:  /* *subti3_doubleword */
    case 250:  /* *subdi3_doubleword */
    case 189:  /* *addqi_1 */
    case 188:  /* *addhi_1 */
    case 186:  /* *adddi_1 */
    case 185:  /* *addsi_1 */
    case 184:  /* *addti3_doubleword */
    case 183:  /* *adddi3_doubleword */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 4421:  /* sse_stmxcsr */
    case 1176:  /* rdpid_rex64 */
    case 1175:  /* rdpid */
    case 1148:  /* rdsspdi */
    case 1147:  /* rdsspsi */
    case 1133:  /* rdgsbasedi */
    case 1132:  /* rdfsbasedi */
    case 1131:  /* rdgsbasesi */
    case 1130:  /* rdfsbasesi */
    case 1125:  /* lwp_slwpcbdi_1 */
    case 1124:  /* lwp_slwpcbsi_1 */
    case 1120:  /* fnstsw */
    case 1093:  /* fxsave64 */
    case 1092:  /* fxsave */
    case 1088:  /* rdtsc */
    case 1074:  /* *prefetch_prefetchwt1 */
    case 936:  /* x86_fnstsw_1 */
    case 889:  /* *load_tp_x32_zext */
    case 888:  /* *load_tp_di */
    case 887:  /* *load_tp_si */
    case 778:  /* set_got_rex64 */
    case 159:  /* x86_fnstcw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      break;

    case 180:  /* floatunssixf2_i387_with_xmm */
    case 179:  /* floatunssidf2_i387_with_xmm */
    case 178:  /* floatunssisf2_i387_with_xmm */
    case 158:  /* fix_truncsi_i387 */
    case 157:  /* fix_trunchi_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 173:  /* floatdixf2_i387_with_xmm */
    case 172:  /* floatdidf2_i387_with_xmm */
    case 171:  /* floatdisf2_i387_with_xmm */
    case 156:  /* fix_truncdi_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 1472:  /* *negv2df2 */
    case 1471:  /* *absv2df2 */
    case 1470:  /* *negv4df2 */
    case 1469:  /* *absv4df2 */
    case 1468:  /* *negv8df2 */
    case 1467:  /* *absv8df2 */
    case 1466:  /* *negv4sf2 */
    case 1465:  /* *absv4sf2 */
    case 1464:  /* *negv8sf2 */
    case 1463:  /* *absv8sf2 */
    case 1462:  /* *negv16sf2 */
    case 1461:  /* *absv16sf2 */
    case 785:  /* ffssi2_no_cmove */
    case 549:  /* *negdf2_1 */
    case 548:  /* *absdf2_1 */
    case 547:  /* *negsf2_1 */
    case 546:  /* *abssf2_1 */
    case 538:  /* *negtf2_1 */
    case 537:  /* *abstf2_1 */
    case 152:  /* fix_truncdi_i387_fisttp */
    case 151:  /* fix_truncsi_i387_fisttp */
    case 150:  /* fix_trunchi_i387_fisttp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 145:  /* *fixuns_truncdf_1 */
    case 144:  /* *fixuns_truncsf_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 124:  /* extendsidi2_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 1437:  /* knotdi */
    case 1436:  /* knotsi */
    case 1435:  /* knothi */
    case 1434:  /* knotqi */
    case 1019:  /* *x86_movdicc_0_m1_neg */
    case 1018:  /* *x86_movsicc_0_m1_neg */
    case 1017:  /* *x86_movdicc_0_m1_se */
    case 1016:  /* *x86_movsicc_0_m1_se */
    case 1015:  /* *x86_movdicc_0_m1 */
    case 1014:  /* *x86_movsicc_0_m1 */
    case 868:  /* popcounthi2 */
    case 862:  /* popcountdi2 */
    case 861:  /* popcountsi2 */
    case 800:  /* clzdi2_lzcnt */
    case 799:  /* clzsi2_lzcnt */
    case 793:  /* ctzdi2 */
    case 792:  /* ctzsi2 */
    case 545:  /* *negxf2_i387_1 */
    case 544:  /* *absxf2_i387_1 */
    case 543:  /* *negdf2_i387_1 */
    case 542:  /* *absdf2_i387_1 */
    case 541:  /* *negsf2_i387_1 */
    case 540:  /* *abssf2_i387_1 */
    case 526:  /* *negdi2_1 */
    case 525:  /* *negsi2_1 */
    case 524:  /* *neghi2_1 */
    case 523:  /* *negqi2_1 */
    case 522:  /* *negti2_doubleword */
    case 521:  /* *negdi2_doubleword */
    case 155:  /* *fix_truncdi_i387_1 */
    case 154:  /* *fix_truncsi_i387_1 */
    case 153:  /* *fix_trunchi_i387_1 */
    case 121:  /* zero_extendqihi2_and */
    case 118:  /* zero_extendhisi2_and */
    case 117:  /* zero_extendqisi2_and */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 739:  /* *indirect_jump */
    case 738:  /* *indirect_jump */
    case 104:  /* *pushxf_rounded */
    case 103:  /* *pushxf_rounded */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      break;

    case 101:  /* *insvqi_3 */
    case 100:  /* *insvqi_3 */
    case 99:  /* *insvqi_2 */
    case 98:  /* *insvqi_2 */
    case 97:  /* *insvqi_1 */
    case 93:  /* *insvqi_1_mem_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 5698:  /* avx512f_pd512_pd */
    case 5697:  /* avx512f_ps512_ps */
    case 5696:  /* avx512f_si512_si */
    case 5098:  /* avx512cd_maskw_vec_dupv4si */
    case 5097:  /* avx512cd_maskw_vec_dupv8si */
    case 5096:  /* avx512cd_maskw_vec_dupv16si */
    case 5095:  /* avx512cd_maskb_vec_dupv2di */
    case 5094:  /* avx512cd_maskb_vec_dupv4di */
    case 5093:  /* avx512cd_maskb_vec_dupv8di */
    case 5075:  /* *avx512dq_broadcastv8sf */
    case 5073:  /* *avx512dq_broadcastv16sf */
    case 5071:  /* *avx512dq_broadcastv4si */
    case 5069:  /* *avx512dq_broadcastv8si */
    case 5067:  /* *avx512dq_broadcastv16si */
    case 4998:  /* avx512vl_vec_dupv8hi */
    case 4996:  /* avx512vl_vec_dupv16hi */
    case 4994:  /* avx512bw_vec_dupv32hi */
    case 4992:  /* avx512vl_vec_dupv32qi */
    case 4990:  /* avx512vl_vec_dupv16qi */
    case 4988:  /* avx512bw_vec_dupv64qi */
    case 4986:  /* avx512vl_vec_dupv2df */
    case 4984:  /* avx512vl_vec_dupv4df */
    case 4982:  /* avx512f_vec_dupv8df */
    case 4980:  /* avx512vl_vec_dupv4sf */
    case 4978:  /* avx512vl_vec_dupv8sf */
    case 4976:  /* avx512f_vec_dupv16sf */
    case 4974:  /* avx512vl_vec_dupv2di */
    case 4972:  /* avx512vl_vec_dupv4di */
    case 4970:  /* avx512f_vec_dupv8di */
    case 4968:  /* avx512vl_vec_dupv4si */
    case 4966:  /* avx512vl_vec_dupv8si */
    case 4964:  /* avx512f_vec_dupv16si */
    case 4963:  /* avx512bw_vec_dupv64qi_1 */
    case 4962:  /* avx512bw_vec_dupv32hi_1 */
    case 4961:  /* avx512f_vec_dupv8di_1 */
    case 4960:  /* avx512f_vec_dupv16si_1 */
    case 4959:  /* avx2_vec_dupv4df */
    case 4906:  /* avx2_pbroadcastv4di_1 */
    case 4905:  /* avx2_pbroadcastv8si_1 */
    case 4904:  /* avx2_pbroadcastv16hi_1 */
    case 4903:  /* avx2_pbroadcastv32qi_1 */
    case 4902:  /* avx2_pbroadcastv2di */
    case 4901:  /* avx2_pbroadcastv4di */
    case 4900:  /* avx2_pbroadcastv4si */
    case 4899:  /* avx2_pbroadcastv8si */
    case 4898:  /* avx2_pbroadcastv8hi */
    case 4897:  /* avx2_pbroadcastv16hi */
    case 4896:  /* avx2_pbroadcastv32hi */
    case 4895:  /* avx2_pbroadcastv16qi */
    case 4894:  /* avx2_pbroadcastv32qi */
    case 4893:  /* avx2_pbroadcastv64qi */
    case 4892:  /* avx2_pbroadcastv8di */
    case 4891:  /* avx2_pbroadcastv16si */
    case 4699:  /* sse4_1_zero_extendv2siv2di2 */
    case 4697:  /* sse4_1_sign_extendv2siv2di2 */
    case 4679:  /* sse4_1_zero_extendv2hiv2di2 */
    case 4677:  /* sse4_1_sign_extendv2hiv2di2 */
    case 4667:  /* avx2_zero_extendv4hiv4di2 */
    case 4665:  /* avx2_sign_extendv4hiv4di2 */
    case 4659:  /* sse4_1_zero_extendv2qiv2di2 */
    case 4657:  /* sse4_1_sign_extendv2qiv2di2 */
    case 4647:  /* avx2_zero_extendv4qiv4di2 */
    case 4645:  /* avx2_sign_extendv4qiv4di2 */
    case 4635:  /* avx512f_zero_extendv8qiv8di2 */
    case 4633:  /* avx512f_sign_extendv8qiv8di2 */
    case 4623:  /* sse4_1_zero_extendv4hiv4si2 */
    case 4621:  /* sse4_1_sign_extendv4hiv4si2 */
    case 4603:  /* sse4_1_zero_extendv4qiv4si2 */
    case 4601:  /* sse4_1_sign_extendv4qiv4si2 */
    case 4591:  /* avx2_zero_extendv8qiv8si2 */
    case 4589:  /* avx2_sign_extendv8qiv8si2 */
    case 4575:  /* sse4_1_zero_extendv8qiv8hi2 */
    case 4573:  /* sse4_1_sign_extendv8qiv8hi2 */
    case 4341:  /* *vec_extractv4si_0_zext */
    case 4340:  /* *vec_extractv4si_0_zext_sse4 */
    case 3392:  /* *avx512f_us_truncatev8div16qi2 */
    case 3391:  /* *avx512f_truncatev8div16qi2 */
    case 3390:  /* *avx512f_ss_truncatev8div16qi2 */
    case 2905:  /* avx512f_vec_dupv8df_1 */
    case 2904:  /* avx512f_vec_dupv16sf_1 */
    case 2903:  /* avx2_vec_dupv8sf_1 */
    case 2902:  /* avx2_vec_dupv4sf */
    case 2901:  /* avx2_vec_dupv8sf */
    case 2863:  /* sse2_cvtps2pd */
    case 2838:  /* vec_unpacks_lo_v16sf */
    case 2837:  /* *avx_cvtps2pd256_2 */
    case 2813:  /* sse2_cvttpd2dq */
    case 2807:  /* fixuns_truncv2sfv2di2 */
    case 2805:  /* fix_truncv2sfv2di2 */
    case 2754:  /* ufix_truncv2dfv2si2 */
    case 2723:  /* sse2_cvtdq2pd */
    case 2722:  /* avx_cvtdq2pd256_2 */
    case 2721:  /* avx512f_cvtdq2pd512_2 */
    case 2719:  /* ufloatv2siv2df2 */
    case 2667:  /* sse2_cvttsd2siq */
    case 2665:  /* sse2_cvttsd2si */
    case 2657:  /* avx512f_vcvttsd2usiq */
    case 2655:  /* avx512f_vcvttsd2usi */
    case 2649:  /* avx512f_vcvttss2usiq */
    case 2647:  /* avx512f_vcvttss2usi */
    case 2560:  /* sse_cvttss2siq */
    case 2558:  /* sse_cvttss2si */
    case 2547:  /* sse_cvttps2pi */
    case 1399:  /* sse2_movq128 */
    case 1308:  /* *vec_extractv2si_1_zext */
    case 1306:  /* *vec_extractv2si_0_zext */
    case 1305:  /* *vec_extractv2si_0_zext_sse4 */
    case 1301:  /* *vec_dupv4hi */
    case 570:  /* *one_cmplsi2_1_zext */
    case 143:  /* *fixuns_truncdfsi2_avx512f_zext */
    case 142:  /* *fixuns_truncsfsi2_avx512f_zext */
    case 130:  /* *extendqisi2_zext */
    case 128:  /* *extendhisi2_zext */
    case 92:  /* *extzvqi */
    case 88:  /* *extzvqi_mem_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 749:  /* *sibcall_memory */
    case 748:  /* *sibcall_memory */
    case 85:  /* *movstricthi_xor */
    case 84:  /* *movstrictqi_xor */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 113:  /* *swapxf */
    case 81:  /* *swaphi */
    case 80:  /* *swapqi */
    case 79:  /* *swapdi */
    case 78:  /* *swapsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1);
      recog_data.dup_num[1] = 0;
      break;

    case 5776:  /* vpopcountv8hi */
    case 5774:  /* vpopcountv16hi */
    case 5772:  /* vpopcountv32hi */
    case 5770:  /* vpopcountv32qi */
    case 5768:  /* vpopcountv16qi */
    case 5766:  /* vpopcountv64qi */
    case 5756:  /* vpopcountv2di */
    case 5754:  /* vpopcountv4di */
    case 5752:  /* vpopcountv8di */
    case 5750:  /* vpopcountv4si */
    case 5748:  /* vpopcountv8si */
    case 5746:  /* vpopcountv16si */
    case 5701:  /* avx512f_pd512_256pd */
    case 5700:  /* avx512f_ps512_256ps */
    case 5699:  /* avx512f_si512_256si */
    case 5675:  /* clzv2di2 */
    case 5673:  /* clzv4di2 */
    case 5671:  /* clzv8di2 */
    case 5669:  /* clzv4si2 */
    case 5667:  /* clzv8si2 */
    case 5665:  /* clzv16si2 */
    case 5233:  /* avx_pd256_pd */
    case 5232:  /* avx_ps256_ps */
    case 5231:  /* avx_si256_si */
    case 5091:  /* *avx512dq_broadcastv4df_1 */
    case 5089:  /* *avx512dq_broadcastv4di_1 */
    case 5087:  /* *avx512dq_broadcastv8df_1 */
    case 5085:  /* *avx512dq_broadcastv8di_1 */
    case 5083:  /* *avx512dq_broadcastv16si_1 */
    case 5081:  /* *avx512dq_broadcastv16sf_1 */
    case 5079:  /* *avx512vl_broadcastv8sf_1 */
    case 5077:  /* *avx512vl_broadcastv8si_1 */
    case 5060:  /* vec_dupv4df */
    case 5059:  /* vec_dupv4di */
    case 5058:  /* vec_dupv8sf */
    case 5057:  /* vec_dupv8si */
    case 5056:  /* *vec_dupv4si */
    case 5055:  /* *vec_dupv8si */
    case 5054:  /* *vec_dupv8hi */
    case 5053:  /* *vec_dupv16hi */
    case 5052:  /* *vec_dupv16qi */
    case 5051:  /* *vec_dupv32qi */
    case 5046:  /* *vec_dupv2di */
    case 5045:  /* *vec_dupv4si */
    case 5044:  /* vec_dupv4sf */
    case 5042:  /* *avx512vl_vec_dup_gprv2df */
    case 5040:  /* *avx512vl_vec_dup_gprv4df */
    case 5038:  /* *avx512f_vec_dup_gprv8df */
    case 5036:  /* *avx512vl_vec_dup_gprv4sf */
    case 5034:  /* *avx512vl_vec_dup_gprv8sf */
    case 5032:  /* *avx512f_vec_dup_gprv16sf */
    case 5030:  /* *avx512vl_vec_dup_gprv2di */
    case 5028:  /* *avx512vl_vec_dup_gprv4di */
    case 5026:  /* *avx512f_vec_dup_gprv8di */
    case 5024:  /* *avx512vl_vec_dup_gprv4si */
    case 5022:  /* *avx512vl_vec_dup_gprv8si */
    case 5020:  /* *avx512f_vec_dup_gprv16si */
    case 5018:  /* *avx512vl_vec_dup_gprv8hi */
    case 5016:  /* *avx512vl_vec_dup_gprv16hi */
    case 5014:  /* *avx512bw_vec_dup_gprv32hi */
    case 5012:  /* *avx512vl_vec_dup_gprv32qi */
    case 5010:  /* *avx512vl_vec_dup_gprv16qi */
    case 5008:  /* *avx512bw_vec_dup_gprv64qi */
    case 5006:  /* *avx512f_broadcastv8di */
    case 5004:  /* *avx512f_broadcastv8df */
    case 5002:  /* *avx512f_broadcastv16si */
    case 5000:  /* *avx512f_broadcastv16sf */
    case 4703:  /* *sse4_1_zero_extendv2siv2di2_1 */
    case 4701:  /* *sse4_1_sign_extendv2siv2di2_1 */
    case 4695:  /* avx2_zero_extendv4siv4di2 */
    case 4693:  /* avx2_sign_extendv4siv4di2 */
    case 4691:  /* avx512f_zero_extendv8siv8di2 */
    case 4689:  /* avx512f_sign_extendv8siv8di2 */
    case 4683:  /* *sse4_1_zero_extendv2hiv2di2_1 */
    case 4681:  /* *sse4_1_sign_extendv2hiv2di2_1 */
    case 4671:  /* *avx2_zero_extendv4hiv4di2_1 */
    case 4669:  /* *avx2_sign_extendv4hiv4di2_1 */
    case 4663:  /* avx512f_zero_extendv8hiv8di2 */
    case 4661:  /* avx512f_sign_extendv8hiv8di2 */
    case 4651:  /* *avx2_zero_extendv4qiv4di2_1 */
    case 4649:  /* *avx2_sign_extendv4qiv4di2_1 */
    case 4639:  /* *avx512f_zero_extendv8qiv8di2_1 */
    case 4637:  /* *avx512f_sign_extendv8qiv8di2_1 */
    case 4627:  /* *sse4_1_zero_extendv4hiv4si2_1 */
    case 4625:  /* *sse4_1_sign_extendv4hiv4si2_1 */
    case 4619:  /* avx2_zero_extendv8hiv8si2 */
    case 4617:  /* avx2_sign_extendv8hiv8si2 */
    case 4615:  /* avx512f_zero_extendv16hiv16si2 */
    case 4613:  /* avx512f_sign_extendv16hiv16si2 */
    case 4607:  /* *sse4_1_zero_extendv4qiv4si2_1 */
    case 4605:  /* *sse4_1_sign_extendv4qiv4si2_1 */
    case 4595:  /* *avx2_zero_extendv8qiv8si2_1 */
    case 4593:  /* *avx2_sign_extendv8qiv8si2_1 */
    case 4587:  /* *avx512f_zero_extendv16qiv16si2 */
    case 4585:  /* *avx512f_sign_extendv16qiv16si2 */
    case 4579:  /* *sse4_1_zero_extendv8qiv8hi2_1 */
    case 4577:  /* *sse4_1_sign_extendv8qiv8hi2_1 */
    case 4571:  /* avx512bw_zero_extendv32qiv32hi2 */
    case 4569:  /* avx512bw_sign_extendv32qiv32hi2 */
    case 4567:  /* avx2_zero_extendv16qiv16hi2 */
    case 4565:  /* avx2_sign_extendv16qiv16hi2 */
    case 4514:  /* absv2si2 */
    case 4513:  /* absv4hi2 */
    case 4512:  /* absv8qi2 */
    case 4511:  /* ssse3_absv2si2 */
    case 4510:  /* ssse3_absv4hi2 */
    case 4509:  /* ssse3_absv8qi2 */
    case 4496:  /* *absv2di2 */
    case 4495:  /* *absv4di2 */
    case 4494:  /* *absv8di2 */
    case 4493:  /* *absv4si2 */
    case 4492:  /* *absv8si2 */
    case 4491:  /* *absv16si2 */
    case 4490:  /* *absv8hi2 */
    case 4489:  /* *absv16hi2 */
    case 4488:  /* *absv32hi2 */
    case 4487:  /* *absv16qi2 */
    case 4486:  /* *absv32qi2 */
    case 4485:  /* *absv64qi2 */
    case 4346:  /* *vec_extractv2di_1 */
    case 4339:  /* *vec_extractv2di_0_sse */
    case 4338:  /* *vec_extractv2di_0 */
    case 4337:  /* *vec_extractv4si_0 */
    case 3245:  /* *avx512vl_us_truncatev16hiv16qi2 */
    case 3244:  /* *avx512vl_truncatev16hiv16qi2 */
    case 3243:  /* *avx512vl_ss_truncatev16hiv16qi2 */
    case 3242:  /* *avx512vl_us_truncatev8siv8hi2 */
    case 3241:  /* *avx512vl_truncatev8siv8hi2 */
    case 3240:  /* *avx512vl_ss_truncatev8siv8hi2 */
    case 3239:  /* *avx512vl_us_truncatev4div4si2 */
    case 3238:  /* *avx512vl_truncatev4div4si2 */
    case 3237:  /* *avx512vl_ss_truncatev4div4si2 */
    case 3233:  /* avx512bw_us_truncatev32hiv32qi2 */
    case 3232:  /* avx512bw_truncatev32hiv32qi2 */
    case 3231:  /* avx512bw_ss_truncatev32hiv32qi2 */
    case 3218:  /* *avx512f_us_truncatev8div8hi2 */
    case 3217:  /* *avx512f_truncatev8div8hi2 */
    case 3216:  /* *avx512f_ss_truncatev8div8hi2 */
    case 3215:  /* *avx512f_us_truncatev8div8si2 */
    case 3214:  /* *avx512f_truncatev8div8si2 */
    case 3213:  /* *avx512f_ss_truncatev8div8si2 */
    case 3212:  /* *avx512f_us_truncatev16siv16hi2 */
    case 3211:  /* *avx512f_truncatev16siv16hi2 */
    case 3210:  /* *avx512f_ss_truncatev16siv16hi2 */
    case 3209:  /* *avx512f_us_truncatev16siv16qi2 */
    case 3208:  /* *avx512f_truncatev16siv16qi2 */
    case 3207:  /* *avx512f_ss_truncatev16siv16qi2 */
    case 3202:  /* vec_dupv2df */
    case 3198:  /* *vec_extractv2df_0_sse */
    case 3197:  /* sse2_storelpd */
    case 3196:  /* *vec_extractv2df_1_sse */
    case 3195:  /* sse2_storehpd */
    case 2983:  /* vec_extract_hi_v32qi */
    case 2982:  /* vec_extract_lo_v32qi */
    case 2981:  /* vec_extract_hi_v64qi */
    case 2980:  /* vec_extract_lo_v64qi */
    case 2979:  /* vec_extract_hi_v16hi */
    case 2978:  /* vec_extract_lo_v16hi */
    case 2977:  /* vec_extract_hi_v32hi */
    case 2976:  /* vec_extract_lo_v32hi */
    case 2975:  /* vec_extract_hi_v8sf */
    case 2974:  /* vec_extract_hi_v8si */
    case 2966:  /* vec_extract_lo_v8sf */
    case 2964:  /* vec_extract_lo_v8si */
    case 2962:  /* vec_extract_hi_v4df */
    case 2960:  /* vec_extract_hi_v4di */
    case 2958:  /* vec_extract_lo_v4df */
    case 2956:  /* vec_extract_lo_v4di */
    case 2954:  /* vec_extract_lo_v16si */
    case 2952:  /* vec_extract_lo_v16sf */
    case 2950:  /* vec_extract_hi_v16si */
    case 2948:  /* vec_extract_hi_v16sf */
    case 2944:  /* vec_extract_hi_v8di */
    case 2942:  /* vec_extract_hi_v8df */
    case 2938:  /* vec_extract_lo_v8di */
    case 2936:  /* vec_extract_lo_v8df */
    case 2919:  /* *vec_extractv4sf_0 */
    case 2898:  /* sse_storelps */
    case 2896:  /* sse_storehps */
    case 2835:  /* avx_cvtps2pd256 */
    case 2831:  /* avx512f_cvtps2pd512 */
    case 2826:  /* avx_cvtpd2ps256 */
    case 2822:  /* *avx512f_cvtpd2ps512 */
    case 2811:  /* ufix_truncv4sfv4si2 */
    case 2809:  /* ufix_truncv8sfv8si2 */
    case 2803:  /* fixuns_truncv4sfv4di2 */
    case 2801:  /* fix_truncv4sfv4di2 */
    case 2797:  /* fixuns_truncv8sfv8di2 */
    case 2793:  /* fix_truncv8sfv8di2 */
    case 2775:  /* fixuns_truncv2dfv2di2 */
    case 2773:  /* fix_truncv2dfv2di2 */
    case 2771:  /* fixuns_truncv4dfv4di2 */
    case 2769:  /* fix_truncv4dfv4di2 */
    case 2765:  /* fixuns_truncv8dfv8di2 */
    case 2761:  /* fix_truncv8dfv8di2 */
    case 2759:  /* ufix_truncv4dfv4si2 */
    case 2757:  /* fix_truncv4dfv4si2 */
    case 2750:  /* fixuns_truncv8dfv8si2 */
    case 2746:  /* fix_truncv8dfv8si2 */
    case 2717:  /* ufloatv4siv4df2 */
    case 2715:  /* ufloatv8siv8df2 */
    case 2707:  /* floatunsv4div4sf2 */
    case 2705:  /* floatv4div4sf2 */
    case 2701:  /* floatunsv8div8sf2 */
    case 2697:  /* floatv8div8sf2 */
    case 2693:  /* floatunsv2div2df2 */
    case 2689:  /* floatv2div2df2 */
    case 2685:  /* floatunsv4div4df2 */
    case 2681:  /* floatv4div4df2 */
    case 2677:  /* floatunsv8div8df2 */
    case 2673:  /* floatv8div8df2 */
    case 2671:  /* floatv4siv4df2 */
    case 2669:  /* floatv8siv8df2 */
    case 2639:  /* sse2_cvttpd2pi */
    case 2637:  /* sse2_cvtpi2pd */
    case 2635:  /* fix_truncv4sfv4si2 */
    case 2633:  /* fix_truncv8sfv8si2 */
    case 2629:  /* ufix_truncv16sfv16si2 */
    case 2625:  /* fix_truncv16sfv16si2 */
    case 2585:  /* ufloatv4siv4sf2 */
    case 2581:  /* ufloatv8siv8sf2 */
    case 2577:  /* ufloatv16siv16sf2 */
    case 2575:  /* floatv4siv4sf2 */
    case 2573:  /* floatv8siv8sf2 */
    case 2569:  /* floatv16siv16sf2 */
    case 1681:  /* sse2_sqrtv2df2 */
    case 1679:  /* avx_sqrtv4df2 */
    case 1675:  /* avx512f_sqrtv8df2 */
    case 1673:  /* sse_sqrtv4sf2 */
    case 1671:  /* avx_sqrtv8sf2 */
    case 1667:  /* avx512f_sqrtv16sf2 */
    case 1307:  /* *vec_extractv2si_1 */
    case 1304:  /* *vec_extractv2si_0 */
    case 1302:  /* *vec_dupv2si */
    case 1300:  /* mmx_pswapdv2si2 */
    case 1227:  /* *vec_extractv2sf_1 */
    case 1226:  /* *vec_extractv2sf_0 */
    case 1224:  /* *vec_dupv2sf */
    case 1223:  /* mmx_pswapdv2sf2 */
    case 1222:  /* mmx_floatv2si2 */
    case 1219:  /* mmx_pf2id */
    case 935:  /* *sqrtdf2_sse */
    case 934:  /* *sqrtsf2_sse */
    case 932:  /* sqrtxf2 */
    case 873:  /* *bswaphi2_movbe */
    case 872:  /* *bswapdi2 */
    case 871:  /* *bswapsi2 */
    case 870:  /* *bswapdi2_movbe */
    case 869:  /* *bswapsi2_movbe */
    case 571:  /* *one_cmplqi2_1 */
    case 569:  /* *one_cmpldi2_1 */
    case 568:  /* *one_cmplsi2_1 */
    case 567:  /* *one_cmplhi2_1 */
    case 566:  /* *one_cmpldi2_doubleword */
    case 557:  /* *negxf2_i387 */
    case 556:  /* *absxf2_i387 */
    case 555:  /* *negdf2_i387 */
    case 554:  /* *absdf2_i387 */
    case 553:  /* *negsf2_i387 */
    case 552:  /* *abssf2_i387 */
    case 177:  /* *floatunsdidf2_avx512 */
    case 176:  /* *floatunssidf2_avx512 */
    case 175:  /* *floatunsdisf2_avx512 */
    case 174:  /* *floatunssisf2_avx512 */
    case 170:  /* *floatdidf2_i387 */
    case 169:  /* *floatdisf2_i387 */
    case 168:  /* *floatdidf2 */
    case 167:  /* *floatsidf2 */
    case 166:  /* *floatdisf2 */
    case 165:  /* *floatsisf2 */
    case 164:  /* floatdixf2 */
    case 163:  /* floatsixf2 */
    case 162:  /* floathixf2 */
    case 161:  /* floathidf2 */
    case 160:  /* floathisf2 */
    case 149:  /* fix_truncdfdi_sse */
    case 148:  /* fix_truncdfsi_sse */
    case 147:  /* fix_truncsfdi_sse */
    case 146:  /* fix_truncsfsi_sse */
    case 141:  /* fixuns_truncdfsi2_avx512f */
    case 140:  /* fixuns_truncsfsi2_avx512f */
    case 139:  /* fixuns_truncdfdi2 */
    case 138:  /* fixuns_truncsfdi2 */
    case 137:  /* truncxfdf2 */
    case 136:  /* truncxfsf2 */
    case 135:  /* truncdfsf2 */
    case 134:  /* *extenddfxf2_i387 */
    case 133:  /* *extendsfxf2_i387 */
    case 132:  /* *extendsfdf2 */
    case 131:  /* extendqihi2 */
    case 129:  /* extendqisi2 */
    case 127:  /* extendhisi2 */
    case 126:  /* extendhidi2 */
    case 125:  /* extendqidi2 */
    case 123:  /* *extendsidi2_rex64 */
    case 122:  /* *zero_extendqihi2 */
    case 120:  /* *zero_extendhisi2 */
    case 119:  /* *zero_extendqisi2 */
    case 116:  /* zero_extendhidi2 */
    case 115:  /* zero_extendqidi2 */
    case 114:  /* *zero_extendsidi2 */
    case 91:  /* *extzvdi */
    case 90:  /* *extzvsi */
    case 89:  /* *extzvhi */
    case 87:  /* *extvsi */
    case 86:  /* *extvhi */
    case 77:  /* *movabsdi_2 */
    case 76:  /* *movabssi_2 */
    case 75:  /* *movabshi_2 */
    case 74:  /* *movabsqi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 747:  /* *sibcall */
    case 746:  /* *sibcall */
    case 743:  /* *call */
    case 742:  /* *call */
    case 733:  /* *setcc_qi_slp */
    case 96:  /* insvdi_1 */
    case 95:  /* insvsi_1 */
    case 94:  /* insvhi_1 */
    case 83:  /* *movstricthi_1 */
    case 82:  /* *movstrictqi_1 */
    case 73:  /* *movabsdi_1 */
    case 72:  /* *movabssi_1 */
    case 71:  /* *movabshi_1 */
    case 70:  /* *movabsqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 730:  /* *setcc_si_1_and */
    case 62:  /* *movdi_or */
    case 61:  /* *movsi_or */
    case 60:  /* *movdi_xor */
    case 59:  /* *movsi_xor */
    case 54:  /* *popdi1_epilogue */
    case 53:  /* *popsi1_epilogue */
    case 50:  /* *pushdi2_prologue */
    case 49:  /* *pushsi2_prologue */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 5727:  /* *movv64si_internal */
    case 5726:  /* *movv64sf_internal */
    case 1338:  /* movv2df_internal */
    case 1337:  /* movv4df_internal */
    case 1336:  /* movv8df_internal */
    case 1335:  /* movv4sf_internal */
    case 1334:  /* movv8sf_internal */
    case 1333:  /* movv16sf_internal */
    case 1332:  /* movv1ti_internal */
    case 1331:  /* movv2ti_internal */
    case 1330:  /* movv4ti_internal */
    case 1329:  /* movv2di_internal */
    case 1328:  /* movv4di_internal */
    case 1327:  /* movv8di_internal */
    case 1326:  /* movv4si_internal */
    case 1325:  /* movv8si_internal */
    case 1324:  /* movv16si_internal */
    case 1323:  /* movv8hi_internal */
    case 1322:  /* movv16hi_internal */
    case 1321:  /* movv32hi_internal */
    case 1320:  /* movv16qi_internal */
    case 1319:  /* movv32qi_internal */
    case 1318:  /* movv64qi_internal */
    case 1199:  /* *movv2sf_internal */
    case 1198:  /* *movv1di_internal */
    case 1197:  /* *movv2si_internal */
    case 1196:  /* *movv4hi_internal */
    case 1195:  /* *movv8qi_internal */
    case 1073:  /* *prefetch_3dnow */
    case 732:  /* *setcc_qi */
    case 731:  /* *setcc_si_1_movzbl */
    case 729:  /* *setcc_di_1 */
    case 182:  /* *leadi */
    case 181:  /* *leasi */
    case 112:  /* *movsf_internal */
    case 111:  /* *movdf_internal */
    case 110:  /* *movxf_internal */
    case 109:  /* *movtf_internal */
    case 108:  /* *pushsf */
    case 107:  /* *pushsf_rex64 */
    case 106:  /* *pushdf */
    case 105:  /* *pushxf */
    case 102:  /* *pushtf */
    case 69:  /* *movqi_internal */
    case 68:  /* *movhi_internal */
    case 67:  /* *movsi_internal */
    case 66:  /* *movdi_internal */
    case 65:  /* *movti_internal */
    case 64:  /* *movoi_internal_avx */
    case 63:  /* *movxi_internal_avx512f */
    case 58:  /* *popfldi1 */
    case 57:  /* *popflsi1 */
    case 56:  /* *pushfldi2 */
    case 55:  /* *pushflsi2 */
    case 52:  /* *popdi1 */
    case 51:  /* *popsi1 */
    case 48:  /* *pushhi2 */
    case 47:  /* *pushqi2 */
    case 46:  /* *pushsi2_rex64 */
    case 45:  /* *pushhi2_rex64 */
    case 44:  /* *pushqi2_rex64 */
    case 43:  /* *pushsi2 */
    case 42:  /* *pushdi2_rex64 */
    case 41:  /* *pushti2 */
    case 40:  /* *pushdi2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 39:  /* *cmpiudf */
    case 37:  /* *cmpiusf */
    case 35:  /* *cmpiuxf_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 33:  /* x86_sahf_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 32:  /* *cmpuxf_i387 */
    case 31:  /* *cmpudf_i387 */
    case 30:  /* *cmpusf_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0), 1));
      break;

    case 29:  /* *cmpxf_si_i387 */
    case 28:  /* *cmpdf_si_i387 */
    case 27:  /* *cmpsf_si_i387 */
    case 26:  /* *cmpxf_hi_i387 */
    case 25:  /* *cmpdf_hi_i387 */
    case 24:  /* *cmpsf_hi_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      break;

    case 4414:  /* *sse2_pmovmskb_lt */
    case 4413:  /* *avx2_pmovmskb_lt */
    case 4387:  /* *sse2_movmskpd_lt */
    case 4386:  /* *avx_movmskpd256_lt */
    case 4385:  /* *sse_movmskps_lt */
    case 4384:  /* *avx_movmskps256_lt */
    case 23:  /* *cmpdf_i387 */
    case 22:  /* *cmpsf_i387 */
    case 21:  /* *cmpxf_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 20:  /* *cmpqi_ext_4 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 19:  /* *cmpqi_ext_3 */
    case 18:  /* *cmpqi_ext_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 17:  /* *cmpqi_ext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 445:  /* *testsi_1 */
    case 444:  /* *testhi_1 */
    case 443:  /* *testqi_1 */
    case 442:  /* *testqi_1_maybe_si */
    case 441:  /* *testdi_1 */
    case 16:  /* *cmpdi_minus_1 */
    case 15:  /* *cmpsi_minus_1 */
    case 14:  /* *cmphi_minus_1 */
    case 13:  /* *cmpqi_minus_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 38:  /* *cmpidf */
    case 36:  /* *cmpisf */
    case 34:  /* *cmpixf_i387 */
    case 12:  /* *cmpdi_1 */
    case 11:  /* *cmpsi_1 */
    case 10:  /* *cmphi_1 */
    case 9:  /* *cmpqi_1 */
    case 8:  /* *cmpdi_ccno_1 */
    case 7:  /* *cmpsi_ccno_1 */
    case 6:  /* *cmphi_ccno_1 */
    case 5:  /* *cmpqi_ccno_1 */
    case 4:  /* *cmpdi_ccz_1 */
    case 3:  /* *cmpsi_ccz_1 */
    case 2:  /* *cmphi_ccz_1 */
    case 1:  /* *cmpqi_ccz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    }
}
