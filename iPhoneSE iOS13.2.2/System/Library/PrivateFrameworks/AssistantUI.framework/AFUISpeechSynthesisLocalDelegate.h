/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:32 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AFUISpeechSynthesisLocalDelegate <NSObject>
@required
-(void)stopCurrentRecordingForSpeechSynthesis:(id)arg1;
-(void)speechSynthesis:(id)arg1 prepareForSpeakingWithOptions:(unsigned long long)arg2 completion:(/*^block*/id)arg3;
-(BOOL)speechSynthesisConnectionIsRecording:(id)arg1;
-(void)speechSynthesisDidFinish:(id)arg1;

@end
