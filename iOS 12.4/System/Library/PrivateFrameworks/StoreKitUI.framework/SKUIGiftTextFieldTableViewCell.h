/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:24 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class UILabel, UITextField, UIView, NSAttributedString, NSString, UIControl;

@interface SKUIGiftTextFieldTableViewCell : UITableViewCell {

	UILabel* _label;
	UITextField* _textField;
	UIView* _topBorderView;

}

@property (nonatomic,copy) NSAttributedString * attributedPlaceholder; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,nonatomic) long long keyboardType; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,readonly) UIControl * textField;                                //@synthesize textField=_textField - In the implementation block
@property (assign,nonatomic) id<UITextFieldDelegate> textFieldDelegate; 
@property (nonatomic,copy) NSString * value; 
-(void)setTextFieldDelegate:(id<UITextFieldDelegate>)arg1 ;
-(id<UITextFieldDelegate>)textFieldDelegate;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)layoutSubviews;
-(UIControl *)textField;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setKeyboardType:(long long)arg1 ;
-(long long)keyboardType;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSAttributedString *)attributedPlaceholder;
-(void)setAttributedPlaceholder:(NSAttributedString *)arg1 ;
@end
