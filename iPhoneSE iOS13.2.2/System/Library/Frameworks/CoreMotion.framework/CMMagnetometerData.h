/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:14 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMLogItem.h>

@interface CMMagnetometerData : CMLogItem {

	id _internal;

}

@property (nonatomic,readonly) SCD_Struct_CM310 magneticField; 
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SCD_Struct_CM310)magneticField;
-(id)initWithMagneticField:(SCD_Struct_CM1)arg1 andTimestamp:(double)arg2 ;
@end
