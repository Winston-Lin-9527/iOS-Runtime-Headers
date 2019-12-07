/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:05 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CAMPerformanceTestHarness.h>
#import <libobjc.A.dylib/CAMStillImageCaptureRequestDelegate.h>
#import <libobjc.A.dylib/CAMCaptureRequestIntervalometerDelegate.h>

@class CUCaptureController, NSMutableDictionary, NSNumber, CAMCaptureRequestIntervalometer, NSString;

@interface CAMIntervalometerTestHarness : CAMPerformanceTestHarness <CAMStillImageCaptureRequestDelegate, CAMCaptureRequestIntervalometerDelegate> {

	CUCaptureController* _captureController;
	BOOL _performWarmupCapture;
	BOOL _hasOutstandingCapture;
	BOOL _nextCaptureIsMyLast;
	NSMutableDictionary* _numberOfResponsesForRequest;
	NSNumber* _expectedNumberOfResponsesPerRequest;
	CAMCaptureRequestIntervalometer* _testIntervalometer;

}

@property (nonatomic,retain) CAMCaptureRequestIntervalometer * testIntervalometer;              //@synthesize testIntervalometer=_testIntervalometer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)harnessWithTestName:(id)arg1 expectedNumberOfCapturesPerRequest:(id)arg2 captureController:(id)arg3 performingWarmupCapture:(BOOL)arg4 ;
-(void)startTesting;
-(void)stopTesting;
-(void)setTestIntervalometer:(CAMCaptureRequestIntervalometer *)arg1 ;
-(void)stillImageRequestDidCompleteStillImageCapture:(id)arg1 withResponse:(id)arg2 error:(id)arg3 ;
-(void)failedTestwithReason:(id)arg1 ;
-(BOOL)intervalometer:(id)arg1 didGenerateCaptureRequest:(id)arg2 ;
-(void)intervalometerDidReachMaximumCount:(id)arg1 ;
-(id)initWithTestName:(id)arg1 expectedNumberOfCapturesPerRequest:(id)arg2 captureController:(id)arg3 performingWarmupCapture:(BOOL)arg4 ;
-(CAMCaptureRequestIntervalometer *)testIntervalometer;
-(BOOL)_hasReceivedExpectedNumberOfResponsesForRequests;
@end
