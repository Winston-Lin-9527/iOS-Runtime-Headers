/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:42 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDWorkoutEventCollectorDelegate;
@class NSUUID, HDProfile;

@interface HDWorkoutEventCollector : NSObject {

	id<HDWorkoutEventCollectorDelegate> _delegate;
	NSUUID* _sessionId;
	HDProfile* _profile;

}

@property (__weak,readonly) id<HDWorkoutEventCollectorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSUUID * sessionId;                                               //@synthesize sessionId=_sessionId - In the implementation block
@property (__weak,readonly) HDProfile * profile;                                       //@synthesize profile=_profile - In the implementation block
+(BOOL)isAvailableInCurrentHardware;
-(NSUUID *)sessionId;
-(void)startWithSessionId:(id)arg1 ;
-(void)requestPendingEventsThroughDate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithProfile:(id)arg1 delegate:(id)arg2 ;
-(BOOL)supportsWorkoutActivityType:(unsigned long long)arg1 ;
-(HDProfile *)profile;
-(id<HDWorkoutEventCollectorDelegate>)delegate;
-(void)stop;
@end
