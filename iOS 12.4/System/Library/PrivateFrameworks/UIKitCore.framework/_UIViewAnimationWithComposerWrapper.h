/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:35 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIIntervalAnimating, UIViewAnimationComposing;
@interface _UIViewAnimationWithComposerWrapper : NSObject {

	id<UIIntervalAnimating> _animation;
	id<UIViewAnimationComposing> _composer;

}

@property (nonatomic,retain) id<UIIntervalAnimating> animation;                  //@synthesize animation=_animation - In the implementation block
@property (nonatomic,retain) id<UIViewAnimationComposing> composer;              //@synthesize composer=_composer - In the implementation block
+(id)instanceWithAnimation:(id)arg1 composer:(id)arg2 ;
-(id<UIIntervalAnimating>)animation;
-(void)setAnimation:(id<UIIntervalAnimating>)arg1 ;
-(id<UIViewAnimationComposing>)composer;
-(void)setComposer:(id<UIViewAnimationComposing>)arg1 ;
@end
