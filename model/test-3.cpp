$PARAM
CL = 1.5
V = 15
TVKA = 1.2

$INIT
GUT = 0
CENT = 0

$OMEGA
@block
// row 1
0.1
// row 2
0
0.2

$PKMODEL
depot = TRUE
ncmt = 1
 
$MAIN
double KA = TVKA + ETA(1);
 
$TABLE
capture CP = CENT/V;
 
$CAPTURE
CP

$SET
start = 0
end = 240
delta = 6
add = numeric(0)
atol = 1e-08
rtol = 1e-04
ss_atol = 1e-08
ss_rtol = 1e-08
maxsteps = 20000
hmax = 0
hmin = 0
mxhnil = 2
ixpr = 0
mindt = 2.22044605e-15
digits = -1
tscale = 1
outvars = c("GUT", "CENT", "CP")

