set ZXBINDIR=%cd%\tools\bin\
set path=%path%;%cd%\tools
rem **************
rem * ZINC OS build
rem **************

rem Build XBIOS
zx zmac +xbios/xbiosp3.z80 -O +build/xbios/xbiosp3.rel -P +build/xbios/xbiosp3.lst -E +build/xbios/xbiosp3.err
zx link +bin/xbiosp3.bin +-[P0080]= +build/xbios/xbiosp3.rel
exit
rem Build 2BDOS
zx zmac +2bdos.z80 -O +build/bdos/2bdos.rel -P +build/bdos/2bdos.lst -E +build/bdos/2bdos.err
zx link +bin/bdos.bin +-[PE400]= +build/bdos/2bdos.rel

rem Build 2CCP
zx zmac +2ccp.z80 -O +build/ccp/2ccp.rel -P +build/ccp/2ccp.lst -E +build/ccp/2ccp.err
zx link +bin/ccp.bin +-[PDC00]= +build/ccp/2ccp.rel

rem **************
rem * SYSLIB build
rem **************

zx zmac +syslib/S0FILEIO.Z80 -O +zout/s0fileio.rel -P +zout/s0fileio.lst
zx zmac +syslib/S1FILEIO.Z80 -O +zout/s1fileio.rel -P +zout/s1fileio.lst
zx zmac +syslib/s2fileio.z80 -O +zout/s2fileio.rel -P +zout/s2fileio.lst
zx zmac +syslib/S3FILEIO.Z80 -O +zout/S3FILEIO.rel -P +zout/s3fileio.lst
zx zmac +syslib/SACAS1.Z80 -O +zout/SACAS1.rel -P +zout/SACAS1.lst
zx zmac +syslib/SACAS2.Z80 -O +zout/SACAS2.rel -P +zout/SACAS2.lst
zx zmac +syslib/SACAS3.Z80 -O +zout/SACAS3.rel -P +zout/SACAS3.lst
zx zmac +syslib/SAGO1.Z80 -O +zout/SAGO1.rel  -P +zout/SAGO1.lst
zx zmac +syslib/SAGO2.Z80 -O +zout/SAGO2.rel  -P +zout/SAGO2.lst
zx zmac +syslib/SAIF1.Z80 -O +zout/SAIF1.rel -P +zout/SAIF1.lst
zx zmac +syslib/SAIF2.Z80 -O +zout/SAIF2.rel -P +zout/SAIF2.lst   
zx zmac +syslib/SALLOC.Z80 -O +zout/SALLOC.rel -P +zout/SALLOC.lst
zx zmac +syslib/SARGV.Z80 -O +zout/SARGV.rel -P +zout/SARGV.lst
zx zmac +syslib/SBBLINE.Z80 -O +zout/SBBLINE.rel -P +zout/SBBLINE.lst
zx zmac +syslib/SBDOS.Z80 -O +zout/SBDOS.rel -P +zout/SBDOS.lst
zx zmac +syslib/SFSIZE.Z80  
zx zmac +syslib/SBGO1.Z80   
zx zmac +syslib/SBGO2.Z80   
zx zmac +syslib/SBIN.Z80    
zx zmac +syslib/SBIOS.Z80   
zx zmac +syslib/SBIST.Z80   
zx zmac +syslib/SBLINE.Z80  
zx zmac +syslib/SBOUT.Z80   
zx zmac +syslib/SCAPIN.Z80  
zx zmac +syslib/SCAPS.Z80   
zx zmac +syslib/SCAPSTR.Z80 
zx zmac +syslib/SCATH.Z80   
zx zmac +syslib/SCCOUT.Z80  
zx zmac +syslib/SCIN.Z80    
zx zmac +syslib/SCLINE.Z80  
zx zmac +syslib/SCLOUT.Z80  
zx zmac +syslib/SCODEND.Z80 
zx zmac +syslib/SCOMP.Z80   
zx zmac +syslib/SCOMPHD.Z80 
zx zmac +syslib/SCONDIN.Z80 
zx zmac +syslib/SCOUT.z80 -O +zout/SCOUT.rel -P +zout/SCOUT.lst
zx zmac +syslib/SCPOUT.Z80  
zx zmac +syslib/SCRC.Z80    
zx zmac +syslib/SCRC1.Z80   
zx zmac +syslib/SCRC2.Z80   
zx zmac +syslib/SCRLF.Z80   
zx zmac +syslib/SCST.Z80    
zx zmac +syslib/SDGO1.Z80   
zx zmac +syslib/SDGO2.Z80   
zx zmac +syslib/sdir.z80 -O +zout/sdir.rel -P +zout/sdir.lst
zx zmac +syslib/sdir00.z80 -O +zout/sdir00.rel -P +zout/sdir00.lst
zx zmac +syslib/sdir01.z80 -O +zout/sdir01.rel -P +zout/sdir01.lst
zx zmac +syslib/sdir02.z80 -O +zout/sdir02.rel -P +zout/sdir02.lst
zx zmac +syslib/sdir03.z80 -O +zout/sdir03.rel -P +zout/sdir03.lst
zx zmac +syslib/sdir04.z80 -O +zout/sdir04.rel -P +zout/sdir04.lst
zx zmac +syslib/sdir05.z80 -O +zout/sdir05.rel -P +zout/sdir05.lst
zx zmac +syslib/sdir06.z80 -O +zout/sdir06.rel -P +zout/sdir06.lst
zx zmac +syslib/sdir07.z80 -O +zout/sdir07.rel -P +zout/sdir07.lst
zx zmac +syslib/sdir08.z80 -O +zout/sdir08.rel -P +zout/sdir08.lst
zx zmac +syslib/sdir09.z80 -O +zout/sdir09.rel -P +zout/sdir09.lst
zx zmac +syslib/sdir10.z80 -O +zout/sdir10.rel -P +zout/sdir10.lst
zx zmac +syslib/SDIRBF.Z80  
zx zmac +syslib/SDIRQ.Z80   
zx zmac +syslib/SDIRQS.Z80  
zx zmac +syslib/SEN.Z80     
zx zmac +syslib/SEPRINT.Z80 
zx zmac +syslib/SEPSTR.Z80  
zx zmac +syslib/SEVAL.Z80   
zx zmac +syslib/SEVAL1.Z80  
zx zmac +syslib/SEVAL2.Z80  
zx zmac +syslib/SEVAL3.Z80  
zx zmac +syslib/SEVAL4.Z80  
zx zmac +syslib/SFAPPEND.Z80
zx zmac +syslib/SFCLOSE.Z80 
zx zmac +syslib/SFDELETE.Z80
zx zmac +syslib/SFEXIST.Z80 
zx zmac +syslib/SFILL.Z80   
zx zmac +syslib/SFMAKE.Z80  
zx zmac +syslib/SFNAME.Z80  
zx zmac +syslib/SFOPEN.z80 -O +zout/SFOPEN.rel -P +zout/SFOPEN.lst
zx zmac +syslib/SFREAD.Z80  
zx zmac +syslib/SFRENAME.Z80
zx zmac +syslib/SFWRITE.Z80 
zx zmac +syslib/SFXIO.Z80   
zx zmac +syslib/SFYIO.Z80   
zx zmac +syslib/SGFA.Z80    
zx zmac +syslib/SGRR.Z80    
zx zmac +syslib/SGRR1.Z80   
zx zmac +syslib/SGUA.Z80    
zx zmac +syslib/SHCAS1.Z80  
zx zmac +syslib/SHCAS2.Z80  
zx zmac +syslib/SHCAS3.Z80  
zx zmac +syslib/SHDR.Z80    
zx zmac +syslib/SHGO1.Z80   
zx zmac +syslib/SHGO2.Z80   
zx zmac +syslib/SHIF1.Z80   
zx zmac +syslib/SHIF2.Z80   
zx zmac +syslib/SINITFCB.Z80
zx zmac +syslib/SINLINE.Z80 
zx zmac +syslib/SINSTR.Z80  
zx zmac +syslib/SISALNUM.Z80
zx zmac +syslib/SISALPHA.Z80
zx zmac +syslib/SISCTRL.Z80 
zx zmac +syslib/SISDIGIT.Z80
zx zmac +syslib/SISGRAPH.Z80
zx zmac +syslib/SISHEX.Z80  
zx zmac +syslib/SISPRINT.Z80
zx zmac +syslib/SISPUN.Z80  
zx zmac +syslib/SISSP.Z80   
zx zmac +syslib/SLA2HC.Z80  
zx zmac +syslib/SLADC.Z80   
zx zmac +syslib/SLAFDC.Z80  
zx zmac +syslib/SLCRLF.Z80  
zx zmac +syslib/SLFN1.Z80   
zx zmac +syslib/SLFN2.Z80   
zx zmac +syslib/SLFN3.Z80   
zx zmac +syslib/SLHL4HC.Z80 
zx zmac +syslib/SLHL5DC.Z80 
zx zmac +syslib/SLHLFDC.Z80 
zx zmac +syslib/SLOUT.Z80   
zx zmac +syslib/SLPRINT.Z80 
zx zmac +syslib/SLPSTR.Z80  
zx zmac +syslib/SLUCLOSE.z80 -O +zout/SLUCLOSE.rel -P +zout/SLUCLOSE.lst
zx zmac +syslib/SLUDIR.z80 -O +zout/SLUDIR.rel -P +zout/SLUDIR.lst
zx zmac +syslib/SLUINIT.z80 -O +zout/SLUINIT.rel -P +zout/SLUINIT.lst
zx zmac +syslib/SLUOPEN.z80 -O +zout/SLUOPEN.rel -P +zout/SLUOPEN.lst
zx zmac +syslib/SMA2HC.Z80  
zx zmac +syslib/SMADC.Z80   
zx zmac +syslib/SMAFDC.Z80  
zx zmac +syslib/SMFN1.Z80   
zx zmac +syslib/SMFN2.Z80   
zx zmac +syslib/SMFN3.Z80   
zx zmac +syslib/SMHL4HC.Z80 
zx zmac +syslib/SMHL5DC.Z80 
zx zmac +syslib/SMHLFDC.Z80 
zx zmac +syslib/SMOVE.Z80   
zx zmac +syslib/SMTH01.Z80  
zx zmac +syslib/SMTH02.Z80  
zx zmac +syslib/SMTH03.Z80  
zx zmac +syslib/SMTH04.Z80  
zx zmac +syslib/SMTH05.Z80  
zx zmac +syslib/SMTH06.Z80  
zx zmac +syslib/SMTH07.Z80  
zx zmac +syslib/SMTH08.Z80  
zx zmac +syslib/SMTH09.Z80  
zx zmac +syslib/SMTH10.Z80  
zx zmac +syslib/SMTH11.Z80  
zx zmac +syslib/SMTH12.Z80  
zx zmac +syslib/SPA2HC.Z80  
zx zmac +syslib/SPADC.Z80   
zx zmac +syslib/SPAFDC.Z80  
zx zmac +syslib/SPAUSE.Z80  
zx zmac +syslib/SPFN1.Z80   
zx zmac +syslib/SPFN2.Z80   
zx zmac +syslib/SPFN3.Z80   
zx zmac +syslib/SPHL4HC.Z80 
zx zmac +syslib/SPHL5DC.Z80 
zx zmac +syslib/SPHLFDC.Z80 
zx zmac +syslib/SPOUT.Z80   
zx zmac +syslib/SPRINT.Z80  
zx zmac +syslib/SPSTR.Z80   
zx zmac +syslib/SRAND.Z80   
zx zmac +syslib/SRIN.Z80    
zx zmac +syslib/SRREAD.Z80  
zx zmac +syslib/SRWRITE.Z80 
zx zmac +syslib/SSA2HC.Z80  
zx zmac +syslib/SSADC.Z80   
zx zmac +syslib/SSAFDC.Z80  
zx zmac +syslib/SSCANNER.Z80
zx zmac +syslib/SSCFA.Z80   
zx zmac +syslib/SSCOUT.Z80  
zx zmac +syslib/SSCRLF.Z80  
zx zmac +syslib/SSCTLFL.Z80 
zx zmac +syslib/SSDMA.Z80   
zx zmac +syslib/SSFA.Z80    
zx zmac +syslib/SSFN1.Z80   
zx zmac +syslib/SSFN2.Z80   
zx zmac +syslib/SSFN3.Z80   
zx zmac +syslib/SSHL4HC.Z80 
zx zmac +syslib/SSHL5DC.Z80 
zx zmac +syslib/SSHLFDC.Z80 
zx zmac +syslib/SSKPUN.Z80  
zx zmac +syslib/SSKSP.Z80   
zx zmac +syslib/SSORT.Z80   
zx zmac +syslib/SSOUT.Z80   
zx zmac +syslib/SSPRINT.Z80 
zx zmac +syslib/SSPSTR.Z80  
zx zmac +syslib/SSUA.Z80    
zx zmac +syslib/SUD1.Z80    
zx zmac +syslib/SUD2.Z80    
rem todo check dupes
zx zmac +syslib/SBDOS.Z80
zx zmac +syslib/SFILEIO.Z80
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
zx zmac +c3lib/c3a2date.z80
zx zmac +c3lib/c3a2time.z80
zx zmac +c3lib/c3bios.z80
zx zmac +c3lib/c3brk.z80
zx zmac +c3lib/c3cmod.z80
zx zmac +c3lib/c3com.z80
zx zmac +c3lib/c3date2a.z80
zx zmac +c3lib/c3day.z80
zx zmac +c3lib/c3devc.z80
zx zmac +c3lib/c3devg.z80
zx zmac +c3lib/c3devl.z80
zx zmac +c3lib/c3dfmt.z80
zx zmac +c3lib/c3dini.z80 -O +zout/c3dini.rel -P +zout/c3dini.lst
zx zmac +c3lib/c3dmy.z80
zx zmac +c3lib/c3dname.z80
zx zmac +c3lib/c3dosopt.z80
zx zmac +c3lib/c3dtbl.z80
zx zmac +c3lib/c3err.z80
zx zmac +c3lib/c3fbcd.z80
zx zmac +c3lib/c3gtime.z80
zx zmac +c3lib/c3int.z80
zx zmac +c3lib/c3opt.z80
zx zmac +c3lib/c3page.z80
zx zmac +c3lib/c3passwd.z80
zx zmac +c3lib/c3pmerr.z80
zx zmac +c3lib/c3pmin.z80
zx zmac +c3lib/c3pminit.z80
zx zmac +c3lib/c3pmout.z80
zx zmac +c3lib/c3pmpage.z80
zx zmac +c3lib/c3pmpb.z80
zx zmac +c3lib/c3pmpr.z80
zx zmac +c3lib/c3pmstat.z80
zx zmac +c3lib/c3pmstr.z80
zx zmac +c3lib/c3pmver.z80
zx zmac +c3lib/c3push.z80
zx zmac +c3lib/c3scbget.z80
zx zmac +c3lib/c3scbput.z80
zx zmac +c3lib/c3smin.z80
zx zmac +c3lib/c3stime.z80
zx zmac +c3lib/c3tbcd.z80
zx zmac +c3lib/c3time2a.z80
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
