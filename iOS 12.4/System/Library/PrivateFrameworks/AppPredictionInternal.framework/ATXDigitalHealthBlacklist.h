/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:57 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@class LSApplicationWorkspace, _PASLock, NSString;

@interface ATXDigitalHealthBlacklist : NSObject <LSApplicationWorkspaceObserverProtocol> {

	LSApplicationWorkspace* _applicationWorkspace;
	_PASLock* _lock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)_setup;
-(id)blacklistedBundles;
-(BOOL)isBundleBlacklisted:(id)arg1 ;
-(void)_updateBlacklistWithNewBlacklistedBundles:(id)arg1 whitelistedBundles:(id)arg2 ;
-(void)deviceManagementPolicyDidChange:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end
