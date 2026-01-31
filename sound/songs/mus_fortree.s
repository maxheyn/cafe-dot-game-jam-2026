	.include "MPlayDef.s"

	.equ	mus_fortree_grp, voicegroup128
	.equ	mus_fortree_pri, 0
	.equ	mus_fortree_rev, reverb_set+0
	.equ	mus_fortree_mvl, 127
	.equ	mus_fortree_key, 0
	.equ	mus_fortree_tbs, 1
	.equ	mus_fortree_exg, 0
	.equ	mus_fortree_cmp, 1

	.section .rodata
	.global	mus_fortree
	.align	2

@**************** Track 1 (Midi-Chn.1) ****************@

mus_fortree_1:
	.byte		VOL   , 127*mus_fortree_mvl/mxv
	.byte	KEYSH , mus_fortree_key+0
@ 000   ----------------------------------------
	.byte	TEMPO , 120*mus_fortree_tbs/2
	.byte	W96
@ 001   ----------------------------------------
mus_fortree_1_001:
	.byte		N12   , Dn1 , v100
	.byte	W48
	.byte		N12   
	.byte	W12
	.byte		        Fs1 
	.byte	W12
	.byte		        Dn1 
	.byte	W12
	.byte		        En1 
	.byte	W12
	.byte	PEND
@ 002   ----------------------------------------
mus_fortree_1_002:
	.byte	W60
	.byte		N06   , Dn1 , v100
	.byte	W12
	.byte		N12   , En1 
	.byte	W12
	.byte		N06   , Dn1 , v060
	.byte	W06
	.byte		        Dn1 , v100
	.byte	W06
	.byte	PEND
@ 003   ----------------------------------------
mus_fortree_1_003:
	.byte		N12   , Gn1 , v100
	.byte	W48
	.byte		N12   
	.byte	W12
	.byte		        An1 
	.byte	W12
	.byte		        Gn1 
	.byte	W12
	.byte		        Fs1 
	.byte	W12
	.byte	PEND
@ 004   ----------------------------------------
mus_fortree_1_004:
	.byte	W32
	.byte	W01
	.byte		N03   , Fs1 , v100
	.byte	W03
	.byte		N12   , Gn1 
	.byte	W24
	.byte		        Fs1 
	.byte	W12
	.byte		        En1 
	.byte	W12
	.byte		N06   , Bn0 , v060
	.byte	W06
	.byte		        Cs1 , v100
	.byte	W06
	.byte	PEND
@ 005   ----------------------------------------
mus_fortree_1_005:
	.byte		N12   , Dn1 , v100
	.byte	W48
	.byte		N06   
	.byte	W12
	.byte		        Fs1 
	.byte	W06
	.byte		        Dn1 , v060
	.byte	W06
	.byte		        Dn1 , v100
	.byte	W12
	.byte		N12   , En1 
	.byte	W12
	.byte	PEND
@ 006   ----------------------------------------
mus_fortree_1_006:
	.byte	W54
	.byte		N06   , Dn1 , v060
	.byte	W06
	.byte		        Dn1 , v100
	.byte	W12
	.byte		N12   , En1 
	.byte	W12
	.byte		N06   , Dn1 , v060
	.byte	W06
	.byte		        Dn1 , v100
	.byte	W06
	.byte	PEND
@ 007   ----------------------------------------
mus_fortree_1_007:
	.byte		N12   , Gn1 , v100
	.byte	W48
	.byte		N12   
	.byte	W12
	.byte		N06   , An1 
	.byte	W21
	.byte		N03   , As1 , v060
	.byte	W03
	.byte		N24   , Bn1 , v100
	.byte	W12
	.byte	PEND
@ 008   ----------------------------------------
mus_fortree_1_008:
	.byte	W12
	.byte		N06   , An1 , v100
	.byte	W06
	.byte		N03   , Gn1 , v060
	.byte	W06
	.byte		        An1 
	.byte	W06
	.byte		        Gn1 
	.byte	W03
	.byte		        Fs1 
	.byte	W03
	.byte		N12   , Gn1 , v100
	.byte	W21
	.byte		N03   , En1 , v060
	.byte	W03
	.byte		N12   , Fs1 , v100
	.byte	W24
	.byte		        Cs1 , v060
	.byte	W12
	.byte	PEND
@ 009   ----------------------------------------
mus_fortree_1_009:
	.byte		N12   , Dn1 , v100
	.byte	W48
	.byte		N06   
	.byte	W12
	.byte		N12   , Fs1 
	.byte	W12
	.byte		        Dn1 
	.byte	W12
	.byte		        En1 
	.byte	W12
	.byte	PEND
