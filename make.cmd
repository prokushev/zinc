set ZXBINDIR=%cd%\tools\bin\
set path=%path%;%cd%\tools
rem **************
rem * ZINC OS build
rem **************

rem Build XBIOS
:zx zmac +xbios/xbiosp3.z80 -O +build/xbios/xbiosp3.rel -P +build/xbios/xbiosp3.lst -E +build/xbios/xbiosp3.err
:zx link +bin/xbiosp3.bin +-[P0080]= +build/xbios/xbiosp3.rel

rem Build 2BDOS
zx zmac +2bdos.z80 -O +build/bdos/2bdos.rel -P +build/bdos/2bdos.lst -E +build/bdos/2bdos.err
zx link +bin/bdos.bin +-[PE400]= +build/bdos/2bdos.rel

rem Build 2CCP
zx zmac +2ccp.z80 -O +build/ccp/2ccp.rel -P +build/ccp/2ccp.lst -E +build/ccp/2ccp.err
zx link +bin/ccp.bin +-[PDC00]= +build/ccp/2ccp.rel

rem **************
rem * SYSLIB build
rem **************

zx zmac +syslib/S0FILEIO.Z80 -O +build/syslib/s0fileio.rel -P +build/syslib/s0fileio.lst
zx zmac +syslib/S1FILEIO.Z80 -O +build/syslib/s1fileio.rel -P +build/syslib/s1fileio.lst
zx zmac +syslib/s2fileio.z80 -O +build/syslib/s2fileio.rel -P +build/syslib/s2fileio.lst
zx zmac +syslib/S3FILEIO.Z80 -O +build/syslib/s3FILEIO.rel -P +build/syslib/s3fileio.lst
zx zmac +syslib/SACAS1.Z80 -O +build/syslib/sACAS1.rel -P +build/syslib/sACAS1.lst
zx zmac +syslib/SACAS2.Z80 -O +build/syslib/sACAS2.rel -P +build/syslib/sACAS2.lst
zx zmac +syslib/SACAS3.Z80 -O +build/syslib/sACAS3.rel -P +build/syslib/sACAS3.lst
zx zmac +syslib/SAGO1.Z80 -O +build/syslib/sAGO1.rel  -P +build/syslib/sAGO1.lst
zx zmac +syslib/SAGO2.Z80 -O +build/syslib/sAGO2.rel  -P +build/syslib/sAGO2.lst
zx zmac +syslib/SAIF1.Z80 -O +build/syslib/sAIF1.rel -P +build/syslib/sAIF1.lst
zx zmac +syslib/SAIF2.Z80 -O +build/syslib/sAIF2.rel -P +build/syslib/sAIF2.lst   
zx zmac +syslib/SALLOC.Z80 -O +build/syslib/sALLOC.rel -P +build/syslib/sALLOC.lst
zx zmac +syslib/SARGV.Z80 -O +build/syslib/sARGV.rel -P +build/syslib/sARGV.lst
zx zmac +syslib/SBBLINE.Z80 -O +build/syslib/sBBLINE.rel -P +build/syslib/sBBLINE.lst
zx zmac +syslib/SBDOS.Z80 -O +build/syslib/sBDOS.rel -P +build/syslib/sBDOS.lst
zx zmac +syslib/SFSIZE.Z80 -O +build/syslib/sFSIZE.rel -P +build/syslib/sFSIZE.lst
zx zmac +syslib/SBGO1.Z80 -O +build/syslib/sBGO1.rel -P +build/syslib/sBGO1.ls
zx zmac +syslib/SBGO2.Z80 -O +build/syslib/sBGO2.rel -P +build/syslib/sBGO2.lst
zx zmac +syslib/SBIN.Z80 -O +build/syslib/sBIN.rel -P +build/syslib/sBIN.lst
zx zmac +syslib/SBIOS.Z80 -O +build/syslib/sBIOS.rel -P +build/syslib/sBIOS.lst
zx zmac +syslib/SBIST.Z80 -O +build/syslib/sBIST.rel -P +build/syslib/sBIST.lst
zx zmac +syslib/SBLINE.Z80 -O +build/syslib/sBLINE.rel -P +build/syslib/sBLINE.lst
zx zmac +syslib/SBOUT.Z80 -O +build/syslib/sBOUT.rel -P +build/syslib/sBOUT.lst
zx zmac +syslib/SCAPIN.Z80 -O +build/syslib/sCAPIN.rel -P +build/syslib/sCAPIN.lst
zx zmac +syslib/SCAPS.Z80 -O +build/syslib/sCAPS.rel -P +build/syslib/sCAPS.lst
zx zmac +syslib/SCAPSTR.Z80 -O +build/syslib/sCAPSTR.rel -P +build/syslib/sCAPSTR.lst
zx zmac +syslib/SCATH.Z80 -O +build/syslib/sCATH.rel -P +build/syslib/sCATH.lst
zx zmac +syslib/SCCOUT.Z80 -O +build/syslib/sCCOUT.rel -P +build/syslib/sCCOUT.lst
zx zmac +syslib/SCIN.Z80 -O +build/syslib/sCIN.rel -P +build/syslib/sCIN.lst
zx zmac +syslib/SCLINE.Z80 -O +build/syslib/sCLINE.rel -P +build/syslib/sCLINE.lst
zx zmac +syslib/SCLOUT.Z80 -O +build/syslib/sCLOUT.rel -P +build/syslib/sCLOUT.lst
zx zmac +syslib/SCODEND.Z80 -O +build/syslib/sCODEND.rel -P +build/syslib/sCODEND.lst
zx zmac +syslib/SCOMP.Z80 -O +build/syslib/sCOMP.rel -P +build/syslib/sCOMP.lst
zx zmac +syslib/SCOMPHD.Z80 -O +build/syslib/sCOMPHD.rel -P +build/syslib/sCOMPHD.lst
zx zmac +syslib/SCONDIN.Z80 -O +build/syslib/sCONDIN.rel -P +build/syslib/sCONDIN.lst
zx zmac +syslib/SCOUT.z80 -O +build/syslib/sCOUT.rel -P +build/syslib/sCOUT.lst
zx zmac +syslib/SCPOUT.Z80 -O +build/syslib/sCPOUT.rel -P +build/syslib/sCPOUT.lst
zx zmac +syslib/SCRC.Z80 -O +build/syslib/sCRC.rel -P +build/syslib/sCRC.lst
zx zmac +syslib/SCRC1.Z80 -O +build/syslib/sCRC1.rel -P +build/syslib/sCRC1.lst
zx zmac +syslib/SCRC2.Z80 -O +build/syslib/sCRC2.rel -P +build/syslib/sCRC2.lst
zx zmac +syslib/SCRLF.Z80 -O +build/syslib/sCRLF.rel -P +build/syslib/sCRLF.lst
zx zmac +syslib/SCST.Z80 -O +build/syslib/sCST.rel -P +build/syslib/sCST.lst
zx zmac +syslib/SDGO1.Z80 -O +build/syslib/sDGO1.rel -P +build/syslib/sDGO1.lst
zx zmac +syslib/SDGO2.Z80 -O +build/syslib/sDGO2.rel -P +build/syslib/sDGO2.lst
zx zmac +syslib/sdir.z80 -O +build/syslib/sdir.rel -P +build/syslib/sdir.lst
zx zmac +syslib/sdir00.z80 -O +build/syslib/sdir00.rel -P +build/syslib/sdir00.lst
zx zmac +syslib/sdir01.z80 -O +build/syslib/sdir01.rel -P +build/syslib/sdir01.lst
zx zmac +syslib/sdir02.z80 -O +build/syslib/sdir02.rel -P +build/syslib/sdir02.lst
zx zmac +syslib/sdir03.z80 -O +build/syslib/sdir03.rel -P +build/syslib/sdir03.lst
zx zmac +syslib/sdir04.z80 -O +build/syslib/sdir04.rel -P +build/syslib/sdir04.lst
zx zmac +syslib/sdir05.z80 -O +build/syslib/sdir05.rel -P +build/syslib/sdir05.lst
zx zmac +syslib/sdir06.z80 -O +build/syslib/sdir06.rel -P +build/syslib/sdir06.lst
zx zmac +syslib/sdir07.z80 -O +build/syslib/sdir07.rel -P +build/syslib/sdir07.lst
zx zmac +syslib/sdir08.z80 -O +build/syslib/sdir08.rel -P +build/syslib/sdir08.lst
zx zmac +syslib/sdir09.z80 -O +build/syslib/sdir09.rel -P +build/syslib/sdir09.lst
zx zmac +syslib/sdir10.z80 -O +build/syslib/sdir10.rel -P +build/syslib/sdir10.lst
zx zmac +syslib/SDIRBF.Z80 -O +build/syslib/sDIRBF.rel -P +build/syslib/sDIRBF.lst
zx zmac +syslib/SDIRQ.Z80 -O +build/syslib/sDIRQ.rel -P +build/syslib/sDIRQ.lst
zx zmac +syslib/SDIRQS.Z80 -O +build/syslib/sDIRQS.rel -P +build/syslib/sDIRQS.lst
zx zmac +syslib/SEN.Z80 -O +build/syslib/sEN.rel -P +build/syslib/sEN.lst
zx zmac +syslib/SEPRINT.Z80 -O +build/syslib/sEPRINT.rel -P +build/syslib/sEPRINT.lst
zx zmac +syslib/SEPSTR.Z80 -O +build/syslib/sEPSTR.rel -P +build/syslib/sEPSTR.lst
zx zmac +syslib/SEVAL.Z80 -O +build/syslib/sEVAL.rel -P +build/syslib/sEVAL.lst
zx zmac +syslib/SEVAL1.Z80 -O +build/syslib/sEVAL1.rel -P +build/syslib/sEVAL1.lst
zx zmac +syslib/SEVAL2.Z80 -O +build/syslib/sEVAL2.rel -P +build/syslib/sEVAL2.lst
zx zmac +syslib/SEVAL3.Z80 -O +build/syslib/sEVAL3.rel -P +build/syslib/sEVAL3.lst
zx zmac +syslib/SEVAL4.Z80 -O +build/syslib/sEVAL4.rel -P +build/syslib/sEVAL4.lst
zx zmac +syslib/SFAPPEND.Z80 -O +build/syslib/sFAPPEND.rel -P +build/syslib/sFAPPEND.lst
zx zmac +syslib/SFCLOSE.Z80 -O +build/syslib/sFCLOSE.rel -P +build/syslib/sFCLOSE.lst
zx zmac +syslib/SFDELETE.Z80 -O +build/syslib/sFDELETE.rel -P +build/syslib/sFDELETE.lst
zx zmac +syslib/SFEXIST.Z80 -O +build/syslib/sFEXIST.rel -P +build/syslib/sFEXIST.lst
zx zmac +syslib/SFILL.Z80 -O +build/syslib/sFILL.rel -P +build/syslib/sFILL.lst
zx zmac +syslib/SFMAKE.Z80 -O +build/syslib/sFMAKE.rel -P +build/syslib/sFMAKE.lst
zx zmac +syslib/SFNAME.Z80 -O +build/syslib/sFNAME.rel -P +build/syslib/sFNAME.lst
zx zmac +syslib/SFOPEN.z80 -O +build/syslib/sFOPEN.rel -P +build/syslib/sFOPEN.lst
zx zmac +syslib/SFREAD.Z80 -O +build/syslib/sFREAD.rel -P +build/syslib/sFREAD.lst
zx zmac +syslib/SFRENAME.Z80 -O +build/syslib/sFRENAME.rel -P +build/syslib/sFRENAME.lst
zx zmac +syslib/SFWRITE.Z80 -O +build/syslib/sFWRITE.rel -P +build/syslib/sFWRITE.lst
zx zmac +syslib/SFXIO.Z80 -O +build/syslib/sFXIO.rel -P +build/syslib/sFXIO.lst
zx zmac +syslib/SFYIO.Z80 -O +build/syslib/sFYIO.rel -P +build/syslib/sFYIO.lst
zx zmac +syslib/SGFA.Z80 -O +build/syslib/sGFA.rel -P +build/syslib/sGFA.lst
zx zmac +syslib/SGRR.Z80 -O +build/syslib/sGRR.rel -P +build/syslib/sGRR.lst
zx zmac +syslib/SGRR1.Z80 -O +build/syslib/sGRR1.rel -P +build/syslib/sGRR1.lst
zx zmac +syslib/SGUA.Z80 -O +build/syslib/sGUA.rel -P +build/syslib/sGUA.lst
zx zmac +syslib/SHCAS1.Z80 -O +build/syslib/sHCAS1.rel -P +build/syslib/sHCAS1.lst
zx zmac +syslib/SHCAS2.Z80 -O +build/syslib/sHCAS2.rel -P +build/syslib/sHCAS2.lst
zx zmac +syslib/SHCAS3.Z80 -O +build/syslib/sHCAS3.rel -P +build/syslib/sHCAS3.lst
zx zmac +syslib/SHDR.Z80 -O +build/syslib/sHDR.rel -P +build/syslib/sHDR.lst
zx zmac +syslib/SHGO1.Z80 -O +build/syslib/sHGO1.rel -P +build/syslib/sHGO1.lst
zx zmac +syslib/SHGO2.Z80 -O +build/syslib/sHGO2.rel -P +build/syslib/sHGO2.lst
zx zmac +syslib/SHIF1.Z80 -O +build/syslib/sHIF1.rel -P +build/syslib/sHIF1.lst
zx zmac +syslib/SHIF2.Z80 -O +build/syslib/sHIF2.rel -P +build/syslib/sHIF2.lst
zx zmac +syslib/SINITFCB.Z80 -O +build/syslib/sINITFCB.rel -P +build/syslib/sINITFCB.lst
zx zmac +syslib/SINLINE.Z80 -O +build/syslib/sINLINE.rel -P +build/syslib/sINLINE.lst
zx zmac +syslib/SINSTR.Z80 -O +build/syslib/sINSTR.rel -P +build/syslib/sINSTR.lst
zx zmac +syslib/SISALNUM.Z80 -O +build/syslib/sISALNUM.rel -P +build/syslib/sISALNUM.lst
zx zmac +syslib/SISALPHA.Z80 -O +build/syslib/sISALPHA.rel -P +build/syslib/sISALPHA.lst
zx zmac +syslib/SISCTRL.Z80 -O +build/syslib/sISCTRL.rel -P +build/syslib/sISCTRL.lst
zx zmac +syslib/SISDIGIT.Z80 -O +build/syslib/sISDIGIT.rel -P +build/syslib/sISDIGIT.lst
zx zmac +syslib/SISGRAPH.Z80 -O +build/syslib/sISGRAPH.rel -P +build/syslib/sISGRAPH.lst
zx zmac +syslib/SISHEX.Z80 -O +build/syslib/sISHEX.rel -P +build/syslib/sISHEX.lst
zx zmac +syslib/SISPRINT.Z80 -O +build/syslib/sISPRINT.rel -P +build/syslib/sISPRINT.lst
zx zmac +syslib/SISPUN.Z80 -O +build/syslib/sISPUN.rel -P +build/syslib/sISPUN.lst
zx zmac +syslib/SISSP.Z80 -O +build/syslib/sISSP.rel -P +build/syslib/sISSP.lst
zx zmac +syslib/SLA2HC.Z80 -O +build/syslib/sLA2HC.rel -P +build/syslib/sLA2HC.lst
zx zmac +syslib/SLADC.Z80 -O +build/syslib/sLADC.rel -P +build/syslib/sLADC.lst
zx zmac +syslib/SLAFDC.Z80 -O +build/syslib/sLAFDC.rel -P +build/syslib/sLAFDC.lst
zx zmac +syslib/SLCRLF.Z80 -O +build/syslib/sLCRLF.rel -P +build/syslib/sLCRLF.lst
zx zmac +syslib/SLFN1.Z80 -O +build/syslib/sLFN1.rel -P +build/syslib/sLFN1.lst
zx zmac +syslib/SLFN2.Z80 -O +build/syslib/sLFN2.rel -P +build/syslib/sLFN2.lst
zx zmac +syslib/SLFN3.Z80 -O +build/syslib/sLFN3.rel -P +build/syslib/sLFN3.lst
zx zmac +syslib/SLHL4HC.Z80 -O +build/syslib/sLHL4HC.rel -P +build/syslib/sLHL4HC.lst
zx zmac +syslib/SLHL5DC.Z80 -O +build/syslib/sLHL5DC.rel -P +build/syslib/sLHL5DC.lst
zx zmac +syslib/SLHLFDC.Z80 -O +build/syslib/sLHLFDC.rel -P +build/syslib/sLHLFDC.lst
zx zmac +syslib/SLOUT.Z80 -O +build/syslib/sLOUT.rel -P +build/syslib/sLOUT.lst
zx zmac +syslib/SLPRINT.Z80 -O +build/syslib/sLPRINT.rel -P +build/syslib/sLPRINT.lst
zx zmac +syslib/SLPSTR.Z80 -O +build/syslib/sLPSTR.rel -P +build/syslib/sLPSTR.lst
zx zmac +syslib/SLUCLOSE.z80 -O +build/syslib/sLUCLOSE.rel -P +build/syslib/sLUCLOSE.lst
zx zmac +syslib/SLUDIR.z80 -O +build/syslib/sLUDIR.rel -P +build/syslib/sLUDIR.lst
zx zmac +syslib/SLUINIT.z80 -O +build/syslib/sLUINIT.rel -P +build/syslib/sLUINIT.lst
zx zmac +syslib/SLUOPEN.z80 -O +build/syslib/sLUOPEN.rel -P +build/syslib/sLUOPEN.lst
zx zmac +syslib/SMA2HC.Z80 -O +build/syslib/sMA2HC.rel -P +build/syslib/sMA2HC.lst
zx zmac +syslib/SMADC.Z80 -O +build/syslib/sMADC.rel -P +build/syslib/sMADC.lst
zx zmac +syslib/SMAFDC.Z80 -O +build/syslib/sMAFDC.rel -P +build/syslib/sMAFDC.lst
zx zmac +syslib/SMFN1.Z80 -O +build/syslib/sMFN1.rel -P +build/syslib/sMFN1.lst
zx zmac +syslib/SMFN2.Z80 -O +build/syslib/sMFN2.rel -P +build/syslib/sMFN2.lst
zx zmac +syslib/SMFN3.Z80 -O +build/syslib/sMFN3.rel -P +build/syslib/sMFN3.lst
zx zmac +syslib/SMHL4HC.Z80 -O +build/syslib/sMHL4HC.rel -P +build/syslib/sMHL4HC.lst
zx zmac +syslib/SMHL5DC.Z80 -O +build/syslib/sMHL5DC.rel -P +build/syslib/sMHL5DC.lst
zx zmac +syslib/SMHLFDC.Z80 -O +build/syslib/sMHLFDC.rel -P +build/syslib/sMHLFDC.lst
zx zmac +syslib/SMOVE.Z80 -O +build/syslib/sMOVE.rel -P +build/syslib/sMOVE.lst
zx zmac +syslib/SMTH01.Z80 -O +build/syslib/sMTH01.rel -P +build/syslib/sMTH01.lst
zx zmac +syslib/SMTH02.Z80 -O +build/syslib/sMTH02.rel -P +build/syslib/sMTH02.lst  
zx zmac +syslib/SMTH03.Z80 -O +build/syslib/sMTH03.rel -P +build/syslib/sMTH03.lst
zx zmac +syslib/SMTH04.Z80 -O +build/syslib/sMTH04.rel -P +build/syslib/sMTH04.lst
zx zmac +syslib/SMTH05.Z80 -O +build/syslib/sMTH05.rel -P +build/syslib/sMTH05.lst
zx zmac +syslib/SMTH06.Z80 -O +build/syslib/sMTH06.rel -P +build/syslib/sMTH06.lst
zx zmac +syslib/SMTH07.Z80 -O +build/syslib/sMTH07.rel -P +build/syslib/sMTH07.lst
zx zmac +syslib/SMTH08.Z80 -O +build/syslib/sMTH08.rel -P +build/syslib/sMTH08.lst
zx zmac +syslib/SMTH09.Z80 -O +build/syslib/sMTH09.rel -P +build/syslib/sMTH09.lst
zx zmac +syslib/SMTH10.Z80 -O +build/syslib/sMTH10.rel -P +build/syslib/sMTH10.lst
zx zmac +syslib/SMTH11.Z80 -O +build/syslib/sMTH11.rel -P +build/syslib/sMTH11.lst
zx zmac +syslib/SMTH12.Z80 -O +build/syslib/sMTH12.rel -P +build/syslib/sMTH12.lst
zx zmac +syslib/SPA2HC.Z80 -O +build/syslib/sPA2HC.rel -P +build/syslib/sPA2HC.lst
zx zmac +syslib/SPADC.Z80 -O +build/syslib/sPADC.rel -P +build/syslib/sPADC.lst
zx zmac +syslib/SPAFDC.Z80 -O +build/syslib/sPAFDC.rel -P +build/syslib/sPAFDC.lst
zx zmac +syslib/SPAUSE.Z80 -O +build/syslib/sPAUSE.rel -P +build/syslib/sPAUSE.lst
zx zmac +syslib/SPFN1.Z80 -O +build/syslib/sPFN1.rel -P +build/syslib/sPFN1.lst
zx zmac +syslib/SPFN2.Z80 -O +build/syslib/sPFN2.rel -P +build/syslib/sPFN2.lst
zx zmac +syslib/SPFN3.Z80 -O +build/syslib/sPFN3.rel -P +build/syslib/sPFN3.lst
zx zmac +syslib/SPHL4HC.Z80 -O +build/syslib/sPHL4HC.rel -P +build/syslib/sPHL4HC.lst
zx zmac +syslib/SPHL5DC.Z80 -O +build/syslib/sPHL5DC.rel -P +build/syslib/sPHL5DC.lst
zx zmac +syslib/SPHLFDC.Z80 -O +build/syslib/sPHLFDC.rel -P +build/syslib/sPHLFDC.lst
zx zmac +syslib/SPOUT.Z80 -O +build/syslib/sPOUT.rel -P +build/syslib/sPOUT.lst
zx zmac +syslib/SPRINT.Z80 -O +build/syslib/sPRINT.rel -P +build/syslib/sPRINT.lst
zx zmac +syslib/SPSTR.Z80 -O +build/syslib/sPSTR.rel -P +build/syslib/sPSTR.lst
zx zmac +syslib/SRAND.Z80 -O +build/syslib/sRAND.rel -P +build/syslib/sRAND.lst
zx zmac +syslib/SRIN.Z80 -O +build/syslib/sRIN.rel -P +build/syslib/sRIN.lst
zx zmac +syslib/SRREAD.Z80 -O +build/syslib/sRREAD.rel -P +build/syslib/sRREAD.lst
zx zmac +syslib/SRWRITE.Z80 -O +build/syslib/sRWRITE.rel -P +build/syslib/sRWRITE.lst
zx zmac +syslib/SSA2HC.Z80 -O +build/syslib/sSA2HC.rel -P +build/syslib/sSA2HC.lst
zx zmac +syslib/SSADC.Z80 -O +build/syslib/sSADC.rel -P +build/syslib/sSADC.lst
zx zmac +syslib/SSAFDC.Z80 -O +build/syslib/sSAFDC.rel -P +build/syslib/sSAFDC.lst
zx zmac +syslib/SSCANNER.Z80 -O +build/syslib/sSCANNER.rel -P +build/syslib/sSCANNER.lst
zx zmac +syslib/SSCFA.Z80 -O +build/syslib/sSCFA.rel -P +build/syslib/sSCFA.lst
zx zmac +syslib/SSCOUT.Z80 -O +build/syslib/sSCOUT.rel -P +build/syslib/sSCOUT.lst
zx zmac +syslib/SSCRLF.Z80 -O +build/syslib/sSCRLF.rel -P +build/syslib/sSCRLF.lst
zx zmac +syslib/SSCTLFL.Z80 -O +build/syslib/sSCTLFL.rel -P +build/syslib/sSCTLFL.lst
zx zmac +syslib/SSDMA.Z80 -O +build/syslib/sSDMA.rel -P +build/syslib/sSDMA.lst
zx zmac +syslib/SSFA.Z80 -O +build/syslib/sSFA.rel -P +build/syslib/sSFA.lst
zx zmac +syslib/SSFN1.Z80 -O +build/syslib/sSFN1.rel -P +build/syslib/sSFN1.lst
zx zmac +syslib/SSFN2.Z80 -O +build/syslib/sSFN2.rel -P +build/syslib/sSFN2.lst
zx zmac +syslib/SSFN3.Z80 -O +build/syslib/sSFN3.rel -P +build/syslib/sSFN3.lst
zx zmac +syslib/SSHL4HC.Z80 -O +build/syslib/sSHL4HC.rel -P +build/syslib/sSHL4HC.lst
zx zmac +syslib/SSHL5DC.Z80 -O +build/syslib/sSHL5DC.rel -P +build/syslib/sSHL5DC.lst
zx zmac +syslib/SSHLFDC.Z80 -O +build/syslib/sSHLFDC.rel -P +build/syslib/sSHLFDC.lst
zx zmac +syslib/SSKPUN.Z80 -O +build/syslib/sSKPUN.rel -P +build/syslib/sSKPUN.lst
zx zmac +syslib/SSKSP.Z80 -O +build/syslib/sSKSP.rel -P +build/syslib/sSKSP.lst
zx zmac +syslib/SSORT.Z80 -O +build/syslib/sSORT.rel -P +build/syslib/sSORT.lst
zx zmac +syslib/SSOUT.Z80 -O +build/syslib/sSOUT.rel -P +build/syslib/sSOUT.lst
zx zmac +syslib/SSPRINT.Z80 -O +build/syslib/sSPRINT.rel -P +build/syslib/sSPRINT.lst
zx zmac +syslib/SSPSTR.Z80 -O +build/syslib/sSPSTR.rel -P +build/syslib/sSPSTR.lst
zx zmac +syslib/SSUA.Z80 -O +build/syslib/sSUA.rel -P +build/syslib/sSUA.lst
zx zmac +syslib/SUD1.Z80 -O +build/syslib/sUD1.rel -P +build/syslib/sUD1.lst
zx zmac +syslib/SUD2.Z80 -O +build/syslib/sUD2.rel -P +build/syslib/sUD2.lst
zx zmac +syslib/SFILEIO.Z80 -O +build/syslib/sFILEIO.rel -P +build/syslib/sFILEIO.lst
cd zout
zx lib slib=s3fileio,sacas1,sacas2,sacas3,sago1,sago2
zx lib slib1=slib,saif1,saif2,salloc,sargv,sbbline,sbdos
zx lib slib2=slib1,sbgo1,sbgo2,sbin,sbios,sbist,sbline
zx lib slib3=slib2,scapin,scapstr,scath
zx lib slib4=slib3,scline,sclout,scodend,scomp,scomphd
zx lib slib5=slib4,scondin,scpout,scrc,scrc1,scrc2
zx lib slib6=slib5,scrlf,scst,sdgo1,sdgo2,sdir,sdir00,sdir01
zx lib slib7=slib6,sdir02,sdir03,sdir04,sdir05,sdir06,sdir07
zx lib slib8=slib7,sdir08,sdir09,sdir10,sdirbf,sdirq,sdirqs
zx lib slib9=slib8,seprint,sepstr,seval,seval1,seval2
zx lib slib10=slib9,seval3,seval4,sfappend,sfclose,sfdelete
zx lib slib11=slib10,sfexist,sfill,sfmake,sfname,sfopen,sfread
zx lib slib12=slib11,sfrename,sfsize,sfwrite,sfxio,sfyio
zx lib slib13=slib12,sgfa,sgrr,sgrr1,sgua,shcas1,shcas2
zx lib slib14=slib13,shcas3,shdr,shgo1,shgo2,shif1,shif2
zx lib slib15=slib14,sinitfcb,sinline,sinstr,sisalnum,sisalpha
zx lib slib16=slib15,sisctrl,sisdigit,sisgraph,sishex,sisprint
zx lib slib17=slib16,sispun,sissp,sla2hc,sladc,slafdc,slcrlf
zx lib slib18=slib17,slfn1,slfn2,slfn3,slhl4hc,slhl5dc,slhlfdc
zx lib slib19=slib18,slout,slprint,slpstr,sluclose,sludir,sluinit
zx lib slib20=slib19,sluopen,sma2hc,smadc,smafdc,smfn1,smfn2,sen
zx lib slib21=slib20,smfn3,smhl4hc,smhl5dc,smhlfdc,smth01
zx lib slib22=slib21,smth02,smth03,smth04,smth05,smth06,smth07
zx lib slib23=slib22,smth08,smth09,smth10,smth11,smth12,spa2hc
zx lib slib24=slib23,spadc,spafdc,spause,spfn1,spfn2,spfn3
zx lib slib25=slib24,sphl4hc,sphl5dc,sphlfdc,spout,sprint
zx lib slib26=slib25,spstr,srand,srin,srread,srwrite,ssa2hc
zx lib slib27=slib26,ssadc,ssafdc,sscanner,sscfa,sscout
zx lib slib28=slib27,sscrlf,ssctlfl,ssdma,ssfa,ssfn1,ssfn2
zx lib slib29=slib28,ssfn3,sshl4hc,sshl5dc,sshlfdc,sskpun
zx lib slib30=slib29,ssksp,ssort,ssout,ssprint,sspstr,ssua
zx lib slib31=slib30,sud1,sud2,sfileio,s0fileio,smove
zx lib syslib=slib31,s1fileio,scout,sccout,scin,sbout,scaps
cd ..
rem Build C3LIB
zx zmac +c3lib/c3a2date.z80 -O +build/c3lib/c3a2date.rel -P +build/c3lib/c3a2date.lst
zx zmac +c3lib/c3a2time.z80 -O +build/c3lib/c3a2time.rel -P +build/c3lib/c3a2time.lst
zx zmac +c3lib/c3bios.z80 -O +build/c3lib/c3bios.rel -P +build/c3lib/c3bios.lst
zx zmac +c3lib/c3brk.z80 -O +build/c3lib/c3brk.rel -P +build/c3lib/c3brk.lst
zx zmac +c3lib/c3cmod.z80 -O +build/c3lib/c3cmod.rel -P +build/c3lib/c3cmod.lst
zx zmac +c3lib/c3com.z80 -O +build/c3lib/c3com.rel -P +build/c3lib/c3com.lst
zx zmac +c3lib/c3date2a.z80 -O +build/c3lib/c3date2a.rel -P +build/c3lib/c3date2a.lst
zx zmac +c3lib/c3day.z80 -O +build/c3lib/c3day.rel -P +build/c3lib/c3day.lst
zx zmac +c3lib/c3devc.z80 -O +build/c3lib/c3devc.rel -P +build/c3lib/c3devc.lst
zx zmac +c3lib/c3devg.z80 -O +build/c3lib/c3devg.rel -P +build/c3lib/c3devg.lst
zx zmac +c3lib/c3devl.z80 -O +build/c3lib/c3devl.rel -P +build/c3lib/c3devl.lst
zx zmac +c3lib/c3dfmt.z80 -O +build/c3lib/c3dfmt.rel -P +build/c3lib/c3dfmt.lst
zx zmac +c3lib/c3dini.z80 -O +build/c3lib/c3dini.rel -P +build/c3lib/c3dini.lst
zx zmac +c3lib/c3dmy.z80 -O +build/c3lib/c3dmy.rel -P +build/c3lib/c3dmy.lst
zx zmac +c3lib/c3dname.z80 -O +build/c3lib/c3dname.rel -P +build/c3lib/c3dname.lst
zx zmac +c3lib/c3dosopt.z80 -O +build/c3lib/c3dosopt.rel -P +build/c3lib/c3dosopt.lst
zx zmac +c3lib/c3dtbl.z80 -O +build/c3lib/c3dtbl.rel -P +build/c3lib/c3dtbl.lst
zx zmac +c3lib/c3err.z80 -O +build/c3lib/c3err.rel -P +build/c3lib/c3err.lst
zx zmac +c3lib/c3fbcd.z80 -O +build/c3lib/c3fbcd.rel -P +build/c3lib/c3fbcd.lst
zx zmac +c3lib/c3gtime.z80 -O +build/c3lib/c3gtime.rel -P +build/c3lib/c3gtime.lst
zx zmac +c3lib/c3int.z80 -O +build/c3lib/c3int.rel -P +build/c3lib/c3int.lst
zx zmac +c3lib/c3opt.z80 -O +build/c3lib/c3opt.rel -P +build/c3lib/c3opt.lst
zx zmac +c3lib/c3page.z80 -O +build/c3lib/c3page.rel -P +build/c3lib/c3page.lst
zx zmac +c3lib/c3passwd.z80 -O +build/c3lib/c3passwd.rel -P +build/c3lib/c3passwd.lst
zx zmac +c3lib/c3pmerr.z80 -O +build/c3lib/c3pmerr.rel -P +build/c3lib/c3pmerr.lst
zx zmac +c3lib/c3pmin.z80 -O +build/c3lib/c3pmin.rel -P +build/c3lib/c3pmin.lst
zx zmac +c3lib/c3pminit.z80 -O +build/c3lib/c3pminit.rel -P +build/c3lib/c3pminit.lst
zx zmac +c3lib/c3pmout.z80 -O +build/c3lib/c3pmout.rel -P +build/c3lib/c3pmout.lst
zx zmac +c3lib/c3pmpage.z80 -O +build/c3lib/c3pmpage.rel -P +build/c3lib/c3pmpage.lst
zx zmac +c3lib/c3pmpb.z80 -O +build/c3lib/c3pmpb.rel -P +build/c3lib/c3pmpb.lst
zx zmac +c3lib/c3pmpr.z80 -O +build/c3lib/c3pmpr.rel -P +build/c3lib/c3pmpr.lst
zx zmac +c3lib/c3pmstat.z80 -O +build/c3lib/c3pmstat.rel -P +build/c3lib/c3pmstat.lst
zx zmac +c3lib/c3pmstr.z80 -O +build/c3lib/c3pmstr.rel -P +build/c3lib/c3pmstr.lst
zx zmac +c3lib/c3pmver.z80 -O +build/c3lib/c3pmver.rel -P +build/c3lib/c3pmver.lst
zx zmac +c3lib/c3push.z80 -O +build/c3lib/c3push.rel -P +build/c3lib/c3push.lst
zx zmac +c3lib/c3scbget.z80 -O +build/c3lib/c3scbget.rel -P +build/c3lib/c3scbget.lst
zx zmac +c3lib/c3scbput.z80 -O +build/c3lib/c3scbput.rel -P +build/c3lib/c3scbput.lst
zx zmac +c3lib/c3smin.z80 -O +build/c3lib/c3smin.rel -P +build/c3lib/c3smin.lst
zx zmac +c3lib/c3stime.z80 -O +build/c3lib/c3stime.rel -P +build/c3lib/c3stime.lst
zx zmac +c3lib/c3tbcd.z80 -O +build/c3lib/c3tbcd.rel -P +build/c3lib/c3tbcd.lst
zx zmac +c3lib/c3time2a.z80 -O +build/c3lib/c3time2a.rel -P +build/c3lib/c3time2a.lst
cd zout
zx lib c3lib=c3pmpage,c3pmpr,c3pmstr
zx lib c3lib1=c3lib.rel,c3pminit,c3pmin,c3pmout,c3pmerr,c3pmstat,c3pmpb
zx lib c3lib2=c3lib1.rel,c3stime,c3smin,c3gtime
zx lib c3lib3=c3lib2.rel,c3a2time,c3a2date,c3day,c3dname
zx lib c3lib4=c3lib3.rel,c3date2a,c3time2a,c3dmy,c3dfmt
zx lib c3lib5=c3lib4.rel,c3devl,c3devg,c3devc
zx lib c3lib6=c3lib5.rel,c3dtbl,c3dini,c3bios
zx lib c3lib7=c3lib6.rel,c3page,c3scbput,c3scbget,c3brk,c3cmod,c3err
zx lib c3lib8=c3lib7.rel,c3passwd,c3fbcd,c3tbcd
zx lib cpm3lib=c3lib8.rel,c3opt,c3dosopt,c3int,c3push
cd ..
rem Build STRLIB
zx zmac +strlib\lexer.z80
zx zmac +strlib\strchr.z80
zx zmac +strlib\strlen.z80
zx zmac +strlib\tlookup.z80
zx zmac +strlib\token.z80
zx zmac +strlib\tokeng.z80
zx zmac +strlib\tokenl.z80
cd zout
zx lib strlib=strchr, strlen, tlookup, token, tokeng, tokenl,lexer
cd ..
rem Build CFCB
:zx zmac +cfcb/bytelen.z80 -O +zout/bytelen.rel -P +zout/bytelen.lst
:zx zmac +cfcb/bytelen2.z80 -O +zout/bytelen2.rel -P +zout/bytelen2.lst
zx zmac +cfcb/cbyti.z80
zx zmac +cfcb/cbyto.z80
zx zmac +cfcb/ccblen.z80
zx zmac +cfcb/ccdev.z80
zx zmac +cfcb/ccdma.z80
zx zmac +cfcb/ccfixf.z80
zx zmac +cfcb/ccgdrv.z80
zx zmac +cfcb/ccget.z80
zx zmac +cfcb/ccgusr.z80
zx zmac +cfcb/ccirec.z80
zx zmac +cfcb/ccirrc.z80
zx zmac +cfcb/cclast.z80
zx zmac +cfcb/cclose.z80
zx zmac +cfcb/ccpw.z80
zx zmac +cfcb/ccrrec.z80
zx zmac +cfcb/ccrrrc.z80
zx zmac +cfcb/ccwrec.z80
zx zmac +cfcb/ccxtnd.z80
zx zmac +cfcb/cczfcb.z80
zx zmac +cfcb/cdel.z80
zx zmac +cfcb/cdevio.z80
zx zmac +cfcb/cdvini.z80 -O +zout/cdvini.rel -P +zout/cdvini.lst
zx zmac +cfcb/cdvtest.z80
zx zmac +cfcb/cerror.z80
zx zmac +cfcb/cexwild.z80
zx zmac +cfcb/cfdos.z80
zx zmac +cfcb/cfind.z80
zx zmac +cfcb/cfitest.z80
zx zmac +cfcb/cgeof.z80
zx zmac +cfcb/cifdev.z80
zx zmac +cfcb/cifnul.z80
zx zmac +cfcb/cmake.z80
zx zmac +cfcb/cmkdev.z80
zx zmac +cfcb/copen.z80
zx zmac +cfcb/copfcb.z80
zx zmac +cfcb/cparse.z80
zx zmac +cfcb/cpwset.z80
zx zmac +cfcb/crbyti.z80
zx zmac +cfcb/crclose.z80
zx zmac +cfcb/crdtst.z80
zx zmac +cfcb/cread.z80
zx zmac +cfcb/cseek.z80
zx zmac +cfcb/cseof.z80
zx zmac +cfcb/ctell.z80
zx zmac +cfcb/ctmake.z80
zx zmac +cfcb/cwrite.z80
zx zmac +cfcb/tdos.z80
cd zout
zx lib flib=cbyti,cbyto
zx lib flib2=flib,cclose
zx lib flib3=flib2,ccrrec,ccwrec,ccxtnd
zx lib flib4=flib3,cdel,cdvtest,cerror
zx lib flib5=flib4,cexwild,cfdos,cfind,cfitest,cgeof
zx lib flib6=flib5,cmake,cmkdev,copen,ccfixf,ccirec
zx lib flib7=flib6,cpwset,crbyti,crclose,ccrrrc
zx lib flib8=flib7,crdtst,cread,cseek,cseof,ctell,ctmake
zx lib flib9=flib8,cwrite,tdos,cdvini,cdevio,cifdev,ccblen,ccirrc
zx lib cfcb=flib9,cifnul,ccdma,ccget,cczfcb,ccpw,copfcb,cparse,cclast,ccgusr,ccgdrv,ccdev
cd ..
rem Build NETLIB
zx zmac +netlib/nacsdrv.z80
zx zmac +netlib/ncfgtbl.z80
zx zmac +netlib/ndefpwd.z80
zx zmac +netlib/nerrmode.z80
zx zmac +netlib/nfredrv.z80
zx zmac +netlib/nlockrec.z80
zx zmac +netlib/nlogin.z80
zx zmac +netlib/nlogoff.z80
zx zmac +netlib/nnetstat.z80
zx zmac +netlib/nrcvmsg.z80
zx zmac +netlib/nscattr.z80
zx zmac +netlib/nscfgtbl.z80
zx zmac +netlib/nsendmsg.z80
zx zmac +netlib/nulckrec.z80
cd zout
zx lib nlib=nacsdrv,ncfgtbl,ndefpwd,nerrmode,nfredrv
zx lib nlib1=nlib,nlockrec,nlogin,nlogoff,nnetstat
zx lib nlib2=nlib1,nrcvmsg,nscattr,nscfgtbl
zx lib netlib=nlib2,nsendmsg,nulckrec
cd ..

