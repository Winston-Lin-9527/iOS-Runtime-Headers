/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:08 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UINavigationController.h>

@class UIView;

@interface TSKModalNavigationController : UINavigationController {

	UIView* mTopSeparator;
	BOOL mShowTopSeparator;
	BOOL mIsFullscreenViewController;

}

@property (assign,nonatomic) BOOL showTopSeparator; 
@property (assign,nonatomic) BOOL isFullscreenViewController; 
-(void)dealloc;
-(void)viewDidLoad;
-(long long)positionForBar:(id)arg1 ;
-(void)layoutViews;
-(id)initWithRootViewController:(id)arg1 ;
-(BOOL)showTopSeparator;
-(void)setShowTopSeparator:(BOOL)arg1 ;
-(void)setIsFullscreenViewController:(BOOL)arg1 ;
-(void)p_statusBarWillChange:(id)arg1 ;
-(BOOL)isFullscreenViewController;
@end
