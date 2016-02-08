#ifndef THERMISTORTABLES_H_
#define THERMISTORTABLES_H_

#if (THERMISTORHEATER == 1) || (THERMISTORBED == 1) //100k bed thermistor


#define NUMTEMPS_1 61
const short temptable_1[NUMTEMPS_1][2] = {
{	23	,	300	},
{	25	,	295	},
{	27	,	290	},
{	28	,	285	},
{	31	,	280	},
{	33	,	275	},
{	35	,	270	},
{	38	,	265	},
{	41	,	260	},
{	44	,	255	},
{	48	,	250	},
{	52	,	245	},
{	56	,	240	},
{	61	,	235	},
{	66	,	230	},
{	71	,	225	},
{	78	,	220	},
{	84	,	215	},
{	92	,	210	},
{	100	,	205	},
{	109	,	200	},
{	120	,	195	},
{	131	,	190	},
{	143	,	185	},
{	156	,	180	},
{	171	,	175	},
{	187	,	170	},
{	205	,	165	},
{	224	,	160	},
{	245	,	155	},
{	268	,	150	},
{	293	,	145	},
{	320	,	140	},
{	348	,	135	},
{	379	,	130	},
{	411	,	125	},
{	445	,	120	},
{	480	,	115	},
{	516	,	110	},
{	553	,	105	},
{	591	,	100	},
{	628	,	95	},
{	665	,	90	},
{	702	,	85	},
{	737	,	80	},
{	770	,	75	},
{	801	,	70	},
{	830	,	65	},
{	857	,	60	},
{	881	,	55	},
{	903	,	50	},
{	922	,	45	},
{	939	,	40	},
{	954	,	35	},
{	966	,	30	},
{	977	,	25	},
{	985	,	20	},
{	993	,	15	},
{	999	,	10	},
{	1004	,	5	},
{	1008	,	0	} //safety
};
#endif
#if (THERMISTORHEATER == 2) || (THERMISTORBED == 2) //200k bed thermistor
#define NUMTEMPS_2 21
const short temptable_2[NUMTEMPS_2][2] = {
   {1, 848},
   {54, 275},
   {107, 228},
   {160, 202},
   {213, 185},
   {266, 171},
   {319, 160},
   {372, 150},
   {425, 141},
   {478, 133},
   {531, 125},
   {584, 118},
   {637, 110},
   {690, 103},
   {743, 95},
   {796, 86},
   {849, 77},
   {902, 65},
   {955, 49},
   {1008, 17},
   {1020, 0} //safety
};

#endif
#if (THERMISTORHEATER == 3) || (THERMISTORBED == 3) //mendel-parts
#define NUMTEMPS_3 28
const short temptable_3[NUMTEMPS_3][2] = {
		{1,864},
		{21,300},
		{25,290},
		{29,280},
		{33,270},
		{39,260},
		{46,250},
		{54,240},
		{64,230},
		{75,220},
		{90,210},
		{107,200},
		{128,190},
		{154,180},
		{184,170},
		{221,160},
		{265,150},
		{316,140},
		{375,130},
		{441,120},
		{513,110},
		{588,100},
		{734,80},
		{856,60},
		{938,40},
		{986,20},
		{1008,0},
		{1018,-20}
	};

#endif
#if (THERMISTORHEATER == 4) || (THERMISTORBED == 4) //10k thermistor

#define NUMTEMPS_4 20
short temptable_4[NUMTEMPS_4][2] = {
   {1, 430},
   {54, 137},
   {107, 107},
   {160, 91},
   {213, 80},
   {266, 71},
   {319, 64},
   {372, 57},
   {425, 51},
   {478, 46},
   {531, 41},
   {584, 35},
   {637, 30},
   {690, 25},
   {743, 20},
   {796, 14},
   {849, 7},
   {902, 0},
   {955, -11},
   {1008, -35}
};
#endif

#if (THERMISTORHEATER == 5) //100k bed thermistor http://www.ebay.com/itm/2pcs-100K-NTC-thermistor-temperature-sensor-for-JIETAI-All-Metal-J-head-hotend-/231257406787?ssPageName=STRK:MESE:IT