@ 010   ----------------------------------------
mus_fortree_1_010:
	.byte	W60
	.byte		N06   , Dn1 , v100
	.byte	W12
	.byte		N24   , En1 
	.byte	W24
	.byte	PEND
@ 011   ----------------------------------------
mus_fortree_1_011:
	.byte		N12   , Gn1 , v100
	.byte	W48
	.byte		N06   
	.byte	W12
	.byte		N12   , An1 
	.byte	W12
	.byte		        Gn1 
	.byte	W12
	.byte		        Fs1 
	.byte	W12
	.byte	PEND
@ 012   ----------------------------------------
mus_fortree_1_012:
	.byte	W32
	.byte	W01
	.byte		N03   , Fs1 , v060
	.byte	W03
	.byte		N24   , Gn1 , v100
	.byte	W24
	.byte		N12   , Fs1 
	.byte	W12
	.byte		        En1 
	.byte	W24
	.byte	PEND
@ 013   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_1_009
@ 014   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_1_010
@ 015   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_1_007
@ 016   ----------------------------------------
mus_fortree_1_016:
	.byte	W12
	.byte		N06   , An1 , v100
	.byte	W21
	.byte		N03   , Fs1 , v060
	.byte	W03
	.byte		N18   , Gn1 , v100
	.byte	W24
	.byte		N24   , Fs1 
	.byte	W24
	.byte		N12   , Cs1 , v060
	.byte	W12
	.byte	PEND
@ 017   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_1_001
@ 018   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_1_002
@ 019   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_1_003
@ 020   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_1_004
@ 021   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_1_005
@ 022   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_1_006
@ 023   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_1_007
@ 024   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_1_008
@ 025   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_1_009
@ 026   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_1_010
@ 027   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_1_011
@ 028   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_1_012
@ 029   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_1_009
@ 030   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_1_010
@ 031   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_1_007
@ 032   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_1_016
@ 033   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_1_001
@ 034   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_1_002
@ 035   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_1_003
@ 036   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_1_004
@ 037   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_1_005
@ 038   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_1_006
@ 039   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_1_007
@ 040   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_1_008
@ 041   ----------------------------------------
	.byte	FINE

@**************** Track 2 (Midi-Chn.1) ****************@

mus_fortree_2:
	.byte		VOL   , 127*mus_fortree_mvl/mxv
	.byte	KEYSH , mus_fortree_key+0
@ 000   ----------------------------------------
	.byte		N06   , Fs1 , v120
	.byte	W24
	.byte		N06   
	.byte	W24
	.byte		N06   
	.byte	W12
	.byte		        Bn1 
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		        Gs0 
	.byte		N06   , Fs1 
	.byte	W06
	.byte		        Gs0 
	.byte	W06
	.byte		N03   , En1 , v072
	.byte	W03
	.byte		        En1 , v096
	.byte	W03
	.byte		N06   , En1 , v120
	.byte	W06
