/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:51 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVVideoComposition;

@interface ISPlaybackSettings : NSObject {

	float _audioVolume;
	AVVideoComposition* _videoComposition;

}

@property (nonatomic,retain) AVVideoComposition * videoComposition;              //@synthesize videoComposition=_videoComposition - In the implementation block
@property (assign,nonatomic) float audioVolume;                                  //@synthesize audioVolume=_audioVolume - In the implementation block
-(id)init;
-(float)audioVolume;
-(void)setAudioVolume:(float)arg1 ;
-(AVVideoComposition *)videoComposition;
-(void)setVideoComposition:(AVVideoComposition *)arg1 ;
@end
