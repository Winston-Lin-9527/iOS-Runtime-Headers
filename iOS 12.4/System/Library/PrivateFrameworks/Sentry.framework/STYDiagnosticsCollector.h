/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:52 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Sentry.framework/Sentry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_os_log;
@class NSObject, SDRDiagnosticReporter, ABCStats;

@interface STYDiagnosticsCollector : NSObject {

	NSObject*<OS_dispatch_queue> _serialUtilityQueue;
	SDRDiagnosticReporter* _symptomsReporter;
	NSObject*<OS_os_log> _logger;
	ABCStats* _stats;

}

@property (retain) NSObject*<OS_dispatch_queue> serialUtilityQueue;              //@synthesize serialUtilityQueue=_serialUtilityQueue - In the implementation block
@property (retain) SDRDiagnosticReporter * symptomsReporter;                     //@synthesize symptomsReporter=_symptomsReporter - In the implementation block
@property (retain) NSObject*<OS_os_log> logger;                                  //@synthesize logger=_logger - In the implementation block
@property (retain) ABCStats * stats;                                             //@synthesize stats=_stats - In the implementation block
+(id)sharedDiagnosticsCollector;
-(void)setStats:(ABCStats *)arg1 ;
-(ABCStats *)stats;
-(NSObject*<OS_os_log>)logger;
-(void)setLogger:(NSObject*<OS_os_log>)arg1 ;
-(void)setSerialUtilityQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setSymptomsReporter:(SDRDiagnosticReporter *)arg1 ;
-(void)tailspinCollectedForScenarioReport:(id)arg1 tailspinFilepath:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)collectTailspinForScenarioReport:(id)arg1 tailspinFileDescriptor:(int)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_queue>)serialUtilityQueue;
-(SDRDiagnosticReporter *)symptomsReporter;
@end
