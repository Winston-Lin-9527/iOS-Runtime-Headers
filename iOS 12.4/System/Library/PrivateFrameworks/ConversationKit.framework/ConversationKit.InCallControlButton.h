/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:26 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConversationKit/ConversationKit-Structs.h>
#import <UIKitCore/UIControl.h>

@interface ConversationKit.InCallControlButton : UIControl {

	 imageView;
	 toggledConstraints;
	 paragraphStyle;
	 style;
	 label;
	 discView;
	 image;
	 colorConfiguration;

}

@property (assign,nonatomic) BOOL selected; 
@property (assign,nonatomic) BOOL highlighted; 
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
@end
