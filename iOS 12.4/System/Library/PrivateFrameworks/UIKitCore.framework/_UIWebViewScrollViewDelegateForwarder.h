/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:41 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIScrollViewDelegate.h>

@protocol UIScrollViewDelegate;
@class UIWebView, NSString;

@interface _UIWebViewScrollViewDelegateForwarder : NSObject <UIScrollViewDelegate> {

	id<UIScrollViewDelegate> _delegate;
	UIWebView* _webView;

}

@property (assign,nonatomic) id<UIScrollViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) UIWebView * webView;                            //@synthesize webView=_webView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(void)setDelegate:(id<UIScrollViewDelegate>)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id<UIScrollViewDelegate>)delegate;
-(UIWebView *)webView;
-(void)forwardInvocation:(id)arg1 ;
-(void)setWebView:(UIWebView *)arg1 ;
@end
