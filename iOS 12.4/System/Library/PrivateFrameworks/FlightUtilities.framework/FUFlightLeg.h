/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:37 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class FUFlightStep, NSString;

@interface FUFlightLeg : NSObject <NSSecureCoding> {

	long long _status;
	double _duration;
	FUFlightStep* _departure;
	FUFlightStep* _arrival;
	NSString* _baggageClaim;

}

@property (assign) long long status;                      //@synthesize status=_status - In the implementation block
@property (assign) double duration;                       //@synthesize duration=_duration - In the implementation block
@property (readonly) double currentProgress; 
@property (retain) FUFlightStep * departure;              //@synthesize departure=_departure - In the implementation block
@property (retain) FUFlightStep * arrival;                //@synthesize arrival=_arrival - In the implementation block
@property (retain) NSString * baggageClaim;               //@synthesize baggageClaim=_baggageClaim - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setDeparture:(FUFlightStep *)arg1 ;
-(void)setArrival:(FUFlightStep *)arg1 ;
-(FUFlightStep *)departure;
-(FUFlightStep *)arrival;
-(NSString *)baggageClaim;
-(void)setBaggageClaim:(NSString *)arg1 ;
-(double)currentProgress;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)setDuration:(double)arg1 ;
-(double)duration;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
@end
