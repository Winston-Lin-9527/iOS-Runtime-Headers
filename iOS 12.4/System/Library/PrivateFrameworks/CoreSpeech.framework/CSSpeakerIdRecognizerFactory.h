/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:49 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CSVoiceTriggerAssetDownloadMonitorDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface CSSpeakerIdRecognizerFactory : NSObject <CSVoiceTriggerAssetDownloadMonitorDelegate> {

	BOOL _currentlyRetraining;
	NSObject*<OS_dispatch_queue> _stateSerialQueue;

}

@property (assign,nonatomic) BOOL currentlyRetraining;                                   //@synthesize currentlyRetraining=_currentlyRetraining - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> stateSerialQueue;              //@synthesize stateSerialQueue=_stateSerialQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)CSVoiceTriggerAssetDownloadMonitor:(id)arg1 didInstallNewAsset:(BOOL)arg2 ;
-(id)speakerIdRecognizerWithContext:(id)arg1 delegate:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)stateSerialQueue;
-(void)setStateSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)currentlyRetraining;
-(void)setCurrentlyRetraining:(BOOL)arg1 ;
-(id)init;
@end