@ 001   ----------------------------------------
mus_fortree_2_001:
	.byte		N12   , Gs0 , v120
	.byte		N06   , Fs1 
	.byte		N06   , En2 , v100
	.byte	W12
	.byte		        Gs1 , v120
	.byte		N06   , Ds2 , v100
	.byte	W06
	.byte		N12   , Gs0 , v120
	.byte		N06   , Gs1 
	.byte	W06
	.byte		N12   , Ds1 , v100
	.byte		N12   , En1 , v120
	.byte		N06   , Fs1 
	.byte	W12
	.byte		N12   , Ds1 , v100
	.byte		N12   , En1 , v120
	.byte		N12   , Gs1 
	.byte		N06   , Ds2 , v100
	.byte	W12
	.byte		        Fs1 , v120
	.byte	W12
	.byte		N12   , Gs0 
	.byte		N06   , Gs1 
	.byte		N06   , Ds2 , v100
	.byte	W06
	.byte		        Gs1 , v120
	.byte	W06
	.byte		N12   , Ds1 , v100
	.byte		N12   , En1 , v120
	.byte		N06   , Fs1 
	.byte	W12
	.byte		N12   , Gs0 
	.byte		N06   , Gs1 
	.byte		N06   , Ds2 , v100
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte	PEND
@ 002   ----------------------------------------
mus_fortree_2_002:
	.byte		N12   , Gs0 , v120
	.byte		N06   , Fs1 
	.byte	W12
	.byte		        Gs1 
	.byte		N06   , Ds2 , v100
	.byte	W06
	.byte		N12   , Gs0 , v120
	.byte		N06   , Gs1 
	.byte	W06
	.byte		N12   , Ds1 , v100
	.byte		N12   , En1 , v120
	.byte		N06   , Fs1 
	.byte	W12
	.byte		N12   , Ds1 , v100
	.byte		N12   , En1 , v120
	.byte		N06   , Gs1 
	.byte		N06   , Ds2 , v100
	.byte	W12
	.byte		        Fs1 , v120
	.byte	W12
	.byte		N12   , Gs0 
	.byte		N06   , Gs1 
	.byte		N06   , Ds2 , v100
	.byte	W06
	.byte		        Gs1 , v120
	.byte	W06
	.byte		N12   , Ds1 , v100
	.byte		N12   , En1 , v120
	.byte		N06   , Fs1 
	.byte	W12
	.byte		N12   , Gs0 
	.byte		N12   , As1 
	.byte		N06   , Ds2 , v100
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte	PEND
@ 003   ----------------------------------------
mus_fortree_2_003:
	.byte		N12   , Gs0 , v120
	.byte		N06   , Fs1 
	.byte	W12
	.byte		        Gs1 
	.byte		N06   , Ds2 , v100
	.byte	W06
	.byte		N12   , Gs0 , v120
	.byte		N06   , Gs1 
	.byte	W06
	.byte		N12   , Ds1 , v100
	.byte		N12   , En1 , v120
	.byte		N06   , Fs1 
	.byte	W12
	.byte		N12   , Ds1 , v100
	.byte		N12   , En1 , v120
	.byte		N12   , Gs1 
	.byte		N06   , Ds2 , v100
	.byte	W12
	.byte		        Fs1 , v120
	.byte	W12
	.byte		N12   , Gs0 
	.byte		N06   , Gs1 
	.byte		N06   , Ds2 , v100
	.byte	W06
	.byte		        Gs1 , v120
	.byte	W06
	.byte		N12   , Ds1 , v100
	.byte		N12   , En1 , v120
	.byte		N06   , Fs1 
	.byte	W12
	.byte		N12   , Gs0 
	.byte		N06   , Gs1 
	.byte		N06   , Ds2 , v100
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte	PEND
@ 004   ----------------------------------------
mus_fortree_2_004:
	.byte		N12   , Gs0 , v120
	.byte		N06   , Fs1 
	.byte	W12
	.byte		        Gs1 
	.byte		N06   , Ds2 , v100
	.byte	W06
	.byte		N12   , Gs0 , v120
	.byte		N06   , Gs1 
	.byte	W06
	.byte		N12   , Ds1 , v100
	.byte		N12   , En1 , v120
	.byte		N06   , Fs1 
	.byte	W12
	.byte		N12   , Ds1 , v100
	.byte		N12   , En1 , v120
	.byte		N12   , Gs1 
	.byte		N06   , Ds2 , v100
	.byte	W12
	.byte		        Fs1 , v120
	.byte	W06
	.byte		N12   , Ds1 , v100
	.byte		N12   , En1 , v120
	.byte	W06
	.byte		        Gs0 
	.byte		N06   , Gs1 
	.byte		N06   , Ds2 , v100
	.byte	W06
	.byte		        Gs1 , v120
	.byte	W06
	.byte		N12   , Ds1 , v100
	.byte		N12   , En1 , v120
	.byte		N06   , Fs1 
	.byte	W12
	.byte		N12   , Gs0 
	.byte		N12   , As1 
	.byte		N06   , Ds2 , v100
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte	PEND
@ 005   ----------------------------------------
mus_fortree_2_005:
	.byte		N12   , Gs0 , v120
	.byte		N06   , Fs1 
	.byte	W12
	.byte		        Gs1 
	.byte		N06   , Ds2 , v100
	.byte	W06
	.byte		N12   , Gs0 , v120
	.byte		N06   , Gs1 
	.byte	W06
	.byte		N12   , Ds1 , v100
	.byte		N12   , En1 , v120
	.byte		N06   , Fs1 
	.byte	W12
	.byte		N12   , Ds1 , v100
	.byte		N12   , En1 , v120
	.byte		N06   , Gs1 
	.byte		N06   , Ds2 , v100
	.byte	W12
	.byte		        Fs1 , v120
	.byte	W12
	.byte		N12   , Gs0 
	.byte		N06   , Gs1 
	.byte		N06   , Ds2 , v100
	.byte	W06
	.byte		        Gs1 , v120
	.byte	W06
	.byte		N12   , Ds1 , v100
	.byte		N12   , En1 , v120
	.byte		N06   , Fs1 
	.byte	W12
	.byte		N12   , Gs0 
	.byte		N06   , Gs1 
	.byte		N06   , Ds2 , v100
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte	PEND
@ 006   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_2_002
@ 007   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_2_005
@ 008   ----------------------------------------
mus_fortree_2_008:
	.byte		N12   , Gs0 , v120
	.byte		N06   , Fs1 
	.byte	W12
	.byte		        Gs1 
	.byte		N06   , Ds2 , v100
	.byte	W06
	.byte		N12   , Gs0 , v120
	.byte		N06   , Gs1 
	.byte	W06
	.byte		N12   , Ds1 , v100
	.byte		N12   , En1 , v120
	.byte		N06   , Fs1 
	.byte	W12
	.byte		N12   , Ds1 , v100
	.byte		N12   , En1 , v120
	.byte		N06   , Gs1 
	.byte		N06   , Ds2 , v100
	.byte	W12
	.byte		        Fs1 , v120
	.byte	W06
	.byte		N12   , Ds1 , v100
	.byte		N12   , En1 , v120
	.byte	W06
	.byte		        Gs0 
	.byte		N06   , Gs1 
	.byte		N06   , Ds2 , v100
	.byte	W06
	.byte		        Gs1 , v120
	.byte	W06
	.byte		N12   , Ds1 , v100
	.byte		N12   , En1 , v120
	.byte		N06   , Fs1 
	.byte	W12
	.byte		        Gs0 
	.byte		N12   , As1 
	.byte		N06   , Ds2 , v100
	.byte	W06
	.byte		        Gs0 , v120
	.byte		N06   , Ds2 , v100
	.byte	W06
	.byte	PEND