zx zmac +last.z80

rem **************
rem * CP/M 2 tools build
rem **************

rem Build 2STAT
zx zmac +2stat.z80 -O +zout/2stat.rel -P +zout/2stat.lst
zx link +bin/stat= +zout/2stat.rel, +zout/syslib.rel +-[s]

rem Build 2SUBMIT
zx zmac +2submit.z80 -O +zout/2submit.rel -P +zout/2submit.lst
zx link +bin/submit= +zout/2submit.rel, +zout/syslib.rel +-[s]

rem Build 2GO
zmac --zmac 2go.z80
load <zout\2go.hex >bin\go.com

rem **************
rem * CP/NET tools build
rem **************

rem Build ENDLIST
zx zmac +nendlist.z80
zx link +bin/endlist= +zout/nendlist.rel, +zout/syslib.rel +-[s]

rem Build LOGOFF
zx zmac +nlogoffc.z80
zx link +bin/logoff= +zout/nlogoffc.rel +-, +zout/netlib.rel +-[s], +zout/syslib.rel +-[s]

rem **************
rem * CP/M 3 tools build
rem **************

rem Build 3TYPE
zx zmac +3type.z80
zx link +bin/type= +zout/3type.rel, +zout/last.rel, +zout/cpm3lib.rel  +-[s], +zout/cfcb.rel  +-[s], +zout/syslib +-[s]

