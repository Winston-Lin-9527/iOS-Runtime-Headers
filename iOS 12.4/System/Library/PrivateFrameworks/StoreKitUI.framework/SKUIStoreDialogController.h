/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:23 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>

@class NSMutableArray, NSString;

@interface SKUIStoreDialogController : NSObject <UIAlertViewDelegate> {

	NSMutableArray* _alerts;
	NSMutableArray* _dialogs;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_performActionForDialog:(id)arg1 buttonIndex:(long long)arg2 ;
-(void)presentDialog:(id)arg1 ;
-(void)presentDialog:(id)arg1 fromViewController:(id)arg2 ;
-(id)init;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)alertViewCancel:(id)arg1 ;
@end