@ 009   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_2_003
@ 010   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_2_002
@ 011   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_2_003
@ 012   ----------------------------------------
mus_fortree_2_012:
	.byte		N12   , Gs0 , v120
	.byte		N06   , Fs1 
	.byte	W12
	.byte		        Gs1 
	.byte		N06   , Ds2 , v100
	.byte	W06
	.byte		N12   , Gs0 , v120
	.byte		N06   , Gs1 
	.byte	W06
	.byte		N12   , Ds1 , v100
	.byte		N12   , En1 , v120
	.byte		N06   , Fs1 
	.byte	W12
	.byte		N12   , Ds1 , v100
	.byte		N12   , En1 , v120
	.byte		N12   , Gs1 
	.byte		N06   , Ds2 , v100
	.byte	W12
	.byte		N12   , Ds1 
	.byte		N12   , En1 , v120
	.byte		N06   , Fs1 
	.byte	W12
	.byte		N12   , Gs0 
	.byte		N06   , Gs1 
	.byte		N06   , Ds2 , v100
	.byte	W06
	.byte		        Gs1 , v120
	.byte	W06
	.byte		N12   , Ds1 , v100
	.byte		N12   , En1 , v120
	.byte		N06   , Fs1 
	.byte	W12
	.byte		N12   , Gs0 
	.byte		N12   , As1 
	.byte		N06   , Ds2 , v100
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte	PEND
@ 013   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_2_005
@ 014   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_2_002
@ 015   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_2_005
@ 016   ----------------------------------------
mus_fortree_2_016:
	.byte		N12   , Gs0 , v120
	.byte		N06   , Fs1 
	.byte	W12
	.byte		        Gs1 
	.byte		N06   , Ds2 , v100
	.byte	W06
	.byte		N12   , Gs0 , v120
	.byte		N06   , Gs1 
	.byte	W06
	.byte		N12   , Ds1 , v100
	.byte		N12   , En1 , v120
	.byte		N06   , Fs1 
	.byte	W12
	.byte		N12   , Ds1 , v100
	.byte		N12   , En1 , v120
	.byte		N06   , Gs1 
	.byte		N06   , Ds2 , v100
	.byte	W12
	.byte		N12   , Ds1 
	.byte		N12   , En1 , v120
	.byte		N06   , Fs1 
	.byte	W12
	.byte		N12   , Gs0 
	.byte		N06   , Gs1 
	.byte		N06   , Ds2 , v100
	.byte	W06
	.byte		        Gs1 , v120
	.byte	W06
	.byte		N12   , Ds1 , v100
	.byte		N12   , En1 , v120
	.byte		N06   , Fs1 
	.byte	W12
	.byte		        Gs0 
	.byte		N12   , As1 
	.byte		N06   , Ds2 , v100
	.byte	W06
	.byte		        Gs0 , v120
	.byte		N06   , Ds2 , v100
	.byte	W06
	.byte	PEND
