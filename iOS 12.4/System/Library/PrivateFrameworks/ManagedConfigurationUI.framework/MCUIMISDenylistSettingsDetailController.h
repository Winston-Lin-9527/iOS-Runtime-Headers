/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:47 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@interface MCUIMISDenylistSettingsDetailController : PSListController {

	BOOL _reenabled;

}

@property (assign) BOOL reenabled;              //@synthesize reenabled=_reenabled - In the implementation block
-(id)specifiers;
-(void)_reloadAsync;
-(void)setOverride:(id)arg1 ;
-(void)_askForReenableConfirmation;
-(id)_reenableButtonSpecifier;
-(BOOL)reenabled;
-(void)setReenabled:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)overridden;
@end
