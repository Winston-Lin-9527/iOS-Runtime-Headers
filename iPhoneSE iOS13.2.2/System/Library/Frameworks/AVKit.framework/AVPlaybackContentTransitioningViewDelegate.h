/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:35 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVPlaybackContentTransitioningViewDelegate <NSObject>
@required
-(BOOL)contentTransitioningViewShouldBeginDragging:(id)arg1 locationInView:(CGPoint)arg2;
-(BOOL)contentTransitioningView:(id)arg1 shouldBeginTransitionWithDirection:(long long)arg2;
-(id)contentTransitioningPlayerContentViewForTransition:(id)arg1;
-(void)contentTransitioningViewDidChangeTransitionStatus:(id)arg1 oldState:(long long)arg2 oldTransitionDirection:(long long)arg3 oldProgress:(double)arg4;

@end