@ 017   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_2_001
@ 018   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_2_002
@ 019   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_2_003
@ 020   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_2_004
@ 021   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_2_005
@ 022   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_2_002
@ 023   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_2_005
@ 024   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_2_008
@ 025   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_2_003
@ 026   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_2_002
@ 027   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_2_003
@ 028   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_2_012
@ 029   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_2_005
@ 030   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_2_002
@ 031   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_2_005
@ 032   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_2_016
@ 033   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_2_001
@ 034   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_2_002
@ 035   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_2_003
@ 036   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_2_004
@ 037   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_2_005
@ 038   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_2_002
@ 039   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_2_005
@ 040   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_2_008
@ 041   ----------------------------------------
	.byte	FINE

@**************** Track 3 (Midi-Chn.1) ****************@

mus_fortree_3:
	.byte		VOL   , 127*mus_fortree_mvl/mxv
	.byte	KEYSH , mus_fortree_key+0
@ 000   ----------------------------------------
	.byte	W96
@ 001   ----------------------------------------
	.byte	W96
@ 002   ----------------------------------------
	.byte	W96
@ 003   ----------------------------------------
	.byte	W96
@ 004   ----------------------------------------
	.byte	W96
@ 005   ----------------------------------------
	.byte	W96
@ 006   ----------------------------------------
	.byte	W96
@ 007   ----------------------------------------
	.byte	W96
@ 008   ----------------------------------------
	.byte	W96
@ 009   ----------------------------------------
mus_fortree_3_009:
	.byte		N12   , An3 , v100
	.byte		N12   , Dn4 
	.byte	W48
	.byte		        An3 
	.byte		N12   , Dn4 
	.byte	W12
	.byte		        Cs4 
	.byte		N12   , Fs4 
	.byte	W12
	.byte		        An3 
	.byte		N12   , Dn4 
	.byte	W12
	.byte		        Bn3 
	.byte		N12   , En4 
	.byte	W12
	.byte	PEND
@ 010   ----------------------------------------
mus_fortree_3_010:
	.byte	W60
	.byte		N12   , An3 , v100
	.byte		N12   , Dn4 
	.byte	W12
	.byte		        Bn3 
	.byte		N12   , En4 
	.byte	W24
	.byte	PEND
@ 011   ----------------------------------------
mus_fortree_3_011:
	.byte		N12   , Dn4 , v100
	.byte		N12   , Gn4 
	.byte	W48
	.byte		        Dn4 
	.byte		N12   , Gn4 
	.byte	W12
	.byte		        En4 
	.byte		N12   , An4 
	.byte	W12
	.byte		        Dn4 
	.byte		N12   , Gn4 
	.byte	W12
	.byte		        Cs4 
	.byte		N12   , Fs4 
	.byte	W12
	.byte	PEND
@ 012   ----------------------------------------
mus_fortree_3_012:
	.byte	W32
	.byte	W01
	.byte		N12   , Cs4 , v080
	.byte		N12   , Fs4 
	.byte	W03
	.byte		N24   , Dn4 , v100
	.byte		N24   , Gn4 
	.byte	W24
	.byte		N12   , Cs4 
	.byte		N12   , Fs4 
	.byte	W12
	.byte		        Bn3 
	.byte		N12   , En4 
	.byte	W24
	.byte	PEND
@ 013   ----------------------------------------
mus_fortree_3_013:
	.byte		N12   , An3 , v100
	.byte		N12   , Dn4 
	.byte	W48
	.byte		N12   
	.byte		N12   , An4 
	.byte	W12
	.byte		        Cs4 
	.byte		N12   , Fs4 
	.byte	W12
	.byte		        An3 
	.byte		N12   , Dn4 
	.byte	W12
	.byte		        Bn3 
	.byte		N12   , En4 
	.byte	W12
	.byte	PEND
@ 014   ----------------------------------------
mus_fortree_3_014:
	.byte	W60
	.byte		N12   , Dn4 , v100
	.byte		N12   , An4 
	.byte	W12
	.byte		        En4 
	.byte		N12   , Bn4 
	.byte	W24
	.byte	PEND
