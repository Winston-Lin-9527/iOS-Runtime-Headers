/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:39 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VTXPCService <NSObject>
@required
-(oneway void)enableVoiceTrigger:(BOOL)arg1 withAssertion:(id)arg2 timestamp:(double)arg3;
-(oneway void)setPhraseSpotterBypassing:(BOOL)arg1 timeout:(double)arg2 timestamp:(double)arg3;
-(oneway void)setRaiseToSpeakBypassing:(BOOL)arg1 timeout:(double)arg2 timestamp:(double)arg3;
-(oneway void)notifyVoiceTriggeredSiriSessionCancelled:(id)arg1;
-(oneway void)notifySecondChanceRequest;
-(oneway void)notifyTriggerEventRequest;
-(oneway void)queryLastTriggerEventTypeWithReply:(/*^block*/id)arg1;
-(oneway void)resetAssertions;
-(oneway void)clearVoiceTriggerCount;
-(oneway void)getVoiceTriggerCountWithReply:(/*^block*/id)arg1;
-(oneway void)getFirstChanceAudioBufferWithReply:(/*^block*/id)arg1;
-(oneway void)getFirstChanceVTEventInfoWithReply:(/*^block*/id)arg1;
-(oneway void)getFirstChanceTriggeredDateWithReply:(/*^block*/id)arg1;
-(oneway void)isLastTriggerFollowedBySpeechWithReply:(/*^block*/id)arg1;
-(oneway void)requestAudioCapture:(double)arg1;
-(oneway void)requestCurrentVoiceTriggerAssetDictionaryWithReply:(/*^block*/id)arg1;
-(oneway void)enableTriggerEventXPCNotification:(BOOL)arg1;
-(oneway void)getTestResponse:(/*^block*/id)arg1;

@end
