#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/sahil/Desktop/SMD/example-models/SMD_M/myproject_prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}