@ 015   ----------------------------------------
mus_fortree_3_015:
	.byte		N12   , Fs4 , v100
	.byte		N12   , Dn5 
	.byte	W48
	.byte		N06   , An4 
	.byte		N06   , En5 
	.byte	W06
	.byte		        Gn4 
	.byte		N06   , Dn5 
	.byte	W06
	.byte		N12   , An4 
	.byte		N12   , Cs5 
	.byte	W21
	.byte		        Fn4 , v080
	.byte		N12   , As4 
	.byte	W03
	.byte		N24   , Fs4 , v100
	.byte		N24   , Bn4 
	.byte	W12
	.byte	PEND
@ 016   ----------------------------------------
mus_fortree_3_016:
	.byte	W12
	.byte		N12   , En4 , v100
	.byte		N12   , Cs5 
	.byte	W21
	.byte		        Cs4 , v080
	.byte		N12   , An4 
	.byte	W03
	.byte		N24   , Dn4 , v100
	.byte		N24   , Bn4 
	.byte	W24
	.byte		        Cs4 
	.byte		N24   , An4 
	.byte	W24
	.byte		N12   , Dn4 
	.byte		N12   , Fs4 
	.byte	W12
	.byte	PEND
@ 017   ----------------------------------------
	.byte		N24   , Dn1 , v108
	.byte	W96
@ 018   ----------------------------------------
	.byte	W96
@ 019   ----------------------------------------
	.byte	W96
@ 020   ----------------------------------------
	.byte	W96
@ 021   ----------------------------------------
	.byte	W96
@ 022   ----------------------------------------
	.byte	W96
@ 023   ----------------------------------------
	.byte	W96
@ 024   ----------------------------------------
	.byte	W96
@ 025   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_3_009
@ 026   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_3_010
@ 027   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_3_011
@ 028   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_3_012
@ 029   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_3_013
@ 030   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_3_014
@ 031   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_3_015
@ 032   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_3_016
@ 033   ----------------------------------------
	.byte		N24   , Dn1 , v108
	.byte	W24
	.byte	FINE

@**************** Track 4 (Midi-Chn.1) ****************@

mus_fortree_4:
	.byte		VOL   , 127*mus_fortree_mvl/mxv
	.byte	KEYSH , mus_fortree_key+0
@ 000   ----------------------------------------
	.byte	W96
@ 001   ----------------------------------------
mus_fortree_4_001:
	.byte		N48   , Dn2 , v092
	.byte		N36   , Dn3 
	.byte		N36   , Fs3 , v084
	.byte		N36   , An3 , v092
	.byte	W48
	.byte		N12   , Dn3 , v072
	.byte		N12   , Fs3 , v088
	.byte		N12   , An3 , v084
	.byte	W12
	.byte		N24   , Dn2 , v088
	.byte	W24
	.byte		N60   , En2 
	.byte		N60   , En3 , v064
	.byte		N60   , Gn3 
	.byte		N60   , Bn3 
	.byte	W12
	.byte	PEND
@ 002   ----------------------------------------
mus_fortree_4_002:
	.byte	W60
	.byte		N24   , En2 , v080
	.byte	W12
	.byte		N12   , En3 , v064
	.byte		N12   , Gn3 
	.byte		N12   , Bn3 , v056
	.byte	W24
	.byte	PEND
@ 003   ----------------------------------------
mus_fortree_4_003:
	.byte		N48   , Gn2 , v084
	.byte		N36   , Dn3 , v056
	.byte		N36   , Gn3 , v072
	.byte		N36   , Bn3 , v076
	.byte	W48
	.byte		N12   , Dn3 , v080
	.byte		N12   , Gn3 , v096
	.byte		N12   , Bn3 
	.byte	W12
	.byte		N24   , Gn2 
	.byte	W24
	.byte		N72   , Fs2 , v080
	.byte		N36   , Cs3 , v072
	.byte		N36   , Fs3 , v084
	.byte		N36   , An3 , v088
	.byte	W12
	.byte	PEND
@ 004   ----------------------------------------
mus_fortree_4_004:
	.byte	W36
	.byte		N12   , Cs3 , v084
	.byte		N12   , Fs3 , v096
	.byte		N12   , An3 
	.byte	W24
	.byte		N24   , Bn2 , v080
	.byte		N24   , En3 
	.byte		N24   , Gn3 , v092
	.byte	W12
	.byte		        En2 , v080
	.byte	W24
	.byte	PEND
