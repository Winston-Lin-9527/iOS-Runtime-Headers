/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:49 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVVoiceControllerPlaybackDelegate <NSObject>
@optional
-(void)voiceControllerDidStartPlaying:(id)arg1 successfully:(BOOL)arg2;
-(void)voiceControllerDidStopPlaying:(id)arg1 forReason:(long long)arg2;
-(void)voiceControllerDecoderErrorDidOccur:(id)arg1 error:(id)arg2;
-(void)voiceControllerPlaybackHardwareConfigurationDidChange:(id)arg1 toConfiguration:(int)arg2;
-(void)voiceControllerBeginPlaybackInterruption:(id)arg1;
-(void)voiceControllerEndPlaybackInterruption:(id)arg1;

@required
-(void)voiceControllerPlaybackBufferAvailable:(id)arg1 buffer:(id)arg2;

@end
