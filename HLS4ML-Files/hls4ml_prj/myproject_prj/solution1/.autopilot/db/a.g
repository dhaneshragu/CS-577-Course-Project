#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/dhanesh/Desktop/Sem_6/VLSI/FaceRec/facerec/hls4ml_prj/myproject_prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}