// Thermistor lookup table for RepRap Temperature Sensor Boards (http://reprap.org/wiki/Thermistor)
// Made with the online thermistor table generator by nathan7 at https://nathan7.eu/stuff/RepRapCalculator/RepRapCalculator.html#TempLookup
// r0: 100000
// t0: 25
// r1: 0
// r2: 5000
// beta: 3950
// max adc: 1023
#define NUMTEMPS_5 104
short temptable_5[NUMTEMPS_5][2] = {
   {1, 915},
   {11, 416},
   {21, 345},
   {31, 308},
   {41, 285},
   {51, 267},
   {61, 253},
   {71, 242},
   {81, 233},
   {91, 225},
   {101, 218},
   {111, 211},
   {121, 206},
   {131, 200},
   {141, 196},
   {151, 191},
   {161, 187},
   {171, 183},
   {181, 180},
   {191, 176},
   {201, 173},
   {211, 170},
   {221, 167},
   {231, 164},
   {241, 162},
   {251, 159},
   {261, 157},
   {271, 154},
   {281, 152},
   {291, 150},
   {301, 148},
   {311, 146},
   {321, 144},
   {331, 142},
   {341, 140},
   {351, 138},
   {361, 136},
   {371, 134},
   {381, 132},
   {391, 131},
   {401, 129},
   {411, 127},
   {421, 126},
   {431, 124},
   {441, 122},
   {451, 121},
   {461, 119},
   {471, 118},
   {481, 116},
   {491, 115},
   {501, 113},
   {511, 112},
   {521, 110},
   {531, 109},
   {541, 107},
   {551, 106},
   {561, 105},
   {571, 103},
   {581, 102},
   {591, 100},
   {601, 99},
   {611, 97},
   {621, 96},
   {631, 95},
   {641, 93},
   {651, 92},
   {661, 90},
   {671, 89},
   {681, 87},
   {691, 86},
   {701, 85},
   {711, 83},
   {721, 82},
   {731, 80},
   {741, 79},
   {751, 77},
   {761, 75},
   {771, 74},
   {781, 72},
   {791, 71},
   {801, 69},
   {811, 67},
   {821, 65},
   {831, 64},
   {841, 62},
   {851, 60},
   {861, 58},
   {871, 56},
   {881, 54},
   {891, 51},
   {901, 49},
   {911, 46},
   {921, 44},
   {931, 41},
   {941, 38},
   {951, 34},
   {961, 31},
   {971, 26},
   {981, 22},
   {991, 16},
   {1001, 8},
   {1011, -3},
   {1021, -28},
   {1023, -44}
};
#endif

#if THERMISTORHEATER == 1
#define NUMTEMPS NUMTEMPS_1
#define temptable temptable_1
#elif THERMISTORHEATER == 2
#define NUMTEMPS NUMTEMPS_2
#define temptable temptable_2
#elif THERMISTORHEATER == 3
#define NUMTEMPS NUMTEMPS_3
#define temptable temptable_3
#elif THERMISTORHEATER == 4
#define NUMTEMPS NUMTEMPS_4
#define temptable temptable_4
#elif THERMISTORHEATER == 5
#define NUMTEMPS NUMTEMPS_5
#define temptable temptable_5
#elif defined HEATER_USES_THERMISTOR
#error No heater thermistor table specified
#endif
#if THERMISTORBED == 1
#define BNUMTEMPS NUMTEMPS_1
#define bedtemptable temptable_1
#elif THERMISTORBED == 2
#define BNUMTEMPS NUMTEMPS_2
#define bedtemptable temptable_2
#elif THERMISTORBED == 3
#define BNUMTEMPS NUMTEMPS_3
#define bedtemptable temptable_3
#elif THERMISTORBED == 4
#define BNUMTEMPS NUMTEMPS_4
#define bedtemptable temptable_4
#elif defined BED_USES_THERMISTOR
#error No bed thermistor table specified
#endif

#endif //THERMISTORTABLES_H_
