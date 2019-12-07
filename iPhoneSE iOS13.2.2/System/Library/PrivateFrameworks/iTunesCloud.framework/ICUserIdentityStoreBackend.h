/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:21 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ICUserIdentityStoreBackend <NSObject,NSCopying,NSSecureCoding>
@property (assign,nonatomic,__weak) id<ICUserIdentityStoreBackendDelegate> delegate; 
@required
-(void)synchronize;
-(id<ICUserIdentityStoreBackendDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)activeAccountDSIDWithCompletion:(/*^block*/id)arg1;
-(void)updateActiveAccountDSID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)activeLockerAccountDSIDWithCompletion:(/*^block*/id)arg1;
-(void)updateActiveLockerAccountDSID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)identityPropertiesForDSID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)identityPropertiesForPrimaryICloudAccountWithCompletion:(/*^block*/id)arg1;
-(void)removeIdentityForDSID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)replaceIdentityProperties:(id)arg1 forDSID:(id)arg2 completion:(/*^block*/id)arg3;
-(void)setIdentityProperties:(id)arg1 forDSID:(id)arg2 completion:(/*^block*/id)arg3;
-(void)localStoreAccountPropertiesWithCompletion:(/*^block*/id)arg1;
-(id)localStoreAccountPropertiesWithError:(id*)arg1;
-(void)setLocalStoreAccountProperties:(id)arg1 completion:(/*^block*/id)arg2;
-(void)verificationContextForDSID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)verificationContextForAccountEstablishmentWithCompletion:(/*^block*/id)arg1;

@end
