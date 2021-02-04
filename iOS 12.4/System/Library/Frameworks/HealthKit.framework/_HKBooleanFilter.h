/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:24 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/_HKFilter.h>

@interface _HKBooleanFilter : _HKFilter {

	BOOL _boolValue;

}

@property (nonatomic,readonly) BOOL boolValue;              //@synthesize boolValue=_boolValue - In the implementation block
+(id)filterWithBoolValue:(BOOL)arg1 ;
+(BOOL)supportsSecureCoding;
-(BOOL)acceptsDataObject:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)boolValue;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
