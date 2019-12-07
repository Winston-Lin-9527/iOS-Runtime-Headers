/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:00 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskResultObject.h>

@class CRKEventLog, NSDate, NSString;

@interface CRKFetchLogEventsResultObject : CATTaskResultObject {

	CRKEventLog* _eventLog;
	NSDate* _currentDate;
	NSString* _sessionToken;

}

@property (nonatomic,retain) CRKEventLog * eventLog;              //@synthesize eventLog=_eventLog - In the implementation block
@property (nonatomic,retain) NSDate * currentDate;                //@synthesize currentDate=_currentDate - In the implementation block
@property (nonatomic,copy) NSString * sessionToken;               //@synthesize sessionToken=_sessionToken - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSessionToken:(NSString *)arg1 ;
-(NSString *)sessionToken;
-(NSDate *)currentDate;
-(void)setCurrentDate:(NSDate *)arg1 ;
-(CRKEventLog *)eventLog;
-(void)setEventLog:(CRKEventLog *)arg1 ;
@end
