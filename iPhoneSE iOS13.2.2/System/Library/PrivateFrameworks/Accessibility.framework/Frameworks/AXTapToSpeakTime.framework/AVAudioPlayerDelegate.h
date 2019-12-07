/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:47 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXTapToSpeakTime.framework/AXTapToSpeakTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVAudioPlayerDelegate <NSObject>
@optional
-(void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2;
-(void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;
-(void)audioPlayerBeginInterruption:(id)arg1;
-(void)audioPlayerEndInterruption:(id)arg1 withOptions:(unsigned long long)arg2;
-(void)audioPlayerEndInterruption:(id)arg1 withFlags:(unsigned long long)arg2;
-(void)audioPlayerEndInterruption:(id)arg1;

@end
