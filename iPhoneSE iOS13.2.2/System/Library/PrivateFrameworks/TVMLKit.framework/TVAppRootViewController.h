/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:21 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UINavigationController, UIViewController, IKAppTabBar;


@protocol TVAppRootViewController <NSObject>
@property (nonatomic,readonly) UINavigationController * currentNavigationController; 
@property (nonatomic,readonly) UIViewController * currentViewController; 
@property (nonatomic,readonly) id<IKAppNavigationController> appNavigationController; 
@property (nonatomic,readonly) IKAppTabBar * appTabBar; 
@required
-(UIViewController *)currentViewController;
-(IKAppTabBar *)appTabBar;
-(id<IKAppNavigationController>)appNavigationController;
-(UINavigationController *)currentNavigationController;
-(void)setAppNavigationControllersDelegate:(id)arg1;

@end
