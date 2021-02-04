/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:38 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMLogItem.h>

@class NSNumber;

@interface CMAltitudeData : CMLogItem {

	id _internal;

}

@property (nonatomic,readonly) NSNumber * relativeAltitude; 
@property (nonatomic,readonly) NSNumber * pressure; 
+(BOOL)supportsSecureCoding;
-(id)initWithAltitude:(float)arg1 andTimestamp:(double)arg2 atBaseAltitude:(float)arg3 ;
-(id)initWithTimestamp:(double)arg1 pressure:(float)arg2 relativeAltitude:(float)arg3 ;
-(NSNumber *)relativeAltitude;
-(NSNumber *)pressure;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
