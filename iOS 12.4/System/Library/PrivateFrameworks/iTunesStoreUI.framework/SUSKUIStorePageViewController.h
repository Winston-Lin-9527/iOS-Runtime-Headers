/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:16 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUViewController.h>
#import <libobjc.A.dylib/SKUIIPhoneProductPageDelegate.h>
#import <libobjc.A.dylib/SKStoreProductViewControllerDelegatePrivate.h>

@class UIViewController, SKUIIPhoneProductPageViewController, SKStoreProductViewController, SKUIStorePageViewController, NSString;

@interface SUSKUIStorePageViewController : SUViewController <SKUIIPhoneProductPageDelegate, SKStoreProductViewControllerDelegatePrivate> {

	UIViewController* _activeChildViewController;
	SKUIIPhoneProductPageViewController* _iphoneProductPageViewController;
	SKStoreProductViewController* _remoteProductViewController;
	SKUIStorePageViewController* _storePageViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reloadWithStorePage:(id)arg1 forURL:(id)arg2 ;
-(void)_showProductPageWithPageDictionary:(id)arg1 ;
-(void)_showStorePageWithPageDictionary:(id)arg1 ;
-(void)_setActiveChildViewController:(id)arg1 ;
-(void)_showRemoteViewControllerWithPageDictionary:(id)arg1 ;
-(void)_showIPhoneProductPageWithPage:(id)arg1 clientContext:(id)arg2 ;
-(id)initWithSection:(id)arg1 ;
-(void)_loadClientContextWithCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)iPhoneProductPage:(id)arg1 shouldOpenItem:(id)arg2 ;
-(BOOL)iPhoneProductPage:(id)arg1 shouldOpenURL:(id)arg2 ;
-(void)dealloc;
-(void)dismissAnimated:(BOOL)arg1 ;
-(void)loadView;
-(void)productViewController:(id)arg1 didFinishWithResult:(long long)arg2 ;
-(void)productViewController:(id)arg1 presentProductWithRequest:(id)arg2 animated:(BOOL)arg3 ;
@end
