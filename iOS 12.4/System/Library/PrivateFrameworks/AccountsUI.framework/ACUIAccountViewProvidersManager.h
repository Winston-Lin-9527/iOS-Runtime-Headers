/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:51 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSMutableDictionary;

@interface ACUIAccountViewProvidersManager : NSObject {

	NSDictionary* _accountTypeToPluginNameMap;
	NSMutableDictionary* _pluginCache;

}
+(id)sharedInstance;
-(Class)controllerClassForCreatingAccountWithType:(id)arg1 ;
-(Class)viewControllerClassForCreatingAccountWithType:(id)arg1 ;
-(id)configurationInfoForCreatingAccountWithType:(id)arg1 ;
-(id)_accountViewProviderPluginForAccountTypeID:(id)arg1 ;
-(Class)viewControllerClassForViewingAccount:(id)arg1 ;
-(id)configurationInfoForViewingAccount:(id)arg1 ;
-(id)_loadAccountViewProviderPluginWithName:(id)arg1 ;
-(id)init;
@end
