/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:26 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DoNotDisturb/DNDModeAssertionLifetime.h>

@class NSString, NSDate;

@interface DNDModeAssertionCalendarEventLifetime : DNDModeAssertionLifetime {

	BOOL _onlyDuringEvent;
	NSString* _eventUniqueID;
	NSDate* _occurrenceDate;

}

@property (nonatomic,copy,readonly) NSString * eventUniqueID;                              //@synthesize eventUniqueID=_eventUniqueID - In the implementation block
@property (nonatomic,copy,readonly) NSDate * occurrenceDate;                               //@synthesize occurrenceDate=_occurrenceDate - In the implementation block
@property (getter=isOnlyDuringEvent,nonatomic,readonly) BOOL onlyDuringEvent;              //@synthesize onlyDuringEvent=_onlyDuringEvent - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)eventUniqueID;
-(NSDate *)occurrenceDate;
-(BOOL)isOnlyDuringEvent;
-(id)initWithEventUniqueID:(id)arg1 occurrenceDate:(id)arg2 onlyDuringEvent:(BOOL)arg3 ;
-(unsigned long long)lifetimeType;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end
