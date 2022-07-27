#!/bin/csh
#
# Modification of Emily's code: get run number and run Fit_two_hist with it
# $1 is the run number
# $2 is the output directory (optional)

if ("z$1" == "z") then
    echo "Usage: getntuple.csh RUNNUM \n Or: getntuple.csh RUNNUM OUTDIR"
    exit 1
endif

if ("z$2" != "z") then
    cd $2
endif

set RUN = "$1"
set ANT = "http://cms2.physics.ucsb.edu/DRS/Run${RUN}/Run${RUN}.root"

echo "file created..."  #delete this line after debugging
curl -R -s ${ANT} >& Run${RUN}.root



#root -l -b -q Fit_two_hist.cpp\(${RUN}\)
#rm -f Run${RUN}.root

