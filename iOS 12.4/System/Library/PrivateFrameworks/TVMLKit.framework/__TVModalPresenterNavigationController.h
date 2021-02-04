/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:18 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UINavigationController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <TVMLKit/_TVModalPresenterFocusing.h>

@class UIViewController, NSMapTable, NSArray, NSString, UIView;

@interface __TVModalPresenterNavigationController : UINavigationController <UIGestureRecognizerDelegate, _TVModalPresenterFocusing> {

	UIViewController* _rootViewController;
	NSMapTable* _pushCompletionBlocks;
	NSMapTable* _popCompletionBlocks;
	BOOL _isModalNavVisisble;
	NSArray* _previousViewControllers;
	/*^block*/id _dismissalBlock;

}

@property (nonatomic,retain) NSArray * previousViewControllers;                                   //@synthesize previousViewControllers=_previousViewControllers - In the implementation block
@property (nonatomic,copy) id dismissalBlock;                                                     //@synthesize dismissalBlock=_dismissalBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * preferredFocusEnvironments; 
@property (nonatomic,__weak,readonly) id<UIFocusEnvironment> parentFocusEnvironment; 
@property (nonatomic,readonly) id<UIFocusItemContainer> focusItemContainer; 
@property (nonatomic,__weak,readonly) UIView * preferredFocusedView; 
-(void)popViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)updatePreferredFocusedViewStateForFocus:(BOOL)arg1 ;
-(void)setDismissalBlock:(id)arg1 ;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_ensureNavigationBarHiddenSafelyForViewSize:(CGSize)arg1 ;
-(void)setPreviousViewControllers:(NSArray *)arg1 ;
-(void)_dismissForLastViewController:(BOOL)arg1 ;
-(id)dismissalBlock;
-(NSArray *)previousViewControllers;
-(void)_dismissForLastViewController;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)reset;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)shouldAutorotate;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)popViewControllerAnimated:(BOOL)arg1 ;
-(void)didShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)childViewControllerForHomeIndicatorAutoHidden;
-(id)initWithRootViewController:(id)arg1 ;
@end
