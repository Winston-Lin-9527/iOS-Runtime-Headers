/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:10 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@protocol _SFPopoverSourceInfo;
@class UIPopoverPresentationController, NSString;

@interface _SFPopoverPresentationDelegate : NSObject <UIPopoverPresentationControllerDelegate> {

	id<_SFPopoverSourceInfo> _sourceInfo;
	UIPopoverPresentationController* _popoverPresentationController;
	BOOL _popoverUsesAdaptivePresentationInCompact;

}

@property (assign,nonatomic) BOOL popoverUsesAdaptivePresentationInCompact;              //@synthesize popoverUsesAdaptivePresentationInCompact=_popoverUsesAdaptivePresentationInCompact - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)attachDelegateToPopoverPresentationController:(id)arg1 anchoredToReloadButtonInNavigationBar:(id)arg2 ;
+(void)attachDelegateToPopoverPresentationController:(id)arg1 anchoredToReaderButtonInNavigationBar:(id)arg2 ;
+(void)attachDelegateToPopoverPresentationController:(id)arg1 anchoredToReaderAppearanceButtonInNavigationBar:(id)arg2 ;
-(id)initWithSourceInfo:(id)arg1 ;
-(void)attachToPopoverPresentationController:(id)arg1 ;
-(void)updatePopoverPosition;
-(void)setPopoverUsesAdaptivePresentationInCompact:(BOOL)arg1 ;
-(BOOL)popoverUsesAdaptivePresentationInCompact;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2 ;
-(id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2 ;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout CGRect*)arg2 inView:(inout id*)arg3 ;
@end