rem Build 3DATE
zx zmac +3date.z80
zx link +bin/date= +zout/3date.rel, +zout/last.rel, +zout/cpm3lib.rel  +-[s], +zout/syslib +-[s]

rem Build 3DEVICE
zx zmac +3device.z80
zx link +bin/device= +zout/3device.rel, +zout/last.rel, +zout/cpm3lib.rel  +-[s], +zout/strlib.rel  +-[s], +zout/syslib +-[s]

rem Build 3DIR
zx zmac +3dir.z80
zx zmac +3diropt.z80
zx zmac +3dirpage.z80
zx link +bin/dir= +zout/3dir.rel, +zout/3dirpage.rel, +zout/3diropt.rel, +zout/last.rel, +zout/cpm3lib.rel  +-[s], +zout/cfcb.rel  +-[s], +zout/syslib +-[s]

rem Build 3DUMP
zx zmac +3dump.z80 -O +zout/3dump.rel -P +zout/3dump.lst
zx link +bin/dump= +zout/3dump.rel, +zout/last.rel, +zout/cpm3lib.rel  +-[s], +zout/cfcb.rel  +-[s], +zout/syslib +-[s]

rem Build 3ERASE
zx zmac +3erase.z80 -O +zout/3erase.rel -P +zout/3erase.lst
zx link +bin/erase= +zout/3erase.rel, +zout/last.rel, +zout/cpm3lib.rel  +-[s], +zout/cfcb.rel  +-[s], +zout/syslib +-[s]

rem Build 3SETDEF
zx zmac +3setdef.z80 -O +zout/3setdef.rel -P +zout/3setdef.lst
zx link +bin/setdef= +zout/3setdef.rel, +zout/last.rel, +zout/cpm3lib.rel  +-[s], +zout/cfcb.rel  +-[s], +zout/syslib +-[s]

rem Build 3SHOW
zx zmac +3show.z80 -O +zout/3show.rel -P +zout/3show.lst
zx link +bin/show= +zout/3show.rel, +zout/last.rel, +zout/cpm3lib.rel  +-[s], +zout/cfcb.rel  +-[s], +zout/strlib.rel  +-[s], +zout/syslib +-[s]
