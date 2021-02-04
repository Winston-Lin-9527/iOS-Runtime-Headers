/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:38 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMLogItem.h>

@interface CMGyroData : CMLogItem {

	id _internal;

}

@property (nonatomic,readonly) SCD_Struct_CM4 rotationRate; 
+(BOOL)supportsSecureCoding;
-(id)initWithRotationRate:(SCD_Struct_CM1)arg1 andTimestamp:(double)arg2 ;
-(SCD_Struct_CM4)rotationRate;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
