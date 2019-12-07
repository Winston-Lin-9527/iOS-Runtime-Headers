/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:13 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CMAttitude;

@interface CMDeviceMotionInternal : NSObject <NSCopying> {

	SCD_Struct_CM310 fGravity;
	SCD_Struct_CM310 fUserAcceleration;
	SCD_Struct_CM310 fRotationRate;
	CMAttitude* fAttitude;
	SCD_Struct_CM310 fMagneticField;
	int fMagneticFieldCalibrationLevel;
	BOOL fDoingYawCorrection;
	BOOL fDoingBiasEstimation;
	float fHeading;
	float fHeadingAccuracy;

}
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDeviceMotion:(SCD_Struct_CM312)arg1 internal:(SCD_Struct_CM313)arg2 ;
-(id)initWithDeviceMotion:(SCD_Struct_CM312)arg1 internal:(SCD_Struct_CM313)arg2 ;
@end
