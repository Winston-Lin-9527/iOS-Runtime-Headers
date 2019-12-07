/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:28 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKitUI/ActionKitUI-Structs.h>
#import <UIKitCore/UIControl.h>

@class CAShapeLayer;

@interface WFCameraShutterButton : UIControl {

	CAShapeLayer* _outlineLayer;
	CAShapeLayer* _buttonLayer;

}

@property (assign,nonatomic,__weak) CAShapeLayer * outlineLayer;              //@synthesize outlineLayer=_outlineLayer - In the implementation block
@property (assign,nonatomic,__weak) CAShapeLayer * buttonLayer;               //@synthesize buttonLayer=_buttonLayer - In the implementation block
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)accessibilityLabel;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setOutlineLayer:(CAShapeLayer *)arg1 ;
-(CAShapeLayer *)outlineLayer;
-(CAShapeLayer *)buttonLayer;
-(void)setButtonLayer:(CAShapeLayer *)arg1 ;
@end
