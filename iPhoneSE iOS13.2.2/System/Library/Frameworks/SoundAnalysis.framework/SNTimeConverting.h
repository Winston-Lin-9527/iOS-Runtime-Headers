/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:43 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SNTimeConverting <NSObject>
@property (nonatomic,readonly) double clientSampleRate; 
@required
-(long long)clientSampleTimeFromSampleTime:(long long)arg1 fromBox:(Box*)arg2;
-(double)clientSampleRate;

@end
