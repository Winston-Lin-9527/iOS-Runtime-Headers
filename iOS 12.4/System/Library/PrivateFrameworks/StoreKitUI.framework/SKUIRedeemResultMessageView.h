/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:23 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, NSString;

@interface SKUIRedeemResultMessageView : UIView {

	UILabel* _messageLabel;
	UILabel* _titleLabel;

}

@property (nonatomic,copy) NSString * message; 
@property (nonatomic,copy) NSString * title; 
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
@end
