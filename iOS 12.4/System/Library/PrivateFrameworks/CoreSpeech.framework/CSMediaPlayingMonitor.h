/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:48 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpeech/CSEventMonitor.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface CSMediaPlayingMonitor : CSEventMonitor {

	long long _mediaIsPlaying;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedInstance;
-(void)_stopMonitoring;
-(void)_notifyObserver:(id)arg1 mediaIsPlayingState:(long long)arg2 ;
-(void)_notePossiblePlayPausedStateChange:(id)arg1 ;
-(void)initializeMediaPlayingState;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(long long)mediaPlayingState;
-(void)mediaPlayingStateWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
@end
