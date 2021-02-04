/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:28 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError;

@interface NUVideoMetadata : NSObject {

	BOOL _muted;
	double _playbackPosition;
	double _timePlayed;
	double _duration;
	double _volume;
	NSError* _error;

}

@property (assign,nonatomic) double playbackPosition;              //@synthesize playbackPosition=_playbackPosition - In the implementation block
@property (assign,nonatomic) double timePlayed;                    //@synthesize timePlayed=_timePlayed - In the implementation block
@property (assign,nonatomic) double duration;                      //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL muted;                           //@synthesize muted=_muted - In the implementation block
@property (assign,nonatomic) double volume;                        //@synthesize volume=_volume - In the implementation block
@property (nonatomic,copy) NSError * error;                        //@synthesize error=_error - In the implementation block
-(BOOL)muted;
-(double)playbackPosition;
-(void)setPlaybackPosition:(double)arg1 ;
-(void)setMuted:(BOOL)arg1 ;
-(void)setTimePlayed:(double)arg1 ;
-(double)timePlayed;
-(void)setDuration:(double)arg1 ;
-(double)duration;
-(void)setVolume:(double)arg1 ;
-(double)volume;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end
