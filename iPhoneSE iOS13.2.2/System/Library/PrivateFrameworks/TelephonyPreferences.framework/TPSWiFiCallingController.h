/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:24 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TUCallCapabilitiesDelegatePrivate.h>

@class TPSCloudCallingEmergencyAddressURLController, TPSCloudCallingThumperProvisioningURLController, TPSCarrierBundleController, TPSEncryptedIdentityClient, NSDictionary, CTXPCServiceSubscriptionContext, TUSenderIdentityCapabilities, NSString;

@interface TPSWiFiCallingController : NSObject <TUCallCapabilitiesDelegatePrivate> {

	TPSCloudCallingEmergencyAddressURLController* _emergencyAddressURLController;
	TPSCloudCallingThumperProvisioningURLController* _thumperProvisioningURLController;
	TPSCarrierBundleController* _carrierBundleController;
	TPSEncryptedIdentityClient* _encryptedIdentityClient;
	NSDictionary* _encryptedIdentityInfo;
	CTXPCServiceSubscriptionContext* _subscriptionContext;
	TUSenderIdentityCapabilities* _subscriptionCapabilities;

}

@property (nonatomic,retain) TPSCarrierBundleController * carrierBundleController;                                            //@synthesize carrierBundleController=_carrierBundleController - In the implementation block
@property (nonatomic,retain) TPSEncryptedIdentityClient * encryptedIdentityClient;                                            //@synthesize encryptedIdentityClient=_encryptedIdentityClient - In the implementation block
@property (nonatomic,copy) NSDictionary * encryptedIdentityInfo;                                                              //@synthesize encryptedIdentityInfo=_encryptedIdentityInfo - In the implementation block
@property (nonatomic,readonly) CTXPCServiceSubscriptionContext * subscriptionContext;                                         //@synthesize subscriptionContext=_subscriptionContext - In the implementation block
@property (nonatomic,retain) TUSenderIdentityCapabilities * subscriptionCapabilities;                                         //@synthesize subscriptionCapabilities=_subscriptionCapabilities - In the implementation block
@property (nonatomic,readonly) BOOL supportsEncryptedIdentity; 
@property (assign,getter=isThumperCallingEnabled,nonatomic) BOOL thumperCallingEnabled; 
@property (assign,getter=isWiFiCallingEnabled,nonatomic) BOOL wiFiCallingEnabled; 
@property (assign,getter=isWiFiCallingRoamingEnabled,nonatomic) BOOL wiFiCallingRoamingEnabled; 
@property (nonatomic,readonly) BOOL supportsThumperCalling; 
@property (nonatomic,readonly) BOOL supportsWiFiCalling; 
@property (nonatomic,readonly) BOOL supportsWiFiEmergencyCalling; 
@property (nonatomic,copy,readonly) NSString * localizedCarrierName; 
@property (nonatomic,retain) TPSCloudCallingEmergencyAddressURLController * emergencyAddressURLController;                    //@synthesize emergencyAddressURLController=_emergencyAddressURLController - In the implementation block
@property (nonatomic,retain) TPSCloudCallingThumperProvisioningURLController * thumperProvisioningURLController;              //@synthesize thumperProvisioningURLController=_thumperProvisioningURLController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)supportsWiFiCalling;
-(BOOL)isWiFiCallingEnabled;
-(BOOL)isThumperCallingEnabled;
-(BOOL)supportsThumperCalling;
-(void)didChangeWiFiCallingCapabilitiesForSenderIdentityWithUUID:(id)arg1 ;
-(void)didChangeThumperCallingCapabilitiesForSenderIdentityWithUUID:(id)arg1 ;
-(BOOL)isWiFiCallingRoamingEnabled;
-(void)setWiFiCallingEnabled:(BOOL)arg1 ;
-(void)setWiFiCallingRoamingEnabled:(BOOL)arg1 ;
-(void)setThumperCallingEnabled:(BOOL)arg1 ;
-(BOOL)supportsWiFiEmergencyCalling;
-(TUSenderIdentityCapabilities *)subscriptionCapabilities;
-(CTXPCServiceSubscriptionContext *)subscriptionContext;
-(id)initWithSubscriptionContext:(id)arg1 ;
-(TPSCarrierBundleController *)carrierBundleController;
-(NSString *)localizedCarrierName;
-(void)setCarrierBundleController:(TPSCarrierBundleController *)arg1 ;
-(NSDictionary *)encryptedIdentityInfo;
-(void)setEncryptedIdentityInfo:(NSDictionary *)arg1 ;
-(void)setSubscriptionCapabilities:(TUSenderIdentityCapabilities *)arg1 ;
-(id)subscriptionCapabilitiesForSubscriptionContextUUID:(id)arg1 ;
-(TPSEncryptedIdentityClient *)encryptedIdentityClient;
-(BOOL)supportsEncryptedIdentity;
-(TPSCloudCallingEmergencyAddressURLController *)emergencyAddressURLController;
-(void)setEmergencyAddressURLController:(TPSCloudCallingEmergencyAddressURLController *)arg1 ;
-(TPSCloudCallingThumperProvisioningURLController *)thumperProvisioningURLController;
-(void)setThumperProvisioningURLController:(TPSCloudCallingThumperProvisioningURLController *)arg1 ;
-(void)setEncryptedIdentityClient:(TPSEncryptedIdentityClient *)arg1 ;
@end
