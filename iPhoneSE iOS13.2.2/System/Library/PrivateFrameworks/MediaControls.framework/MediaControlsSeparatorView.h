/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:16 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UIView.h>

@class MTVisualStylingProvider, UIView;

@interface MediaControlsSeparatorView : UIView {

	MTVisualStylingProvider* _visualStylingProvider;
	UIView* _separatorView;

}

@property (nonatomic,retain) UIView * separatorView;                                       //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,retain) MTVisualStylingProvider * visualStylingProvider;              //@synthesize visualStylingProvider=_visualStylingProvider - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIView *)separatorView;
-(void)setSeparatorView:(UIView *)arg1 ;
-(MTVisualStylingProvider *)visualStylingProvider;
-(void)setVisualStylingProvider:(MTVisualStylingProvider *)arg1 ;
@end
