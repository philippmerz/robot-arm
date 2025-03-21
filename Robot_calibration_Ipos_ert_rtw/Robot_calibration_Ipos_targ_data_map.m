  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 6;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (Robot_calibration_Ipos_P)
    ;%
      section.nData     = 5;
      section.data(5)  = dumData; %prealloc
      
	  ;% Robot_calibration_Ipos_P.DiscreteDerivative_ICPrevScaled
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Robot_calibration_Ipos_P.DiscreteDerivative_ICPrevScal_e
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Robot_calibration_Ipos_P.DiscreteDerivative_ICPrevScal_h
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Robot_calibration_Ipos_P.CompareToConstant_const
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Robot_calibration_Ipos_P.DetectChange_vinit
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Robot_calibration_Ipos_P.MeasurementBlock_N_samples
	  section.data(1).logicalSrcIdx = 5;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% Robot_calibration_Ipos_P.CompareToConstant1_const
	  section.data(1).logicalSrcIdx = 6;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Robot_calibration_Ipos_P.MeasurementBlock_trigger_comman
	  section.data(2).logicalSrcIdx = 7;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Robot_calibration_Ipos_P.MeasurementBlock_triggertype
	  section.data(3).logicalSrcIdx = 8;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(3) = section;
      clear section
      
      section.nData     = 230;
      section.data(230)  = dumData; %prealloc
      
	  ;% Robot_calibration_Ipos_P.Delays_Y0
	  section.data(1).logicalSrcIdx = 9;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Robot_calibration_Ipos_P.Suck_Value
	  section.data(2).logicalSrcIdx = 10;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Robot_calibration_Ipos_P.Blow_Value
	  section.data(3).logicalSrcIdx = 11;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Robot_calibration_Ipos_P.RobotV_Y0
	  section.data(4).logicalSrcIdx = 12;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Robot_calibration_Ipos_P.ConveyorV_Y0
	  section.data(5).logicalSrcIdx = 13;
	  section.data(5).dtTransOffset = 4;
	
	  ;% Robot_calibration_Ipos_P.VacuumV_Y0
	  section.data(6).logicalSrcIdx = 14;
	  section.data(6).dtTransOffset = 5;
	
	  ;% Robot_calibration_Ipos_P.Blowsuck_Y0
	  section.data(7).logicalSrcIdx = 15;
	  section.data(7).dtTransOffset = 6;
	
	  ;% Robot_calibration_Ipos_P.Objectdetectionmatrix_Value
	  section.data(8).logicalSrcIdx = 16;
	  section.data(8).dtTransOffset = 7;
	
	  ;% Robot_calibration_Ipos_P.Discreteintegrator_gainval
	  section.data(9).logicalSrcIdx = 17;
	  section.data(9).dtTransOffset = 19;
	
	  ;% Robot_calibration_Ipos_P.Discreteintegrator_IC
	  section.data(10).logicalSrcIdx = 18;
	  section.data(10).dtTransOffset = 20;
	
	  ;% Robot_calibration_Ipos_P.Gain1_Gain
	  section.data(11).logicalSrcIdx = 19;
	  section.data(11).dtTransOffset = 21;
	
	  ;% Robot_calibration_Ipos_P.Dctintegrator3_P1_Size
	  section.data(12).logicalSrcIdx = 20;
	  section.data(12).dtTransOffset = 22;
	
	  ;% Robot_calibration_Ipos_P.Dctintegrator3_P1
	  section.data(13).logicalSrcIdx = 21;
	  section.data(13).dtTransOffset = 24;
	
	  ;% Robot_calibration_Ipos_P.Dctintegrator3_P2_Size
	  section.data(14).logicalSrcIdx = 22;
	  section.data(14).dtTransOffset = 25;
	
	  ;% Robot_calibration_Ipos_P.Dctintegrator3_P2
	  section.data(15).logicalSrcIdx = 23;
	  section.data(15).dtTransOffset = 27;
	
	  ;% Robot_calibration_Ipos_P.Dct1lowpass_P1_Size
	  section.data(16).logicalSrcIdx = 24;
	  section.data(16).dtTransOffset = 28;
	
	  ;% Robot_calibration_Ipos_P.Dct1lowpass_P1
	  section.data(17).logicalSrcIdx = 25;
	  section.data(17).dtTransOffset = 30;
	
	  ;% Robot_calibration_Ipos_P.Dct1lowpass_P2_Size
	  section.data(18).logicalSrcIdx = 26;
	  section.data(18).dtTransOffset = 31;
	
	  ;% Robot_calibration_Ipos_P.Dct1lowpass_P2
	  section.data(19).logicalSrcIdx = 27;
	  section.data(19).dtTransOffset = 33;
	
	  ;% Robot_calibration_Ipos_P.Dctleadlag_P1_Size
	  section.data(20).logicalSrcIdx = 28;
	  section.data(20).dtTransOffset = 34;
	
	  ;% Robot_calibration_Ipos_P.Dctleadlag_P1
	  section.data(21).logicalSrcIdx = 29;
	  section.data(21).dtTransOffset = 36;
	
	  ;% Robot_calibration_Ipos_P.Dctleadlag_P2_Size
	  section.data(22).logicalSrcIdx = 30;
	  section.data(22).dtTransOffset = 37;
	
	  ;% Robot_calibration_Ipos_P.Dctleadlag_P2
	  section.data(23).logicalSrcIdx = 31;
	  section.data(23).dtTransOffset = 39;
	
	  ;% Robot_calibration_Ipos_P.Dctleadlag_P3_Size
	  section.data(24).logicalSrcIdx = 32;
	  section.data(24).dtTransOffset = 40;
	
	  ;% Robot_calibration_Ipos_P.Dctleadlag_P3
	  section.data(25).logicalSrcIdx = 33;
	  section.data(25).dtTransOffset = 42;
	
	  ;% Robot_calibration_Ipos_P.Gain_Gain
	  section.data(26).logicalSrcIdx = 34;
	  section.data(26).dtTransOffset = 43;
	
	  ;% Robot_calibration_Ipos_P.FeedfowardRV_Value
	  section.data(27).logicalSrcIdx = 35;
	  section.data(27).dtTransOffset = 44;
	
	  ;% Robot_calibration_Ipos_P.ReferenceXrad_Value
	  section.data(28).logicalSrcIdx = 36;
	  section.data(28).dtTransOffset = 45;
	
	  ;% Robot_calibration_Ipos_P.Gain1_Gain_g
	  section.data(29).logicalSrcIdx = 37;
	  section.data(29).dtTransOffset = 46;
	
	  ;% Robot_calibration_Ipos_P.FeedfowardXV_Value
	  section.data(30).logicalSrcIdx = 38;
	  section.data(30).dtTransOffset = 47;
	
	  ;% Robot_calibration_Ipos_P.ReferenceZrad_Value
	  section.data(31).logicalSrcIdx = 39;
	  section.data(31).dtTransOffset = 48;
	
	  ;% Robot_calibration_Ipos_P.Gain_Gain_i
	  section.data(32).logicalSrcIdx = 40;
	  section.data(32).dtTransOffset = 49;
	
	  ;% Robot_calibration_Ipos_P.FeedfowardZV_Value
	  section.data(33).logicalSrcIdx = 41;
	  section.data(33).dtTransOffset = 50;
	
	  ;% Robot_calibration_Ipos_P.Conveyorspeedmms_Value
	  section.data(34).logicalSrcIdx = 42;
	  section.data(34).dtTransOffset = 51;
	
	  ;% Robot_calibration_Ipos_P.Saturation_UpperSat
	  section.data(35).logicalSrcIdx = 43;
	  section.data(35).dtTransOffset = 52;
	
	  ;% Robot_calibration_Ipos_P.Saturation_LowerSat
	  section.data(36).logicalSrcIdx = 44;
	  section.data(36).dtTransOffset = 53;
	
	  ;% Robot_calibration_Ipos_P.ReferenceVacuumbar_Value
	  section.data(37).logicalSrcIdx = 45;
	  section.data(37).dtTransOffset = 54;
	
	  ;% Robot_calibration_Ipos_P.Gain1_Gain_j
	  section.data(38).logicalSrcIdx = 46;
	  section.data(38).dtTransOffset = 55;
	
	  ;% Robot_calibration_Ipos_P.Object_Value
	  section.data(39).logicalSrcIdx = 47;
	  section.data(39).dtTransOffset = 56;
	
	  ;% Robot_calibration_Ipos_P.Plot_Value
	  section.data(40).logicalSrcIdx = 48;
	  section.data(40).dtTransOffset = 57;
	
	  ;% Robot_calibration_Ipos_P.Stop_Value
	  section.data(41).logicalSrcIdx = 49;
	  section.data(41).dtTransOffset = 58;
	
	  ;% Robot_calibration_Ipos_P.HomingRunningSwitch2_Threshold
	  section.data(42).logicalSrcIdx = 50;
	  section.data(42).dtTransOffset = 59;
	
	  ;% Robot_calibration_Ipos_P.HomingRunningSwitch1_Threshold
	  section.data(43).logicalSrcIdx = 51;
	  section.data(43).dtTransOffset = 60;
	
	  ;% Robot_calibration_Ipos_P.HomingRunningSwitch_Threshold
	  section.data(44).logicalSrcIdx = 52;
	  section.data(44).dtTransOffset = 61;
	
	  ;% Robot_calibration_Ipos_P.Constant1_Value
	  section.data(45).logicalSrcIdx = 53;
	  section.data(45).dtTransOffset = 62;
	
	  ;% Robot_calibration_Ipos_P.HomingRunningSwitch_Threshold_d
	  section.data(46).logicalSrcIdx = 54;
	  section.data(46).dtTransOffset = 63;
	
	  ;% Robot_calibration_Ipos_P.Constant1_Value_f
	  section.data(47).logicalSrcIdx = 55;
	  section.data(47).dtTransOffset = 64;
	
	  ;% Robot_calibration_Ipos_P.SFunction_P1_Size
	  section.data(48).logicalSrcIdx = 56;
	  section.data(48).dtTransOffset = 65;
	
	  ;% Robot_calibration_Ipos_P.SFunction_P1
	  section.data(49).logicalSrcIdx = 57;
	  section.data(49).dtTransOffset = 67;
	
	  ;% Robot_calibration_Ipos_P.SFunction_P2_Size
	  section.data(50).logicalSrcIdx = 58;
	  section.data(50).dtTransOffset = 68;
	
	  ;% Robot_calibration_Ipos_P.SFunction_P2
	  section.data(51).logicalSrcIdx = 59;
	  section.data(51).dtTransOffset = 70;
	
	  ;% Robot_calibration_Ipos_P.ec_Ipos_P1_Size
	  section.data(52).logicalSrcIdx = 60;
	  section.data(52).dtTransOffset = 71;
	
	  ;% Robot_calibration_Ipos_P.ec_Ipos_P1
	  section.data(53).logicalSrcIdx = 61;
	  section.data(53).dtTransOffset = 73;
	
	  ;% Robot_calibration_Ipos_P.Gain_Gain_n
	  section.data(54).logicalSrcIdx = 62;
	  section.data(54).dtTransOffset = 74;
	
	  ;% Robot_calibration_Ipos_P.Constant1_Value_b
	  section.data(55).logicalSrcIdx = 63;
	  section.data(55).dtTransOffset = 75;
	
	  ;% Robot_calibration_Ipos_P.DiscreteTimeIntegrator_gainval
	  section.data(56).logicalSrcIdx = 64;
	  section.data(56).dtTransOffset = 76;
	
	  ;% Robot_calibration_Ipos_P.DiscreteTimeIntegrator_gainva_i
	  section.data(57).logicalSrcIdx = 65;
	  section.data(57).dtTransOffset = 77;
	
	  ;% Robot_calibration_Ipos_P.DiscreteTimeIntegrator_IC
	  section.data(58).logicalSrcIdx = 66;
	  section.data(58).dtTransOffset = 78;
	
	  ;% Robot_calibration_Ipos_P.Constant_Value
	  section.data(59).logicalSrcIdx = 67;
	  section.data(59).dtTransOffset = 79;
	
	  ;% Robot_calibration_Ipos_P.Gain1_Gain_g2
	  section.data(60).logicalSrcIdx = 68;
	  section.data(60).dtTransOffset = 80;
	
	  ;% Robot_calibration_Ipos_P.DiscreteTimeIntegrator_gainva_h
	  section.data(61).logicalSrcIdx = 69;
	  section.data(61).dtTransOffset = 81;
	
	  ;% Robot_calibration_Ipos_P.DiscreteTimeIntegrator_IC_c
	  section.data(62).logicalSrcIdx = 70;
	  section.data(62).dtTransOffset = 82;
	
	  ;% Robot_calibration_Ipos_P.set_robot_calibration_x_Value
	  section.data(63).logicalSrcIdx = 71;
	  section.data(63).dtTransOffset = 83;
	
	  ;% Robot_calibration_Ipos_P.UnitDelay_InitialCondition
	  section.data(64).logicalSrcIdx = 72;
	  section.data(64).dtTransOffset = 84;
	
	  ;% Robot_calibration_Ipos_P.HomingRunningSwitch1_Threshol_h
	  section.data(65).logicalSrcIdx = 73;
	  section.data(65).dtTransOffset = 85;
	
	  ;% Robot_calibration_Ipos_P.Constant2_Value
	  section.data(66).logicalSrcIdx = 74;
	  section.data(66).dtTransOffset = 86;
	
	  ;% Robot_calibration_Ipos_P.Constant3_Value
	  section.data(67).logicalSrcIdx = 75;
	  section.data(67).dtTransOffset = 87;
	
	  ;% Robot_calibration_Ipos_P.Constant_Value_f
	  section.data(68).logicalSrcIdx = 76;
	  section.data(68).dtTransOffset = 88;
	
	  ;% Robot_calibration_Ipos_P.Gain2_Gain
	  section.data(69).logicalSrcIdx = 77;
	  section.data(69).dtTransOffset = 89;
	
	  ;% Robot_calibration_Ipos_P.DiscreteTimeIntegrator_gainva_o
	  section.data(70).logicalSrcIdx = 78;
	  section.data(70).dtTransOffset = 90;
	
	  ;% Robot_calibration_Ipos_P.DiscreteTimeIntegrator_IC_o
	  section.data(71).logicalSrcIdx = 79;
	  section.data(71).dtTransOffset = 91;
	
	  ;% Robot_calibration_Ipos_P.set_robot_calibration_z_Value
	  section.data(72).logicalSrcIdx = 80;
	  section.data(72).dtTransOffset = 92;
	
	  ;% Robot_calibration_Ipos_P.UnitDelay_InitialCondition_d
	  section.data(73).logicalSrcIdx = 81;
	  section.data(73).dtTransOffset = 93;
	
	  ;% Robot_calibration_Ipos_P.HomingRunningSwitch1_Threshol_p
	  section.data(74).logicalSrcIdx = 82;
	  section.data(74).dtTransOffset = 94;
	
	  ;% Robot_calibration_Ipos_P.Constant2_Value_h
	  section.data(75).logicalSrcIdx = 83;
	  section.data(75).dtTransOffset = 95;
	
	  ;% Robot_calibration_Ipos_P.Constant3_Value_m
	  section.data(76).logicalSrcIdx = 84;
	  section.data(76).dtTransOffset = 96;
	
	  ;% Robot_calibration_Ipos_P.Constant_Value_o
	  section.data(77).logicalSrcIdx = 85;
	  section.data(77).dtTransOffset = 97;
	
	  ;% Robot_calibration_Ipos_P.UnitDelay_InitialCondition_k
	  section.data(78).logicalSrcIdx = 86;
	  section.data(78).dtTransOffset = 98;
	
	  ;% Robot_calibration_Ipos_P.set_robot_calibration_r_Value
	  section.data(79).logicalSrcIdx = 87;
	  section.data(79).dtTransOffset = 99;
	
	  ;% Robot_calibration_Ipos_P.Gain_Gain_m
	  section.data(80).logicalSrcIdx = 88;
	  section.data(80).dtTransOffset = 100;
	
	  ;% Robot_calibration_Ipos_P.Constant_Value_m
	  section.data(81).logicalSrcIdx = 89;
	  section.data(81).dtTransOffset = 101;
	
	  ;% Robot_calibration_Ipos_P.Gain3_Gain
	  section.data(82).logicalSrcIdx = 90;
	  section.data(82).dtTransOffset = 102;
	
	  ;% Robot_calibration_Ipos_P.Gain4_Gain
	  section.data(83).logicalSrcIdx = 91;
	  section.data(83).dtTransOffset = 103;
	
	  ;% Robot_calibration_Ipos_P.Gain5_Gain
	  section.data(84).logicalSrcIdx = 92;
	  section.data(84).dtTransOffset = 104;
	
	  ;% Robot_calibration_Ipos_P.Saturation_UpperSat_d
	  section.data(85).logicalSrcIdx = 93;
	  section.data(85).dtTransOffset = 105;
	
	  ;% Robot_calibration_Ipos_P.Saturation_LowerSat_n
	  section.data(86).logicalSrcIdx = 94;
	  section.data(86).dtTransOffset = 106;
	
	  ;% Robot_calibration_Ipos_P.UnitDelay1_InitialCondition
	  section.data(87).logicalSrcIdx = 95;
	  section.data(87).dtTransOffset = 107;
	
	  ;% Robot_calibration_Ipos_P.HomingRunningSwitch_Threshold_l
	  section.data(88).logicalSrcIdx = 96;
	  section.data(88).dtTransOffset = 108;
	
	  ;% Robot_calibration_Ipos_P.ResetEncoderR_P1_Size
	  section.data(89).logicalSrcIdx = 97;
	  section.data(89).dtTransOffset = 109;
	
	  ;% Robot_calibration_Ipos_P.ResetEncoderR_P1
	  section.data(90).logicalSrcIdx = 98;
	  section.data(90).dtTransOffset = 111;
	
	  ;% Robot_calibration_Ipos_P.Gain_Gain_h
	  section.data(91).logicalSrcIdx = 99;
	  section.data(91).dtTransOffset = 112;
	
	  ;% Robot_calibration_Ipos_P.Dctintegrator_P1_Size
	  section.data(92).logicalSrcIdx = 100;
	  section.data(92).dtTransOffset = 113;
	
	  ;% Robot_calibration_Ipos_P.Dctintegrator_P1
	  section.data(93).logicalSrcIdx = 101;
	  section.data(93).dtTransOffset = 115;
	
	  ;% Robot_calibration_Ipos_P.Dctintegrator_P2_Size
	  section.data(94).logicalSrcIdx = 102;
	  section.data(94).dtTransOffset = 116;
	
	  ;% Robot_calibration_Ipos_P.Dctintegrator_P2
	  section.data(95).logicalSrcIdx = 103;
	  section.data(95).dtTransOffset = 118;
	
	  ;% Robot_calibration_Ipos_P.Dctleadlag_P1_Size_m
	  section.data(96).logicalSrcIdx = 104;
	  section.data(96).dtTransOffset = 119;
	
	  ;% Robot_calibration_Ipos_P.Dctleadlag_P1_g
	  section.data(97).logicalSrcIdx = 105;
	  section.data(97).dtTransOffset = 121;
	
	  ;% Robot_calibration_Ipos_P.Dctleadlag_P2_Size_p
	  section.data(98).logicalSrcIdx = 106;
	  section.data(98).dtTransOffset = 122;
	
	  ;% Robot_calibration_Ipos_P.Dctleadlag_P2_g
	  section.data(99).logicalSrcIdx = 107;
	  section.data(99).dtTransOffset = 124;
	
	  ;% Robot_calibration_Ipos_P.Dctleadlag_P3_Size_h
	  section.data(100).logicalSrcIdx = 108;
	  section.data(100).dtTransOffset = 125;
	
	  ;% Robot_calibration_Ipos_P.Dctleadlag_P3_e
	  section.data(101).logicalSrcIdx = 109;
	  section.data(101).dtTransOffset = 127;
	
	  ;% Robot_calibration_Ipos_P.Dct1lowpass_P1_Size_m
	  section.data(102).logicalSrcIdx = 110;
	  section.data(102).dtTransOffset = 128;
	
	  ;% Robot_calibration_Ipos_P.Dct1lowpass_P1_e
	  section.data(103).logicalSrcIdx = 111;
	  section.data(103).dtTransOffset = 130;
	
	  ;% Robot_calibration_Ipos_P.Dct1lowpass_P2_Size_o
	  section.data(104).logicalSrcIdx = 112;
	  section.data(104).dtTransOffset = 131;
	
	  ;% Robot_calibration_Ipos_P.Dct1lowpass_P2_a
	  section.data(105).logicalSrcIdx = 113;
	  section.data(105).dtTransOffset = 133;
	
	  ;% Robot_calibration_Ipos_P.HomingRunningSwitch_Threshold_g
	  section.data(106).logicalSrcIdx = 114;
	  section.data(106).dtTransOffset = 134;
	
	  ;% Robot_calibration_Ipos_P.Gain_Gain_c
	  section.data(107).logicalSrcIdx = 115;
	  section.data(107).dtTransOffset = 135;
	
	  ;% Robot_calibration_Ipos_P.Dctleadlag_P1_Size_c
	  section.data(108).logicalSrcIdx = 116;
	  section.data(108).dtTransOffset = 136;
	
	  ;% Robot_calibration_Ipos_P.Dctleadlag_P1_e
	  section.data(109).logicalSrcIdx = 117;
	  section.data(109).dtTransOffset = 138;
	
	  ;% Robot_calibration_Ipos_P.Dctleadlag_P2_Size_k
	  section.data(110).logicalSrcIdx = 118;
	  section.data(110).dtTransOffset = 139;
	
	  ;% Robot_calibration_Ipos_P.Dctleadlag_P2_b
	  section.data(111).logicalSrcIdx = 119;
	  section.data(111).dtTransOffset = 141;
	
	  ;% Robot_calibration_Ipos_P.Dctleadlag_P3_Size_hn
	  section.data(112).logicalSrcIdx = 120;
	  section.data(112).dtTransOffset = 142;
	
	  ;% Robot_calibration_Ipos_P.Dctleadlag_P3_g
	  section.data(113).logicalSrcIdx = 121;
	  section.data(113).dtTransOffset = 144;
	
	  ;% Robot_calibration_Ipos_P.Dct1lowpass_P1_Size_a
	  section.data(114).logicalSrcIdx = 122;
	  section.data(114).dtTransOffset = 145;
	
	  ;% Robot_calibration_Ipos_P.Dct1lowpass_P1_g
	  section.data(115).logicalSrcIdx = 123;
	  section.data(115).dtTransOffset = 147;
	
	  ;% Robot_calibration_Ipos_P.Dct1lowpass_P2_Size_l
	  section.data(116).logicalSrcIdx = 124;
	  section.data(116).dtTransOffset = 148;
	
	  ;% Robot_calibration_Ipos_P.Dct1lowpass_P2_i
	  section.data(117).logicalSrcIdx = 125;
	  section.data(117).dtTransOffset = 150;
	
	  ;% Robot_calibration_Ipos_P.Gain1_Gain_m
	  section.data(118).logicalSrcIdx = 126;
	  section.data(118).dtTransOffset = 151;
	
	  ;% Robot_calibration_Ipos_P.Saturation1_UpperSat
	  section.data(119).logicalSrcIdx = 127;
	  section.data(119).dtTransOffset = 152;
	
	  ;% Robot_calibration_Ipos_P.Saturation1_LowerSat
	  section.data(120).logicalSrcIdx = 128;
	  section.data(120).dtTransOffset = 153;
	
	  ;% Robot_calibration_Ipos_P.ResetEncoderR1_P1_Size
	  section.data(121).logicalSrcIdx = 129;
	  section.data(121).dtTransOffset = 154;
	
	  ;% Robot_calibration_Ipos_P.ResetEncoderR1_P1
	  section.data(122).logicalSrcIdx = 130;
	  section.data(122).dtTransOffset = 156;
	
	  ;% Robot_calibration_Ipos_P.Gain1_Gain_o
	  section.data(123).logicalSrcIdx = 131;
	  section.data(123).dtTransOffset = 157;
	
	  ;% Robot_calibration_Ipos_P.Dctintegrator_P1_Size_i
	  section.data(124).logicalSrcIdx = 132;
	  section.data(124).dtTransOffset = 158;
	
	  ;% Robot_calibration_Ipos_P.Dctintegrator_P1_j
	  section.data(125).logicalSrcIdx = 133;
	  section.data(125).dtTransOffset = 160;
	
	  ;% Robot_calibration_Ipos_P.Dctintegrator_P2_Size_p
	  section.data(126).logicalSrcIdx = 134;
	  section.data(126).dtTransOffset = 161;
	
	  ;% Robot_calibration_Ipos_P.Dctintegrator_P2_n
	  section.data(127).logicalSrcIdx = 135;
	  section.data(127).dtTransOffset = 163;
	
	  ;% Robot_calibration_Ipos_P.Dctleadlag_P1_Size_d
	  section.data(128).logicalSrcIdx = 136;
	  section.data(128).dtTransOffset = 164;
	
	  ;% Robot_calibration_Ipos_P.Dctleadlag_P1_m
	  section.data(129).logicalSrcIdx = 137;
	  section.data(129).dtTransOffset = 166;
	
	  ;% Robot_calibration_Ipos_P.Dctleadlag_P2_Size_g
	  section.data(130).logicalSrcIdx = 138;
	  section.data(130).dtTransOffset = 167;
	
	  ;% Robot_calibration_Ipos_P.Dctleadlag_P2_p
	  section.data(131).logicalSrcIdx = 139;
	  section.data(131).dtTransOffset = 169;
	
	  ;% Robot_calibration_Ipos_P.Dctleadlag_P3_Size_o
	  section.data(132).logicalSrcIdx = 140;
	  section.data(132).dtTransOffset = 170;
	
	  ;% Robot_calibration_Ipos_P.Dctleadlag_P3_ge
	  section.data(133).logicalSrcIdx = 141;
	  section.data(133).dtTransOffset = 172;
	
	  ;% Robot_calibration_Ipos_P.Dct1lowpass_P1_Size_m3
	  section.data(134).logicalSrcIdx = 142;
	  section.data(134).dtTransOffset = 173;
	
	  ;% Robot_calibration_Ipos_P.Dct1lowpass_P1_f
	  section.data(135).logicalSrcIdx = 143;
	  section.data(135).dtTransOffset = 175;
	
	  ;% Robot_calibration_Ipos_P.Dct1lowpass_P2_Size_b
	  section.data(136).logicalSrcIdx = 144;
	  section.data(136).dtTransOffset = 176;
	
	  ;% Robot_calibration_Ipos_P.Dct1lowpass_P2_k
	  section.data(137).logicalSrcIdx = 145;
	  section.data(137).dtTransOffset = 178;
	
	  ;% Robot_calibration_Ipos_P.Gain1_Gain_h
	  section.data(138).logicalSrcIdx = 146;
	  section.data(138).dtTransOffset = 179;
	
	  ;% Robot_calibration_Ipos_P.Dctleadlag_P1_Size_b
	  section.data(139).logicalSrcIdx = 147;
	  section.data(139).dtTransOffset = 180;
	
	  ;% Robot_calibration_Ipos_P.Dctleadlag_P1_p
	  section.data(140).logicalSrcIdx = 148;
	  section.data(140).dtTransOffset = 182;
	
	  ;% Robot_calibration_Ipos_P.Dctleadlag_P2_Size_m
	  section.data(141).logicalSrcIdx = 149;
	  section.data(141).dtTransOffset = 183;
	
	  ;% Robot_calibration_Ipos_P.Dctleadlag_P2_a
	  section.data(142).logicalSrcIdx = 150;
	  section.data(142).dtTransOffset = 185;
	
	  ;% Robot_calibration_Ipos_P.Dctleadlag_P3_Size_p
	  section.data(143).logicalSrcIdx = 151;
	  section.data(143).dtTransOffset = 186;
	
	  ;% Robot_calibration_Ipos_P.Dctleadlag_P3_c
	  section.data(144).logicalSrcIdx = 152;
	  section.data(144).dtTransOffset = 188;
	
	  ;% Robot_calibration_Ipos_P.Dct1lowpass_P1_Size_n
	  section.data(145).logicalSrcIdx = 153;
	  section.data(145).dtTransOffset = 189;
	
	  ;% Robot_calibration_Ipos_P.Dct1lowpass_P1_h
	  section.data(146).logicalSrcIdx = 154;
	  section.data(146).dtTransOffset = 191;
	
	  ;% Robot_calibration_Ipos_P.Dct1lowpass_P2_Size_g
	  section.data(147).logicalSrcIdx = 155;
	  section.data(147).dtTransOffset = 192;
	
	  ;% Robot_calibration_Ipos_P.Dct1lowpass_P2_b
	  section.data(148).logicalSrcIdx = 156;
	  section.data(148).dtTransOffset = 194;
	
	  ;% Robot_calibration_Ipos_P.Gain_Gain_cj
	  section.data(149).logicalSrcIdx = 157;
	  section.data(149).dtTransOffset = 195;
	
	  ;% Robot_calibration_Ipos_P.Saturation1_UpperSat_e
	  section.data(150).logicalSrcIdx = 158;
	  section.data(150).dtTransOffset = 196;
	
	  ;% Robot_calibration_Ipos_P.Saturation1_LowerSat_p
	  section.data(151).logicalSrcIdx = 159;
	  section.data(151).dtTransOffset = 197;
	
	  ;% Robot_calibration_Ipos_P.ResetEncoderR1_P1_Size_d
	  section.data(152).logicalSrcIdx = 160;
	  section.data(152).dtTransOffset = 198;
	
	  ;% Robot_calibration_Ipos_P.ResetEncoderR1_P1_d
	  section.data(153).logicalSrcIdx = 161;
	  section.data(153).dtTransOffset = 200;
	
	  ;% Robot_calibration_Ipos_P.Gain_Gain_cr
	  section.data(154).logicalSrcIdx = 162;
	  section.data(154).dtTransOffset = 201;
	
	  ;% Robot_calibration_Ipos_P.Dctintegrator_P1_Size_p
	  section.data(155).logicalSrcIdx = 163;
	  section.data(155).dtTransOffset = 202;
	
	  ;% Robot_calibration_Ipos_P.Dctintegrator_P1_k
	  section.data(156).logicalSrcIdx = 164;
	  section.data(156).dtTransOffset = 204;
	
	  ;% Robot_calibration_Ipos_P.Dctintegrator_P2_Size_o
	  section.data(157).logicalSrcIdx = 165;
	  section.data(157).dtTransOffset = 205;
	
	  ;% Robot_calibration_Ipos_P.Dctintegrator_P2_m
	  section.data(158).logicalSrcIdx = 166;
	  section.data(158).dtTransOffset = 207;
	
	  ;% Robot_calibration_Ipos_P.Dctleadlag_P1_Size_ch
	  section.data(159).logicalSrcIdx = 167;
	  section.data(159).dtTransOffset = 208;
	
	  ;% Robot_calibration_Ipos_P.Dctleadlag_P1_h
	  section.data(160).logicalSrcIdx = 168;
	  section.data(160).dtTransOffset = 210;
	
	  ;% Robot_calibration_Ipos_P.Dctleadlag_P2_Size_h
	  section.data(161).logicalSrcIdx = 169;
	  section.data(161).dtTransOffset = 211;
	
	  ;% Robot_calibration_Ipos_P.Dctleadlag_P2_l
	  section.data(162).logicalSrcIdx = 170;
	  section.data(162).dtTransOffset = 213;
	
	  ;% Robot_calibration_Ipos_P.Dctleadlag_P3_Size_f
	  section.data(163).logicalSrcIdx = 171;
	  section.data(163).dtTransOffset = 214;
	
	  ;% Robot_calibration_Ipos_P.Dctleadlag_P3_a
	  section.data(164).logicalSrcIdx = 172;
	  section.data(164).dtTransOffset = 216;
	
	  ;% Robot_calibration_Ipos_P.Dct1lowpass_P1_Size_ni
	  section.data(165).logicalSrcIdx = 173;
	  section.data(165).dtTransOffset = 217;
	
	  ;% Robot_calibration_Ipos_P.Dct1lowpass_P1_j
	  section.data(166).logicalSrcIdx = 174;
	  section.data(166).dtTransOffset = 219;
	
	  ;% Robot_calibration_Ipos_P.Dct1lowpass_P2_Size_a
	  section.data(167).logicalSrcIdx = 175;
	  section.data(167).dtTransOffset = 220;
	
	  ;% Robot_calibration_Ipos_P.Dct1lowpass_P2_j
	  section.data(168).logicalSrcIdx = 176;
	  section.data(168).dtTransOffset = 222;
	
	  ;% Robot_calibration_Ipos_P.Gain_Gain_l
	  section.data(169).logicalSrcIdx = 177;
	  section.data(169).dtTransOffset = 223;
	
	  ;% Robot_calibration_Ipos_P.Dctleadlag_P1_Size_by
	  section.data(170).logicalSrcIdx = 178;
	  section.data(170).dtTransOffset = 224;
	
	  ;% Robot_calibration_Ipos_P.Dctleadlag_P1_i
	  section.data(171).logicalSrcIdx = 179;
	  section.data(171).dtTransOffset = 226;
	
	  ;% Robot_calibration_Ipos_P.Dctleadlag_P2_Size_j
	  section.data(172).logicalSrcIdx = 180;
	  section.data(172).dtTransOffset = 227;
	
	  ;% Robot_calibration_Ipos_P.Dctleadlag_P2_o
	  section.data(173).logicalSrcIdx = 181;
	  section.data(173).dtTransOffset = 229;
	
	  ;% Robot_calibration_Ipos_P.Dctleadlag_P3_Size_oi
	  section.data(174).logicalSrcIdx = 182;
	  section.data(174).dtTransOffset = 230;
	
	  ;% Robot_calibration_Ipos_P.Dctleadlag_P3_aa
	  section.data(175).logicalSrcIdx = 183;
	  section.data(175).dtTransOffset = 232;
	
	  ;% Robot_calibration_Ipos_P.Dct1lowpass_P1_Size_p
	  section.data(176).logicalSrcIdx = 184;
	  section.data(176).dtTransOffset = 233;
	
	  ;% Robot_calibration_Ipos_P.Dct1lowpass_P1_j3
	  section.data(177).logicalSrcIdx = 185;
	  section.data(177).dtTransOffset = 235;
	
	  ;% Robot_calibration_Ipos_P.Dct1lowpass_P2_Size_j
	  section.data(178).logicalSrcIdx = 186;
	  section.data(178).dtTransOffset = 236;
	
	  ;% Robot_calibration_Ipos_P.Dct1lowpass_P2_c
	  section.data(179).logicalSrcIdx = 187;
	  section.data(179).dtTransOffset = 238;
	
	  ;% Robot_calibration_Ipos_P.Gain_Gain_g
	  section.data(180).logicalSrcIdx = 188;
	  section.data(180).dtTransOffset = 239;
	
	  ;% Robot_calibration_Ipos_P.Saturation1_UpperSat_i
	  section.data(181).logicalSrcIdx = 189;
	  section.data(181).dtTransOffset = 240;
	
	  ;% Robot_calibration_Ipos_P.Saturation1_LowerSat_n
	  section.data(182).logicalSrcIdx = 190;
	  section.data(182).dtTransOffset = 241;
	
	  ;% Robot_calibration_Ipos_P.ResetEncoderR1_P1_Size_b
	  section.data(183).logicalSrcIdx = 191;
	  section.data(183).dtTransOffset = 242;
	
	  ;% Robot_calibration_Ipos_P.ResetEncoderR1_P1_l
	  section.data(184).logicalSrcIdx = 192;
	  section.data(184).dtTransOffset = 244;
	
	  ;% Robot_calibration_Ipos_P.DiscreteTimeIntegrator_gainva_g
	  section.data(185).logicalSrcIdx = 193;
	  section.data(185).dtTransOffset = 245;
	
	  ;% Robot_calibration_Ipos_P.DiscreteTimeIntegrator_IC_co
	  section.data(186).logicalSrcIdx = 194;
	  section.data(186).dtTransOffset = 246;
	
	  ;% Robot_calibration_Ipos_P.Gain1_Gain_ja
	  section.data(187).logicalSrcIdx = 195;
	  section.data(187).dtTransOffset = 247;
	
	  ;% Robot_calibration_Ipos_P.Dctintegrator3_P1_Size_m
	  section.data(188).logicalSrcIdx = 196;
	  section.data(188).dtTransOffset = 248;
	
	  ;% Robot_calibration_Ipos_P.Dctintegrator3_P1_j
	  section.data(189).logicalSrcIdx = 197;
	  section.data(189).dtTransOffset = 250;
	
	  ;% Robot_calibration_Ipos_P.Dctintegrator3_P2_Size_b
	  section.data(190).logicalSrcIdx = 198;
	  section.data(190).dtTransOffset = 251;
	
	  ;% Robot_calibration_Ipos_P.Dctintegrator3_P2_j
	  section.data(191).logicalSrcIdx = 199;
	  section.data(191).dtTransOffset = 253;
	
	  ;% Robot_calibration_Ipos_P.Dct1lowpass_P1_Size_j
	  section.data(192).logicalSrcIdx = 200;
	  section.data(192).dtTransOffset = 254;
	
	  ;% Robot_calibration_Ipos_P.Dct1lowpass_P1_ez
	  section.data(193).logicalSrcIdx = 201;
	  section.data(193).dtTransOffset = 256;
	
	  ;% Robot_calibration_Ipos_P.Dct1lowpass_P2_Size_aj
	  section.data(194).logicalSrcIdx = 202;
	  section.data(194).dtTransOffset = 257;
	
	  ;% Robot_calibration_Ipos_P.Dct1lowpass_P2_n
	  section.data(195).logicalSrcIdx = 203;
	  section.data(195).dtTransOffset = 259;
	
	  ;% Robot_calibration_Ipos_P.Dctleadlag_P1_Size_l
	  section.data(196).logicalSrcIdx = 204;
	  section.data(196).dtTransOffset = 260;
	
	  ;% Robot_calibration_Ipos_P.Dctleadlag_P1_m0
	  section.data(197).logicalSrcIdx = 205;
	  section.data(197).dtTransOffset = 262;
	
	  ;% Robot_calibration_Ipos_P.Dctleadlag_P2_Size_n
	  section.data(198).logicalSrcIdx = 206;
	  section.data(198).dtTransOffset = 263;
	
	  ;% Robot_calibration_Ipos_P.Dctleadlag_P2_f
	  section.data(199).logicalSrcIdx = 207;
	  section.data(199).dtTransOffset = 265;
	
	  ;% Robot_calibration_Ipos_P.Dctleadlag_P3_Size_d
	  section.data(200).logicalSrcIdx = 208;
	  section.data(200).dtTransOffset = 266;
	
	  ;% Robot_calibration_Ipos_P.Dctleadlag_P3_i
	  section.data(201).logicalSrcIdx = 209;
	  section.data(201).dtTransOffset = 268;
	
	  ;% Robot_calibration_Ipos_P.HomingRunningSwitch_Threshol_lq
	  section.data(202).logicalSrcIdx = 210;
	  section.data(202).dtTransOffset = 269;
	
	  ;% Robot_calibration_Ipos_P.Gain_Gain_j
	  section.data(203).logicalSrcIdx = 211;
	  section.data(203).dtTransOffset = 270;
	
	  ;% Robot_calibration_Ipos_P.Saturation1_UpperSat_o
	  section.data(204).logicalSrcIdx = 212;
	  section.data(204).dtTransOffset = 271;
	
	  ;% Robot_calibration_Ipos_P.Saturation1_LowerSat_g
	  section.data(205).logicalSrcIdx = 213;
	  section.data(205).dtTransOffset = 272;
	
	  ;% Robot_calibration_Ipos_P.Constant1_Value_e
	  section.data(206).logicalSrcIdx = 214;
	  section.data(206).dtTransOffset = 273;
	
	  ;% Robot_calibration_Ipos_P.LimitSpeed_RisingLim
	  section.data(207).logicalSrcIdx = 215;
	  section.data(207).dtTransOffset = 274;
	
	  ;% Robot_calibration_Ipos_P.LimitSpeed_FallingLim
	  section.data(208).logicalSrcIdx = 216;
	  section.data(208).dtTransOffset = 275;
	
	  ;% Robot_calibration_Ipos_P.LimitSpeed_IC
	  section.data(209).logicalSrcIdx = 217;
	  section.data(209).dtTransOffset = 276;
	
	  ;% Robot_calibration_Ipos_P.TSamp_WtEt
	  section.data(210).logicalSrcIdx = 218;
	  section.data(210).dtTransOffset = 277;
	
	  ;% Robot_calibration_Ipos_P.LimitAcceleration_RisingLim
	  section.data(211).logicalSrcIdx = 219;
	  section.data(211).dtTransOffset = 278;
	
	  ;% Robot_calibration_Ipos_P.LimitAcceleration_FallingLim
	  section.data(212).logicalSrcIdx = 220;
	  section.data(212).dtTransOffset = 279;
	
	  ;% Robot_calibration_Ipos_P.LimitAcceleration_IC
	  section.data(213).logicalSrcIdx = 221;
	  section.data(213).dtTransOffset = 280;
	
	  ;% Robot_calibration_Ipos_P.DiscreteTimeIntegrator_gainva_n
	  section.data(214).logicalSrcIdx = 222;
	  section.data(214).dtTransOffset = 281;
	
	  ;% Robot_calibration_Ipos_P.Constant1_Value_a
	  section.data(215).logicalSrcIdx = 223;
	  section.data(215).dtTransOffset = 282;
	
	  ;% Robot_calibration_Ipos_P.LimitSpeed_RisingLim_i
	  section.data(216).logicalSrcIdx = 224;
	  section.data(216).dtTransOffset = 283;
	
	  ;% Robot_calibration_Ipos_P.LimitSpeed_FallingLim_k
	  section.data(217).logicalSrcIdx = 225;
	  section.data(217).dtTransOffset = 284;
	
	  ;% Robot_calibration_Ipos_P.LimitSpeed_IC_a
	  section.data(218).logicalSrcIdx = 226;
	  section.data(218).dtTransOffset = 285;
	
	  ;% Robot_calibration_Ipos_P.TSamp_WtEt_d
	  section.data(219).logicalSrcIdx = 227;
	  section.data(219).dtTransOffset = 286;
	
	  ;% Robot_calibration_Ipos_P.LimitAcceleration_RisingLim_k
	  section.data(220).logicalSrcIdx = 228;
	  section.data(220).dtTransOffset = 287;
	
	  ;% Robot_calibration_Ipos_P.LimitAcceleration_FallingLim_m
	  section.data(221).logicalSrcIdx = 229;
	  section.data(221).dtTransOffset = 288;
	
	  ;% Robot_calibration_Ipos_P.LimitAcceleration_IC_k
	  section.data(222).logicalSrcIdx = 230;
	  section.data(222).dtTransOffset = 289;
	
	  ;% Robot_calibration_Ipos_P.DiscreteTimeIntegrator_gainva_j
	  section.data(223).logicalSrcIdx = 231;
	  section.data(223).dtTransOffset = 290;
	
	  ;% Robot_calibration_Ipos_P.LimitSpeed_RisingLim_iu
	  section.data(224).logicalSrcIdx = 232;
	  section.data(224).dtTransOffset = 291;
	
	  ;% Robot_calibration_Ipos_P.LimitSpeed_FallingLim_j
	  section.data(225).logicalSrcIdx = 233;
	  section.data(225).dtTransOffset = 292;
	
	  ;% Robot_calibration_Ipos_P.LimitSpeed_IC_e
	  section.data(226).logicalSrcIdx = 234;
	  section.data(226).dtTransOffset = 293;
	
	  ;% Robot_calibration_Ipos_P.TSamp_WtEt_g
	  section.data(227).logicalSrcIdx = 235;
	  section.data(227).dtTransOffset = 294;
	
	  ;% Robot_calibration_Ipos_P.LimitAcceleration_RisingLim_m
	  section.data(228).logicalSrcIdx = 236;
	  section.data(228).dtTransOffset = 295;
	
	  ;% Robot_calibration_Ipos_P.LimitAcceleration_FallingLim_k
	  section.data(229).logicalSrcIdx = 237;
	  section.data(229).dtTransOffset = 296;
	
	  ;% Robot_calibration_Ipos_P.LimitAcceleration_IC_i
	  section.data(230).logicalSrcIdx = 238;
	  section.data(230).dtTransOffset = 297;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(4) = section;
      clear section
      
      section.nData     = 10;
      section.data(10)  = dumData; %prealloc
      
	  ;% Robot_calibration_Ipos_P.LEDRing_Y0
	  section.data(1).logicalSrcIdx = 239;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Robot_calibration_Ipos_P.Colorsetwithstringblackorwhite_
	  section.data(2).logicalSrcIdx = 240;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Robot_calibration_Ipos_P.Colorspecifiedin6hexdigitsrrggb
	  section.data(3).logicalSrcIdx = 241;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Robot_calibration_Ipos_P.StringConstant3_String
	  section.data(4).logicalSrcIdx = 242;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Robot_calibration_Ipos_P.StringConstant1_String
	  section.data(5).logicalSrcIdx = 243;
	  section.data(5).dtTransOffset = 4;
	
	  ;% Robot_calibration_Ipos_P.StringConstant4_String
	  section.data(6).logicalSrcIdx = 244;
	  section.data(6).dtTransOffset = 5;
	
	  ;% Robot_calibration_Ipos_P.ReadyGreen_String
	  section.data(7).logicalSrcIdx = 245;
	  section.data(7).dtTransOffset = 6;
	
	  ;% Robot_calibration_Ipos_P.AirbagRed_String
	  section.data(8).logicalSrcIdx = 246;
	  section.data(8).dtTransOffset = 7;
	
	  ;% Robot_calibration_Ipos_P.HomingOrange_String
	  section.data(9).logicalSrcIdx = 247;
	  section.data(9).dtTransOffset = 8;
	
	  ;% Robot_calibration_Ipos_P.Delay_InitialCondition
	  section.data(10).logicalSrcIdx = 248;
	  section.data(10).dtTransOffset = 9;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(5) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% Robot_calibration_Ipos_P.ManualSwitch_CurrentSetting
	  section.data(1).logicalSrcIdx = 249;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Robot_calibration_Ipos_P.ManualSwitch1_CurrentSetting
	  section.data(2).logicalSrcIdx = 250;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Robot_calibration_Ipos_P.Constant1_Value_j
	  section.data(3).logicalSrcIdx = 251;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Robot_calibration_Ipos_P.Constant_Value_d
	  section.data(4).logicalSrcIdx = 252;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(6) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (parameter)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    paramMap.nTotData = nTotData;
    


  ;%**************************
  ;% Create Block Output Map *
  ;%**************************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 5;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc sigMap
    ;%
    sigMap.nSections           = nTotSects;
    sigMap.sectIdxOffset       = sectIdxOffset;
      sigMap.sections(nTotSects) = dumSection; %prealloc
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (Robot_calibration_Ipos_B)
    ;%
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Robot_calibration_Ipos_B.ManualSwitch1
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 128;
      section.data(128)  = dumData; %prealloc
      
	  ;% Robot_calibration_Ipos_B.SFunction
	  section.data(1).logicalSrcIdx = 1;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Robot_calibration_Ipos_B.ec_Ipos_o1
	  section.data(2).logicalSrcIdx = 2;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Robot_calibration_Ipos_B.ec_Ipos_o2
	  section.data(3).logicalSrcIdx = 3;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Robot_calibration_Ipos_B.ec_Ipos_o3
	  section.data(4).logicalSrcIdx = 4;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Robot_calibration_Ipos_B.ec_Ipos_o4
	  section.data(5).logicalSrcIdx = 5;
	  section.data(5).dtTransOffset = 4;
	
	  ;% Robot_calibration_Ipos_B.ec_Ipos_o5
	  section.data(6).logicalSrcIdx = 6;
	  section.data(6).dtTransOffset = 5;
	
	  ;% Robot_calibration_Ipos_B.Gain
	  section.data(7).logicalSrcIdx = 7;
	  section.data(7).dtTransOffset = 6;
	
	  ;% Robot_calibration_Ipos_B.Constant1
	  section.data(8).logicalSrcIdx = 8;
	  section.data(8).dtTransOffset = 7;
	
	  ;% Robot_calibration_Ipos_B.DiscreteTimeIntegrator
	  section.data(9).logicalSrcIdx = 9;
	  section.data(9).dtTransOffset = 8;
	
	  ;% Robot_calibration_Ipos_B.DiscreteTimeIntegrator_p
	  section.data(10).logicalSrcIdx = 10;
	  section.data(10).dtTransOffset = 9;
	
	  ;% Robot_calibration_Ipos_B.Sum
	  section.data(11).logicalSrcIdx = 11;
	  section.data(11).dtTransOffset = 10;
	
	  ;% Robot_calibration_Ipos_B.Sum2
	  section.data(12).logicalSrcIdx = 12;
	  section.data(12).dtTransOffset = 11;
	
	  ;% Robot_calibration_Ipos_B.Gain1
	  section.data(13).logicalSrcIdx = 13;
	  section.data(13).dtTransOffset = 12;
	
	  ;% Robot_calibration_Ipos_B.DiscreteTimeIntegrator_d
	  section.data(14).logicalSrcIdx = 14;
	  section.data(14).dtTransOffset = 13;
	
	  ;% Robot_calibration_Ipos_B.set_robot_calibration_x
	  section.data(15).logicalSrcIdx = 15;
	  section.data(15).dtTransOffset = 14;
	
	  ;% Robot_calibration_Ipos_B.Sum_p
	  section.data(16).logicalSrcIdx = 16;
	  section.data(16).dtTransOffset = 15;
	
	  ;% Robot_calibration_Ipos_B.Sum2_a
	  section.data(17).logicalSrcIdx = 17;
	  section.data(17).dtTransOffset = 16;
	
	  ;% Robot_calibration_Ipos_B.Gain2
	  section.data(18).logicalSrcIdx = 18;
	  section.data(18).dtTransOffset = 17;
	
	  ;% Robot_calibration_Ipos_B.DiscreteTimeIntegrator_pg
	  section.data(19).logicalSrcIdx = 19;
	  section.data(19).dtTransOffset = 18;
	
	  ;% Robot_calibration_Ipos_B.set_robot_calibration_z
	  section.data(20).logicalSrcIdx = 20;
	  section.data(20).dtTransOffset = 19;
	
	  ;% Robot_calibration_Ipos_B.Sum_o
	  section.data(21).logicalSrcIdx = 21;
	  section.data(21).dtTransOffset = 20;
	
	  ;% Robot_calibration_Ipos_B.Sum2_e
	  section.data(22).logicalSrcIdx = 22;
	  section.data(22).dtTransOffset = 21;
	
	  ;% Robot_calibration_Ipos_B.set_robot_calibration_r
	  section.data(23).logicalSrcIdx = 23;
	  section.data(23).dtTransOffset = 22;
	
	  ;% Robot_calibration_Ipos_B.Add1
	  section.data(24).logicalSrcIdx = 24;
	  section.data(24).dtTransOffset = 23;
	
	  ;% Robot_calibration_Ipos_B.Gain3
	  section.data(25).logicalSrcIdx = 25;
	  section.data(25).dtTransOffset = 24;
	
	  ;% Robot_calibration_Ipos_B.Gain5
	  section.data(26).logicalSrcIdx = 26;
	  section.data(26).dtTransOffset = 25;
	
	  ;% Robot_calibration_Ipos_B.Saturation
	  section.data(27).logicalSrcIdx = 27;
	  section.data(27).dtTransOffset = 26;
	
	  ;% Robot_calibration_Ipos_B.Gain_h
	  section.data(28).logicalSrcIdx = 28;
	  section.data(28).dtTransOffset = 27;
	
	  ;% Robot_calibration_Ipos_B.Dctintegrator
	  section.data(29).logicalSrcIdx = 29;
	  section.data(29).dtTransOffset = 28;
	
	  ;% Robot_calibration_Ipos_B.Dctleadlag
	  section.data(30).logicalSrcIdx = 30;
	  section.data(30).dtTransOffset = 29;
	
	  ;% Robot_calibration_Ipos_B.Dct1lowpass
	  section.data(31).logicalSrcIdx = 31;
	  section.data(31).dtTransOffset = 30;
	
	  ;% Robot_calibration_Ipos_B.Product
	  section.data(32).logicalSrcIdx = 32;
	  section.data(32).dtTransOffset = 31;
	
	  ;% Robot_calibration_Ipos_B.HomingRunningSwitch
	  section.data(33).logicalSrcIdx = 33;
	  section.data(33).dtTransOffset = 32;
	
	  ;% Robot_calibration_Ipos_B.Gain_p
	  section.data(34).logicalSrcIdx = 34;
	  section.data(34).dtTransOffset = 33;
	
	  ;% Robot_calibration_Ipos_B.Dctleadlag_l
	  section.data(35).logicalSrcIdx = 35;
	  section.data(35).dtTransOffset = 34;
	
	  ;% Robot_calibration_Ipos_B.Dct1lowpass_i
	  section.data(36).logicalSrcIdx = 36;
	  section.data(36).dtTransOffset = 35;
	
	  ;% Robot_calibration_Ipos_B.AirbagSwitch
	  section.data(37).logicalSrcIdx = 37;
	  section.data(37).dtTransOffset = 36;
	
	  ;% Robot_calibration_Ipos_B.Product1
	  section.data(38).logicalSrcIdx = 38;
	  section.data(38).dtTransOffset = 37;
	
	  ;% Robot_calibration_Ipos_B.Saturation1
	  section.data(39).logicalSrcIdx = 39;
	  section.data(39).dtTransOffset = 38;
	
	  ;% Robot_calibration_Ipos_B.Gain1_p
	  section.data(40).logicalSrcIdx = 40;
	  section.data(40).dtTransOffset = 39;
	
	  ;% Robot_calibration_Ipos_B.Dctintegrator_g
	  section.data(41).logicalSrcIdx = 41;
	  section.data(41).dtTransOffset = 40;
	
	  ;% Robot_calibration_Ipos_B.Dctleadlag_h
	  section.data(42).logicalSrcIdx = 42;
	  section.data(42).dtTransOffset = 41;
	
	  ;% Robot_calibration_Ipos_B.Dct1lowpass_k
	  section.data(43).logicalSrcIdx = 43;
	  section.data(43).dtTransOffset = 42;
	
	  ;% Robot_calibration_Ipos_B.Gain1_o
	  section.data(44).logicalSrcIdx = 44;
	  section.data(44).dtTransOffset = 43;
	
	  ;% Robot_calibration_Ipos_B.Dctleadlag_b
	  section.data(45).logicalSrcIdx = 45;
	  section.data(45).dtTransOffset = 44;
	
	  ;% Robot_calibration_Ipos_B.Dct1lowpass_j
	  section.data(46).logicalSrcIdx = 46;
	  section.data(46).dtTransOffset = 45;
	
	  ;% Robot_calibration_Ipos_B.Saturation1_n
	  section.data(47).logicalSrcIdx = 47;
	  section.data(47).dtTransOffset = 46;
	
	  ;% Robot_calibration_Ipos_B.Gain_i
	  section.data(48).logicalSrcIdx = 48;
	  section.data(48).dtTransOffset = 47;
	
	  ;% Robot_calibration_Ipos_B.Dctintegrator_i
	  section.data(49).logicalSrcIdx = 49;
	  section.data(49).dtTransOffset = 48;
	
	  ;% Robot_calibration_Ipos_B.Dctleadlag_m
	  section.data(50).logicalSrcIdx = 50;
	  section.data(50).dtTransOffset = 49;
	
	  ;% Robot_calibration_Ipos_B.Dct1lowpass_p
	  section.data(51).logicalSrcIdx = 51;
	  section.data(51).dtTransOffset = 50;
	
	  ;% Robot_calibration_Ipos_B.Gain_f
	  section.data(52).logicalSrcIdx = 52;
	  section.data(52).dtTransOffset = 51;
	
	  ;% Robot_calibration_Ipos_B.Dctleadlag_e
	  section.data(53).logicalSrcIdx = 53;
	  section.data(53).dtTransOffset = 52;
	
	  ;% Robot_calibration_Ipos_B.Dct1lowpass_a
	  section.data(54).logicalSrcIdx = 54;
	  section.data(54).dtTransOffset = 53;
	
	  ;% Robot_calibration_Ipos_B.Saturation1_a
	  section.data(55).logicalSrcIdx = 55;
	  section.data(55).dtTransOffset = 54;
	
	  ;% Robot_calibration_Ipos_B.DiscreteTimeIntegrator_i
	  section.data(56).logicalSrcIdx = 56;
	  section.data(56).dtTransOffset = 55;
	
	  ;% Robot_calibration_Ipos_B.Gain1_a
	  section.data(57).logicalSrcIdx = 57;
	  section.data(57).dtTransOffset = 56;
	
	  ;% Robot_calibration_Ipos_B.Dctintegrator3
	  section.data(58).logicalSrcIdx = 58;
	  section.data(58).dtTransOffset = 57;
	
	  ;% Robot_calibration_Ipos_B.Dct1lowpass_g
	  section.data(59).logicalSrcIdx = 59;
	  section.data(59).dtTransOffset = 58;
	
	  ;% Robot_calibration_Ipos_B.Dctleadlag_k
	  section.data(60).logicalSrcIdx = 60;
	  section.data(60).dtTransOffset = 59;
	
	  ;% Robot_calibration_Ipos_B.HomingRunningSwitch_e
	  section.data(61).logicalSrcIdx = 61;
	  section.data(61).dtTransOffset = 60;
	
	  ;% Robot_calibration_Ipos_B.Saturation1_d
	  section.data(62).logicalSrcIdx = 62;
	  section.data(62).dtTransOffset = 61;
	
	  ;% Robot_calibration_Ipos_B.Constant1_f
	  section.data(63).logicalSrcIdx = 63;
	  section.data(63).dtTransOffset = 62;
	
	  ;% Robot_calibration_Ipos_B.DiscreteTimeIntegrator_pv
	  section.data(64).logicalSrcIdx = 64;
	  section.data(64).dtTransOffset = 63;
	
	  ;% Robot_calibration_Ipos_B.Constant1_e
	  section.data(65).logicalSrcIdx = 65;
	  section.data(65).dtTransOffset = 64;
	
	  ;% Robot_calibration_Ipos_B.DiscreteTimeIntegrator_e
	  section.data(66).logicalSrcIdx = 66;
	  section.data(66).dtTransOffset = 65;
	
	  ;% Robot_calibration_Ipos_B.jogSpeed
	  section.data(67).logicalSrcIdx = 67;
	  section.data(67).dtTransOffset = 66;
	
	  ;% Robot_calibration_Ipos_B.homeControllerEnabled
	  section.data(68).logicalSrcIdx = 68;
	  section.data(68).dtTransOffset = 67;
	
	  ;% Robot_calibration_Ipos_B.resetEnc
	  section.data(69).logicalSrcIdx = 69;
	  section.data(69).dtTransOffset = 68;
	
	  ;% Robot_calibration_Ipos_B.homingBusy
	  section.data(70).logicalSrcIdx = 70;
	  section.data(70).dtTransOffset = 69;
	
	  ;% Robot_calibration_Ipos_B.Ready
	  section.data(71).logicalSrcIdx = 71;
	  section.data(71).dtTransOffset = 70;
	
	  ;% Robot_calibration_Ipos_B.StopSim
	  section.data(72).logicalSrcIdx = 72;
	  section.data(72).dtTransOffset = 71;
	
	  ;% Robot_calibration_Ipos_B.jogSpeed_o
	  section.data(73).logicalSrcIdx = 73;
	  section.data(73).dtTransOffset = 72;
	
	  ;% Robot_calibration_Ipos_B.toPoint
	  section.data(74).logicalSrcIdx = 74;
	  section.data(74).dtTransOffset = 73;
	
	  ;% Robot_calibration_Ipos_B.homeControllerEnabled_m
	  section.data(75).logicalSrcIdx = 75;
	  section.data(75).dtTransOffset = 74;
	
	  ;% Robot_calibration_Ipos_B.resetEnc_h
	  section.data(76).logicalSrcIdx = 76;
	  section.data(76).dtTransOffset = 75;
	
	  ;% Robot_calibration_Ipos_B.homingBusy_j
	  section.data(77).logicalSrcIdx = 77;
	  section.data(77).dtTransOffset = 76;
	
	  ;% Robot_calibration_Ipos_B.freddy
	  section.data(78).logicalSrcIdx = 78;
	  section.data(78).dtTransOffset = 77;
	
	  ;% Robot_calibration_Ipos_B.airBagEnabled
	  section.data(79).logicalSrcIdx = 79;
	  section.data(79).dtTransOffset = 78;
	
	  ;% Robot_calibration_Ipos_B.airBagRef
	  section.data(80).logicalSrcIdx = 80;
	  section.data(80).dtTransOffset = 79;
	
	  ;% Robot_calibration_Ipos_B.controlEnabled
	  section.data(81).logicalSrcIdx = 81;
	  section.data(81).dtTransOffset = 80;
	
	  ;% Robot_calibration_Ipos_B.Ready_b
	  section.data(82).logicalSrcIdx = 82;
	  section.data(82).dtTransOffset = 81;
	
	  ;% Robot_calibration_Ipos_B.StopSim_c
	  section.data(83).logicalSrcIdx = 83;
	  section.data(83).dtTransOffset = 82;
	
	  ;% Robot_calibration_Ipos_B.y
	  section.data(84).logicalSrcIdx = 84;
	  section.data(84).dtTransOffset = 83;
	
	  ;% Robot_calibration_Ipos_B.jogSpeed_l
	  section.data(85).logicalSrcIdx = 85;
	  section.data(85).dtTransOffset = 84;
	
	  ;% Robot_calibration_Ipos_B.toPoint_j
	  section.data(86).logicalSrcIdx = 86;
	  section.data(86).dtTransOffset = 85;
	
	  ;% Robot_calibration_Ipos_B.homeControllerEnabled_a
	  section.data(87).logicalSrcIdx = 87;
	  section.data(87).dtTransOffset = 86;
	
	  ;% Robot_calibration_Ipos_B.resetEnc_d
	  section.data(88).logicalSrcIdx = 88;
	  section.data(88).dtTransOffset = 87;
	
	  ;% Robot_calibration_Ipos_B.freddy_a
	  section.data(89).logicalSrcIdx = 89;
	  section.data(89).dtTransOffset = 88;
	
	  ;% Robot_calibration_Ipos_B.homingBusy_i
	  section.data(90).logicalSrcIdx = 90;
	  section.data(90).dtTransOffset = 89;
	
	  ;% Robot_calibration_Ipos_B.airBagEnabled_o
	  section.data(91).logicalSrcIdx = 91;
	  section.data(91).dtTransOffset = 90;
	
	  ;% Robot_calibration_Ipos_B.airBagRef_j
	  section.data(92).logicalSrcIdx = 92;
	  section.data(92).dtTransOffset = 91;
	
	  ;% Robot_calibration_Ipos_B.controlEnabled_p
	  section.data(93).logicalSrcIdx = 93;
	  section.data(93).dtTransOffset = 92;
	
	  ;% Robot_calibration_Ipos_B.Ready_c
	  section.data(94).logicalSrcIdx = 94;
	  section.data(94).dtTransOffset = 93;
	
	  ;% Robot_calibration_Ipos_B.StopSim_g
	  section.data(95).logicalSrcIdx = 95;
	  section.data(95).dtTransOffset = 94;
	
	  ;% Robot_calibration_Ipos_B.jogSpeed_o1
	  section.data(96).logicalSrcIdx = 96;
	  section.data(96).dtTransOffset = 95;
	
	  ;% Robot_calibration_Ipos_B.toPoint_d
	  section.data(97).logicalSrcIdx = 97;
	  section.data(97).dtTransOffset = 96;
	
	  ;% Robot_calibration_Ipos_B.homeControllerEnabled_c
	  section.data(98).logicalSrcIdx = 98;
	  section.data(98).dtTransOffset = 97;
	
	  ;% Robot_calibration_Ipos_B.resetEnc_g
	  section.data(99).logicalSrcIdx = 99;
	  section.data(99).dtTransOffset = 98;
	
	  ;% Robot_calibration_Ipos_B.freddy_n
	  section.data(100).logicalSrcIdx = 100;
	  section.data(100).dtTransOffset = 99;
	
	  ;% Robot_calibration_Ipos_B.homingBusy_jt
	  section.data(101).logicalSrcIdx = 101;
	  section.data(101).dtTransOffset = 100;
	
	  ;% Robot_calibration_Ipos_B.airBagEnabled_m
	  section.data(102).logicalSrcIdx = 102;
	  section.data(102).dtTransOffset = 101;
	
	  ;% Robot_calibration_Ipos_B.airBagRef_n
	  section.data(103).logicalSrcIdx = 103;
	  section.data(103).dtTransOffset = 102;
	
	  ;% Robot_calibration_Ipos_B.controlEnabled_i
	  section.data(104).logicalSrcIdx = 104;
	  section.data(104).dtTransOffset = 103;
	
	  ;% Robot_calibration_Ipos_B.Ready_g
	  section.data(105).logicalSrcIdx = 105;
	  section.data(105).dtTransOffset = 104;
	
	  ;% Robot_calibration_Ipos_B.StopSim_i
	  section.data(106).logicalSrcIdx = 106;
	  section.data(106).dtTransOffset = 105;
	
	  ;% Robot_calibration_Ipos_B.y_e
	  section.data(107).logicalSrcIdx = 107;
	  section.data(107).dtTransOffset = 106;
	
	  ;% Robot_calibration_Ipos_B.Selector2
	  section.data(108).logicalSrcIdx = 108;
	  section.data(108).dtTransOffset = 107;
	
	  ;% Robot_calibration_Ipos_B.Selector
	  section.data(109).logicalSrcIdx = 109;
	  section.data(109).dtTransOffset = 116;
	
	  ;% Robot_calibration_Ipos_B.Conveyorreferencemm
	  section.data(110).logicalSrcIdx = 110;
	  section.data(110).dtTransOffset = 119;
	
	  ;% Robot_calibration_Ipos_B.Gain1_k
	  section.data(111).logicalSrcIdx = 111;
	  section.data(111).dtTransOffset = 120;
	
	  ;% Robot_calibration_Ipos_B.Dctintegrator3_m
	  section.data(112).logicalSrcIdx = 112;
	  section.data(112).dtTransOffset = 121;
	
	  ;% Robot_calibration_Ipos_B.Dct1lowpass_b
	  section.data(113).logicalSrcIdx = 113;
	  section.data(113).dtTransOffset = 122;
	
	  ;% Robot_calibration_Ipos_B.Dctleadlag_ei
	  section.data(114).logicalSrcIdx = 114;
	  section.data(114).dtTransOffset = 123;
	
	  ;% Robot_calibration_Ipos_B.SFunctionBuilder
	  section.data(115).logicalSrcIdx = 115;
	  section.data(115).dtTransOffset = 124;
	
	  ;% Robot_calibration_Ipos_B.Sum_l
	  section.data(116).logicalSrcIdx = 116;
	  section.data(116).dtTransOffset = 125;
	
	  ;% Robot_calibration_Ipos_B.SignalConversion2
	  section.data(117).logicalSrcIdx = 117;
	  section.data(117).dtTransOffset = 126;
	
	  ;% Robot_calibration_Ipos_B.SignalConversion1
	  section.data(118).logicalSrcIdx = 118;
	  section.data(118).dtTransOffset = 127;
	
	  ;% Robot_calibration_Ipos_B.SignalConversion
	  section.data(119).logicalSrcIdx = 119;
	  section.data(119).dtTransOffset = 128;
	
	  ;% Robot_calibration_Ipos_B.Sum4
	  section.data(120).logicalSrcIdx = 120;
	  section.data(120).dtTransOffset = 129;
	
	  ;% Robot_calibration_Ipos_B.Sum5
	  section.data(121).logicalSrcIdx = 121;
	  section.data(121).dtTransOffset = 130;
	
	  ;% Robot_calibration_Ipos_B.Sum6
	  section.data(122).logicalSrcIdx = 122;
	  section.data(122).dtTransOffset = 131;
	
	  ;% Robot_calibration_Ipos_B.Gain1_b
	  section.data(123).logicalSrcIdx = 123;
	  section.data(123).dtTransOffset = 132;
	
	  ;% Robot_calibration_Ipos_B.Doubleclickswitch
	  section.data(124).logicalSrcIdx = 124;
	  section.data(124).dtTransOffset = 133;
	
	  ;% Robot_calibration_Ipos_B.Object
	  section.data(125).logicalSrcIdx = 125;
	  section.data(125).dtTransOffset = 134;
	
	  ;% Robot_calibration_Ipos_B.Plot
	  section.data(126).logicalSrcIdx = 126;
	  section.data(126).dtTransOffset = 135;
	
	  ;% Robot_calibration_Ipos_B.Stop
	  section.data(127).logicalSrcIdx = 127;
	  section.data(127).dtTransOffset = 136;
	
	  ;% Robot_calibration_Ipos_B.In1
	  section.data(128).logicalSrcIdx = 135;
	  section.data(128).dtTransOffset = 137;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
      section.nData     = 5;
      section.data(5)  = dumData; %prealloc
      
	  ;% Robot_calibration_Ipos_B.RelationalOperator
	  section.data(1).logicalSrcIdx = 137;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Robot_calibration_Ipos_B.RelationalOperator_f
	  section.data(2).logicalSrcIdx = 138;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Robot_calibration_Ipos_B.RelationalOperator_k
	  section.data(3).logicalSrcIdx = 139;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Robot_calibration_Ipos_B.Compare
	  section.data(4).logicalSrcIdx = 140;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Robot_calibration_Ipos_B.Compare_j
	  section.data(5).logicalSrcIdx = 141;
	  section.data(5).dtTransOffset = 4;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(3) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Robot_calibration_Ipos_B.sf_quintictrajectorytime_i.path
	  section.data(1).logicalSrcIdx = 142;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(4) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Robot_calibration_Ipos_B.sf_quintictrajectorytime.path
	  section.data(1).logicalSrcIdx = 143;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(5) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (signal)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    sigMap.nTotData = nTotData;
    


  ;%*******************
  ;% Create DWork Map *
  ;%*******************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 23;
    sectIdxOffset = 5;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc dworkMap
    ;%
    dworkMap.nSections           = nTotSects;
    dworkMap.sectIdxOffset       = sectIdxOffset;
      dworkMap.sections(nTotSects) = dumSection; %prealloc
    dworkMap.nTotData            = -1;
    
    ;%
    ;% Auto data (Robot_calibration_Ipos_DW)
    ;%
      section.nData     = 16;
      section.data(16)  = dumData; %prealloc
      
	  ;% Robot_calibration_Ipos_DW.DiscreteTimeIntegrator_DSTATE
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Robot_calibration_Ipos_DW.DiscreteTimeIntegrator_DSTATE_g
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Robot_calibration_Ipos_DW.DiscreteTimeIntegrator_DSTATE_m
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Robot_calibration_Ipos_DW.UnitDelay_DSTATE
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Robot_calibration_Ipos_DW.DiscreteTimeIntegrator_DSTATE_a
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% Robot_calibration_Ipos_DW.UnitDelay_DSTATE_b
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% Robot_calibration_Ipos_DW.UnitDelay_DSTATE_f
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% Robot_calibration_Ipos_DW.UnitDelay1_DSTATE
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% Robot_calibration_Ipos_DW.DiscreteTimeIntegrator_DSTATE_k
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% Robot_calibration_Ipos_DW.UD_DSTATE
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% Robot_calibration_Ipos_DW.DiscreteTimeIntegrator_DSTATE_j
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 10;
	
	  ;% Robot_calibration_Ipos_DW.UD_DSTATE_c
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 11;
	
	  ;% Robot_calibration_Ipos_DW.DiscreteTimeIntegrator_DSTATE_o
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 12;
	
	  ;% Robot_calibration_Ipos_DW.UD_DSTATE_cc
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 13;
	
	  ;% Robot_calibration_Ipos_DW.DelayInput1_DSTATE
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 14;
	
	  ;% Robot_calibration_Ipos_DW.Discreteintegrator_DSTATE
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 26;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Robot_calibration_Ipos_DW.Delay_DSTATE
	  section.data(1).logicalSrcIdx = 16;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 31;
      section.data(31)  = dumData; %prealloc
      
	  ;% Robot_calibration_Ipos_DW.PrevY
	  section.data(1).logicalSrcIdx = 17;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Robot_calibration_Ipos_DW.PrevY_j
	  section.data(2).logicalSrcIdx = 18;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Robot_calibration_Ipos_DW.PrevY_d
	  section.data(3).logicalSrcIdx = 19;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Robot_calibration_Ipos_DW.PrevY_f
	  section.data(4).logicalSrcIdx = 20;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Robot_calibration_Ipos_DW.PrevY_i
	  section.data(5).logicalSrcIdx = 21;
	  section.data(5).dtTransOffset = 4;
	
	  ;% Robot_calibration_Ipos_DW.PrevY_k
	  section.data(6).logicalSrcIdx = 22;
	  section.data(6).dtTransOffset = 5;
	
	  ;% Robot_calibration_Ipos_DW.currentcarPos
	  section.data(7).logicalSrcIdx = 23;
	  section.data(7).dtTransOffset = 6;
	
	  ;% Robot_calibration_Ipos_DW.currentcarPos_m
	  section.data(8).logicalSrcIdx = 24;
	  section.data(8).dtTransOffset = 7;
	
	  ;% Robot_calibration_Ipos_DW.currentcarPos_b
	  section.data(9).logicalSrcIdx = 25;
	  section.data(9).dtTransOffset = 8;
	
	  ;% Robot_calibration_Ipos_DW.fileID
	  section.data(10).logicalSrcIdx = 26;
	  section.data(10).dtTransOffset = 9;
	
	  ;% Robot_calibration_Ipos_DW.Dctintegrator_RWORK
	  section.data(11).logicalSrcIdx = 27;
	  section.data(11).dtTransOffset = 10;
	
	  ;% Robot_calibration_Ipos_DW.Dctleadlag_RWORK
	  section.data(12).logicalSrcIdx = 28;
	  section.data(12).dtTransOffset = 12;
	
	  ;% Robot_calibration_Ipos_DW.Dct1lowpass_RWORK
	  section.data(13).logicalSrcIdx = 29;
	  section.data(13).dtTransOffset = 14;
	
	  ;% Robot_calibration_Ipos_DW.Dctleadlag_RWORK_k
	  section.data(14).logicalSrcIdx = 30;
	  section.data(14).dtTransOffset = 16;
	
	  ;% Robot_calibration_Ipos_DW.Dct1lowpass_RWORK_a
	  section.data(15).logicalSrcIdx = 31;
	  section.data(15).dtTransOffset = 18;
	
	  ;% Robot_calibration_Ipos_DW.Dctintegrator_RWORK_m
	  section.data(16).logicalSrcIdx = 32;
	  section.data(16).dtTransOffset = 20;
	
	  ;% Robot_calibration_Ipos_DW.Dctleadlag_RWORK_g
	  section.data(17).logicalSrcIdx = 33;
	  section.data(17).dtTransOffset = 22;
	
	  ;% Robot_calibration_Ipos_DW.Dct1lowpass_RWORK_n
	  section.data(18).logicalSrcIdx = 34;
	  section.data(18).dtTransOffset = 24;
	
	  ;% Robot_calibration_Ipos_DW.Dctleadlag_RWORK_j
	  section.data(19).logicalSrcIdx = 35;
	  section.data(19).dtTransOffset = 26;
	
	  ;% Robot_calibration_Ipos_DW.Dct1lowpass_RWORK_k
	  section.data(20).logicalSrcIdx = 36;
	  section.data(20).dtTransOffset = 28;
	
	  ;% Robot_calibration_Ipos_DW.Dctintegrator_RWORK_i
	  section.data(21).logicalSrcIdx = 37;
	  section.data(21).dtTransOffset = 30;
	
	  ;% Robot_calibration_Ipos_DW.Dctleadlag_RWORK_n
	  section.data(22).logicalSrcIdx = 38;
	  section.data(22).dtTransOffset = 32;
	
	  ;% Robot_calibration_Ipos_DW.Dct1lowpass_RWORK_g
	  section.data(23).logicalSrcIdx = 39;
	  section.data(23).dtTransOffset = 34;
	
	  ;% Robot_calibration_Ipos_DW.Dctleadlag_RWORK_i
	  section.data(24).logicalSrcIdx = 40;
	  section.data(24).dtTransOffset = 36;
	
	  ;% Robot_calibration_Ipos_DW.Dct1lowpass_RWORK_h
	  section.data(25).logicalSrcIdx = 41;
	  section.data(25).dtTransOffset = 38;
	
	  ;% Robot_calibration_Ipos_DW.Dctintegrator3_RWORK
	  section.data(26).logicalSrcIdx = 42;
	  section.data(26).dtTransOffset = 40;
	
	  ;% Robot_calibration_Ipos_DW.Dct1lowpass_RWORK_ay
	  section.data(27).logicalSrcIdx = 43;
	  section.data(27).dtTransOffset = 42;
	
	  ;% Robot_calibration_Ipos_DW.Dctleadlag_RWORK_o
	  section.data(28).logicalSrcIdx = 44;
	  section.data(28).dtTransOffset = 44;
	
	  ;% Robot_calibration_Ipos_DW.Dctintegrator3_RWORK_e
	  section.data(29).logicalSrcIdx = 45;
	  section.data(29).dtTransOffset = 46;
	
	  ;% Robot_calibration_Ipos_DW.Dct1lowpass_RWORK_e
	  section.data(30).logicalSrcIdx = 46;
	  section.data(30).dtTransOffset = 48;
	
	  ;% Robot_calibration_Ipos_DW.Dctleadlag_RWORK_h
	  section.data(31).logicalSrcIdx = 47;
	  section.data(31).dtTransOffset = 50;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 48;
      section.data(48)  = dumData; %prealloc
      
	  ;% Robot_calibration_Ipos_DW.Scope16_PWORK.LoggedData
	  section.data(1).logicalSrcIdx = 48;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Robot_calibration_Ipos_DW.Scope18_PWORK.LoggedData
	  section.data(2).logicalSrcIdx = 49;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Robot_calibration_Ipos_DW.Scope20_PWORK.LoggedData
	  section.data(3).logicalSrcIdx = 50;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Robot_calibration_Ipos_DW.Scope21_PWORK.LoggedData
	  section.data(4).logicalSrcIdx = 51;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Robot_calibration_Ipos_DW.Scope22_PWORK.LoggedData
	  section.data(5).logicalSrcIdx = 52;
	  section.data(5).dtTransOffset = 4;
	
	  ;% Robot_calibration_Ipos_DW.Scope_PWORK.LoggedData
	  section.data(6).logicalSrcIdx = 53;
	  section.data(6).dtTransOffset = 5;
	
	  ;% Robot_calibration_Ipos_DW.Scope1_PWORK.LoggedData
	  section.data(7).logicalSrcIdx = 54;
	  section.data(7).dtTransOffset = 7;
	
	  ;% Robot_calibration_Ipos_DW.Scope5_PWORK.LoggedData
	  section.data(8).logicalSrcIdx = 55;
	  section.data(8).dtTransOffset = 8;
	
	  ;% Robot_calibration_Ipos_DW.Scope17_PWORK.LoggedData
	  section.data(9).logicalSrcIdx = 56;
	  section.data(9).dtTransOffset = 9;
	
	  ;% Robot_calibration_Ipos_DW.Scope6_PWORK.LoggedData
	  section.data(10).logicalSrcIdx = 57;
	  section.data(10).dtTransOffset = 10;
	
	  ;% Robot_calibration_Ipos_DW.Scope1_PWORK_a.LoggedData
	  section.data(11).logicalSrcIdx = 58;
	  section.data(11).dtTransOffset = 11;
	
	  ;% Robot_calibration_Ipos_DW.Scope10_PWORK.LoggedData
	  section.data(12).logicalSrcIdx = 59;
	  section.data(12).dtTransOffset = 12;
	
	  ;% Robot_calibration_Ipos_DW.Scope11_PWORK.LoggedData
	  section.data(13).logicalSrcIdx = 60;
	  section.data(13).dtTransOffset = 13;
	
	  ;% Robot_calibration_Ipos_DW.Scope19_PWORK.LoggedData
	  section.data(14).logicalSrcIdx = 61;
	  section.data(14).dtTransOffset = 14;
	
	  ;% Robot_calibration_Ipos_DW.Scope4_PWORK.LoggedData
	  section.data(15).logicalSrcIdx = 62;
	  section.data(15).dtTransOffset = 15;
	
	  ;% Robot_calibration_Ipos_DW.Scope8_PWORK.LoggedData
	  section.data(16).logicalSrcIdx = 63;
	  section.data(16).dtTransOffset = 16;
	
	  ;% Robot_calibration_Ipos_DW.Scope9_PWORK.LoggedData
	  section.data(17).logicalSrcIdx = 64;
	  section.data(17).dtTransOffset = 17;
	
	  ;% Robot_calibration_Ipos_DW.Scope15_PWORK.LoggedData
	  section.data(18).logicalSrcIdx = 65;
	  section.data(18).dtTransOffset = 18;
	
	  ;% Robot_calibration_Ipos_DW.Scope2_PWORK.LoggedData
	  section.data(19).logicalSrcIdx = 66;
	  section.data(19).dtTransOffset = 19;
	
	  ;% Robot_calibration_Ipos_DW.Scope18_PWORK_i.LoggedData
	  section.data(20).logicalSrcIdx = 67;
	  section.data(20).dtTransOffset = 20;
	
	  ;% Robot_calibration_Ipos_DW.Scope_PWORK_a.LoggedData
	  section.data(21).logicalSrcIdx = 68;
	  section.data(21).dtTransOffset = 21;
	
	  ;% Robot_calibration_Ipos_DW.Scope6_PWORK_c.LoggedData
	  section.data(22).logicalSrcIdx = 69;
	  section.data(22).dtTransOffset = 22;
	
	  ;% Robot_calibration_Ipos_DW.Scope7_PWORK.LoggedData
	  section.data(23).logicalSrcIdx = 70;
	  section.data(23).dtTransOffset = 23;
	
	  ;% Robot_calibration_Ipos_DW.Scope8_PWORK_i.LoggedData
	  section.data(24).logicalSrcIdx = 71;
	  section.data(24).dtTransOffset = 24;
	
	  ;% Robot_calibration_Ipos_DW.Scope16_PWORK_l.LoggedData
	  section.data(25).logicalSrcIdx = 72;
	  section.data(25).dtTransOffset = 25;
	
	  ;% Robot_calibration_Ipos_DW.Scope6_PWORK_a.LoggedData
	  section.data(26).logicalSrcIdx = 73;
	  section.data(26).dtTransOffset = 26;
	
	  ;% Robot_calibration_Ipos_DW.Scope3_PWORK.LoggedData
	  section.data(27).logicalSrcIdx = 74;
	  section.data(27).dtTransOffset = 27;
	
	  ;% Robot_calibration_Ipos_DW.Scope4_PWORK_i.LoggedData
	  section.data(28).logicalSrcIdx = 75;
	  section.data(28).dtTransOffset = 28;
	
	  ;% Robot_calibration_Ipos_DW.Scope2_PWORK_e.LoggedData
	  section.data(29).logicalSrcIdx = 76;
	  section.data(29).dtTransOffset = 29;
	
	  ;% Robot_calibration_Ipos_DW.Scope21_PWORK_o.LoggedData
	  section.data(30).logicalSrcIdx = 77;
	  section.data(30).dtTransOffset = 30;
	
	  ;% Robot_calibration_Ipos_DW.Scope2_PWORK_ef.LoggedData
	  section.data(31).logicalSrcIdx = 78;
	  section.data(31).dtTransOffset = 31;
	
	  ;% Robot_calibration_Ipos_DW.Scope22_PWORK_m.LoggedData
	  section.data(32).logicalSrcIdx = 79;
	  section.data(32).dtTransOffset = 32;
	
	  ;% Robot_calibration_Ipos_DW.Scope_PWORK_b.LoggedData
	  section.data(33).logicalSrcIdx = 80;
	  section.data(33).dtTransOffset = 33;
	
	  ;% Robot_calibration_Ipos_DW.Scope19_PWORK_d.LoggedData
	  section.data(34).logicalSrcIdx = 81;
	  section.data(34).dtTransOffset = 34;
	
	  ;% Robot_calibration_Ipos_DW.Scope20_PWORK_a.LoggedData
	  section.data(35).logicalSrcIdx = 82;
	  section.data(35).dtTransOffset = 35;
	
	  ;% Robot_calibration_Ipos_DW.Scope16_PWORK_o.LoggedData
	  section.data(36).logicalSrcIdx = 83;
	  section.data(36).dtTransOffset = 36;
	
	  ;% Robot_calibration_Ipos_DW.Scope23_PWORK.LoggedData
	  section.data(37).logicalSrcIdx = 84;
	  section.data(37).dtTransOffset = 37;
	
	  ;% Robot_calibration_Ipos_DW.Scope_PWORK_n.LoggedData
	  section.data(38).logicalSrcIdx = 85;
	  section.data(38).dtTransOffset = 38;
	
	  ;% Robot_calibration_Ipos_DW.Scope3_PWORK_n.LoggedData
	  section.data(39).logicalSrcIdx = 86;
	  section.data(39).dtTransOffset = 39;
	
	  ;% Robot_calibration_Ipos_DW.Scope12_PWORK.LoggedData
	  section.data(40).logicalSrcIdx = 87;
	  section.data(40).dtTransOffset = 40;
	
	  ;% Robot_calibration_Ipos_DW.Scope23_PWORK_e.LoggedData
	  section.data(41).logicalSrcIdx = 88;
	  section.data(41).dtTransOffset = 41;
	
	  ;% Robot_calibration_Ipos_DW.Scope13_PWORK.LoggedData
	  section.data(42).logicalSrcIdx = 89;
	  section.data(42).dtTransOffset = 43;
	
	  ;% Robot_calibration_Ipos_DW.Scope14_PWORK.LoggedData
	  section.data(43).logicalSrcIdx = 90;
	  section.data(43).dtTransOffset = 44;
	
	  ;% Robot_calibration_Ipos_DW.Scope7_PWORK_j.LoggedData
	  section.data(44).logicalSrcIdx = 91;
	  section.data(44).dtTransOffset = 45;
	
	  ;% Robot_calibration_Ipos_DW.Scope17_PWORK_o.LoggedData
	  section.data(45).logicalSrcIdx = 92;
	  section.data(45).dtTransOffset = 46;
	
	  ;% Robot_calibration_Ipos_DW.Scope_PWORK_p.LoggedData
	  section.data(46).logicalSrcIdx = 93;
	  section.data(46).dtTransOffset = 47;
	
	  ;% Robot_calibration_Ipos_DW.Scope5_PWORK_c.LoggedData
	  section.data(47).logicalSrcIdx = 94;
	  section.data(47).dtTransOffset = 48;
	
	  ;% Robot_calibration_Ipos_DW.Scope1_PWORK_h.LoggedData
	  section.data(48).logicalSrcIdx = 95;
	  section.data(48).dtTransOffset = 49;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
      section.nData     = 5;
      section.data(5)  = dumData; %prealloc
      
	  ;% Robot_calibration_Ipos_DW.sfEvent
	  section.data(1).logicalSrcIdx = 96;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Robot_calibration_Ipos_DW.sfEvent_o
	  section.data(2).logicalSrcIdx = 97;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Robot_calibration_Ipos_DW.sfEvent_j
	  section.data(3).logicalSrcIdx = 98;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Robot_calibration_Ipos_DW.sfEvent_m
	  section.data(4).logicalSrcIdx = 99;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Robot_calibration_Ipos_DW.sfEvent_k
	  section.data(5).logicalSrcIdx = 100;
	  section.data(5).dtTransOffset = 4;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(5) = section;
      clear section
      
      section.nData     = 9;
      section.data(9)  = dumData; %prealloc
      
	  ;% Robot_calibration_Ipos_DW.is_c1_Robot_calibration_Ipos
	  section.data(1).logicalSrcIdx = 101;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Robot_calibration_Ipos_DW.is_c18_Robot_calibration_Ipos
	  section.data(2).logicalSrcIdx = 102;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Robot_calibration_Ipos_DW.is_c16_Robot_calibration_Ipos
	  section.data(3).logicalSrcIdx = 103;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Robot_calibration_Ipos_DW.is_c12_Robot_calibration_Ipos
	  section.data(4).logicalSrcIdx = 104;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Robot_calibration_Ipos_DW.is_Object_Detection
	  section.data(5).logicalSrcIdx = 105;
	  section.data(5).dtTransOffset = 4;
	
	  ;% Robot_calibration_Ipos_DW.is_Belt
	  section.data(6).logicalSrcIdx = 106;
	  section.data(6).dtTransOffset = 5;
	
	  ;% Robot_calibration_Ipos_DW.is_Robot_Arm
	  section.data(7).logicalSrcIdx = 107;
	  section.data(7).dtTransOffset = 6;
	
	  ;% Robot_calibration_Ipos_DW.is_Vacuum
	  section.data(8).logicalSrcIdx = 108;
	  section.data(8).dtTransOffset = 7;
	
	  ;% Robot_calibration_Ipos_DW.NS
	  section.data(9).logicalSrcIdx = 109;
	  section.data(9).dtTransOffset = 8;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(6) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Robot_calibration_Ipos_DW.NF
	  section.data(1).logicalSrcIdx = 110;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(7) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% Robot_calibration_Ipos_DW.temporalCounter_i1
	  section.data(1).logicalSrcIdx = 111;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Robot_calibration_Ipos_DW.temporalCounter_i1_d
	  section.data(2).logicalSrcIdx = 112;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Robot_calibration_Ipos_DW.temporalCounter_i1_di
	  section.data(3).logicalSrcIdx = 113;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Robot_calibration_Ipos_DW.temporalCounter_i1_b
	  section.data(4).logicalSrcIdx = 114;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(8) = section;
      clear section
      
      section.nData     = 5;
      section.data(5)  = dumData; %prealloc
      
	  ;% Robot_calibration_Ipos_DW.Subsystem3_SubsysRanBC
	  section.data(1).logicalSrcIdx = 115;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Robot_calibration_Ipos_DW.IfActionSubsystem1_SubsysRanBC
	  section.data(2).logicalSrcIdx = 116;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Robot_calibration_Ipos_DW.IfActionSubsystem_SubsysRanBC
	  section.data(3).logicalSrcIdx = 117;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Robot_calibration_Ipos_DW.Controller_SubsysRanBC
	  section.data(4).logicalSrcIdx = 118;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Robot_calibration_Ipos_DW.EnabledSubsystem_SubsysRanBC
	  section.data(5).logicalSrcIdx = 119;
	  section.data(5).dtTransOffset = 4;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(9) = section;
      clear section
      
      section.nData     = 10;
      section.data(10)  = dumData; %prealloc
      
	  ;% Robot_calibration_Ipos_DW.is_active_c1_Robot_calibration_
	  section.data(1).logicalSrcIdx = 120;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Robot_calibration_Ipos_DW.is_active_c18_Robot_calibration
	  section.data(2).logicalSrcIdx = 121;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Robot_calibration_Ipos_DW.is_active_c16_Robot_calibration
	  section.data(3).logicalSrcIdx = 122;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Robot_calibration_Ipos_DW.is_active_c12_Robot_calibration
	  section.data(4).logicalSrcIdx = 123;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Robot_calibration_Ipos_DW.is_active_c3_Robot_calibration_
	  section.data(5).logicalSrcIdx = 124;
	  section.data(5).dtTransOffset = 4;
	
	  ;% Robot_calibration_Ipos_DW.is_active_Object_Detection
	  section.data(6).logicalSrcIdx = 125;
	  section.data(6).dtTransOffset = 5;
	
	  ;% Robot_calibration_Ipos_DW.is_active_Belt
	  section.data(7).logicalSrcIdx = 126;
	  section.data(7).dtTransOffset = 6;
	
	  ;% Robot_calibration_Ipos_DW.is_active_Robot_Arm
	  section.data(8).logicalSrcIdx = 127;
	  section.data(8).dtTransOffset = 7;
	
	  ;% Robot_calibration_Ipos_DW.is_active_Vacuum
	  section.data(9).logicalSrcIdx = 128;
	  section.data(9).dtTransOffset = 8;
	
	  ;% Robot_calibration_Ipos_DW.busy
	  section.data(10).logicalSrcIdx = 129;
	  section.data(10).dtTransOffset = 9;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(10) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% Robot_calibration_Ipos_DW.doneDoubleBufferReInit
	  section.data(1).logicalSrcIdx = 130;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Robot_calibration_Ipos_DW.eml_autoflush
	  section.data(2).logicalSrcIdx = 131;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(11) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Robot_calibration_Ipos_DW.eml_openfiles
	  section.data(1).logicalSrcIdx = 132;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(12) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Robot_calibration_Ipos_DW.Controller_MODE
	  section.data(1).logicalSrcIdx = 133;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(13) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% Robot_calibration_Ipos_DW.sf_quintictrajectorytime_i.previous_value_reference_start
	  section.data(1).logicalSrcIdx = 134;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Robot_calibration_Ipos_DW.sf_quintictrajectorytime_i.previous_value_reference_end
	  section.data(2).logicalSrcIdx = 135;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Robot_calibration_Ipos_DW.sf_quintictrajectorytime_i.index
	  section.data(3).logicalSrcIdx = 136;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(14) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Robot_calibration_Ipos_DW.sf_quintictrajectorytime_i.path_array
	  section.data(1).logicalSrcIdx = 137;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(15) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Robot_calibration_Ipos_DW.sf_quintictrajectorytime_i.path_array_not_empty
	  section.data(1).logicalSrcIdx = 138;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(16) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% Robot_calibration_Ipos_DW.sf_quintictrajectorytime.previous_value_reference_start
	  section.data(1).logicalSrcIdx = 139;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Robot_calibration_Ipos_DW.sf_quintictrajectorytime.previous_value_reference_end
	  section.data(2).logicalSrcIdx = 140;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Robot_calibration_Ipos_DW.sf_quintictrajectorytime.index
	  section.data(3).logicalSrcIdx = 141;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(17) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Robot_calibration_Ipos_DW.sf_quintictrajectorytime.path_array
	  section.data(1).logicalSrcIdx = 142;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(18) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Robot_calibration_Ipos_DW.sf_quintictrajectorytime.path_array_not_empty
	  section.data(1).logicalSrcIdx = 143;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(19) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Robot_calibration_Ipos_DW.SerialWrite.obj
	  section.data(1).logicalSrcIdx = 144;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(20) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Robot_calibration_Ipos_DW.SerialWrite.objisempty
	  section.data(1).logicalSrcIdx = 145;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(21) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Robot_calibration_Ipos_DW.SerialWrite1.obj
	  section.data(1).logicalSrcIdx = 146;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(22) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Robot_calibration_Ipos_DW.SerialWrite1.objisempty
	  section.data(1).logicalSrcIdx = 147;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(23) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (dwork)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    dworkMap.nTotData = nTotData;
    


  ;%
  ;% Add individual maps to base struct.
  ;%

  targMap.paramMap  = paramMap;    
  targMap.signalMap = sigMap;
  targMap.dworkMap  = dworkMap;
  
  ;%
  ;% Add checksums to base struct.
  ;%


  targMap.checksum0 = 3010107738;
  targMap.checksum1 = 2666968715;
  targMap.checksum2 = 3655197131;
  targMap.checksum3 = 2743539604;

