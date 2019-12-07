/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SVVideoPlaybackPolicyObserving <NSObject>
@property (setter=onRequestStateChange:,nonatomic,copy) id requestStateChangeBlock; 
@property (setter=onAllowedStateChange:,nonatomic,copy) id allowedStateChangeBlock; 
@property (nonatomic,readonly) id<SVVideoPlaybackPolicy> policy; 
@required
-(id<SVVideoPlaybackPolicy>)policy;
-(id)allowedStateChangeBlock;
-(id)requestStateChangeBlock;
-(void)onRequestStateChange:(/*^block*/id)arg1;
-(void)onAllowedStateChange:(/*^block*/id)arg1;

@end
