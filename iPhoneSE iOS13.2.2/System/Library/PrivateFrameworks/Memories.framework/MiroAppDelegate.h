/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:40 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <UIKitCore/UIResponder.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, NSString;

@interface MiroAppDelegate : UIResponder <UIApplicationDelegate> {

	UIWindow* _window;

}

@property (nonatomic,retain) UIWindow * window;                     //@synthesize window=_window - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIWindow *)window;
-(void)setWindow:(UIWindow *)arg1 ;
-(void)applicationDidReceiveMemoryWarning:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillTerminate:(id)arg1 ;
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
@end
