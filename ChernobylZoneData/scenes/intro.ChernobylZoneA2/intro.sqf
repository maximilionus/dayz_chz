_rand = floor((random 50) / 10);

if (_rand == 0) then {
	_camera = "camera" camCreate [0,0,0];
	_camera cameraeffect ["internal","back"];
	
	//;comment "14:53:04";
	_camera camPrepareTarget [101479.79,-5464.69,29053.48];
	_camera camPreparePos [8071.50,15283.15,0.30];
	_camera camPrepareFOV 0.700;
	_camera camCommitPrepared 0;
	
	sleep 1;
	
	showcinemaborder false;
	enableEnvironment false;
	0 fadesound 0;
	0 fademusic 1;
	
	_cas = 123;
	
	while {true} do {
		if (_cas == 123) then {
			playmusic "chz_wasteland2";
			_cas = 0;
		};
		1 setovercast 1;
		1 setrain 0.7;
		_cas = _cas + 1;
		sleep 1;
	};
};
if (_rand == 1) then {
	_camera = "camera" camCreate [0,0,0];
	_camera cameraeffect ["internal","back"];
	
	//;comment "14:58:21";
	_camera camPrepareTarget [-89743.86,46731.93,-10335.06];
	_camera camPreparePos [5178.90,17034.17,40.78];
	_camera camPrepareFOV 1.074;
	_camera camCommitPrepared 0;
	
	sleep 1;
	
	showcinemaborder false;
	enableEnvironment false;
	0 fadesound 0;
	0 fademusic 1;
	
	_cas = 256;
	
	while {true} do {
		if (_cas == 256) then {
			playmusic "chz_menu";
			_cas = 0;
		};
		1 setovercast 0.8;
		1 setrain 0;
		_cas = _cas + 1;
		sleep 1;
	};
};
if (_rand == 2) then {
	_camera = "camera" camCreate [0,0,0];
	_camera cameraeffect ["internal","back"];
	
	//comment "14:23:35";
	_camera camPrepareTarget [-16098.68,-79476.95,-6.68];
	_camera camPreparePos [1609.29,18941.12,1.14];
	_camera camPrepareFOV 0.700;
	_camera camCommitPrepared 0;
	
	sleep 1;
	
	showcinemaborder false;
	enableEnvironment false;
	0 fadesound 0;
	0 fademusic 1;
	
	_cas = 123;
	
	while {true} do {
		if (_cas == 123) then {
			playmusic "chz_wasteland2";
			_cas = 0;
		};
		1 setovercast 1;
		1 setrain 0.7;
		_cas = _cas + 1;
		sleep 1;
	};
};
if (_rand == 3) then {
	_camera = "camera" camCreate [0,0,0];
	_camera cameraeffect ["internal","back"];
	
	//;comment "18:01:59";
	_camera camPrepareTarget [96619.94,52678.63,-16490.88];
	_camera camPreparePos [4978.04,15693.65,37.07];
	_camera camPrepareFOV 0.700;
	_camera camCommitPrepared 0;
	
	sleep 1;
	
	showcinemaborder false;
	enableEnvironment false;
	0 fadesound 0;
	0 fademusic 1;
	
	_cas = 300;
	
	while {true} do {
		if (_cas == 300) then {
			playmusic "chz_jupiter_day";
			_cas = 0;
		};
		1 setovercast 0.5;
		1 setrain 0;
		_cas = _cas + 1;
		sleep 1;
	};
};
if (_rand == 4) then {
	_camera = "camera" camCreate [0,0,0];
	_camera cameraeffect ["internal","back"];
	
	//;comment "16:39:43";
	_camera camPrepareTarget [5712.15,112788.11,27411.13];
	_camera camPreparePos [5710.15,16619.60,1.10];
	_camera camPrepareFOV 0.700;
	_camera camCommitPrepared 0;
	
	sleep 1;
	
	showcinemaborder false;
	enableEnvironment false;
	0 fadesound 0;
	0 fademusic 1;
	
	_cas = 287;
	
	while {true} do {
		if (_cas == 287) then {
			playmusic "chz_pripyat_day";
			_cas = 0;
		};
		1 setovercast 0.5;
		1 setrain 0;
		_cas = _cas + 1;
		sleep 1;
	};
};