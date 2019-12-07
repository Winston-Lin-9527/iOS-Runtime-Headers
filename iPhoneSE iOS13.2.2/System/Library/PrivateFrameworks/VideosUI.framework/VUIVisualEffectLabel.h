/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIVisualEffectView, VUILabel;

@interface VUIVisualEffectLabel : UIView {

	UIVisualEffectView* _visualEffectView;
	VUILabel* _label;

}

@property (nonatomic,readonly) UIVisualEffectView * visualEffectView;              //@synthesize visualEffectView=_visualEffectView - In the implementation block
@property (nonatomic,retain) VUILabel * label;                                     //@synthesize label=_label - In the implementation block
+(id)vibrantLabelWithLabel:(id)arg1 ;
-(void)setLabel:(VUILabel *)arg1 ;
-(VUILabel *)label;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithEffect:(id)arg1 ;
-(void)layoutSubviews;
-(UIVisualEffectView *)visualEffectView;
-(void)_updateContentWithNewLabel:(id)arg1 oldLabel:(id)arg2 ;
@end
