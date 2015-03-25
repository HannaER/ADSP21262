#include "load_db.h" 

#define NaN	0 

void load_db(db_t* current_db){

	block_t b0, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11; 
	version_t version; 
	word_t word; 
	db_t db; 
	b0.reflect[0] = -0.709548;
	b0.reflect[1] = 0.467087;
	b0.reflect[2] = -0.435355;
	b0.reflect[3] = 0.212454;
	b0.reflect[4] = 0.063060;
	b0.reflect[5] = 0.269451;
	b0.reflect[6] = -0.047524;
	b0.reflect[7] = -0.216151;
	b0.reflect[8] = 0.107158;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.579143;
	b1.reflect[1] = 0.531212;
	b1.reflect[2] = -0.443361;
	b1.reflect[3] = 0.192730;
	b1.reflect[4] = 0.094717;
	b1.reflect[5] = 0.377796;
	b1.reflect[6] = 0.205421;
	b1.reflect[7] = -0.375356;
	b1.reflect[8] = -0.020554;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = -0.504940;
	b2.reflect[1] = 0.241218;
	b2.reflect[2] = -0.316909;
	b2.reflect[3] = 0.324717;
	b2.reflect[4] = -0.046893;
	b2.reflect[5] = 0.240315;
	b2.reflect[6] = -0.014368;
	b2.reflect[7] = -0.148290;
	b2.reflect[8] = 0.049764;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = -0.375329;
	b3.reflect[1] = 0.022996;
	b3.reflect[2] = -0.276478;
	b3.reflect[3] = 0.360840;
	b3.reflect[4] = 0.162646;
	b3.reflect[5] = 0.435206;
	b3.reflect[6] = -0.183103;
	b3.reflect[7] = -0.024053;
	b3.reflect[8] = -0.102923;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = -0.328463;
	b4.reflect[1] = 0.053808;
	b4.reflect[2] = -0.222984;
	b4.reflect[3] = 0.126447;
	b4.reflect[4] = 0.005442;
	b4.reflect[5] = 0.290692;
	b4.reflect[6] = -0.033472;
	b4.reflect[7] = -0.019925;
	b4.reflect[8] = -0.103381;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = 0.189753;
	b5.reflect[1] = 0.075317;
	b5.reflect[2] = -0.177806;
	b5.reflect[3] = -0.009187;
	b5.reflect[4] = -0.173021;
	b5.reflect[5] = 0.055208;
	b5.reflect[6] = -0.053886;
	b5.reflect[7] = 0.218544;
	b5.reflect[8] = -0.034417;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = -0.228114;
	b6.reflect[1] = -0.013763;
	b6.reflect[2] = -0.099859;
	b6.reflect[3] = -0.010244;
	b6.reflect[4] = -0.027089;
	b6.reflect[5] = 0.082260;
	b6.reflect[6] = -0.012518;
	b6.reflect[7] = 0.046099;
	b6.reflect[8] = -0.028283;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = -0.127828;
	b7.reflect[1] = -0.005444;
	b7.reflect[2] = -0.020909;
	b7.reflect[3] = 0.020793;
	b7.reflect[4] = -0.003476;
	b7.reflect[5] = 0.022792;
	b7.reflect[6] = 0.009909;
	b7.reflect[7] = -0.004213;
	b7.reflect[8] = 0.005407;
	b7.energy = -1;

	version.subset[7] = b7;
 
	b8.reflect[0] = 0.000000;
	b8.reflect[1] = 0.000000;
	b8.reflect[2] = 0.000000;
	b8.reflect[3] = 0.000000;
	b8.reflect[4] = 0.000000;
	b8.reflect[5] = 0.000000;
	b8.reflect[6] = 0.000000;
	b8.reflect[7] = 0.000000;
	b8.reflect[8] = 0.000000;
	b8.energy = -1;

	version.subset[8] = b8;
 
	b9.reflect[0] = 0.000000;
	b9.reflect[1] = 0.000000;
	b9.reflect[2] = 0.000000;
	b9.reflect[3] = 0.000000;
	b9.reflect[4] = 0.000000;
	b9.reflect[5] = 0.000000;
	b9.reflect[6] = 0.000000;
	b9.reflect[7] = 0.000000;
	b9.reflect[8] = 0.000000;
	b9.energy = -1;

	version.subset[9] = b9;
 
	b10.reflect[0] = 0.000000;
	b10.reflect[1] = 0.000000;
	b10.reflect[2] = 0.000000;
	b10.reflect[3] = 0.000000;
	b10.reflect[4] = 0.000000;
	b10.reflect[5] = 0.000000;
	b10.reflect[6] = 0.000000;
	b10.reflect[7] = 0.000000;
	b10.reflect[8] = 0.000000;
	b10.energy = -1;

	version.subset[10] = b10;
 
	b11.reflect[0] = 0.000000;
	b11.reflect[1] = 0.000000;
	b11.reflect[2] = 0.000000;
	b11.reflect[3] = 0.000000;
	b11.reflect[4] = 0.000000;
	b11.reflect[5] = 0.000000;
	b11.reflect[6] = 0.000000;
	b11.reflect[7] = 0.000000;
	b11.reflect[8] = 0.000000;
	b11.energy = -1;

	version.subset[11] = b11;
 
	word.versions[0] = version;
 
	b0.reflect[0] = -0.558362;
	b0.reflect[1] = 0.541270;
	b0.reflect[2] = -0.351384;
	b0.reflect[3] = 0.185252;
	b0.reflect[4] = -0.099299;
	b0.reflect[5] = 0.476021;
	b0.reflect[6] = -0.185498;
	b0.reflect[7] = -0.162806;
	b0.reflect[8] = 0.115175;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.572681;
	b1.reflect[1] = 0.602865;
	b1.reflect[2] = -0.378253;
	b1.reflect[3] = 0.204814;
	b1.reflect[4] = 0.019326;
	b1.reflect[5] = 0.535032;
	b1.reflect[6] = -0.096559;
	b1.reflect[7] = -0.267092;
	b1.reflect[8] = 0.071494;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = -0.764283;
	b2.reflect[1] = 0.483900;
	b2.reflect[2] = -0.357724;
	b2.reflect[3] = 0.257141;
	b2.reflect[4] = -0.003438;
	b2.reflect[5] = 0.512762;
	b2.reflect[6] = -0.207922;
	b2.reflect[7] = -0.142694;
	b2.reflect[8] = 0.119461;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = -0.344866;
	b3.reflect[1] = -0.033241;
	b3.reflect[2] = -0.441297;
	b3.reflect[3] = 0.451703;
	b3.reflect[4] = -0.002597;
	b3.reflect[5] = 0.312283;
	b3.reflect[6] = -0.151708;
	b3.reflect[7] = 0.077015;
	b3.reflect[8] = -0.037622;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = -0.427548;
	b4.reflect[1] = 0.110188;
	b4.reflect[2] = -0.488176;
	b4.reflect[3] = 0.229700;
	b4.reflect[4] = 0.041780;
	b4.reflect[5] = 0.582102;
	b4.reflect[6] = -0.323484;
	b4.reflect[7] = 0.031169;
	b4.reflect[8] = -0.165416;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = -0.378550;
	b5.reflect[1] = 0.030771;
	b5.reflect[2] = -0.519658;
	b5.reflect[3] = 0.366119;
	b5.reflect[4] = 0.088263;
	b5.reflect[5] = 0.463151;
	b5.reflect[6] = -0.275444;
	b5.reflect[7] = 0.050205;
	b5.reflect[8] = -0.107552;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = -0.638260;
	b6.reflect[1] = -0.211840;
	b6.reflect[2] = -0.381759;
	b6.reflect[3] = 0.309270;
	b6.reflect[4] = -0.062567;
	b6.reflect[5] = 0.479391;
	b6.reflect[6] = 0.080705;
	b6.reflect[7] = 0.133156;
	b6.reflect[8] = -0.221353;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = -0.832308;
	b7.reflect[1] = 0.010799;
	b7.reflect[2] = -0.371061;
	b7.reflect[3] = 0.122160;
	b7.reflect[4] = -0.046907;
	b7.reflect[5] = 0.493125;
	b7.reflect[6] = 0.181419;
	b7.reflect[7] = 0.071731;
	b7.reflect[8] = -0.172586;
	b7.energy = -1;

	version.subset[7] = b7;
 
	b8.reflect[0] = -0.914204;
	b8.reflect[1] = 0.007219;
	b8.reflect[2] = -0.115452;
	b8.reflect[3] = 0.229912;
	b8.reflect[4] = 0.097000;
	b8.reflect[5] = 0.328428;
	b8.reflect[6] = 0.014699;
	b8.reflect[7] = 0.077899;
	b8.reflect[8] = 0.014147;
	b8.energy = -1;

	version.subset[8] = b8;
 
	b9.reflect[0] = -0.836959;
	b9.reflect[1] = -0.149149;
	b9.reflect[2] = -0.236671;
	b9.reflect[3] = 0.264474;
	b9.reflect[4] = -0.028243;
	b9.reflect[5] = 0.203589;
	b9.reflect[6] = 0.062829;
	b9.reflect[7] = 0.055109;
	b9.reflect[8] = -0.032789;
	b9.energy = -1;

	version.subset[9] = b9;
 
	b10.reflect[0] = -0.758027;
	b10.reflect[1] = -0.038024;
	b10.reflect[2] = -0.094562;
	b10.reflect[3] = 0.115278;
	b10.reflect[4] = 0.055455;
	b10.reflect[5] = 0.141397;
	b10.reflect[6] = -0.020119;
	b10.reflect[7] = 0.102388;
	b10.reflect[8] = 0.076520;
	b10.energy = -1;

	version.subset[10] = b10;
 
	b11.reflect[0] = -0.626089;
	b11.reflect[1] = -0.068638;
	b11.reflect[2] = -0.098286;
	b11.reflect[3] = 0.166975;
	b11.reflect[4] = 0.024058;
	b11.reflect[5] = 0.080452;
	b11.reflect[6] = -0.003198;
	b11.reflect[7] = 0.057778;
	b11.reflect[8] = 0.060277;
	b11.energy = -1;

	version.subset[11] = b11;
 
	word.versions[1] = version;
 
	b0.reflect[0] = -0.701005;
	b0.reflect[1] = 0.409986;
	b0.reflect[2] = -0.212436;
	b0.reflect[3] = 0.271191;
	b0.reflect[4] = -0.231541;
	b0.reflect[5] = 0.367969;
	b0.reflect[6] = -0.198983;
	b0.reflect[7] = -0.199825;
	b0.reflect[8] = -0.034453;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.696705;
	b1.reflect[1] = 0.505549;
	b1.reflect[2] = -0.204733;
	b1.reflect[3] = 0.263673;
	b1.reflect[4] = -0.118524;
	b1.reflect[5] = 0.306604;
	b1.reflect[6] = -0.148110;
	b1.reflect[7] = -0.246455;
	b1.reflect[8] = -0.051406;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = -0.592652;
	b2.reflect[1] = 0.567102;
	b2.reflect[2] = -0.278119;
	b2.reflect[3] = 0.223483;
	b2.reflect[4] = 0.014007;
	b2.reflect[5] = 0.390187;
	b2.reflect[6] = -0.063027;
	b2.reflect[7] = -0.320816;
	b2.reflect[8] = 0.079213;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = -0.529747;
	b3.reflect[1] = 0.580873;
	b3.reflect[2] = -0.344778;
	b3.reflect[3] = 0.161813;
	b3.reflect[4] = -0.097803;
	b3.reflect[5] = 0.493081;
	b3.reflect[6] = -0.066283;
	b3.reflect[7] = -0.229284;
	b3.reflect[8] = 0.037274;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = -0.574709;
	b4.reflect[1] = 0.576636;
	b4.reflect[2] = -0.358221;
	b4.reflect[3] = 0.195010;
	b4.reflect[4] = 0.071831;
	b4.reflect[5] = 0.471783;
	b4.reflect[6] = -0.033984;
	b4.reflect[7] = -0.388419;
	b4.reflect[8] = 0.043318;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = -0.606851;
	b5.reflect[1] = 0.601419;
	b5.reflect[2] = -0.338088;
	b5.reflect[3] = 0.275051;
	b5.reflect[4] = 0.077779;
	b5.reflect[5] = 0.581192;
	b5.reflect[6] = -0.119287;
	b5.reflect[7] = -0.311683;
	b5.reflect[8] = -0.021692;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = -0.554734;
	b6.reflect[1] = 0.635109;
	b6.reflect[2] = -0.401113;
	b6.reflect[3] = 0.195044;
	b6.reflect[4] = 0.107802;
	b6.reflect[5] = 0.583249;
	b6.reflect[6] = -0.034815;
	b6.reflect[7] = -0.298778;
	b6.reflect[8] = 0.016254;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = -0.606784;
	b7.reflect[1] = 0.541271;
	b7.reflect[2] = -0.299513;
	b7.reflect[3] = 0.317240;
	b7.reflect[4] = 0.000395;
	b7.reflect[5] = 0.523518;
	b7.reflect[6] = -0.035087;
	b7.reflect[7] = -0.285333;
	b7.reflect[8] = 0.133404;
	b7.energy = -1;

	version.subset[7] = b7;
 
	b8.reflect[0] = -0.607506;
	b8.reflect[1] = 0.537990;
	b8.reflect[2] = -0.265430;
	b8.reflect[3] = 0.296697;
	b8.reflect[4] = -0.073378;
	b8.reflect[5] = 0.604336;
	b8.reflect[6] = -0.024000;
	b8.reflect[7] = -0.307266;
	b8.reflect[8] = 0.075745;
	b8.energy = -1;

	version.subset[8] = b8;
 
	b9.reflect[0] = -0.564269;
	b9.reflect[1] = 0.563908;
	b9.reflect[2] = -0.399433;
	b9.reflect[3] = 0.152005;
	b9.reflect[4] = 0.013900;
	b9.reflect[5] = 0.500832;
	b9.reflect[6] = -0.046222;
	b9.reflect[7] = -0.358598;
	b9.reflect[8] = 0.137027;
	b9.energy = -1;

	version.subset[9] = b9;
 
	b10.reflect[0] = -0.532195;
	b10.reflect[1] = 0.569618;
	b10.reflect[2] = -0.404249;
	b10.reflect[3] = 0.103262;
	b10.reflect[4] = -0.073058;
	b10.reflect[5] = 0.505585;
	b10.reflect[6] = -0.094085;
	b10.reflect[7] = -0.348500;
	b10.reflect[8] = 0.121309;
	b10.energy = -1;

	version.subset[10] = b10;
 
	b11.reflect[0] = NaN;
	b11.reflect[1] = NaN;
	b11.reflect[2] = NaN;
	b11.reflect[3] = NaN;
	b11.reflect[4] = NaN;
	b11.reflect[5] = NaN;
	b11.reflect[6] = NaN;
	b11.reflect[7] = NaN;
	b11.reflect[8] = NaN;
	b11.energy = -1;

	version.subset[11] = b11;
 
	word.versions[2] = version;
 
	b0.reflect[0] = -0.651649;
	b0.reflect[1] = 0.440952;
	b0.reflect[2] = -0.355127;
	b0.reflect[3] = 0.226911;
	b0.reflect[4] = -0.192819;
	b0.reflect[5] = 0.541373;
	b0.reflect[6] = -0.231939;
	b0.reflect[7] = -0.200191;
	b0.reflect[8] = 0.046537;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.560864;
	b1.reflect[1] = 0.526408;
	b1.reflect[2] = -0.357897;
	b1.reflect[3] = 0.206702;
	b1.reflect[4] = -0.271804;
	b1.reflect[5] = 0.573738;
	b1.reflect[6] = -0.178834;
	b1.reflect[7] = -0.217776;
	b1.reflect[8] = 0.027262;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = -0.750094;
	b2.reflect[1] = 0.376447;
	b2.reflect[2] = -0.324549;
	b2.reflect[3] = 0.263834;
	b2.reflect[4] = -0.179163;
	b2.reflect[5] = 0.497521;
	b2.reflect[6] = -0.205873;
	b2.reflect[7] = -0.163170;
	b2.reflect[8] = 0.091352;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = -0.360292;
	b3.reflect[1] = 0.349542;
	b3.reflect[2] = -0.540756;
	b3.reflect[3] = 0.225385;
	b3.reflect[4] = -0.129819;
	b3.reflect[5] = 0.249339;
	b3.reflect[6] = -0.109809;
	b3.reflect[7] = 0.008204;
	b3.reflect[8] = -0.072557;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = -0.649616;
	b4.reflect[1] = -0.031078;
	b4.reflect[2] = -0.412936;
	b4.reflect[3] = 0.621859;
	b4.reflect[4] = 0.209044;
	b4.reflect[5] = 0.373239;
	b4.reflect[6] = -0.210550;
	b4.reflect[7] = 0.066435;
	b4.reflect[8] = -0.093354;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = -0.584218;
	b5.reflect[1] = 0.220631;
	b5.reflect[2] = -0.379606;
	b5.reflect[3] = 0.432129;
	b5.reflect[4] = 0.113487;
	b5.reflect[5] = 0.572546;
	b5.reflect[6] = -0.343483;
	b5.reflect[7] = -0.135340;
	b5.reflect[8] = -0.039207;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = -0.548953;
	b6.reflect[1] = 0.008518;
	b6.reflect[2] = -0.183665;
	b6.reflect[3] = 0.316834;
	b6.reflect[4] = 0.002671;
	b6.reflect[5] = 0.284968;
	b6.reflect[6] = -0.084812;
	b6.reflect[7] = -0.137742;
	b6.reflect[8] = -0.124696;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = 0.208861;
	b7.reflect[1] = 0.095841;
	b7.reflect[2] = -0.443175;
	b7.reflect[3] = -0.109948;
	b7.reflect[4] = -0.008733;
	b7.reflect[5] = 0.295570;
	b7.reflect[6] = -0.127373;
	b7.reflect[7] = 0.125699;
	b7.reflect[8] = -0.103822;
	b7.energy = -1;

	version.subset[7] = b7;
 
	b8.reflect[0] = -0.076070;
	b8.reflect[1] = -0.034174;
	b8.reflect[2] = -0.207671;
	b8.reflect[3] = 0.065078;
	b8.reflect[4] = -0.183097;
	b8.reflect[5] = 0.096447;
	b8.reflect[6] = 0.020914;
	b8.reflect[7] = 0.103244;
	b8.reflect[8] = -0.135640;
	b8.energy = -1;

	version.subset[8] = b8;
 
	b9.reflect[0] = -0.155650;
	b9.reflect[1] = -0.033915;
	b9.reflect[2] = -0.080371;
	b9.reflect[3] = 0.025303;
	b9.reflect[4] = -0.043345;
	b9.reflect[5] = 0.109626;
	b9.reflect[6] = 0.004511;
	b9.reflect[7] = -0.003465;
	b9.reflect[8] = -0.010510;
	b9.energy = -1;

	version.subset[9] = b9;
 
	b10.reflect[0] = 0.000000;
	b10.reflect[1] = 0.000000;
	b10.reflect[2] = 0.000000;
	b10.reflect[3] = 0.000000;
	b10.reflect[4] = 0.000000;
	b10.reflect[5] = 0.000000;
	b10.reflect[6] = 0.000000;
	b10.reflect[7] = 0.000000;
	b10.reflect[8] = 0.000000;
	b10.energy = -1;

	version.subset[10] = b10;
 
	b11.reflect[0] = 0.000000;
	b11.reflect[1] = 0.000000;
	b11.reflect[2] = 0.000000;
	b11.reflect[3] = 0.000000;
	b11.reflect[4] = 0.000000;
	b11.reflect[5] = 0.000000;
	b11.reflect[6] = 0.000000;
	b11.reflect[7] = 0.000000;
	b11.reflect[8] = 0.000000;
	b11.energy = -1;

	version.subset[11] = b11;
 
	word.versions[3] = version;
 
	b0.reflect[0] = -0.633788;
	b0.reflect[1] = 0.662168;
	b0.reflect[2] = -0.279253;
	b0.reflect[3] = 0.218468;
	b0.reflect[4] = -0.326384;
	b0.reflect[5] = 0.411799;
	b0.reflect[6] = 0.001953;
	b0.reflect[7] = -0.401656;
	b0.reflect[8] = 0.105708;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.619935;
	b1.reflect[1] = 0.697172;
	b1.reflect[2] = -0.259065;
	b1.reflect[3] = 0.219734;
	b1.reflect[4] = -0.282461;
	b1.reflect[5] = 0.427279;
	b1.reflect[6] = -0.006669;
	b1.reflect[7] = -0.360778;
	b1.reflect[8] = 0.065785;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = -0.620089;
	b2.reflect[1] = 0.715849;
	b2.reflect[2] = -0.333602;
	b2.reflect[3] = 0.150613;
	b2.reflect[4] = -0.180128;
	b2.reflect[5] = 0.431700;
	b2.reflect[6] = -0.046971;
	b2.reflect[7] = -0.257742;
	b2.reflect[8] = 0.022271;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = -0.674719;
	b3.reflect[1] = 0.608095;
	b3.reflect[2] = -0.221610;
	b3.reflect[3] = 0.275524;
	b3.reflect[4] = -0.360196;
	b3.reflect[5] = 0.516235;
	b3.reflect[6] = -0.100921;
	b3.reflect[7] = -0.219165;
	b3.reflect[8] = 0.006138;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = -0.665044;
	b4.reflect[1] = 0.615990;
	b4.reflect[2] = -0.275757;
	b4.reflect[3] = 0.284571;
	b4.reflect[4] = -0.261549;
	b4.reflect[5] = 0.429948;
	b4.reflect[6] = 0.010382;
	b4.reflect[7] = -0.258095;
	b4.reflect[8] = -0.009567;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = -0.731127;
	b5.reflect[1] = 0.695085;
	b5.reflect[2] = -0.292937;
	b5.reflect[3] = 0.303863;
	b5.reflect[4] = -0.106612;
	b5.reflect[5] = 0.343002;
	b5.reflect[6] = -0.059968;
	b5.reflect[7] = -0.281760;
	b5.reflect[8] = 0.046752;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = -0.705962;
	b6.reflect[1] = 0.655986;
	b6.reflect[2] = -0.360041;
	b6.reflect[3] = 0.251176;
	b6.reflect[4] = -0.091382;
	b6.reflect[5] = 0.396416;
	b6.reflect[6] = -0.113082;
	b6.reflect[7] = -0.238879;
	b6.reflect[8] = 0.053691;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = -0.698282;
	b7.reflect[1] = 0.657970;
	b7.reflect[2] = -0.369741;
	b7.reflect[3] = 0.240682;
	b7.reflect[4] = -0.022573;
	b7.reflect[5] = 0.451047;
	b7.reflect[6] = 0.043091;
	b7.reflect[7] = -0.330681;
	b7.reflect[8] = -0.090717;
	b7.energy = -1;

	version.subset[7] = b7;
 
	b8.reflect[0] = -0.678010;
	b8.reflect[1] = 0.650035;
	b8.reflect[2] = -0.385383;
	b8.reflect[3] = 0.198702;
	b8.reflect[4] = -0.087946;
	b8.reflect[5] = 0.393575;
	b8.reflect[6] = 0.095286;
	b8.reflect[7] = -0.315011;
	b8.reflect[8] = -0.077394;
	b8.energy = -1;

	version.subset[8] = b8;
 
	b9.reflect[0] = NaN;
	b9.reflect[1] = NaN;
	b9.reflect[2] = NaN;
	b9.reflect[3] = NaN;
	b9.reflect[4] = NaN;
	b9.reflect[5] = NaN;
	b9.reflect[6] = NaN;
	b9.reflect[7] = NaN;
	b9.reflect[8] = NaN;
	b9.energy = -1;

	version.subset[9] = b9;
 
	b10.reflect[0] = NaN;
	b10.reflect[1] = NaN;
	b10.reflect[2] = NaN;
	b10.reflect[3] = NaN;
	b10.reflect[4] = NaN;
	b10.reflect[5] = NaN;
	b10.reflect[6] = NaN;
	b10.reflect[7] = NaN;
	b10.reflect[8] = NaN;
	b10.energy = -1;

	version.subset[10] = b10;
 
	b11.reflect[0] = NaN;
	b11.reflect[1] = NaN;
	b11.reflect[2] = NaN;
	b11.reflect[3] = NaN;
	b11.reflect[4] = NaN;
	b11.reflect[5] = NaN;
	b11.reflect[6] = NaN;
	b11.reflect[7] = NaN;
	b11.reflect[8] = NaN;
	b11.energy = -1;

	version.subset[11] = b11;
 
	word.versions[4] = version;
 
	b0.reflect[0] = -0.593758;
	b0.reflect[1] = 0.264215;
	b0.reflect[2] = -0.155160;
	b0.reflect[3] = 0.307028;
	b0.reflect[4] = -0.314772;
	b0.reflect[5] = 0.549002;
	b0.reflect[6] = -0.326439;
	b0.reflect[7] = -0.123942;
	b0.reflect[8] = 0.513010;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.756514;
	b1.reflect[1] = 0.530446;
	b1.reflect[2] = -0.221025;
	b1.reflect[3] = 0.110178;
	b1.reflect[4] = -0.088908;
	b1.reflect[5] = 0.340427;
	b1.reflect[6] = -0.279591;
	b1.reflect[7] = -0.056602;
	b1.reflect[8] = 0.519273;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = -0.789674;
	b2.reflect[1] = 0.455695;
	b2.reflect[2] = -0.188612;
	b2.reflect[3] = 0.213080;
	b2.reflect[4] = -0.222224;
	b2.reflect[5] = 0.339094;
	b2.reflect[6] = -0.254711;
	b2.reflect[7] = -0.102574;
	b2.reflect[8] = 0.416860;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = -0.635045;
	b3.reflect[1] = 0.376692;
	b3.reflect[2] = -0.236299;
	b3.reflect[3] = 0.208499;
	b3.reflect[4] = -0.340103;
	b3.reflect[5] = 0.555096;
	b3.reflect[6] = -0.354187;
	b3.reflect[7] = -0.263696;
	b3.reflect[8] = 0.140275;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = -0.712614;
	b4.reflect[1] = 0.333063;
	b4.reflect[2] = -0.519519;
	b4.reflect[3] = 0.038812;
	b4.reflect[4] = -0.136816;
	b4.reflect[5] = 0.614269;
	b4.reflect[6] = -0.160322;
	b4.reflect[7] = -0.168520;
	b4.reflect[8] = 0.280965;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = -0.823828;
	b5.reflect[1] = 0.305012;
	b5.reflect[2] = -0.284685;
	b5.reflect[3] = 0.234925;
	b5.reflect[4] = -0.211868;
	b5.reflect[5] = 0.591993;
	b5.reflect[6] = -0.425834;
	b5.reflect[7] = 0.094166;
	b5.reflect[8] = 0.180510;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = -0.844382;
	b6.reflect[1] = 0.440052;
	b6.reflect[2] = -0.349022;
	b6.reflect[3] = 0.242737;
	b6.reflect[4] = -0.120038;
	b6.reflect[5] = 0.318117;
	b6.reflect[6] = -0.128107;
	b6.reflect[7] = -0.029994;
	b6.reflect[8] = 0.260489;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = -0.498266;
	b7.reflect[1] = -0.177807;
	b7.reflect[2] = -0.578723;
	b7.reflect[3] = 0.405838;
	b7.reflect[4] = -0.012468;
	b7.reflect[5] = 0.298534;
	b7.reflect[6] = 0.125389;
	b7.reflect[7] = 0.137022;
	b7.reflect[8] = 0.058305;
	b7.energy = -1;

	version.subset[7] = b7;
 
	b8.reflect[0] = -0.138326;
	b8.reflect[1] = 0.008524;
	b8.reflect[2] = -0.752639;
	b8.reflect[3] = 0.536565;
	b8.reflect[4] = 0.183895;
	b8.reflect[5] = 0.537413;
	b8.reflect[6] = -0.193921;
	b8.reflect[7] = 0.058833;
	b8.reflect[8] = -0.003283;
	b8.energy = -1;

	version.subset[8] = b8;
 
	b9.reflect[0] = -0.028827;
	b9.reflect[1] = 0.151042;
	b9.reflect[2] = -0.647063;
	b9.reflect[3] = 0.394735;
	b9.reflect[4] = 0.030420;
	b9.reflect[5] = 0.525646;
	b9.reflect[6] = -0.047203;
	b9.reflect[7] = -0.120922;
	b9.reflect[8] = 0.102985;
	b9.energy = -1;

	version.subset[9] = b9;
 
	b10.reflect[0] = 0.000300;
	b10.reflect[1] = 0.120743;
	b10.reflect[2] = -0.267328;
	b10.reflect[3] = 0.241027;
	b10.reflect[4] = -0.052304;
	b10.reflect[5] = 0.337799;
	b10.reflect[6] = -0.046671;
	b10.reflect[7] = -0.016697;
	b10.reflect[8] = 0.016443;
	b10.energy = -1;

	version.subset[10] = b10;
 
	b11.reflect[0] = 0.000000;
	b11.reflect[1] = 0.000000;
	b11.reflect[2] = 0.000000;
	b11.reflect[3] = 0.000000;
	b11.reflect[4] = 0.000000;
	b11.reflect[5] = 0.000000;
	b11.reflect[6] = 0.000000;
	b11.reflect[7] = 0.000000;
	b11.reflect[8] = 0.000000;
	b11.energy = -1;

	version.subset[11] = b11;
 
	word.versions[5] = version;
 
	word.name = "right";
 
	db.words[0] = word;
 
	b0.reflect[0] = -0.829639;
	b0.reflect[1] = -0.117953;
	b0.reflect[2] = -0.154491;
	b0.reflect[3] = 0.235716;
	b0.reflect[4] = 0.029038;
	b0.reflect[5] = 0.187732;
	b0.reflect[6] = 0.013591;
	b0.reflect[7] = 0.078886;
	b0.reflect[8] = 0.031569;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.850694;
	b1.reflect[1] = -0.108150;
	b1.reflect[2] = -0.092738;
	b1.reflect[3] = 0.164401;
	b1.reflect[4] = -0.008103;
	b1.reflect[5] = 0.099976;
	b1.reflect[6] = -0.009331;
	b1.reflect[7] = 0.087596;
	b1.reflect[8] = -0.039418;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = -0.896043;
	b2.reflect[1] = -0.097023;
	b2.reflect[2] = -0.183786;
	b2.reflect[3] = 0.245662;
	b2.reflect[4] = 0.042467;
	b2.reflect[5] = 0.157670;
	b2.reflect[6] = -0.070928;
	b2.reflect[7] = 0.055973;
	b2.reflect[8] = 0.041197;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = -0.787154;
	b3.reflect[1] = -0.065623;
	b3.reflect[2] = -0.133405;
	b3.reflect[3] = 0.117426;
	b3.reflect[4] = 0.065661;
	b3.reflect[5] = 0.167901;
	b3.reflect[6] = 0.004765;
	b3.reflect[7] = 0.010042;
	b3.reflect[8] = -0.111682;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = -0.668605;
	b4.reflect[1] = -0.078734;
	b4.reflect[2] = -0.089612;
	b4.reflect[3] = 0.185068;
	b4.reflect[4] = -0.011819;
	b4.reflect[5] = 0.110831;
	b4.reflect[6] = 0.038921;
	b4.reflect[7] = 0.058490;
	b4.reflect[8] = -0.016096;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = -0.530561;
	b5.reflect[1] = -0.080517;
	b5.reflect[2] = -0.117084;
	b5.reflect[3] = 0.087926;
	b5.reflect[4] = 0.035997;
	b5.reflect[5] = 0.092426;
	b5.reflect[6] = -0.003540;
	b5.reflect[7] = 0.090287;
	b5.reflect[8] = 0.010532;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = -0.393218;
	b6.reflect[1] = -0.039498;
	b6.reflect[2] = -0.051930;
	b6.reflect[3] = 0.091143;
	b6.reflect[4] = -0.044320;
	b6.reflect[5] = 0.032748;
	b6.reflect[6] = -0.027933;
	b6.reflect[7] = 0.102456;
	b6.reflect[8] = 0.013511;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = -0.252566;
	b7.reflect[1] = -0.023339;
	b7.reflect[2] = -0.088950;
	b7.reflect[3] = 0.038792;
	b7.reflect[4] = -0.004817;
	b7.reflect[5] = 0.051667;
	b7.reflect[6] = -0.034415;
	b7.reflect[7] = 0.037750;
	b7.reflect[8] = -0.022763;
	b7.energy = -1;

	version.subset[7] = b7;
 
	b8.reflect[0] = -0.134544;
	b8.reflect[1] = 0.010701;
	b8.reflect[2] = 0.007953;
	b8.reflect[3] = 0.048005;
	b8.reflect[4] = 0.027714;
	b8.reflect[5] = 0.038578;
	b8.reflect[6] = 0.000205;
	b8.reflect[7] = 0.035826;
	b8.reflect[8] = -0.015622;
	b8.energy = -1;

	version.subset[8] = b8;
 
	b9.reflect[0] = 0.000000;
	b9.reflect[1] = 0.000000;
	b9.reflect[2] = 0.000000;
	b9.reflect[3] = 0.000000;
	b9.reflect[4] = 0.000000;
	b9.reflect[5] = 0.000000;
	b9.reflect[6] = 0.000000;
	b9.reflect[7] = 0.000000;
	b9.reflect[8] = 0.000000;
	b9.energy = -1;

	version.subset[9] = b9;
 
	b10.reflect[0] = 0.000000;
	b10.reflect[1] = 0.000000;
	b10.reflect[2] = 0.000000;
	b10.reflect[3] = 0.000000;
	b10.reflect[4] = 0.000000;
	b10.reflect[5] = 0.000000;
	b10.reflect[6] = 0.000000;
	b10.reflect[7] = 0.000000;
	b10.reflect[8] = 0.000000;
	b10.energy = -1;

	version.subset[10] = b10;
 
	b11.reflect[0] = 0.000000;
	b11.reflect[1] = 0.000000;
	b11.reflect[2] = 0.000000;
	b11.reflect[3] = 0.000000;
	b11.reflect[4] = 0.000000;
	b11.reflect[5] = 0.000000;
	b11.reflect[6] = 0.000000;
	b11.reflect[7] = 0.000000;
	b11.reflect[8] = 0.000000;
	b11.energy = -1;

	version.subset[11] = b11;
 
	word.versions[0] = version;
 
	b0.reflect[0] = -0.628733;
	b0.reflect[1] = 0.325416;
	b0.reflect[2] = -0.526303;
	b0.reflect[3] = 0.284939;
	b0.reflect[4] = 0.218671;
	b0.reflect[5] = 0.297338;
	b0.reflect[6] = -0.297278;
	b0.reflect[7] = 0.029655;
	b0.reflect[8] = -0.207106;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.947230;
	b1.reflect[1] = 0.417303;
	b1.reflect[2] = -0.132205;
	b1.reflect[3] = 0.326867;
	b1.reflect[4] = 0.333258;
	b1.reflect[5] = 0.426519;
	b1.reflect[6] = -0.427836;
	b1.reflect[7] = 0.138493;
	b1.reflect[8] = -0.293036;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = -0.971331;
	b2.reflect[1] = 0.537267;
	b2.reflect[2] = 0.081146;
	b2.reflect[3] = 0.365216;
	b2.reflect[4] = 0.207240;
	b2.reflect[5] = 0.391154;
	b2.reflect[6] = -0.402856;
	b2.reflect[7] = 0.006438;
	b2.reflect[8] = -0.095921;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = -0.838954;
	b3.reflect[1] = -0.033876;
	b3.reflect[2] = -0.344607;
	b3.reflect[3] = 0.116095;
	b3.reflect[4] = 0.271929;
	b3.reflect[5] = 0.326813;
	b3.reflect[6] = 0.058593;
	b3.reflect[7] = 0.052375;
	b3.reflect[8] = -0.059874;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = -0.898719;
	b4.reflect[1] = -0.086562;
	b4.reflect[2] = -0.252675;
	b4.reflect[3] = 0.171621;
	b4.reflect[4] = 0.016274;
	b4.reflect[5] = 0.202466;
	b4.reflect[6] = -0.011314;
	b4.reflect[7] = 0.078592;
	b4.reflect[8] = -0.040541;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = -0.791988;
	b5.reflect[1] = 0.117415;
	b5.reflect[2] = -0.206263;
	b5.reflect[3] = 0.163796;
	b5.reflect[4] = 0.099693;
	b5.reflect[5] = 0.279304;
	b5.reflect[6] = -0.092535;
	b5.reflect[7] = 0.024752;
	b5.reflect[8] = -0.169925;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = -0.500700;
	b6.reflect[1] = 0.404752;
	b6.reflect[2] = -0.402117;
	b6.reflect[3] = 0.228285;
	b6.reflect[4] = 0.162644;
	b6.reflect[5] = 0.348037;
	b6.reflect[6] = -0.340466;
	b6.reflect[7] = 0.092367;
	b6.reflect[8] = -0.126170;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = 0.175417;
	b7.reflect[1] = -0.419667;
	b7.reflect[2] = -0.314044;
	b7.reflect[3] = 0.231870;
	b7.reflect[4] = -0.016440;
	b7.reflect[5] = 0.197787;
	b7.reflect[6] = -0.048343;
	b7.reflect[7] = 0.077230;
	b7.reflect[8] = -0.100070;
	b7.energy = -1;

	version.subset[7] = b7;
 
	b8.reflect[0] = 0.310666;
	b8.reflect[1] = -0.132332;
	b8.reflect[2] = -0.308363;
	b8.reflect[3] = 0.023795;
	b8.reflect[4] = -0.115749;
	b8.reflect[5] = 0.032968;
	b8.reflect[6] = 0.006494;
	b8.reflect[7] = 0.168475;
	b8.reflect[8] = -0.027670;
	b8.energy = -1;

	version.subset[8] = b8;
 
	b9.reflect[0] = -0.155299;
	b9.reflect[1] = -0.125334;
	b9.reflect[2] = -0.106339;
	b9.reflect[3] = 0.038752;
	b9.reflect[4] = -0.040595;
	b9.reflect[5] = 0.042317;
	b9.reflect[6] = 0.016785;
	b9.reflect[7] = 0.065665;
	b9.reflect[8] = -0.049494;
	b9.energy = -1;

	version.subset[9] = b9;
 
	b10.reflect[0] = -0.104693;
	b10.reflect[1] = -0.074101;
	b10.reflect[2] = -0.011520;
	b10.reflect[3] = 0.028105;
	b10.reflect[4] = -0.029034;
	b10.reflect[5] = 0.049733;
	b10.reflect[6] = -0.005853;
	b10.reflect[7] = 0.034668;
	b10.reflect[8] = -0.003464;
	b10.energy = -1;

	version.subset[10] = b10;
 
	b11.reflect[0] = 0.000000;
	b11.reflect[1] = 0.000000;
	b11.reflect[2] = 0.000000;
	b11.reflect[3] = 0.000000;
	b11.reflect[4] = 0.000000;
	b11.reflect[5] = 0.000000;
	b11.reflect[6] = 0.000000;
	b11.reflect[7] = 0.000000;
	b11.reflect[8] = 0.000000;
	b11.energy = -1;

	version.subset[11] = b11;
 
	word.versions[1] = version;
 
	b0.reflect[0] = -0.585885;
	b0.reflect[1] = 0.145169;
	b0.reflect[2] = -0.374095;
	b0.reflect[3] = 0.281513;
	b0.reflect[4] = 0.135485;
	b0.reflect[5] = 0.382126;
	b0.reflect[6] = -0.416289;
	b0.reflect[7] = 0.043738;
	b0.reflect[8] = -0.035488;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.807842;
	b1.reflect[1] = 0.203624;
	b1.reflect[2] = -0.187283;
	b1.reflect[3] = 0.203000;
	b1.reflect[4] = 0.091768;
	b1.reflect[5] = 0.448220;
	b1.reflect[6] = -0.497950;
	b1.reflect[7] = 0.105077;
	b1.reflect[8] = -0.109958;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = -0.929671;
	b2.reflect[1] = 0.342077;
	b2.reflect[2] = 0.003583;
	b2.reflect[3] = 0.292306;
	b2.reflect[4] = 0.108128;
	b2.reflect[5] = 0.487648;
	b2.reflect[6] = -0.441136;
	b2.reflect[7] = 0.125973;
	b2.reflect[8] = -0.129838;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = -0.929201;
	b3.reflect[1] = 0.169353;
	b3.reflect[2] = -0.096162;
	b3.reflect[3] = 0.362142;
	b3.reflect[4] = 0.073296;
	b3.reflect[5] = 0.219247;
	b3.reflect[6] = -0.123173;
	b3.reflect[7] = 0.174338;
	b3.reflect[8] = 0.051760;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = -0.752775;
	b4.reflect[1] = -0.048065;
	b4.reflect[2] = -0.129761;
	b4.reflect[3] = 0.180384;
	b4.reflect[4] = 0.079279;
	b4.reflect[5] = 0.212445;
	b4.reflect[6] = -0.071615;
	b4.reflect[7] = 0.107047;
	b4.reflect[8] = 0.025858;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = -0.597071;
	b5.reflect[1] = -0.011978;
	b5.reflect[2] = -0.161635;
	b5.reflect[3] = 0.147028;
	b5.reflect[4] = 0.057860;
	b5.reflect[5] = 0.281511;
	b5.reflect[6] = -0.090587;
	b5.reflect[7] = 0.046912;
	b5.reflect[8] = 0.021487;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = -0.412783;
	b6.reflect[1] = 0.206587;
	b6.reflect[2] = -0.166098;
	b6.reflect[3] = 0.151337;
	b6.reflect[4] = 0.079497;
	b6.reflect[5] = 0.253791;
	b6.reflect[6] = -0.213685;
	b6.reflect[7] = 0.035664;
	b6.reflect[8] = 0.015983;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = -0.378910;
	b7.reflect[1] = 0.039081;
	b7.reflect[2] = 0.023861;
	b7.reflect[3] = 0.141500;
	b7.reflect[4] = -0.015169;
	b7.reflect[5] = 0.193253;
	b7.reflect[6] = 0.024273;
	b7.reflect[7] = -0.101386;
	b7.reflect[8] = -0.033391;
	b7.energy = -1;

	version.subset[7] = b7;
 
	b8.reflect[0] = -0.199163;
	b8.reflect[1] = -0.144391;
	b8.reflect[2] = -0.137036;
	b8.reflect[3] = 0.167726;
	b8.reflect[4] = 0.102483;
	b8.reflect[5] = 0.063813;
	b8.reflect[6] = 0.055839;
	b8.reflect[7] = 0.100641;
	b8.reflect[8] = -0.056930;
	b8.energy = -1;

	version.subset[8] = b8;
 
	b9.reflect[0] = -0.115567;
	b9.reflect[1] = -0.029020;
	b9.reflect[2] = -0.039450;
	b9.reflect[3] = 0.016749;
	b9.reflect[4] = -0.019004;
	b9.reflect[5] = 0.031036;
	b9.reflect[6] = 0.018385;
	b9.reflect[7] = 0.013515;
	b9.reflect[8] = -0.016222;
	b9.energy = -1;

	version.subset[9] = b9;
 
	b10.reflect[0] = 0.000000;
	b10.reflect[1] = 0.000000;
	b10.reflect[2] = 0.000000;
	b10.reflect[3] = 0.000000;
	b10.reflect[4] = 0.000000;
	b10.reflect[5] = 0.000000;
	b10.reflect[6] = 0.000000;
	b10.reflect[7] = 0.000000;
	b10.reflect[8] = 0.000000;
	b10.energy = -1;

	version.subset[10] = b10;
 
	b11.reflect[0] = 0.000000;
	b11.reflect[1] = 0.000000;
	b11.reflect[2] = 0.000000;
	b11.reflect[3] = 0.000000;
	b11.reflect[4] = 0.000000;
	b11.reflect[5] = 0.000000;
	b11.reflect[6] = 0.000000;
	b11.reflect[7] = 0.000000;
	b11.reflect[8] = 0.000000;
	b11.energy = -1;

	version.subset[11] = b11;
 
	word.versions[2] = version;
 
	b0.reflect[0] = -0.250432;
	b0.reflect[1] = 0.409064;
	b0.reflect[2] = -0.342905;
	b0.reflect[3] = 0.057029;
	b0.reflect[4] = -0.065564;
	b0.reflect[5] = 0.695102;
	b0.reflect[6] = -0.422794;
	b0.reflect[7] = 0.207105;
	b0.reflect[8] = 0.075835;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.293145;
	b1.reflect[1] = 0.351946;
	b1.reflect[2] = -0.363776;
	b1.reflect[3] = 0.078263;
	b1.reflect[4] = 0.025134;
	b1.reflect[5] = 0.695858;
	b1.reflect[6] = -0.443132;
	b1.reflect[7] = 0.291791;
	b1.reflect[8] = -0.017439;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = -0.459039;
	b2.reflect[1] = 0.172966;
	b2.reflect[2] = -0.288986;
	b2.reflect[3] = 0.180758;
	b2.reflect[4] = 0.087437;
	b2.reflect[5] = 0.640350;
	b2.reflect[6] = -0.461934;
	b2.reflect[7] = 0.273443;
	b2.reflect[8] = -0.184031;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = -0.693608;
	b3.reflect[1] = 0.145125;
	b3.reflect[2] = -0.242888;
	b3.reflect[3] = 0.292996;
	b3.reflect[4] = 0.147861;
	b3.reflect[5] = 0.544811;
	b3.reflect[6] = -0.463087;
	b3.reflect[7] = 0.230512;
	b3.reflect[8] = -0.238506;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = -0.833055;
	b4.reflect[1] = 0.214186;
	b4.reflect[2] = -0.210595;
	b4.reflect[3] = 0.361129;
	b4.reflect[4] = 0.209838;
	b4.reflect[5] = 0.530383;
	b4.reflect[6] = -0.445486;
	b4.reflect[7] = 0.416265;
	b4.reflect[8] = -0.182941;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = -0.955290;
	b5.reflect[1] = 0.805905;
	b5.reflect[2] = -0.044034;
	b5.reflect[3] = 0.469125;
	b5.reflect[4] = 0.032624;
	b5.reflect[5] = 0.104519;
	b5.reflect[6] = -0.263986;
	b5.reflect[7] = 0.279774;
	b5.reflect[8] = 0.245547;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = -0.963843;
	b6.reflect[1] = 0.788977;
	b6.reflect[2] = 0.185282;
	b6.reflect[3] = 0.471803;
	b6.reflect[4] = 0.158998;
	b6.reflect[5] = 0.144878;
	b6.reflect[6] = -0.150307;
	b6.reflect[7] = 0.154927;
	b6.reflect[8] = 0.167165;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = -0.970037;
	b7.reflect[1] = 0.909278;
	b7.reflect[2] = 0.249439;
	b7.reflect[3] = 0.622710;
	b7.reflect[4] = -0.049870;
	b7.reflect[5] = 0.147800;
	b7.reflect[6] = -0.422646;
	b7.reflect[7] = 0.265740;
	b7.reflect[8] = 0.050804;
	b7.energy = -1;

	version.subset[7] = b7;
 
	b8.reflect[0] = -0.971892;
	b8.reflect[1] = 0.898426;
	b8.reflect[2] = 0.359575;
	b8.reflect[3] = 0.413315;
	b8.reflect[4] = 0.021233;
	b8.reflect[5] = 0.200310;
	b8.reflect[6] = -0.266403;
	b8.reflect[7] = -0.011771;
	b8.reflect[8] = 0.183424;
	b8.energy = -1;

	version.subset[8] = b8;
 
	b9.reflect[0] = -0.974488;
	b9.reflect[1] = 0.903502;
	b9.reflect[2] = 0.464128;
	b9.reflect[3] = 0.604124;
	b9.reflect[4] = -0.256645;
	b9.reflect[5] = 0.337887;
	b9.reflect[6] = -0.408753;
	b9.reflect[7] = 0.142007;
	b9.reflect[8] = -0.255532;
	b9.energy = -1;

	version.subset[9] = b9;
 
	b10.reflect[0] = -0.973703;
	b10.reflect[1] = 0.847300;
	b10.reflect[2] = 0.384419;
	b10.reflect[3] = 0.463608;
	b10.reflect[4] = 0.021988;
	b10.reflect[5] = 0.165958;
	b10.reflect[6] = -0.016985;
	b10.reflect[7] = -0.197082;
	b10.reflect[8] = 0.077814;
	b10.energy = -1;

	version.subset[10] = b10;
 
	b11.reflect[0] = NaN;
	b11.reflect[1] = NaN;
	b11.reflect[2] = NaN;
	b11.reflect[3] = NaN;
	b11.reflect[4] = NaN;
	b11.reflect[5] = NaN;
	b11.reflect[6] = NaN;
	b11.reflect[7] = NaN;
	b11.reflect[8] = NaN;
	b11.energy = -1;

	version.subset[11] = b11;
 
	word.versions[3] = version;
 
	b0.reflect[0] = -0.323758;
	b0.reflect[1] = 0.377886;
	b0.reflect[2] = -0.346616;
	b0.reflect[3] = 0.132942;
	b0.reflect[4] = -0.067296;
	b0.reflect[5] = 0.783163;
	b0.reflect[6] = -0.310920;
	b0.reflect[7] = 0.212459;
	b0.reflect[8] = -0.012649;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.249603;
	b1.reflect[1] = 0.313102;
	b1.reflect[2] = -0.269294;
	b1.reflect[3] = 0.174361;
	b1.reflect[4] = -0.125094;
	b1.reflect[5] = 0.805457;
	b1.reflect[6] = -0.191362;
	b1.reflect[7] = 0.232417;
	b1.reflect[8] = 0.054968;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = -0.275484;
	b2.reflect[1] = 0.264316;
	b2.reflect[2] = -0.224629;
	b2.reflect[3] = 0.205240;
	b2.reflect[4] = -0.059232;
	b2.reflect[5] = 0.781339;
	b2.reflect[6] = -0.216657;
	b2.reflect[7] = 0.292361;
	b2.reflect[8] = -0.011942;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = -0.297020;
	b3.reflect[1] = 0.264436;
	b3.reflect[2] = -0.202330;
	b3.reflect[3] = 0.183225;
	b3.reflect[4] = -0.027862;
	b3.reflect[5] = 0.757730;
	b3.reflect[6] = -0.305837;
	b3.reflect[7] = 0.372988;
	b3.reflect[8] = -0.133483;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = -0.371208;
	b4.reflect[1] = 0.207278;
	b4.reflect[2] = -0.207249;
	b4.reflect[3] = 0.200472;
	b4.reflect[4] = -0.063829;
	b4.reflect[5] = 0.720760;
	b4.reflect[6] = -0.408895;
	b4.reflect[7] = 0.323018;
	b4.reflect[8] = -0.142068;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = -0.666432;
	b5.reflect[1] = 0.270236;
	b5.reflect[2] = -0.180824;
	b5.reflect[3] = 0.330498;
	b5.reflect[4] = 0.059653;
	b5.reflect[5] = 0.656244;
	b5.reflect[6] = -0.535414;
	b5.reflect[7] = 0.245381;
	b5.reflect[8] = -0.129342;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = -0.827125;
	b6.reflect[1] = 0.296347;
	b6.reflect[2] = -0.160653;
	b6.reflect[3] = 0.394858;
	b6.reflect[4] = 0.053895;
	b6.reflect[5] = 0.402744;
	b6.reflect[6] = -0.408293;
	b6.reflect[7] = 0.049744;
	b6.reflect[8] = 0.012904;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = -0.955512;
	b7.reflect[1] = 0.615917;
	b7.reflect[2] = 0.080633;
	b7.reflect[3] = 0.564916;
	b7.reflect[4] = 0.208747;
	b7.reflect[5] = 0.507765;
	b7.reflect[6] = -0.377720;
	b7.reflect[7] = 0.200937;
	b7.reflect[8] = -0.094279;
	b7.energy = -1;

	version.subset[7] = b7;
 
	b8.reflect[0] = -0.963401;
	b8.reflect[1] = 0.734465;
	b8.reflect[2] = 0.263733;
	b8.reflect[3] = 0.448914;
	b8.reflect[4] = -0.077005;
	b8.reflect[5] = 0.280480;
	b8.reflect[6] = -0.362810;
	b8.reflect[7] = 0.255193;
	b8.reflect[8] = 0.272209;
	b8.energy = -1;

	version.subset[8] = b8;
 
	b9.reflect[0] = -0.971104;
	b9.reflect[1] = 0.857378;
	b9.reflect[2] = 0.106639;
	b9.reflect[3] = 0.407611;
	b9.reflect[4] = 0.032579;
	b9.reflect[5] = 0.456864;
	b9.reflect[6] = -0.317884;
	b9.reflect[7] = 0.160557;
	b9.reflect[8] = 0.106973;
	b9.energy = -1;

	version.subset[9] = b9;
 
	b10.reflect[0] = -0.970383;
	b10.reflect[1] = 0.743698;
	b10.reflect[2] = 0.271598;
	b10.reflect[3] = 0.416829;
	b10.reflect[4] = 0.164360;
	b10.reflect[5] = 0.316798;
	b10.reflect[6] = -0.219019;
	b10.reflect[7] = -0.038993;
	b10.reflect[8] = 0.277548;
	b10.energy = -1;

	version.subset[10] = b10;
 
	b11.reflect[0] = NaN;
	b11.reflect[1] = NaN;
	b11.reflect[2] = NaN;
	b11.reflect[3] = NaN;
	b11.reflect[4] = NaN;
	b11.reflect[5] = NaN;
	b11.reflect[6] = NaN;
	b11.reflect[7] = NaN;
	b11.reflect[8] = NaN;
	b11.energy = -1;

	version.subset[11] = b11;
 
	word.versions[4] = version;
 
	b0.reflect[0] = -0.602392;
	b0.reflect[1] = -0.167925;
	b0.reflect[2] = -0.194668;
	b0.reflect[3] = 0.161989;
	b0.reflect[4] = -0.040129;
	b0.reflect[5] = 0.185391;
	b0.reflect[6] = -0.032770;
	b0.reflect[7] = 0.067684;
	b0.reflect[8] = -0.010628;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.626316;
	b1.reflect[1] = -0.114197;
	b1.reflect[2] = -0.244296;
	b1.reflect[3] = 0.199481;
	b1.reflect[4] = 0.020399;
	b1.reflect[5] = 0.121346;
	b1.reflect[6] = -0.064948;
	b1.reflect[7] = 0.068237;
	b1.reflect[8] = 0.002871;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = -0.628873;
	b2.reflect[1] = -0.052102;
	b2.reflect[2] = -0.173134;
	b2.reflect[3] = 0.080632;
	b2.reflect[4] = 0.003098;
	b2.reflect[5] = 0.158153;
	b2.reflect[6] = 0.015030;
	b2.reflect[7] = 0.032998;
	b2.reflect[8] = 0.051731;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = -0.606899;
	b3.reflect[1] = -0.046382;
	b3.reflect[2] = -0.154217;
	b3.reflect[3] = 0.161701;
	b3.reflect[4] = -0.075325;
	b3.reflect[5] = 0.127091;
	b3.reflect[6] = -0.106786;
	b3.reflect[7] = 0.147115;
	b3.reflect[8] = 0.021016;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = -0.667712;
	b4.reflect[1] = -0.083681;
	b4.reflect[2] = -0.123600;
	b4.reflect[3] = 0.237767;
	b4.reflect[4] = -0.029423;
	b4.reflect[5] = 0.207340;
	b4.reflect[6] = -0.037806;
	b4.reflect[7] = 0.136116;
	b4.reflect[8] = -0.033961;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = -0.660299;
	b5.reflect[1] = -0.091419;
	b5.reflect[2] = -0.236009;
	b5.reflect[3] = 0.279296;
	b5.reflect[4] = 0.066741;
	b5.reflect[5] = 0.195478;
	b5.reflect[6] = -0.020581;
	b5.reflect[7] = 0.104963;
	b5.reflect[8] = 0.039040;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = -0.510136;
	b6.reflect[1] = 0.459809;
	b6.reflect[2] = -0.206420;
	b6.reflect[3] = 0.183543;
	b6.reflect[4] = -0.007942;
	b6.reflect[5] = 0.412613;
	b6.reflect[6] = 0.058968;
	b6.reflect[7] = 0.113449;
	b6.reflect[8] = 0.083524;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = -0.667876;
	b7.reflect[1] = 0.247911;
	b7.reflect[2] = -0.023377;
	b7.reflect[3] = 0.438858;
	b7.reflect[4] = 0.001737;
	b7.reflect[5] = 0.527526;
	b7.reflect[6] = -0.304164;
	b7.reflect[7] = 0.105082;
	b7.reflect[8] = 0.052574;
	b7.energy = -1;

	version.subset[7] = b7;
 
	b8.reflect[0] = -0.908632;
	b8.reflect[1] = 0.358366;
	b8.reflect[2] = 0.135136;
	b8.reflect[3] = 0.455474;
	b8.reflect[4] = -0.094383;
	b8.reflect[5] = 0.312972;
	b8.reflect[6] = -0.241474;
	b8.reflect[7] = 0.152574;
	b8.reflect[8] = 0.045743;
	b8.energy = -1;

	version.subset[8] = b8;
 
	b9.reflect[0] = -0.577115;
	b9.reflect[1] = -0.114355;
	b9.reflect[2] = -0.262863;
	b9.reflect[3] = 0.093343;
	b9.reflect[4] = -0.087490;
	b9.reflect[5] = 0.353107;
	b9.reflect[6] = 0.044608;
	b9.reflect[7] = 0.020607;
	b9.reflect[8] = 0.073478;
	b9.energy = -1;

	version.subset[9] = b9;
 
	b10.reflect[0] = -0.197805;
	b10.reflect[1] = 0.183239;
	b10.reflect[2] = -0.215746;
	b10.reflect[3] = -0.000545;
	b10.reflect[4] = -0.188295;
	b10.reflect[5] = 0.477366;
	b10.reflect[6] = -0.088613;
	b10.reflect[7] = 0.039878;
	b10.reflect[8] = -0.036576;
	b10.energy = -1;

	version.subset[10] = b10;
 
	b11.reflect[0] = -0.041164;
	b11.reflect[1] = 0.284494;
	b11.reflect[2] = -0.113172;
	b11.reflect[3] = -0.014721;
	b11.reflect[4] = -0.199980;
	b11.reflect[5] = 0.457526;
	b11.reflect[6] = 0.032924;
	b11.reflect[7] = 0.043520;
	b11.reflect[8] = -0.047659;
	b11.energy = -1;

	version.subset[11] = b11;
 
	word.versions[5] = version;
 
	word.name = "left";
 
	db.words[1] = word;
 
	*current_db = db; 
	return; 
} 
