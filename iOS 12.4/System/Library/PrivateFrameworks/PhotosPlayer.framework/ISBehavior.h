/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ISBehaviorDelegate;
#import <PhotosPlayer/PhotosPlayer-Structs.h>
@class ISPlayerState;

@interface ISBehavior : NSObject {

	BOOL _active;
	id<ISBehaviorDelegate> _delegate;
	ISPlayerState* _initialLayoutInfo;

}

@property (getter=isActive,nonatomic,readonly) BOOL active;                       //@synthesize active=_active - In the implementation block
@property (assign,nonatomic,__weak) id<ISBehaviorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) ISPlayerState * initialLayoutInfo;                 //@synthesize initialLayoutInfo=_initialLayoutInfo - In the implementation block
@property (nonatomic,readonly) long long behaviorType; 
-(void)resignActive;
-(void)becomeActive;
-(id)initWithInitialLayoutInfo:(id)arg1 ;
-(void)setVideoPlayRate:(float)arg1 ;
-(void)setOutputInfo:(id)arg1 withTransitionOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)videoDidPlayToEnd;
-(void)activeDidChange;
-(void)setVideoForwardPlaybackEndTime:(SCD_Struct_IS4)arg1 ;
-(BOOL)seekVideoPlayerToTime:(SCD_Struct_IS4)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)prerollVideoAtRate:(float)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)videoWillPlayToEnd;
-(void)videoWillPlayToPhoto;
-(void)setVideoVolume:(float)arg1 ;
-(BOOL)seekVideoPlayerToTime:(SCD_Struct_IS4)arg1 toleranceBefore:(SCD_Struct_IS4)arg2 toleranceAfter:(SCD_Struct_IS4)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)videoPlayerItemDidChange;
-(ISPlayerState *)initialLayoutInfo;
-(long long)behaviorType;
-(void)setDelegate:(id<ISBehaviorDelegate>)arg1 ;
-(BOOL)isActive;
-(id<ISBehaviorDelegate>)delegate;
@end
