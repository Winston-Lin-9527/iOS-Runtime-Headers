/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionUI.framework/AppPredictionUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface APUIActionCardUtils : NSObject
+(id)cardSectionForATXAction:(id)arg1 withConfig:(id)arg2 ;
+(id)cardSectionForNSUserActivity:(id)arg1 withConfig:(id)arg2 ;
+(id)cardSectionForNSString:(id)arg1 withConfig:(id)arg2 ;
+(id)cardSectionForINInteraction:(id)arg1 withConfig:(id)arg2 ;
+(id)cardSectionForINIntent:(id)arg1 withConfig:(id)arg2 ;
+(id)cardSectionForVoiceShortcutWithPhrase:(id)arg1 name:(id)arg2 description:(id)arg3 applicationBundleIdentifier:(id)arg4 config:(id)arg5 ;
+(id)cardSectionForVoiceShortcutWithPhrase:(id)arg1 name:(id)arg2 description:(id)arg3 keyImage:(id)arg4 applicationBundleIdentifier:(id)arg5 config:(id)arg6 ;
+(id)cardForCardSection:(id)arg1 ;
+(id)cardViewForATXAction:(id)arg1 withConfig:(id)arg2 ;
+(id)cardViewForINIntent:(id)arg1 withConfig:(id)arg2 ;
+(id)cardViewForVoiceShortcutWithPhrase:(id)arg1 name:(id)arg2 description:(id)arg3 applicationBundleIdentifier:(id)arg4 config:(id)arg5 ;
+(BOOL)updateCardView:(id)arg1 forINIntent:(id)arg2 withConfig:(id)arg3 ;
+(unsigned long long)_searchUIStyleForAPUIStyle:(unsigned long long)arg1 ;
+(id)_generateCardSectionWithInfo:(id)arg1 config:(id)arg2 ;
+(void)_configureCardInfo:(id)arg1 forINInteraction:(id)arg2 withConfig:(id)arg3 ;
+(void)_configureCardInfo:(id)arg1 forINIntent:(id)arg2 withConfig:(id)arg3 ;
+(void)_configureCardInfo:(id)arg1 forNSUserActivity:(id)arg2 withConfig:(id)arg3 ;
+(void)_configureCardInfo:(id)arg1 forNSString:(id)arg2 withConfig:(id)arg3 ;
+(void)_configureCardInfo:(id)arg1 forATXAction:(id)arg2 withConfig:(id)arg3 ;
+(id)_subtitleForAction:(id)arg1 ;
+(void)_configureCardInfo:(id)arg1 forVoiceShortcutWithPhrase:(id)arg2 name:(id)arg3 description:(id)arg4 keyImage:(id)arg5 applicationBundleIdentifier:(id)arg6 config:(id)arg7 ;
+(void)initialize;
+(id)cardViewForVoiceShortcutWithPhrase:(id)arg1 name:(id)arg2 description:(id)arg3 keyImage:(id)arg4 applicationBundleIdentifier:(id)arg5 config:(id)arg6 ;
+(BOOL)updateCardView:(id)arg1 forINInteraction:(id)arg2 withConfig:(id)arg3 ;
+(id)cardViewForINInteraction:(id)arg1 withConfig:(id)arg2 ;
+(BOOL)updateCardView:(id)arg1 forNSUserActivity:(id)arg2 withConfig:(id)arg3 ;
+(id)cardViewForNSUserActivity:(id)arg1 withConfig:(id)arg2 ;
+(id)cardViewReuseIdentifier;
@end
