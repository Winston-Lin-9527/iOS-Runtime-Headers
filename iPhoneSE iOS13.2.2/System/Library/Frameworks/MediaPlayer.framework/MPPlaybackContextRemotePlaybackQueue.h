/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:47 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPRemotePlaybackQueue.h>

@class MPPlaybackContext;

@interface MPPlaybackContextRemotePlaybackQueue : MPRemotePlaybackQueue {

	MPPlaybackContext* _playbackContext;
	long long _replaceIntent;

}
-(id)description;
-(id)siriWHAMetricsInfo;
-(BOOL)isRequestingImmediatePlayback;
-(id)siriRecommendationIdentifier;
-(id)siriAssetInfo;
-(long long)replaceIntent;
-(void)setReplaceIntent:(long long)arg1 ;
-(id)initWithPlaybackContext:(id)arg1 ;
-(void)getPlaybackContextWithCompletion:(/*^block*/id)arg1 ;
@end
