#include "standard_normal_table.h"
using namespace std;

standard_normal_table SNT;

standard_normal_table::standard_normal_table() {

  table = new double[410];

  table[0] = 0.50000;
  table[1] = 0.50399;
  table[2] = 0.50798;
  table[3] = 0.51197;
  table[4] = 0.51595;
  table[5] = 0.51994;
  table[6] = 0.52392;
  table[7] = 0.52790;
  table[8] = 0.53188;
  table[9] = 0.53586;
  table[10] = 0.53983;
  table[11] = 0.54380;
  table[12] = 0.54776;
  table[13] = 0.55172;
  table[14] = 0.55567;
  table[15] = 0.55966;
  table[16] = 0.56360;
  table[17] = 0.56749;
  table[18] = 0.57142;
  table[19] = 0.57535;
  table[20] = 0.57926;
  table[21] = 0.58317;
  table[22] = 0.58706;
  table[23] = 0.59095;
  table[24] = 0.59483;
  table[25] = 0.59871;
  table[26] = 0.60257;
  table[27] = 0.60642;
  table[28] = 0.61026;
  table[29] = 0.61409;
  table[30] = 0.61791;
  table[31] = 0.62172;
  table[32] = 0.62552;
  table[33] = 0.62930;
  table[34] = 0.63307;
  table[35] = 0.63683;
  table[36] = 0.64058;
  table[37] = 0.64431;
  table[38] = 0.64803;
  table[39] = 0.65173;
  table[40] = 0.65542;
  table[41] = 0.65910;
  table[42] = 0.66276;
  table[43] = 0.66640;
  table[44] = 0.67003;
  table[45] = 0.67364;
  table[46] = 0.67724;
  table[47] = 0.68082;
  table[48] = 0.68439;
  table[49] = 0.68793;
  table[50] = 0.69146;
  table[51] = 0.69497;
  table[52] = 0.69847;
  table[53] = 0.70194;
  table[54] = 0.70540;
  table[55] = 0.70884;
  table[56] = 0.71226;
  table[57] = 0.71566;
  table[58] = 0.71904;
  table[59] = 0.72240;
  table[60] = 0.72575;
  table[61] = 0.72907;
  table[62] = 0.73237;
  table[63] = 0.73565;
  table[64] = 0.73891;
  table[65] = 0.74215;
  table[66] = 0.74537;
  table[67] = 0.74857;
  table[68] = 0.75175;
  table[69] = 0.75490;
  table[70] = 0.75804;
  table[71] = 0.76115;
  table[72] = 0.76424;
  table[73] = 0.76730;
  table[74] = 0.77035;
  table[75] = 0.77337;
  table[76] = 0.77637;
  table[77] = 0.77935;
  table[78] = 0.78230;
  table[79] = 0.78524;
  table[80] = 0.78814;
  table[81] = 0.79103;
  table[82] = 0.79389;
  table[83] = 0.79673;
  table[84] = 0.79955;
  table[85] = 0.80234;
  table[86] = 0.80511;
  table[87] = 0.80785;
  table[88] = 0.81057;
  table[89] = 0.81327;
  table[90] = 0.81594;
  table[91] = 0.81859;
  table[92] = 0.82121;
  table[93] = 0.82381;
  table[94] = 0.82639;
  table[95] = 0.82894;
  table[96] = 0.83147;
  table[97] = 0.83398;
  table[98] = 0.83646;
  table[99] = 0.83891;
  table[100] = 0.84134;
  table[101] = 0.84375;
  table[102] = 0.84614;
  table[103] = 0.84849;
  table[104] = 0.85083;
  table[105] = 0.85314;
  table[106] = 0.85543;
  table[107] = 0.85769;
  table[108] = 0.85993;
  table[109] = 0.86214;
  table[110] = 0.86433;
  table[111] = 0.86650;
  table[112] = 0.86864;
  table[113] = 0.87076;
  table[114] = 0.87286;
  table[115] = 0.87493;
  table[116] = 0.87698;
  table[117] = 0.87900;
  table[118] = 0.88100;
  table[119] = 0.88298;
  table[120] = 0.88493;
  table[121] = 0.88686;
  table[122] = 0.88877;
  table[123] = 0.89065;
  table[124] = 0.89251;
  table[125] = 0.89435;
  table[126] = 0.89617;
  table[127] = 0.89796;
  table[128] = 0.89973;
  table[129] = 0.90147;
  table[130] = 0.90320;
  table[131] = 0.90490;
  table[132] = 0.90658;
  table[133] = 0.90824;
  table[134] = 0.90988;
  table[135] = 0.91149;
  table[136] = 0.91308;
  table[137] = 0.91466;
  table[138] = 0.91621;
  table[139] = 0.91774;
  table[140] = 0.91924;
  table[141] = 0.92073;
  table[142] = 0.92220;
  table[143] = 0.92364;
  table[144] = 0.92507;
  table[145] = 0.92647;
  table[146] = 0.92785;
  table[147] = 0.92922;
  table[148] = 0.93056;
  table[149] = 0.93189;
  table[150] = 0.93319;
  table[151] = 0.93448;
  table[152] = 0.93574;
  table[153] = 0.93699;
  table[154] = 0.93822;
  table[155] = 0.93943;
  table[156] = 0.94062;
  table[157] = 0.94179;
  table[158] = 0.94295;
  table[159] = 0.94408;
  table[160] = 0.94520;
  table[161] = 0.94630;
  table[162] = 0.94738;
  table[163] = 0.94845;
  table[164] = 0.94950;
  table[165] = 0.95053;
  table[166] = 0.95154;
  table[167] = 0.95254;
  table[168] = 0.95352;
  table[169] = 0.95449;
  table[170] = 0.95543;
  table[171] = 0.95637;
  table[172] = 0.95728;
  table[173] = 0.95818;
  table[174] = 0.95907;
  table[175] = 0.95994;
  table[176] = 0.96080;
  table[177] = 0.96164;
  table[178] = 0.96246;
  table[179] = 0.96327;
  table[180] = 0.96407;
  table[181] = 0.96485;
  table[182] = 0.96562;
  table[183] = 0.96638;
  table[184] = 0.96712;
  table[185] = 0.96784;
  table[186] = 0.96856;
  table[187] = 0.96926;
  table[188] = 0.96995;
  table[189] = 0.97062;
  table[190] = 0.97128;
  table[191] = 0.97193;
  table[192] = 0.97257;
  table[193] = 0.97320;
  table[194] = 0.97381;
  table[195] = 0.97441;
  table[196] = 0.97500;
  table[197] = 0.97558;
  table[198] = 0.97615;
  table[199] = 0.97670;
  table[200] = 0.97725;
  table[201] = 0.97778;
  table[202] = 0.97831;
  table[203] = 0.97882;
  table[204] = 0.97932;
  table[205] = 0.97982;
  table[206] = 0.98030;
  table[207] = 0.98077;
  table[208] = 0.98124;
  table[209] = 0.98169;
  table[210] = 0.98214;
  table[211] = 0.98257;
  table[212] = 0.98300;
  table[213] = 0.98341;
  table[214] = 0.98382;
  table[215] = 0.98422;
  table[216] = 0.98461;
  table[217] = 0.98500;
  table[218] = 0.98537;
  table[219] = 0.98574;
  table[220] = 0.98610;
  table[221] = 0.98645;
  table[222] = 0.98679;
  table[223] = 0.98713;
  table[224] = 0.98745;
  table[225] = 0.98778;
  table[226] = 0.98809;
  table[227] = 0.98840;
  table[228] = 0.98870;
  table[229] = 0.98899;
  table[230] = 0.98928;
  table[231] = 0.98956;
  table[232] = 0.98983;
  table[233] = 0.99010;
  table[234] = 0.99036;
  table[235] = 0.99061;
  table[236] = 0.99086;
  table[237] = 0.99111;
  table[238] = 0.99134;
  table[239] = 0.99158;
  table[240] = 0.99180;
  table[241] = 0.99202;
  table[242] = 0.99224;
  table[243] = 0.99245;
  table[244] = 0.99266;
  table[245] = 0.99286;
  table[246] = 0.99305;
  table[247] = 0.99324;
  table[248] = 0.99343;
  table[249] = 0.99361;
  table[250] = 0.99379;
  table[251] = 0.99396;
  table[252] = 0.99413;
  table[253] = 0.99430;
  table[254] = 0.99446;
  table[255] = 0.99461;
  table[256] = 0.99477;
  table[257] = 0.99492;
  table[258] = 0.99506;
  table[259] = 0.99520;
  table[260] = 0.99534;
  table[261] = 0.99547;
  table[262] = 0.99560;
  table[263] = 0.99573;
  table[264] = 0.99585;
  table[265] = 0.99598;
  table[266] = 0.99609;
  table[267] = 0.99621;
  table[268] = 0.99632;
  table[269] = 0.99643;
  table[270] = 0.99653;
  table[271] = 0.99664;
  table[272] = 0.99674;
  table[273] = 0.99683;
  table[274] = 0.99693;
  table[275] = 0.99702;
  table[276] = 0.99711;
  table[277] = 0.99720;
  table[278] = 0.99728;
  table[279] = 0.99736;
  table[280] = 0.99744;
  table[281] = 0.99752;
  table[282] = 0.99760;
  table[283] = 0.99767;
  table[284] = 0.99774;
  table[285] = 0.99781;
  table[286] = 0.99788;
  table[287] = 0.99795;
  table[288] = 0.99801;
  table[289] = 0.99807;
  table[290] = 0.99813;
  table[291] = 0.99819;
  table[292] = 0.99825;
  table[293] = 0.99831;
  table[294] = 0.99836;
  table[295] = 0.99841;
  table[296] = 0.99846;
  table[297] = 0.99851;
  table[298] = 0.99856;
  table[299] = 0.99861;
  table[300] = 0.99865;
  table[301] = 0.99869;
  table[302] = 0.99874;
  table[303] = 0.99878;
  table[304] = 0.99882;
  table[305] = 0.99886;
  table[306] = 0.99889;
  table[307] = 0.99893;
  table[308] = 0.99896;
  table[309] = 0.99900;
  table[310] = 0.99903;
  table[311] = 0.99906;
  table[312] = 0.99910;
  table[313] = 0.99913;
  table[314] = 0.99916;
  table[315] = 0.99918;
  table[316] = 0.99921;
  table[317] = 0.99924;
  table[318] = 0.99926;
  table[319] = 0.99929;
  table[320] = 0.99931;
  table[321] = 0.99934;
  table[322] = 0.99936;
  table[323] = 0.99938;
  table[324] = 0.99940;
  table[325] = 0.99942;
  table[326] = 0.99944;
  table[327] = 0.99946;
  table[328] = 0.99948;
  table[329] = 0.99950;
  table[330] = 0.99952;
  table[331] = 0.99953;
  table[332] = 0.99955;
  table[333] = 0.99957;
  table[334] = 0.99958;
  table[335] = 0.99960;
  table[336] = 0.99961;
  table[337] = 0.99962;
  table[338] = 0.99964;
  table[339] = 0.99965;
  table[340] = 0.99966;
  table[341] = 0.99968;
  table[342] = 0.99969;
  table[343] = 0.99970;
  table[344] = 0.99971;
  table[345] = 0.99972;
  table[346] = 0.99973;
  table[347] = 0.99974;
  table[348] = 0.99975;
  table[349] = 0.99976;
  table[350] = 0.99977;
  table[351] = 0.99978;
  table[352] = 0.99978;
  table[353] = 0.99979;
  table[354] = 0.99980;
  table[355] = 0.99981;
  table[356] = 0.99981;
  table[357] = 0.99982;
  table[358] = 0.99983;
  table[359] = 0.99983;
  table[360] = 0.99984;
  table[361] = 0.99985;
  table[362] = 0.99985;
  table[363] = 0.99986;
  table[364] = 0.99986;
  table[365] = 0.99987;
  table[366] = 0.99987;
  table[367] = 0.99988;
  table[368] = 0.99988;
  table[369] = 0.99989;
  table[370] = 0.99989;
  table[371] = 0.99990;
  table[372] = 0.99990;
  table[373] = 0.99990;
  table[374] = 0.99991;
  table[375] = 0.99991;
  table[376] = 0.99992;
  table[377] = 0.99992;
  table[378] = 0.99992;
  table[379] = 0.99992;
  table[380] = 0.99993;
  table[381] = 0.99993;
  table[382] = 0.99993;
  table[383] = 0.99994;
  table[384] = 0.99994;
  table[385] = 0.99994;
  table[386] = 0.99994;
  table[387] = 0.99995;
  table[388] = 0.99995;
  table[389] = 0.99995;
  table[390] = 0.99995;
  table[391] = 0.99995;
  table[392] = 0.99996;
  table[393] = 0.99996;
  table[394] = 0.99996;
  table[395] = 0.99996;
  table[396] = 0.99996;
  table[397] = 0.99996;
  table[398] = 0.99997;
  table[399] = 0.99997;
  table[400] = 0.99997;
  table[401] = 0.99997;
  table[402] = 0.99997;
  table[403] = 0.99997;
  table[404] = 0.99997;
  table[405] = 0.99997;
  table[406] = 0.99998;
  table[407] = 0.99998;
  table[408] = 0.99998;
  table[409] = 0.99998;

}
