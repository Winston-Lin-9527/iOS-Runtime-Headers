/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:47 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WKUIDelegate.h>

@class WKWebView, _SFBrowserContentViewController, NSString;

@interface SFReaderViewController : UIViewController <WKUIDelegate> {

	WKWebView* _originalWebView;
	_SFBrowserContentViewController* _containerViewController;

}

@property (nonatomic,readonly) WKWebView * readerWebView; 
@property (assign,nonatomic,__weak) _SFBrowserContentViewController * containerViewController;              //@synthesize containerViewController=_containerViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadView;
-(id)_webView:(id)arg1 previewViewControllerForURL:(id)arg2 defaultActions:(id)arg3 elementInfo:(id)arg4 ;
-(void)_webView:(id)arg1 commitPreviewedViewController:(id)arg2 ;
-(id)initWithOriginalWebView:(id)arg1 ;
-(WKWebView *)readerWebView;
-(_SFBrowserContentViewController *)containerViewController;
-(void)setContainerViewController:(_SFBrowserContentViewController *)arg1 ;
@end
