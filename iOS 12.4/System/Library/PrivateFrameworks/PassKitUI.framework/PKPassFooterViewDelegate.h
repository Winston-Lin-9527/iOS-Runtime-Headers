/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:14 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKPassFooterViewDelegate <NSObject>
@optional
-(void)passFooterViewDidChangePileSuppressionRequirement:(id)arg1;

@required
-(void)passFooterViewDidChangeUserIntentRequirement:(id)arg1;
-(void)passFooterViewDidChangeCoachingState:(id)arg1;
-(BOOL)isPassFooterViewInGroup:(id)arg1;
-(unsigned long long)suppressedContentForPassFooter:(id)arg1;

@end
