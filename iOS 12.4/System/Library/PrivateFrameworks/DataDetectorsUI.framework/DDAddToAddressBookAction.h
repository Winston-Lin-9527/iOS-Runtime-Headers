/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:10 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataDetectorsUI/DDAddressAction.h>

@class DDRemoteActionViewController;

@interface DDAddToAddressBookAction : DDAddressAction

@property (nonatomic,retain) DDRemoteActionViewController * viewController; 
+(BOOL)actionAvailableForContact:(id)arg1 ;
-(id)contact;
-(id)notificationURL;
-(void)prepareViewControllerForActionController:(id)arg1 ;
-(void)adaptForPresentationInPopover:(BOOL)arg1 ;
-(id)notificationIconBundleIdentifier;
-(id)notificationTitle;
-(void)invalidate;
-(id)localizedName;
-(int)interactionType;
@end
