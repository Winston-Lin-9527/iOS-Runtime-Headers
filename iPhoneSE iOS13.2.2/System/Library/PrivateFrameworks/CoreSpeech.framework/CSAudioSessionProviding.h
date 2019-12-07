/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:36 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CSAudioSessionProviding <NSObject>
@required
-(void)enableMiniDucking:(BOOL)arg1;
-(void)setDuckOthersOption:(BOOL)arg1;
-(BOOL)duckOthersOption;
-(BOOL)activateAudioSessionWithReason:(unsigned long long)arg1 error:(id*)arg2;
-(BOOL)prewarmAudioSessionWithError:(id*)arg1;
-(BOOL)deactivateAudioSession:(unsigned long long)arg1 error:(id*)arg2;
-(void)setAudioSessionDelegate:(id)arg1;

@end