@ 005   ----------------------------------------
mus_fortree_4_005:
	.byte		N48   , Dn2 , v088
	.byte		N36   , Dn3 , v080
	.byte		N36   , Fs3 , v096
	.byte		N36   , An3 , v088
	.byte	W48
	.byte		N24   , Dn3 
	.byte		N24   , Fs3 , v100
	.byte		N24   , An3 , v096
	.byte	W12
	.byte		        Dn2 , v076
	.byte	W24
	.byte		N72   , En2 , v060
	.byte		N60   , En3 , v056
	.byte		N60   , Gn3 , v076
	.byte		N60   , Bn3 
	.byte	W12
	.byte	PEND
@ 006   ----------------------------------------
mus_fortree_4_006:
	.byte	W60
	.byte		N24   , En3 , v064
	.byte		N24   , Gn3 , v072
	.byte		N24   , Bn3 , v064
	.byte	W12
	.byte		        En2 , v080
	.byte	W24
	.byte	PEND
@ 007   ----------------------------------------
mus_fortree_4_007:
	.byte		N48   , Gn2 , v096
	.byte		N36   , Dn3 , v080
	.byte		N24   , Gn3 , v092
	.byte		N24   , Bn3 
	.byte	W48
	.byte		N12   , Dn3 , v088
	.byte		N12   , Gn3 , v100
	.byte		N12   , Bn3 , v096
	.byte	W12
	.byte		N24   , Gn2 , v052
	.byte	W24
	.byte		N72   , An2 , v084
	.byte		N36   , En3 , v064
	.byte		N36   , An3 , v088
	.byte		N36   , Cs4 , v092
	.byte	W12
	.byte	PEND
@ 008   ----------------------------------------
mus_fortree_4_008:
	.byte	W36
	.byte		N12   , En3 , v080
	.byte		N12   , An3 , v088
	.byte		N12   , Dn4 , v096
	.byte	W24
	.byte		N36   , Dn3 , v084
	.byte		N36   , Gn3 , v088
	.byte		N36   , Bn3 , v092
	.byte	W12
	.byte		N24   , Gn2 , v076
	.byte	W24
	.byte	PEND
@ 009   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_4_001
@ 010   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_4_002
@ 011   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_4_003
@ 012   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_4_004
@ 013   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_4_005
@ 014   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_4_006
@ 015   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_4_007
@ 016   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_4_008
@ 017   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_4_001
@ 018   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_4_002
@ 019   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_4_003
@ 020   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_4_004
@ 021   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_4_005
@ 022   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_4_006
@ 023   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_4_007
@ 024   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_4_008
@ 025   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_4_001
@ 026   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_4_002
@ 027   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_4_003
@ 028   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_4_004
@ 029   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_4_005
@ 030   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_4_006
@ 031   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_4_007
@ 032   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_4_008
@ 033   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_4_001
@ 034   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_4_002
@ 035   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_4_003
@ 036   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_4_004
@ 037   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_4_005
@ 038   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_4_006
@ 039   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_4_007
@ 040   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_4_008
@ 041   ----------------------------------------
	.byte	FINE

@**************** Track 5 (Midi-Chn.1) ****************@

mus_fortree_5:
	.byte		VOL   , 127*mus_fortree_mvl/mxv
	.byte	KEYSH , mus_fortree_key+0
@ 000   ----------------------------------------
	.byte	W96
@ 001   ----------------------------------------
mus_fortree_5_001:
	.byte		N12   , Dn3 , v100
	.byte	W48
	.byte		N12   
	.byte	W12
	.byte		        Fs3 
	.byte	W12
	.byte		        Dn3 
	.byte	W12
	.byte		        En3 
	.byte	W12
	.byte	PEND
@ 002   ----------------------------------------
mus_fortree_5_002:
	.byte	W60
	.byte		N12   , Dn3 , v100
	.byte	W12
	.byte		        En3 
	.byte	W24
	.byte	PEND
@ 003   ----------------------------------------
mus_fortree_5_003:
	.byte		N12   , Gn3 , v100
	.byte	W48
	.byte		N12   
	.byte	W12
	.byte		        An3 
	.byte	W12
	.byte		        Gn3 
	.byte	W12
	.byte		        Fs3 
	.byte	W12
	.byte	PEND
