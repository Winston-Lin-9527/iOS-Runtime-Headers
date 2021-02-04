/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:09 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@class NSArray, UIStackView, SFDialogTextField, SFDialogTextView, _SFDialogView, NSString;

@interface SFDialogContentView : UIView <UITextFieldDelegate> {

	NSArray* _actionButtons;
	UIStackView* _actionButtonsView;
	unsigned long long _actionIndexTriggeredByEscapeKey;
	unsigned long long _actionIndexTriggeredByReturnKey;
	BOOL _hasAttemptedHardwareKeyboardFocus;
	SFDialogTextField* _inputTextField;
	NSArray* _layoutConstraintsWhenInputIsVisible;
	NSArray* _layoutConstraintsWhenPasswordIsVisible;
	NSArray* _layoutConstraintsWhenInputAndPasswordAreVisible;
	SFDialogTextView* _messageTextView;
	SFDialogTextField* _passwordTextField;
	_SFDialogView* _dialogView;
	NSArray* _actions;

}

@property (assign,nonatomic,__weak) _SFDialogView * dialogView;              //@synthesize dialogView=_dialogView - In the implementation block
@property (nonatomic,copy) NSArray * actions;                                //@synthesize actions=_actions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateActionButtons;
-(void)setInputText:(id)arg1 placeholder:(id)arg2 ;
-(void)setPasswordText:(id)arg1 placeholder:(id)arg2 ;
-(void)_returnAction:(id)arg1 ;
-(void)_escapeAction:(id)arg1 ;
-(void)_focusInputTextField:(id)arg1 ;
-(void)_setText:(id)arg1 placeholder:(id)arg2 forTextField:(id)arg3 ;
-(BOOL)_usesLoginFormAppearance;
-(void)_actionTriggered:(id)arg1 ;
-(void)_invokeDelegateWithSelectedIndex:(unsigned long long)arg1 ;
-(void)didAppear;
-(_SFDialogView *)dialogView;
-(void)setDialogView:(_SFDialogView *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(NSArray *)actions;
-(BOOL)becomeFirstResponder;
-(void)updateConstraints;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(id)keyCommands;
-(void)endEditing;
-(void)setTitleText:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)setActions:(NSArray *)arg1 ;
-(void)setMessageText:(id)arg1 ;
@end
