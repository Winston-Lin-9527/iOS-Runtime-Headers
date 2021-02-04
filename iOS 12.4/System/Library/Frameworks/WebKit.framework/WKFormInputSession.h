/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:41 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/_WKFormInputSession.h>

@class NSString, UIView, NSArray;

@interface WKFormInputSession : NSObject <_WKFormInputSession> {

	WeakObjCPtr<WKContentView> _contentView;
	RetainPtr<WKFocusedElementInfo>* _focusedElementInfo;
	RetainPtr<UIView>* _customInputView;
	RetainPtr<UIView>* _customInputAccessoryView;
	RetainPtr<NSArray<UITextSuggestion *> >* _suggestions;
	BOOL _accessoryViewShouldNotShow;
	BOOL _forceSecureTextEntry;
	BOOL _requiresStrongPasswordAssistance;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (nonatomic,readonly) NSObject*<NSSecureCoding> userObject; 
@property (nonatomic,readonly) id<_WKFocusedElementInfo> focusedElementInfo; 
@property (nonatomic,copy) NSString * accessoryViewCustomButtonTitle; 
@property (nonatomic,retain) UIView * customInputView; 
@property (nonatomic,retain) UIView * customInputAccessoryView; 
@property (nonatomic,copy) NSArray * suggestions; 
@property (assign,nonatomic) BOOL accessoryViewShouldNotShow; 
@property (assign,nonatomic) BOOL forceSecureTextEntry; 
@property (nonatomic,readonly) BOOL requiresStrongPasswordAssistance; 
-(void)reloadFocusedElementContextView;
-(NSString *)accessoryViewCustomButtonTitle;
-(UIView *)customInputAccessoryView;
-(void)setCustomInputAccessoryView:(UIView *)arg1 ;
-(BOOL)accessoryViewShouldNotShow;
-(BOOL)forceSecureTextEntry;
-(id)initWithContentView:(id)arg1 focusedElementInfo:(id)arg2 requiresStrongPasswordAssistance:(BOOL)arg3 ;
-(NSArray *)suggestions;
-(id<_WKFocusedElementInfo>)focusedElementInfo;
-(NSObject*<NSSecureCoding>)userObject;
-(void)setAccessoryViewCustomButtonTitle:(NSString *)arg1 ;
-(void)setForceSecureTextEntry:(BOOL)arg1 ;
-(void)setCustomInputView:(UIView *)arg1 ;
-(void)setAccessoryViewShouldNotShow:(BOOL)arg1 ;
-(UIView *)customInputView;
-(BOOL)requiresStrongPasswordAssistance;
-(void)invalidate;
-(void)endEditing;
-(BOOL)isValid;
-(void)setSuggestions:(NSArray *)arg1 ;
@end
