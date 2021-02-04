/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:25 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewController.h>

@class NSArray, UIKeyCommandDiscoverabilityHUDView;

@interface UIKeyCommandDiscoverabilityHUDViewController : UIViewController {

	NSArray* _keyCommands;
	GSKeyboardRef _keyboard;

}

@property (nonatomic,retain) UIKeyCommandDiscoverabilityHUDView * view; 
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(id)initWithKeyCommands:(id)arg1 keyboard:(GSKeyboardRef)arg2 ;
-(void)animateOutWithCompletion:(/*^block*/id)arg1 ;
@end
