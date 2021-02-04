/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:49 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreSpeech/CoreSpeech-Structs.h>
@interface CSAudioZeroFilter : NSObject {

	unique_ptr<CSAudioZeroFilterImpl<unsigned short>, std::__1::default_delete<CSAudioZeroFilterImpl<unsigned short> > >* _audioZeroFilterImpl;

}
-(id)initWithZeroWindowSize:(unsigned long long)arg1 approxAbsSpeechThreshold:(unsigned short)arg2 numHostTicksPerAudioSample:(double)arg3 ;
-(unsigned long long)filterZerosInAudioPacket:(id)arg1 atBufferHostTime:(unsigned long long)arg2 filteredPacket:(id*)arg3 ;
-(unsigned long long)endAudioAndFetchAnyTrailingZerosPacket:(id*)arg1 ;
-(id)metrics;
@end
