/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:49 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CSVTUIAudioSession.h>
#import <libobjc.A.dylib/AVVoiceControllerRecordDelegate.h>
#import <libobjc.A.dylib/AVVoiceControllerPlaybackDelegate.h>

@protocol OS_dispatch_queue, CSVTUIAudioSessionDelegate;
@class AVVoiceController, NSObject, NSString;

@interface CSVTUIAudioSessionAVVC : NSObject <CSVTUIAudioSession, AVVoiceControllerRecordDelegate, AVVoiceControllerPlaybackDelegate> {

	AVVoiceController* _voiceController;
	NSObject*<OS_dispatch_queue> _queue;
	id<CSVTUIAudioSessionDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CSVTUIAudioSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)hasAudioRoute;
-(BOOL)isRecording;
-(void)stopRecording;
-(id)voiceController;
-(void)setEndpointerDelegate:(id)arg1 ;
-(BOOL)startRecording;
-(void)voiceControllerRecordBufferAvailable:(id)arg1 buffer:(id)arg2 ;
-(void)voiceControllerDidStopRecording:(id)arg1 forReason:(long long)arg2 ;
-(void)updateMeters;
-(void)voiceControllerDidStartRecording:(id)arg1 successfully:(BOOL)arg2 error:(id)arg3 ;
-(void)voiceControllerEncoderErrorDidOccur:(id)arg1 error:(id)arg2 ;
-(void)voiceControllerRecordHardwareConfigurationDidChange:(id)arg1 toConfiguration:(int)arg2 ;
-(void)voiceControllerLPCMRecordBufferAvailable:(id)arg1 buffer:(id)arg2 ;
-(void)releaseAudioSession;
-(BOOL)prepareRecord;
-(BOOL)hasCorrectAudioRoute;
-(long long)convertStopReason:(long long)arg1 ;
-(void)resetEndPointer;
-(BOOL)_hasInputAudioRoute;
-(BOOL)_hasCorrectInputAudioRoute;
-(BOOL)_hasCorrectOutputAudioRoute;
-(void)voiceControllerPlaybackBufferAvailable:(id)arg1 buffer:(id)arg2 ;
-(void)voiceControllerPlaybackHardwareConfigurationDidChange:(id)arg1 toConfiguration:(int)arg2 ;
-(unsigned long long)audioSource;
-(id)init;
-(void)setDelegate:(id<CSVTUIAudioSessionDelegate>)arg1 ;
-(id<CSVTUIAudioSessionDelegate>)delegate;
-(float)averagePower;
@end