@ 004   ----------------------------------------
mus_fortree_5_004:
	.byte	W32
	.byte	W01
	.byte		N12   , Fs3 , v080
	.byte	W03
	.byte		N24   , Gn3 , v100
	.byte	W24
	.byte		N12   , Fs3 
	.byte	W12
	.byte		        En3 
	.byte	W24
	.byte	PEND
@ 005   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_5_001
@ 006   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_5_002
@ 007   ----------------------------------------
mus_fortree_5_007:
	.byte		N12   , Gn3 , v100
	.byte	W48
	.byte		N12   
	.byte	W12
	.byte		        An3 
	.byte	W21
	.byte		        As3 , v080
	.byte	W03
	.byte		N24   , Bn3 , v100
	.byte	W12
	.byte	PEND
@ 008   ----------------------------------------
mus_fortree_5_008:
	.byte	W12
	.byte		N12   , An3 , v100
	.byte	W21
	.byte		        Fs3 , v080
	.byte	W03
	.byte		N24   , Gn3 , v100
	.byte	W24
	.byte		        Fs3 
	.byte	W36
	.byte	PEND
@ 009   ----------------------------------------
mus_fortree_5_009:
	.byte		N12   , An2 , v100
	.byte	W48
	.byte		N12   
	.byte	W12
	.byte		        Cs3 
	.byte	W12
	.byte		        An2 
	.byte	W12
	.byte		        Bn2 
	.byte	W12
	.byte	PEND
@ 010   ----------------------------------------
mus_fortree_5_010:
	.byte	W60
	.byte		N12   , An2 , v100
	.byte	W12
	.byte		        Bn2 
	.byte	W24
	.byte	PEND
@ 011   ----------------------------------------
mus_fortree_5_011:
	.byte		N12   , Dn3 , v100
	.byte	W48
	.byte		N12   
	.byte	W12
	.byte		        En3 
	.byte	W12
	.byte		        Dn3 
	.byte	W12
	.byte		        Cs3 
	.byte	W12
	.byte	PEND
@ 012   ----------------------------------------
mus_fortree_5_012:
	.byte	W32
	.byte	W01
	.byte		N12   , Cs3 , v080
	.byte	W03
	.byte		N24   , Dn3 , v100
	.byte	W24
	.byte		N12   , Cs3 
	.byte	W12
	.byte		        Bn2 
	.byte	W24
	.byte	PEND
@ 013   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_5_009
@ 014   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_5_010
@ 015   ----------------------------------------
mus_fortree_5_015:
	.byte		N12   , Dn3 , v100
	.byte	W48
	.byte		N12   
	.byte	W12
	.byte		        En3 
	.byte	W21
	.byte		        Fn3 , v080
	.byte	W03
	.byte		N24   , Fs3 , v100
	.byte	W12
	.byte	PEND
@ 016   ----------------------------------------
mus_fortree_5_016:
	.byte	W12
	.byte		N12   , En3 , v100
	.byte	W21
	.byte		        Cs3 , v080
	.byte	W03
	.byte		N24   , Dn3 , v100
	.byte	W24
	.byte		        Cs3 
	.byte	W36
	.byte	PEND
@ 017   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_5_001
@ 018   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_5_002
@ 019   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_5_003
@ 020   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_5_004
@ 021   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_5_001
@ 022   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_5_002
@ 023   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_5_007
@ 024   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_5_008
@ 025   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_5_009
@ 026   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_5_010
@ 027   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_5_011
@ 028   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_5_012
@ 029   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_5_009
@ 030   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_5_010
@ 031   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_5_015
@ 032   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_5_016
@ 033   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_5_001
@ 034   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_5_002
@ 035   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_5_003
@ 036   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_5_004
@ 037   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_5_001
@ 038   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_5_002
@ 039   ----------------------------------------
	.byte	PATT
	 .word	mus_fortree_5_007
@ 040   ----------------------------------------
	.byte	W12
	.byte		N12   , An3 , v100
	.byte	W21
	.byte		        Fs3 , v080
	.byte	W03
	.byte		N24   , Gn3 , v100
	.byte	W24
	.byte		        Fs3 
	.byte	W24
	.byte	FINE

@******************************************************@
	.align	2

mus_fortree:
	.byte	5	@ NumTrks
	.byte	0	@ NumBlks
	.byte	mus_fortree_pri	@ Priority
	.byte	mus_fortree_rev	@ Reverb.

	.word	mus_fortree_grp

	.word	mus_fortree_1
	.word	mus_fortree_2
	.word	mus_fortree_3
	.word	mus_fortree_4
	.word	mus_fortree_5

	.end
