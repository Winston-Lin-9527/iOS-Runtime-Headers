/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:32 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UINavigationController.h>
#import <UIKit/UIPrintInteractionControllerDelegate.h>

@class NSString;

@interface UIPrintActivityWrapperNavigationController : UINavigationController <UIPrintInteractionControllerDelegate> {

	/*^block*/id _completionHandler;
	BOOL _presentedPrintInteractionController;

}

@property (assign,nonatomic) BOOL presentedPrintInteractionController;              //@synthesize presentedPrintInteractionController=_presentedPrintInteractionController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)initWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)presentedPrintInteractionController;
-(void)setPresentedPrintInteractionController:(BOOL)arg1 ;
@end
