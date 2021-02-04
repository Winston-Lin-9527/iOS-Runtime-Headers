/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:45 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VUIPlaybackUtilities : NSObject
+(long long)playedStateForDuration:(double)arg1 elapsedTime:(double)arg2 hasBeenPlayed:(BOOL)arg3 playCount:(unsigned long long)arg4 ;
+(double)playedThresholdTimeForDuration:(double)arg1 ;
+(long long)playedStateForDuration:(double)arg1 elapsedTime:(double)arg2 hasBeenPlayed:(BOOL)arg3 playCount:(unsigned long long)arg4 respectPlayCount:(BOOL)arg5 ;
+(double)suggestedBookmarkTimeForElapsedTime:(double)arg1 duration:(double)arg2 ;
+(BOOL)playerIsLive:(id)arg1 ;
@end
