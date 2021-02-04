/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:45 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIVisualEffectView.h>

@class UIView;

@interface HUVisualEffectContainerView : UIVisualEffectView {

	UIView* _innerContentView;

}

@property (nonatomic,retain) UIView * innerContentView;              //@synthesize innerContentView=_innerContentView - In the implementation block
-(void)setInnerContentView:(UIView *)arg1 ;
-(UIView *)innerContentView;
-(id)initWithInnerContentView:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
@end
