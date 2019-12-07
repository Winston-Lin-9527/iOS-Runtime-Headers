/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:53 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /usr/lib/libBKDM1.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface BLTimeBox : NSObject {

	BOOL _clockChanged;
	NSDate* _systemStartDate;
	double _lastMachCorrection;
	NSDate* _idleStartDate;

}

@property (retain,readonly) NSDate * systemStartDate;              //@synthesize systemStartDate=_systemStartDate - In the implementation block
@property (readonly) BOOL clockChanged;                            //@synthesize clockChanged=_clockChanged - In the implementation block
@property (assign) double lastMachCorrection;                      //@synthesize lastMachCorrection=_lastMachCorrection - In the implementation block
@property (retain) NSDate * idleStartDate;                         //@synthesize idleStartDate=_idleStartDate - In the implementation block
-(id)init;
-(void)dealloc;
-(id)date;
-(BOOL)clockChanged;
-(id)dateFromAbsoluteTime:(unsigned long long)arg1 hasNanoseconds:(unsigned long long*)arg2 ;
-(double)clockOffset;
-(double)idleTimeAtDate:(id)arg1 ;
-(double)synchronizeToClock;
-(void)setIdleStartDate:(NSDate *)arg1 ;
-(double)machCorrectionWithCheck;
-(void)setLastMachCorrection:(double)arg1 ;
-(id)getSystemStartDate;
-(void)systemClockChanged:(id)arg1 ;
-(NSDate *)systemStartDate;
-(double)lastMachCorrection;
-(NSDate *)idleStartDate;
@end
