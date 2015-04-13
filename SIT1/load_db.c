#include "load_db.h" 

#define NaN	0 

void load_db(db_t* current_db){

	block_t b0, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11; 
	version_t version; 
	word_t word; 
	db_t db; 
	b0.reflect[0] = -0.792132;
	b0.reflect[1] = 0.417268;
	b0.reflect[2] = -0.573587;
	b0.reflect[3] = 0.730052;
	b0.reflect[4] = 0.167607;
	b0.reflect[5] = 0.097804;
	b0.reflect[6] = -0.055329;
	b0.reflect[7] = 0.125155;
	b0.reflect[8] = -0.301427;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.694117;
	b1.reflect[1] = 0.386800;
	b1.reflect[2] = -0.592053;
	b1.reflect[3] = 0.654408;
	b1.reflect[4] = 0.111829;
	b1.reflect[5] = 0.249844;
	b1.reflect[6] = -0.095709;
	b1.reflect[7] = 0.165284;
	b1.reflect[8] = -0.429121;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = -0.717401;
	b2.reflect[1] = 0.383671;
	b2.reflect[2] = -0.220681;
	b2.reflect[3] = 0.484747;
	b2.reflect[4] = -0.003242;
	b2.reflect[5] = 0.344472;
	b2.reflect[6] = -0.173467;
	b2.reflect[7] = 0.141810;
	b2.reflect[8] = -0.288945;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = -0.683773;
	b3.reflect[1] = 0.346347;
	b3.reflect[2] = -0.154034;
	b3.reflect[3] = 0.540465;
	b3.reflect[4] = -0.284931;
	b3.reflect[5] = 0.406392;
	b3.reflect[6] = -0.180712;
	b3.reflect[7] = 0.032722;
	b3.reflect[8] = 0.019502;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = 0.000000;
	b4.reflect[1] = 0.000000;
	b4.reflect[2] = 0.000000;
	b4.reflect[3] = 0.000000;
	b4.reflect[4] = 0.000000;
	b4.reflect[5] = 0.000000;
	b4.reflect[6] = 0.000000;
	b4.reflect[7] = 0.000000;
	b4.reflect[8] = 0.000000;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = 0.000000;
	b5.reflect[1] = 0.000000;
	b5.reflect[2] = 0.000000;
	b5.reflect[3] = 0.000000;
	b5.reflect[4] = 0.000000;
	b5.reflect[5] = 0.000000;
	b5.reflect[6] = 0.000000;
	b5.reflect[7] = 0.000000;
	b5.reflect[8] = 0.000000;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = 0.000000;
	b6.reflect[1] = 0.000000;
	b6.reflect[2] = 0.000000;
	b6.reflect[3] = 0.000000;
	b6.reflect[4] = 0.000000;
	b6.reflect[5] = 0.000000;
	b6.reflect[6] = 0.000000;
	b6.reflect[7] = 0.000000;
	b6.reflect[8] = 0.000000;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = 0.000000;
	b7.reflect[1] = 0.000000;
	b7.reflect[2] = 0.000000;
	b7.reflect[3] = 0.000000;
	b7.reflect[4] = 0.000000;
	b7.reflect[5] = 0.000000;
	b7.reflect[6] = 0.000000;
	b7.reflect[7] = 0.000000;
	b7.reflect[8] = 0.000000;
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
 
	b0.reflect[0] = -0.761171;
	b0.reflect[1] = 0.380880;
	b0.reflect[2] = -0.483219;
	b0.reflect[3] = 0.688992;
	b0.reflect[4] = 0.198635;
	b0.reflect[5] = 0.179518;
	b0.reflect[6] = -0.149917;
	b0.reflect[7] = 0.298317;
	b0.reflect[8] = -0.472553;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.742689;
	b1.reflect[1] = 0.331181;
	b1.reflect[2] = -0.304722;
	b1.reflect[3] = 0.448902;
	b1.reflect[4] = 0.097912;
	b1.reflect[5] = 0.297808;
	b1.reflect[6] = -0.176884;
	b1.reflect[7] = 0.314570;
	b1.reflect[8] = -0.351336;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = 0.000000;
	b2.reflect[1] = 0.000000;
	b2.reflect[2] = 0.000000;
	b2.reflect[3] = 0.000000;
	b2.reflect[4] = 0.000000;
	b2.reflect[5] = 0.000000;
	b2.reflect[6] = 0.000000;
	b2.reflect[7] = 0.000000;
	b2.reflect[8] = 0.000000;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = 0.000000;
	b3.reflect[1] = 0.000000;
	b3.reflect[2] = 0.000000;
	b3.reflect[3] = 0.000000;
	b3.reflect[4] = 0.000000;
	b3.reflect[5] = 0.000000;
	b3.reflect[6] = 0.000000;
	b3.reflect[7] = 0.000000;
	b3.reflect[8] = 0.000000;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = 0.000000;
	b4.reflect[1] = 0.000000;
	b4.reflect[2] = 0.000000;
	b4.reflect[3] = 0.000000;
	b4.reflect[4] = 0.000000;
	b4.reflect[5] = 0.000000;
	b4.reflect[6] = 0.000000;
	b4.reflect[7] = 0.000000;
	b4.reflect[8] = 0.000000;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = 0.000000;
	b5.reflect[1] = 0.000000;
	b5.reflect[2] = 0.000000;
	b5.reflect[3] = 0.000000;
	b5.reflect[4] = 0.000000;
	b5.reflect[5] = 0.000000;
	b5.reflect[6] = 0.000000;
	b5.reflect[7] = 0.000000;
	b5.reflect[8] = 0.000000;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = 0.000000;
	b6.reflect[1] = 0.000000;
	b6.reflect[2] = 0.000000;
	b6.reflect[3] = 0.000000;
	b6.reflect[4] = 0.000000;
	b6.reflect[5] = 0.000000;
	b6.reflect[6] = 0.000000;
	b6.reflect[7] = 0.000000;
	b6.reflect[8] = 0.000000;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = 0.000000;
	b7.reflect[1] = 0.000000;
	b7.reflect[2] = 0.000000;
	b7.reflect[3] = 0.000000;
	b7.reflect[4] = 0.000000;
	b7.reflect[5] = 0.000000;
	b7.reflect[6] = 0.000000;
	b7.reflect[7] = 0.000000;
	b7.reflect[8] = 0.000000;
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
 
	word.versions[1] = version;
 
	b0.reflect[0] = -0.683354;
	b0.reflect[1] = 0.323829;
	b0.reflect[2] = -0.480944;
	b0.reflect[3] = 0.416900;
	b0.reflect[4] = 0.055289;
	b0.reflect[5] = 0.433531;
	b0.reflect[6] = -0.073956;
	b0.reflect[7] = 0.241985;
	b0.reflect[8] = -0.474950;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.631137;
	b1.reflect[1] = 0.321910;
	b1.reflect[2] = -0.402053;
	b1.reflect[3] = 0.434238;
	b1.reflect[4] = -0.064032;
	b1.reflect[5] = 0.384885;
	b1.reflect[6] = -0.038733;
	b1.reflect[7] = 0.108616;
	b1.reflect[8] = -0.364204;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = 0.000000;
	b2.reflect[1] = 0.000000;
	b2.reflect[2] = 0.000000;
	b2.reflect[3] = 0.000000;
	b2.reflect[4] = 0.000000;
	b2.reflect[5] = 0.000000;
	b2.reflect[6] = 0.000000;
	b2.reflect[7] = 0.000000;
	b2.reflect[8] = 0.000000;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = 0.000000;
	b3.reflect[1] = 0.000000;
	b3.reflect[2] = 0.000000;
	b3.reflect[3] = 0.000000;
	b3.reflect[4] = 0.000000;
	b3.reflect[5] = 0.000000;
	b3.reflect[6] = 0.000000;
	b3.reflect[7] = 0.000000;
	b3.reflect[8] = 0.000000;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = 0.000000;
	b4.reflect[1] = 0.000000;
	b4.reflect[2] = 0.000000;
	b4.reflect[3] = 0.000000;
	b4.reflect[4] = 0.000000;
	b4.reflect[5] = 0.000000;
	b4.reflect[6] = 0.000000;
	b4.reflect[7] = 0.000000;
	b4.reflect[8] = 0.000000;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = 0.000000;
	b5.reflect[1] = 0.000000;
	b5.reflect[2] = 0.000000;
	b5.reflect[3] = 0.000000;
	b5.reflect[4] = 0.000000;
	b5.reflect[5] = 0.000000;
	b5.reflect[6] = 0.000000;
	b5.reflect[7] = 0.000000;
	b5.reflect[8] = 0.000000;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = 0.000000;
	b6.reflect[1] = 0.000000;
	b6.reflect[2] = 0.000000;
	b6.reflect[3] = 0.000000;
	b6.reflect[4] = 0.000000;
	b6.reflect[5] = 0.000000;
	b6.reflect[6] = 0.000000;
	b6.reflect[7] = 0.000000;
	b6.reflect[8] = 0.000000;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = 0.000000;
	b7.reflect[1] = 0.000000;
	b7.reflect[2] = 0.000000;
	b7.reflect[3] = 0.000000;
	b7.reflect[4] = 0.000000;
	b7.reflect[5] = 0.000000;
	b7.reflect[6] = 0.000000;
	b7.reflect[7] = 0.000000;
	b7.reflect[8] = 0.000000;
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
 
	word.versions[2] = version;
 
	b0.reflect[0] = -0.892025;
	b0.reflect[1] = 0.576428;
	b0.reflect[2] = -0.375838;
	b0.reflect[3] = 0.791666;
	b0.reflect[4] = 0.197620;
	b0.reflect[5] = 0.030526;
	b0.reflect[6] = -0.092250;
	b0.reflect[7] = 0.135177;
	b0.reflect[8] = -0.303424;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.712370;
	b1.reflect[1] = 0.425220;
	b1.reflect[2] = -0.605440;
	b1.reflect[3] = 0.787649;
	b1.reflect[4] = 0.085188;
	b1.reflect[5] = 0.205515;
	b1.reflect[6] = 0.023730;
	b1.reflect[7] = 0.121835;
	b1.reflect[8] = -0.415120;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = -0.642342;
	b2.reflect[1] = 0.321482;
	b2.reflect[2] = -0.508288;
	b2.reflect[3] = 0.469239;
	b2.reflect[4] = 0.160509;
	b2.reflect[5] = 0.366448;
	b2.reflect[6] = -0.136528;
	b2.reflect[7] = 0.230490;
	b2.reflect[8] = -0.351975;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = -0.589253;
	b3.reflect[1] = 0.310674;
	b3.reflect[2] = -0.264754;
	b3.reflect[3] = 0.399042;
	b3.reflect[4] = -0.061796;
	b3.reflect[5] = 0.424108;
	b3.reflect[6] = -0.123408;
	b3.reflect[7] = 0.131036;
	b3.reflect[8] = -0.218892;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = -0.537901;
	b4.reflect[1] = 0.278105;
	b4.reflect[2] = -0.222771;
	b4.reflect[3] = 0.467943;
	b4.reflect[4] = -0.218507;
	b4.reflect[5] = 0.472732;
	b4.reflect[6] = -0.123119;
	b4.reflect[7] = -0.095733;
	b4.reflect[8] = 0.066252;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = -0.552657;
	b5.reflect[1] = 0.331137;
	b5.reflect[2] = -0.176782;
	b5.reflect[3] = 0.422805;
	b5.reflect[4] = -0.226802;
	b5.reflect[5] = 0.470079;
	b5.reflect[6] = -0.160413;
	b5.reflect[7] = -0.114080;
	b5.reflect[8] = 0.130771;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = 0.000000;
	b6.reflect[1] = 0.000000;
	b6.reflect[2] = 0.000000;
	b6.reflect[3] = 0.000000;
	b6.reflect[4] = 0.000000;
	b6.reflect[5] = 0.000000;
	b6.reflect[6] = 0.000000;
	b6.reflect[7] = 0.000000;
	b6.reflect[8] = 0.000000;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = 0.000000;
	b7.reflect[1] = 0.000000;
	b7.reflect[2] = 0.000000;
	b7.reflect[3] = 0.000000;
	b7.reflect[4] = 0.000000;
	b7.reflect[5] = 0.000000;
	b7.reflect[6] = 0.000000;
	b7.reflect[7] = 0.000000;
	b7.reflect[8] = 0.000000;
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
 
	word.versions[3] = version;
 
	b0.reflect[0] = -0.741904;
	b0.reflect[1] = 0.461434;
	b0.reflect[2] = -0.351673;
	b0.reflect[3] = 0.649790;
	b0.reflect[4] = 0.060507;
	b0.reflect[5] = 0.306600;
	b0.reflect[6] = -0.203320;
	b0.reflect[7] = 0.044653;
	b0.reflect[8] = -0.383754;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.684624;
	b1.reflect[1] = 0.327225;
	b1.reflect[2] = -0.240781;
	b1.reflect[3] = 0.517986;
	b1.reflect[4] = -0.135550;
	b1.reflect[5] = 0.448085;
	b1.reflect[6] = -0.115112;
	b1.reflect[7] = -0.106410;
	b1.reflect[8] = -0.141077;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = -0.580920;
	b2.reflect[1] = 0.272531;
	b2.reflect[2] = -0.192780;
	b2.reflect[3] = 0.472715;
	b2.reflect[4] = -0.227383;
	b2.reflect[5] = 0.432599;
	b2.reflect[6] = -0.087072;
	b2.reflect[7] = -0.082066;
	b2.reflect[8] = 0.060414;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = -0.510114;
	b3.reflect[1] = 0.226936;
	b3.reflect[2] = -0.153910;
	b3.reflect[3] = 0.479135;
	b3.reflect[4] = -0.298271;
	b3.reflect[5] = 0.509904;
	b3.reflect[6] = -0.196801;
	b3.reflect[7] = -0.014241;
	b3.reflect[8] = 0.016360;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = 0.000000;
	b4.reflect[1] = 0.000000;
	b4.reflect[2] = 0.000000;
	b4.reflect[3] = 0.000000;
	b4.reflect[4] = 0.000000;
	b4.reflect[5] = 0.000000;
	b4.reflect[6] = 0.000000;
	b4.reflect[7] = 0.000000;
	b4.reflect[8] = 0.000000;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = 0.000000;
	b5.reflect[1] = 0.000000;
	b5.reflect[2] = 0.000000;
	b5.reflect[3] = 0.000000;
	b5.reflect[4] = 0.000000;
	b5.reflect[5] = 0.000000;
	b5.reflect[6] = 0.000000;
	b5.reflect[7] = 0.000000;
	b5.reflect[8] = 0.000000;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = 0.000000;
	b6.reflect[1] = 0.000000;
	b6.reflect[2] = 0.000000;
	b6.reflect[3] = 0.000000;
	b6.reflect[4] = 0.000000;
	b6.reflect[5] = 0.000000;
	b6.reflect[6] = 0.000000;
	b6.reflect[7] = 0.000000;
	b6.reflect[8] = 0.000000;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = 0.000000;
	b7.reflect[1] = 0.000000;
	b7.reflect[2] = 0.000000;
	b7.reflect[3] = 0.000000;
	b7.reflect[4] = 0.000000;
	b7.reflect[5] = 0.000000;
	b7.reflect[6] = 0.000000;
	b7.reflect[7] = 0.000000;
	b7.reflect[8] = 0.000000;
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
 
	word.versions[4] = version;
 
	b0.reflect[0] = -0.767691;
	b0.reflect[1] = 0.452170;
	b0.reflect[2] = -0.345685;
	b0.reflect[3] = 0.607181;
	b0.reflect[4] = 0.115520;
	b0.reflect[5] = 0.169451;
	b0.reflect[6] = -0.195058;
	b0.reflect[7] = 0.333609;
	b0.reflect[8] = -0.387459;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.624918;
	b1.reflect[1] = 0.351342;
	b1.reflect[2] = -0.465643;
	b1.reflect[3] = 0.471245;
	b1.reflect[4] = 0.108546;
	b1.reflect[5] = 0.199488;
	b1.reflect[6] = -0.163361;
	b1.reflect[7] = 0.409969;
	b1.reflect[8] = -0.441415;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = -0.650040;
	b2.reflect[1] = 0.380213;
	b2.reflect[2] = -0.327883;
	b2.reflect[3] = 0.495957;
	b2.reflect[4] = -0.046343;
	b2.reflect[5] = 0.233191;
	b2.reflect[6] = -0.136282;
	b2.reflect[7] = 0.316842;
	b2.reflect[8] = -0.320754;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = -0.589508;
	b3.reflect[1] = 0.367401;
	b3.reflect[2] = -0.258535;
	b3.reflect[3] = 0.469916;
	b3.reflect[4] = -0.212988;
	b3.reflect[5] = 0.321011;
	b3.reflect[6] = -0.116787;
	b3.reflect[7] = 0.131405;
	b3.reflect[8] = -0.216629;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = -0.522675;
	b4.reflect[1] = 0.431174;
	b4.reflect[2] = -0.175410;
	b4.reflect[3] = 0.417004;
	b4.reflect[4] = -0.270580;
	b4.reflect[5] = 0.318182;
	b4.reflect[6] = -0.122395;
	b4.reflect[7] = 0.026276;
	b4.reflect[8] = -0.026446;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = -0.434662;
	b5.reflect[1] = 0.453791;
	b5.reflect[2] = -0.173025;
	b5.reflect[3] = 0.499393;
	b5.reflect[4] = -0.305364;
	b5.reflect[5] = 0.335749;
	b5.reflect[6] = -0.167292;
	b5.reflect[7] = -0.069191;
	b5.reflect[8] = 0.062246;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = -0.386681;
	b6.reflect[1] = 0.485671;
	b6.reflect[2] = -0.220025;
	b6.reflect[3] = 0.452806;
	b6.reflect[4] = -0.186340;
	b6.reflect[5] = 0.438890;
	b6.reflect[6] = -0.257243;
	b6.reflect[7] = -0.049523;
	b6.reflect[8] = -0.025733;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = -0.215768;
	b7.reflect[1] = 0.488325;
	b7.reflect[2] = -0.305538;
	b7.reflect[3] = 0.379633;
	b7.reflect[4] = -0.192733;
	b7.reflect[5] = 0.575405;
	b7.reflect[6] = -0.206481;
	b7.reflect[7] = 0.015936;
	b7.reflect[8] = -0.071495;
	b7.energy = -1;

	version.subset[7] = b7;
 
	b8.reflect[0] = -0.070069;
	b8.reflect[1] = 0.624522;
	b8.reflect[2] = -0.302177;
	b8.reflect[3] = 0.172034;
	b8.reflect[4] = -0.249611;
	b8.reflect[5] = 0.666660;
	b8.reflect[6] = -0.016255;
	b8.reflect[7] = 0.112543;
	b8.reflect[8] = -0.117744;
	b8.energy = -1;

	version.subset[8] = b8;
 
	b9.reflect[0] = 0.050780;
	b9.reflect[1] = 0.661239;
	b9.reflect[2] = -0.251015;
	b9.reflect[3] = 0.117954;
	b9.reflect[4] = -0.378236;
	b9.reflect[5] = 0.681933;
	b9.reflect[6] = 0.193015;
	b9.reflect[7] = 0.256290;
	b9.reflect[8] = -0.123312;
	b9.energy = -1;

	version.subset[9] = b9;
 
	b10.reflect[0] = 0.124885;
	b10.reflect[1] = 0.692143;
	b10.reflect[2] = -0.235751;
	b10.reflect[3] = 0.060591;
	b10.reflect[4] = -0.385454;
	b10.reflect[5] = 0.681914;
	b10.reflect[6] = 0.133143;
	b10.reflect[7] = 0.232899;
	b10.reflect[8] = -0.053346;
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
 
	word.versions[5] = version;
 
	word.name = "right";
 
	db.words[0] = word;
 
	b0.reflect[0] = -0.540300;
	b0.reflect[1] = 0.182331;
	b0.reflect[2] = -0.352539;
	b0.reflect[3] = 0.409442;
	b0.reflect[4] = 0.168324;
	b0.reflect[5] = 0.463843;
	b0.reflect[6] = -0.428101;
	b0.reflect[7] = -0.051381;
	b0.reflect[8] = -0.182346;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.191949;
	b1.reflect[1] = 0.225566;
	b1.reflect[2] = -0.426561;
	b1.reflect[3] = 0.061565;
	b1.reflect[4] = -0.118974;
	b1.reflect[5] = 0.307542;
	b1.reflect[6] = -0.100658;
	b1.reflect[7] = -0.015265;
	b1.reflect[8] = 0.087190;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = 0.073105;
	b2.reflect[1] = 0.279951;
	b2.reflect[2] = -0.198830;
	b2.reflect[3] = 0.082293;
	b2.reflect[4] = -0.220647;
	b2.reflect[5] = 0.119157;
	b2.reflect[6] = 0.073103;
	b2.reflect[7] = -0.060159;
	b2.reflect[8] = 0.063664;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = -0.141509;
	b3.reflect[1] = -0.073969;
	b3.reflect[2] = -0.161180;
	b3.reflect[3] = -0.000203;
	b3.reflect[4] = -0.174250;
	b3.reflect[5] = 0.015789;
	b3.reflect[6] = -0.087725;
	b3.reflect[7] = 0.023865;
	b3.reflect[8] = -0.102530;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = -0.147716;
	b4.reflect[1] = 0.159140;
	b4.reflect[2] = -0.292864;
	b4.reflect[3] = 0.013207;
	b4.reflect[4] = -0.079082;
	b4.reflect[5] = 0.133116;
	b4.reflect[6] = -0.058333;
	b4.reflect[7] = -0.025037;
	b4.reflect[8] = 0.009518;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = -0.071563;
	b5.reflect[1] = 0.135639;
	b5.reflect[2] = -0.183392;
	b5.reflect[3] = 0.033405;
	b5.reflect[4] = -0.287003;
	b5.reflect[5] = 0.154197;
	b5.reflect[6] = 0.046592;
	b5.reflect[7] = -0.012106;
	b5.reflect[8] = -0.016751;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = -0.267819;
	b6.reflect[1] = 0.039401;
	b6.reflect[2] = -0.308795;
	b6.reflect[3] = 0.022558;
	b6.reflect[4] = -0.133968;
	b6.reflect[5] = -0.028527;
	b6.reflect[6] = -0.047518;
	b6.reflect[7] = 0.094281;
	b6.reflect[8] = -0.027168;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = -0.295814;
	b7.reflect[1] = -0.064998;
	b7.reflect[2] = -0.232943;
	b7.reflect[3] = 0.024315;
	b7.reflect[4] = -0.120956;
	b7.reflect[5] = 0.009526;
	b7.reflect[6] = -0.064423;
	b7.reflect[7] = 0.085087;
	b7.reflect[8] = 0.028033;
	b7.energy = -1;

	version.subset[7] = b7;
 
	b8.reflect[0] = -0.168432;
	b8.reflect[1] = 0.006372;
	b8.reflect[2] = -0.166346;
	b8.reflect[3] = 0.006326;
	b8.reflect[4] = -0.130405;
	b8.reflect[5] = 0.048367;
	b8.reflect[6] = -0.016890;
	b8.reflect[7] = 0.047694;
	b8.reflect[8] = -0.019009;
	b8.energy = -1;

	version.subset[8] = b8;
 
	b9.reflect[0] = -0.148660;
	b9.reflect[1] = 0.002744;
	b9.reflect[2] = -0.124210;
	b9.reflect[3] = 0.039501;
	b9.reflect[4] = -0.085386;
	b9.reflect[5] = 0.022475;
	b9.reflect[6] = -0.013203;
	b9.reflect[7] = -0.010680;
	b9.reflect[8] = -0.043965;
	b9.energy = -1;

	version.subset[9] = b9;
 
	b10.reflect[0] = -0.060416;
	b10.reflect[1] = 0.013237;
	b10.reflect[2] = -0.094317;
	b10.reflect[3] = 0.051458;
	b10.reflect[4] = -0.056822;
	b10.reflect[5] = 0.012869;
	b10.reflect[6] = -0.018227;
	b10.reflect[7] = 0.038700;
	b10.reflect[8] = -0.005573;
	b10.energy = -1;

	version.subset[10] = b10;
 
	b11.reflect[0] = -0.065139;
	b11.reflect[1] = 0.021796;
	b11.reflect[2] = -0.072763;
	b11.reflect[3] = 0.024693;
	b11.reflect[4] = -0.057746;
	b11.reflect[5] = 0.012530;
	b11.reflect[6] = 0.017700;
	b11.reflect[7] = 0.022979;
	b11.reflect[8] = 0.021105;
	b11.energy = -1;

	version.subset[11] = b11;
 
	word.versions[0] = version;
 
	b0.reflect[0] = -0.170303;
	b0.reflect[1] = 0.181076;
	b0.reflect[2] = -0.153793;
	b0.reflect[3] = 0.136177;
	b0.reflect[4] = -0.203271;
	b0.reflect[5] = 0.017004;
	b0.reflect[6] = -0.167882;
	b0.reflect[7] = -0.002588;
	b0.reflect[8] = -0.070763;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.059437;
	b1.reflect[1] = 0.141114;
	b1.reflect[2] = -0.280436;
	b1.reflect[3] = 0.027858;
	b1.reflect[4] = -0.198652;
	b1.reflect[5] = -0.020018;
	b1.reflect[6] = -0.212074;
	b1.reflect[7] = 0.016370;
	b1.reflect[8] = -0.050490;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = -0.001585;
	b2.reflect[1] = 0.184755;
	b2.reflect[2] = -0.236877;
	b2.reflect[3] = 0.069365;
	b2.reflect[4] = -0.187426;
	b2.reflect[5] = 0.084761;
	b2.reflect[6] = -0.109766;
	b2.reflect[7] = 0.044198;
	b2.reflect[8] = -0.015335;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = -0.022552;
	b3.reflect[1] = 0.110646;
	b3.reflect[2] = -0.223088;
	b3.reflect[3] = 0.114830;
	b3.reflect[4] = -0.130571;
	b3.reflect[5] = 0.035879;
	b3.reflect[6] = -0.059907;
	b3.reflect[7] = 0.074127;
	b3.reflect[8] = -0.065236;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = -0.605609;
	b4.reflect[1] = 0.184024;
	b4.reflect[2] = -0.161194;
	b4.reflect[3] = 0.337694;
	b4.reflect[4] = 0.043162;
	b4.reflect[5] = 0.394202;
	b4.reflect[6] = -0.265048;
	b4.reflect[7] = 0.003148;
	b4.reflect[8] = -0.009623;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = 0.048707;
	b5.reflect[1] = 0.333949;
	b5.reflect[2] = -0.252601;
	b5.reflect[3] = 0.119565;
	b5.reflect[4] = -0.184648;
	b5.reflect[5] = 0.258660;
	b5.reflect[6] = -0.039129;
	b5.reflect[7] = 0.096037;
	b5.reflect[8] = -0.063160;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = 0.091761;
	b6.reflect[1] = 0.149369;
	b6.reflect[2] = -0.235961;
	b6.reflect[3] = 0.105790;
	b6.reflect[4] = -0.146449;
	b6.reflect[5] = 0.052653;
	b6.reflect[6] = 0.006267;
	b6.reflect[7] = 0.015455;
	b6.reflect[8] = 0.007602;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = -0.024945;
	b7.reflect[1] = 0.197855;
	b7.reflect[2] = -0.180127;
	b7.reflect[3] = 0.184922;
	b7.reflect[4] = -0.170921;
	b7.reflect[5] = 0.248460;
	b7.reflect[6] = 0.090161;
	b7.reflect[7] = -0.026530;
	b7.reflect[8] = 0.031745;
	b7.energy = -1;

	version.subset[7] = b7;
 
	b8.reflect[0] = 0.013594;
	b8.reflect[1] = 0.116325;
	b8.reflect[2] = -0.161680;
	b8.reflect[3] = 0.069919;
	b8.reflect[4] = -0.069408;
	b8.reflect[5] = 0.064800;
	b8.reflect[6] = -0.071267;
	b8.reflect[7] = 0.011242;
	b8.reflect[8] = -0.045674;
	b8.energy = -1;

	version.subset[8] = b8;
 
	b9.reflect[0] = -0.003828;
	b9.reflect[1] = 0.009991;
	b9.reflect[2] = -0.217448;
	b9.reflect[3] = 0.051345;
	b9.reflect[4] = -0.119984;
	b9.reflect[5] = 0.054015;
	b9.reflect[6] = -0.022255;
	b9.reflect[7] = 0.057356;
	b9.reflect[8] = -0.038135;
	b9.energy = -1;

	version.subset[9] = b9;
 
	b10.reflect[0] = 0.036656;
	b10.reflect[1] = 0.095040;
	b10.reflect[2] = -0.168124;
	b10.reflect[3] = 0.050870;
	b10.reflect[4] = -0.086001;
	b10.reflect[5] = 0.044330;
	b10.reflect[6] = -0.020474;
	b10.reflect[7] = 0.070011;
	b10.reflect[8] = -0.013001;
	b10.energy = -1;

	version.subset[10] = b10;
 
	b11.reflect[0] = -0.017732;
	b11.reflect[1] = 0.119036;
	b11.reflect[2] = -0.074586;
	b11.reflect[3] = 0.026729;
	b11.reflect[4] = -0.063402;
	b11.reflect[5] = 0.017880;
	b11.reflect[6] = -0.104078;
	b11.reflect[7] = 0.053865;
	b11.reflect[8] = 0.019009;
	b11.energy = -1;

	version.subset[11] = b11;
 
	word.versions[1] = version;
 
	b0.reflect[0] = -0.133267;
	b0.reflect[1] = 0.113362;
	b0.reflect[2] = -0.204386;
	b0.reflect[3] = 0.114439;
	b0.reflect[4] = -0.164954;
	b0.reflect[5] = 0.081919;
	b0.reflect[6] = -0.135313;
	b0.reflect[7] = 0.024683;
	b0.reflect[8] = -0.050852;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.103783;
	b1.reflect[1] = 0.118729;
	b1.reflect[2] = -0.264138;
	b1.reflect[3] = 0.046936;
	b1.reflect[4] = -0.178977;
	b1.reflect[5] = 0.045043;
	b1.reflect[6] = -0.011662;
	b1.reflect[7] = 0.100503;
	b1.reflect[8] = -0.062468;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = 0.119720;
	b2.reflect[1] = 0.279606;
	b2.reflect[2] = -0.263433;
	b2.reflect[3] = 0.120420;
	b2.reflect[4] = -0.170426;
	b2.reflect[5] = 0.080655;
	b2.reflect[6] = -0.074133;
	b2.reflect[7] = 0.051881;
	b2.reflect[8] = 0.034775;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = -0.447709;
	b3.reflect[1] = 0.259649;
	b3.reflect[2] = -0.206133;
	b3.reflect[3] = 0.291925;
	b3.reflect[4] = -0.013666;
	b3.reflect[5] = 0.260734;
	b3.reflect[6] = -0.311919;
	b3.reflect[7] = -0.006063;
	b3.reflect[8] = -0.014101;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = -0.260646;
	b4.reflect[1] = 0.350731;
	b4.reflect[2] = -0.255538;
	b4.reflect[3] = 0.362676;
	b4.reflect[4] = -0.136940;
	b4.reflect[5] = 0.332263;
	b4.reflect[6] = -0.078222;
	b4.reflect[7] = 0.089696;
	b4.reflect[8] = -0.032550;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = 0.184551;
	b5.reflect[1] = 0.346792;
	b5.reflect[2] = -0.213111;
	b5.reflect[3] = 0.103013;
	b5.reflect[4] = -0.182763;
	b5.reflect[5] = 0.121505;
	b5.reflect[6] = 0.026164;
	b5.reflect[7] = 0.015207;
	b5.reflect[8] = 0.004739;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = -0.119045;
	b6.reflect[1] = 0.151234;
	b6.reflect[2] = -0.284812;
	b6.reflect[3] = 0.139252;
	b6.reflect[4] = -0.094466;
	b6.reflect[5] = 0.176355;
	b6.reflect[6] = 0.017910;
	b6.reflect[7] = 0.084663;
	b6.reflect[8] = -0.000044;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = -0.042356;
	b7.reflect[1] = 0.174952;
	b7.reflect[2] = -0.302804;
	b7.reflect[3] = 0.017710;
	b7.reflect[4] = -0.156978;
	b7.reflect[5] = 0.132368;
	b7.reflect[6] = -0.010509;
	b7.reflect[7] = 0.045657;
	b7.reflect[8] = -0.043906;
	b7.energy = -1;

	version.subset[7] = b7;
 
	b8.reflect[0] = -0.060353;
	b8.reflect[1] = 0.080898;
	b8.reflect[2] = -0.223440;
	b8.reflect[3] = 0.039897;
	b8.reflect[4] = -0.130445;
	b8.reflect[5] = 0.095203;
	b8.reflect[6] = -0.064018;
	b8.reflect[7] = 0.049731;
	b8.reflect[8] = -0.028707;
	b8.energy = -1;

	version.subset[8] = b8;
 
	b9.reflect[0] = -0.135777;
	b9.reflect[1] = 0.087816;
	b9.reflect[2] = -0.188908;
	b9.reflect[3] = 0.033391;
	b9.reflect[4] = -0.147310;
	b9.reflect[5] = 0.078340;
	b9.reflect[6] = -0.079576;
	b9.reflect[7] = 0.039313;
	b9.reflect[8] = -0.025971;
	b9.energy = -1;

	version.subset[9] = b9;
 
	b10.reflect[0] = 0.054550;
	b10.reflect[1] = 0.150511;
	b10.reflect[2] = -0.145151;
	b10.reflect[3] = 0.071977;
	b10.reflect[4] = -0.096560;
	b10.reflect[5] = 0.024130;
	b10.reflect[6] = -0.042185;
	b10.reflect[7] = 0.006703;
	b10.reflect[8] = -0.047347;
	b10.energy = -1;

	version.subset[10] = b10;
 
	b11.reflect[0] = 0.014653;
	b11.reflect[1] = 0.110259;
	b11.reflect[2] = -0.122048;
	b11.reflect[3] = 0.014084;
	b11.reflect[4] = -0.139577;
	b11.reflect[5] = 0.032344;
	b11.reflect[6] = -0.028480;
	b11.reflect[7] = 0.043737;
	b11.reflect[8] = 0.016535;
	b11.energy = -1;

	version.subset[11] = b11;
 
	word.versions[2] = version;
 
	b0.reflect[0] = -0.636254;
	b0.reflect[1] = 0.140904;
	b0.reflect[2] = -0.324701;
	b0.reflect[3] = 0.374185;
	b0.reflect[4] = 0.213246;
	b0.reflect[5] = 0.527707;
	b0.reflect[6] = -0.433066;
	b0.reflect[7] = 0.030337;
	b0.reflect[8] = -0.233888;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.005280;
	b1.reflect[1] = 0.421285;
	b1.reflect[2] = -0.176218;
	b1.reflect[3] = 0.198324;
	b1.reflect[4] = -0.266827;
	b1.reflect[5] = 0.350333;
	b1.reflect[6] = -0.074609;
	b1.reflect[7] = 0.029424;
	b1.reflect[8] = -0.036627;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = 0.335745;
	b2.reflect[1] = 0.524053;
	b2.reflect[2] = -0.130293;
	b2.reflect[3] = 0.179884;
	b2.reflect[4] = -0.355195;
	b2.reflect[5] = 0.138595;
	b2.reflect[6] = 0.124397;
	b2.reflect[7] = -0.014679;
	b2.reflect[8] = 0.087450;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = 0.043658;
	b3.reflect[1] = 0.171823;
	b3.reflect[2] = -0.182478;
	b3.reflect[3] = 0.089021;
	b3.reflect[4] = -0.142162;
	b3.reflect[5] = 0.068198;
	b3.reflect[6] = -0.155417;
	b3.reflect[7] = 0.077210;
	b3.reflect[8] = -0.014461;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = -0.017623;
	b4.reflect[1] = 0.169056;
	b4.reflect[2] = -0.169284;
	b4.reflect[3] = 0.151786;
	b4.reflect[4] = -0.104419;
	b4.reflect[5] = 0.226954;
	b4.reflect[6] = 0.061205;
	b4.reflect[7] = 0.030241;
	b4.reflect[8] = 0.060889;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = 0.073021;
	b5.reflect[1] = 0.238124;
	b5.reflect[2] = -0.022400;
	b5.reflect[3] = 0.035838;
	b5.reflect[4] = -0.056297;
	b5.reflect[5] = -0.009407;
	b5.reflect[6] = 0.128370;
	b5.reflect[7] = -0.053110;
	b5.reflect[8] = 0.020698;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = 0.019097;
	b6.reflect[1] = 0.091201;
	b6.reflect[2] = -0.133364;
	b6.reflect[3] = 0.069864;
	b6.reflect[4] = -0.088005;
	b6.reflect[5] = 0.052187;
	b6.reflect[6] = -0.115467;
	b6.reflect[7] = 0.024524;
	b6.reflect[8] = -0.053098;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = -0.054761;
	b7.reflect[1] = 0.047637;
	b7.reflect[2] = -0.110125;
	b7.reflect[3] = 0.006600;
	b7.reflect[4] = -0.058073;
	b7.reflect[5] = 0.018118;
	b7.reflect[6] = -0.075095;
	b7.reflect[7] = 0.049698;
	b7.reflect[8] = -0.014163;
	b7.energy = -1;

	version.subset[7] = b7;
 
	b8.reflect[0] = -0.003884;
	b8.reflect[1] = 0.073938;
	b8.reflect[2] = -0.059917;
	b8.reflect[3] = 0.026147;
	b8.reflect[4] = -0.052129;
	b8.reflect[5] = 0.044234;
	b8.reflect[6] = -0.023269;
	b8.reflect[7] = 0.018670;
	b8.reflect[8] = -0.000514;
	b8.energy = -1;

	version.subset[8] = b8;
 
	b9.reflect[0] = -0.009744;
	b9.reflect[1] = 0.041219;
	b9.reflect[2] = -0.021211;
	b9.reflect[3] = 0.007942;
	b9.reflect[4] = -0.070127;
	b9.reflect[5] = -0.021749;
	b9.reflect[6] = -0.027210;
	b9.reflect[7] = 0.005095;
	b9.reflect[8] = -0.003071;
	b9.energy = -1;

	version.subset[9] = b9;
 
	b10.reflect[0] = -0.008707;
	b10.reflect[1] = 0.014111;
	b10.reflect[2] = -0.002692;
	b10.reflect[3] = 0.011975;
	b10.reflect[4] = -0.025388;
	b10.reflect[5] = -0.001178;
	b10.reflect[6] = -0.002757;
	b10.reflect[7] = 0.026412;
	b10.reflect[8] = -0.009335;
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
 
	b0.reflect[0] = -0.484140;
	b0.reflect[1] = 0.337040;
	b0.reflect[2] = -0.334165;
	b0.reflect[3] = 0.302409;
	b0.reflect[4] = 0.231273;
	b0.reflect[5] = 0.433833;
	b0.reflect[6] = -0.371548;
	b0.reflect[7] = -0.100423;
	b0.reflect[8] = -0.103289;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.349027;
	b1.reflect[1] = 0.221670;
	b1.reflect[2] = -0.281249;
	b1.reflect[3] = 0.373707;
	b1.reflect[4] = -0.053917;
	b1.reflect[5] = 0.461985;
	b1.reflect[6] = -0.302948;
	b1.reflect[7] = 0.117936;
	b1.reflect[8] = -0.150876;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = 0.251665;
	b2.reflect[1] = 0.506088;
	b2.reflect[2] = -0.156927;
	b2.reflect[3] = 0.024607;
	b2.reflect[4] = -0.261983;
	b2.reflect[5] = 0.195628;
	b2.reflect[6] = 0.018601;
	b2.reflect[7] = 0.129287;
	b2.reflect[8] = -0.044622;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = 0.286951;
	b3.reflect[1] = 0.400071;
	b3.reflect[2] = -0.194267;
	b3.reflect[3] = 0.170916;
	b3.reflect[4] = -0.295286;
	b3.reflect[5] = 0.100464;
	b3.reflect[6] = 0.080183;
	b3.reflect[7] = 0.011119;
	b3.reflect[8] = -0.051862;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = -0.042586;
	b4.reflect[1] = 0.182786;
	b4.reflect[2] = -0.178508;
	b4.reflect[3] = 0.177637;
	b4.reflect[4] = -0.117207;
	b4.reflect[5] = 0.106020;
	b4.reflect[6] = -0.118404;
	b4.reflect[7] = 0.068494;
	b4.reflect[8] = -0.122353;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = 0.060222;
	b5.reflect[1] = 0.237801;
	b5.reflect[2] = -0.239200;
	b5.reflect[3] = 0.113372;
	b5.reflect[4] = -0.153262;
	b5.reflect[5] = 0.098086;
	b5.reflect[6] = 0.028234;
	b5.reflect[7] = -0.002942;
	b5.reflect[8] = 0.052508;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = 0.098755;
	b6.reflect[1] = 0.219384;
	b6.reflect[2] = -0.121903;
	b6.reflect[3] = 0.163035;
	b6.reflect[4] = -0.183606;
	b6.reflect[5] = 0.147592;
	b6.reflect[6] = -0.020484;
	b6.reflect[7] = 0.039814;
	b6.reflect[8] = -0.027588;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = -0.069481;
	b7.reflect[1] = 0.125109;
	b7.reflect[2] = -0.262344;
	b7.reflect[3] = 0.020973;
	b7.reflect[4] = -0.162662;
	b7.reflect[5] = 0.035638;
	b7.reflect[6] = -0.041367;
	b7.reflect[7] = 0.042406;
	b7.reflect[8] = -0.046961;
	b7.energy = -1;

	version.subset[7] = b7;
 
	b8.reflect[0] = -0.057855;
	b8.reflect[1] = 0.136892;
	b8.reflect[2] = -0.239177;
	b8.reflect[3] = 0.021641;
	b8.reflect[4] = -0.136319;
	b8.reflect[5] = 0.023736;
	b8.reflect[6] = -0.058242;
	b8.reflect[7] = 0.121412;
	b8.reflect[8] = 0.009721;
	b8.energy = -1;

	version.subset[8] = b8;
 
	b9.reflect[0] = -0.028220;
	b9.reflect[1] = 0.112761;
	b9.reflect[2] = -0.188213;
	b9.reflect[3] = 0.047112;
	b9.reflect[4] = -0.152551;
	b9.reflect[5] = -0.033075;
	b9.reflect[6] = -0.058512;
	b9.reflect[7] = 0.041951;
	b9.reflect[8] = -0.030814;
	b9.energy = -1;

	version.subset[9] = b9;
 
	b10.reflect[0] = -0.106106;
	b10.reflect[1] = 0.022038;
	b10.reflect[2] = -0.145329;
	b10.reflect[3] = 0.062045;
	b10.reflect[4] = -0.112127;
	b10.reflect[5] = 0.039770;
	b10.reflect[6] = 0.044075;
	b10.reflect[7] = 0.107776;
	b10.reflect[8] = -0.018080;
	b10.energy = -1;

	version.subset[10] = b10;
 
	b11.reflect[0] = 0.052040;
	b11.reflect[1] = 0.068014;
	b11.reflect[2] = -0.107981;
	b11.reflect[3] = -0.014341;
	b11.reflect[4] = -0.137210;
	b11.reflect[5] = 0.009838;
	b11.reflect[6] = -0.067297;
	b11.reflect[7] = -0.007442;
	b11.reflect[8] = -0.052790;
	b11.energy = -1;

	version.subset[11] = b11;
 
	word.versions[4] = version;
 
	b0.reflect[0] = -0.136744;
	b0.reflect[1] = 0.207804;
	b0.reflect[2] = -0.144839;
	b0.reflect[3] = 0.041270;
	b0.reflect[4] = -0.110882;
	b0.reflect[5] = -0.001102;
	b0.reflect[6] = -0.128531;
	b0.reflect[7] = 0.049423;
	b0.reflect[8] = -0.079649;
	b0.energy = -1;

	version.subset[0] = b0;
 
	b1.reflect[0] = -0.015846;
	b1.reflect[1] = 0.185947;
	b1.reflect[2] = -0.204627;
	b1.reflect[3] = 0.021641;
	b1.reflect[4] = -0.166202;
	b1.reflect[5] = 0.035437;
	b1.reflect[6] = -0.053692;
	b1.reflect[7] = -0.003395;
	b1.reflect[8] = -0.037531;
	b1.energy = -1;

	version.subset[1] = b1;
 
	b2.reflect[0] = -0.152182;
	b2.reflect[1] = 0.121753;
	b2.reflect[2] = -0.195881;
	b2.reflect[3] = 0.150614;
	b2.reflect[4] = -0.169623;
	b2.reflect[5] = 0.106499;
	b2.reflect[6] = -0.075609;
	b2.reflect[7] = 0.097685;
	b2.reflect[8] = -0.086801;
	b2.energy = -1;

	version.subset[2] = b2;
 
	b3.reflect[0] = -0.583036;
	b3.reflect[1] = 0.303601;
	b3.reflect[2] = -0.193655;
	b3.reflect[3] = 0.274335;
	b3.reflect[4] = 0.067539;
	b3.reflect[5] = 0.361837;
	b3.reflect[6] = -0.312361;
	b3.reflect[7] = -0.003131;
	b3.reflect[8] = 0.056562;
	b3.energy = -1;

	version.subset[3] = b3;
 
	b4.reflect[0] = 0.039290;
	b4.reflect[1] = 0.339745;
	b4.reflect[2] = -0.310221;
	b4.reflect[3] = 0.109070;
	b4.reflect[4] = -0.134832;
	b4.reflect[5] = 0.252640;
	b4.reflect[6] = -0.042492;
	b4.reflect[7] = 0.041426;
	b4.reflect[8] = -0.003597;
	b4.energy = -1;

	version.subset[4] = b4;
 
	b5.reflect[0] = 0.159227;
	b5.reflect[1] = 0.273461;
	b5.reflect[2] = -0.224593;
	b5.reflect[3] = 0.053312;
	b5.reflect[4] = -0.217617;
	b5.reflect[5] = 0.036422;
	b5.reflect[6] = -0.055325;
	b5.reflect[7] = 0.024684;
	b5.reflect[8] = -0.098582;
	b5.energy = -1;

	version.subset[5] = b5;
 
	b6.reflect[0] = 0.013876;
	b6.reflect[1] = 0.253118;
	b6.reflect[2] = -0.248177;
	b6.reflect[3] = 0.118696;
	b6.reflect[4] = -0.198563;
	b6.reflect[5] = 0.254655;
	b6.reflect[6] = 0.055937;
	b6.reflect[7] = -0.043481;
	b6.reflect[8] = 0.070103;
	b6.energy = -1;

	version.subset[6] = b6;
 
	b7.reflect[0] = -0.104549;
	b7.reflect[1] = 0.035688;
	b7.reflect[2] = -0.208998;
	b7.reflect[3] = 0.058805;
	b7.reflect[4] = -0.182146;
	b7.reflect[5] = 0.112127;
	b7.reflect[6] = -0.011247;
	b7.reflect[7] = 0.075592;
	b7.reflect[8] = -0.034295;
	b7.energy = -1;

	version.subset[7] = b7;
 
	b8.reflect[0] = -0.096851;
	b8.reflect[1] = 0.128236;
	b8.reflect[2] = -0.231291;
	b8.reflect[3] = 0.007579;
	b8.reflect[4] = -0.125682;
	b8.reflect[5] = 0.102939;
	b8.reflect[6] = -0.050775;
	b8.reflect[7] = 0.150621;
	b8.reflect[8] = -0.068454;
	b8.energy = -1;

	version.subset[8] = b8;
 
	b9.reflect[0] = -0.067132;
	b9.reflect[1] = 0.153415;
	b9.reflect[2] = -0.138472;
	b9.reflect[3] = 0.065514;
	b9.reflect[4] = -0.134788;
	b9.reflect[5] = 0.076702;
	b9.reflect[6] = -0.048510;
	b9.reflect[7] = 0.061787;
	b9.reflect[8] = -0.066806;
	b9.energy = -1;

	version.subset[9] = b9;
 
	b10.reflect[0] = -0.019794;
	b10.reflect[1] = 0.182656;
	b10.reflect[2] = -0.072630;
	b10.reflect[3] = 0.087691;
	b10.reflect[4] = -0.138646;
	b10.reflect[5] = 0.057525;
	b10.reflect[6] = -0.038890;
	b10.reflect[7] = 0.019573;
	b10.reflect[8] = -0.054297;
	b10.energy = -1;

	version.subset[10] = b10;
 
	b11.reflect[0] = 0.022513;
	b11.reflect[1] = 0.171352;
	b11.reflect[2] = -0.061754;
	b11.reflect[3] = 0.057779;
	b11.reflect[4] = -0.041138;
	b11.reflect[5] = 0.064691;
	b11.reflect[6] = -0.073677;
	b11.reflect[7] = 0.023634;
	b11.reflect[8] = -0.052583;
	b11.energy = -1;

	version.subset[11] = b11;
 
	word.versions[5] = version;
 
	word.name = "left";
 
	db.words[1] = word;
 
	*current_db = db; 
	return; 
} 
