/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:44 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HFHomeManagerObserver.h>
#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@class NSString;

@interface HFHomeSettingsVisibilityArbitrator : NSObject <HFHomeManagerObserver, LSApplicationWorkspaceObserverProtocol> {

	BOOL _homesConfigured;
	int _homeKitPreferencesChangeNotifyToken;
	unsigned long long _visibilityState;
	/*^block*/id _visibilityStateChangeHandler;
	unsigned long long _homeAppInstallState;

}

@property (assign,nonatomic) unsigned long long visibilityState;                   //@synthesize visibilityState=_visibilityState - In the implementation block
@property (assign,nonatomic) BOOL homesConfigured;                                 //@synthesize homesConfigured=_homesConfigured - In the implementation block
@property (assign,nonatomic) unsigned long long homeAppInstallState;               //@synthesize homeAppInstallState=_homeAppInstallState - In the implementation block
@property (assign,nonatomic) int homeKitPreferencesChangeNotifyToken;              //@synthesize homeKitPreferencesChangeNotifyToken=_homeKitPreferencesChangeNotifyToken - In the implementation block
@property (nonatomic,copy) id visibilityStateChangeHandler;                        //@synthesize visibilityStateChangeHandler=_visibilityStateChangeHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setVisibilityState:(unsigned long long)arg1 ;
-(unsigned long long)visibilityState;
-(void)_reloadVisibilityStateIncludingInstallState:(BOOL)arg1 ;
-(void)_queryHomeAppInstallStateWithCompletion:(/*^block*/id)arg1 ;
-(int)homeKitPreferencesChangeNotifyToken;
-(id)visibilityStateChangeHandler;
-(void)setHomesConfigured:(BOOL)arg1 ;
-(unsigned long long)homeAppInstallState;
-(BOOL)homesConfigured;
-(void)setHomeAppInstallState:(unsigned long long)arg1 ;
-(void)reloadVisibilityState;
-(void)setVisibilityStateChangeHandler:(id)arg1 ;
-(void)setHomeKitPreferencesChangeNotifyToken:(int)arg1 ;
-(void)homeManager:(id)arg1 didUpdateThisDeviceIsResidentCapable:(BOOL)arg2 ;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end
