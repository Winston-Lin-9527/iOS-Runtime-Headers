/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:41 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CoreTelephonyClientCarrierBundleDelegate.h>
#import <libobjc.A.dylib/CoreTelephonyClientDelegate.h>

@class CoreTelephonyClient, NSMutableDictionary, IMCTXPCServiceSubscriptionInfo, IDSPhoneCertificateVendor, NSString, NSArray;

@interface IMCTSubscriptionUtilities : NSObject <CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientDelegate> {

	CoreTelephonyClient* _coreTelephonyClient;
	NSMutableDictionary* _cachedCarrierSettings;
	IMCTXPCServiceSubscriptionInfo* _ctSubscriptionInfo;
	IDSPhoneCertificateVendor* _phoneCertificateVendor;
	NSString* _registeredSIMID;
	NSString* _registeredPhoneNumber;

}

@property (nonatomic,retain) CoreTelephonyClient * coreTelephonyClient;                        //@synthesize coreTelephonyClient=_coreTelephonyClient - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedCarrierSettings;                      //@synthesize cachedCarrierSettings=_cachedCarrierSettings - In the implementation block
@property (nonatomic,retain) IMCTXPCServiceSubscriptionInfo * ctSubscriptionInfo;              //@synthesize ctSubscriptionInfo=_ctSubscriptionInfo - In the implementation block
@property (nonatomic,retain) IDSPhoneCertificateVendor * phoneCertificateVendor;               //@synthesize phoneCertificateVendor=_phoneCertificateVendor - In the implementation block
@property (nonatomic,copy) NSString * registeredSIMID;                                         //@synthesize registeredSIMID=_registeredSIMID - In the implementation block
@property (nonatomic,copy) NSString * registeredPhoneNumber;                                   //@synthesize registeredPhoneNumber=_registeredPhoneNumber - In the implementation block
@property (nonatomic,copy,readonly) NSString * ctPhoneNumber; 
@property (nonatomic,readonly) NSArray * ctServiceSubscriptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(CoreTelephonyClient *)coreTelephonyClient;
-(void)setCoreTelephonyClient:(CoreTelephonyClient *)arg1 ;
-(id)_cachedCarrierSettingsUniqueIDKeyForSubscriptionContext:(id)arg1 ;
-(NSMutableDictionary *)cachedCarrierSettings;
-(id)_createSettingsDictionaryForUniqueID:(id)arg1 ;
-(id)stringForBundleType:(long long)arg1 ;
-(id)_getCarrierSettingsForUniqueID:(id)arg1 ;
-(void)_setCarrierSettings:(id)arg1 uniqueID:(id)arg2 ;
-(id)_cachedCarrierKeyForKeyHierarchy:(id)arg1 bundleType:(long long)arg2 ;
-(id)_getCachedCarrierSettingValueForBundleKey:(id)arg1 uniqueID:(id)arg2 ;
-(void)_setCachedCarrierSettingValue:(id)arg1 bundleKey:(id)arg2 uniqueID:(id)arg3 ;
-(id)copyBundleValueForSubscriptionContext:(id)arg1 keyHierarchy:(id)arg2 bundleType:(long long)arg3 defaultValue:(id)arg4 valueIfError:(id)arg5 ;
-(id)_getCachedSettingOrReadFromBundleForCarrierBundleKey:(id)arg1 bundleType:(long long)arg2 forContext:(id)arg3 defaultValue:(id)arg4 ;
-(id)ctSubscriptionInfoWithError:(id)arg1 ;
-(void)_resetCachedCarrierSettingsForUniqueID:(id)arg1 ;
-(void)_resetSubscriptionInfo;
-(NSString *)registeredPhoneNumber;
-(id)newSubscriptionContextWithSlot:(long long)arg1 ;
-(id)newSubscriptionContextWithPhoneNumber:(id)arg1 labelID:(id)arg2 isDefaultVoice:(id)arg3 isDefaultData:(id)arg4 slot:(long long)arg5 ;
-(id)copyOperatorBundleValueForSubscriptionContext:(id)arg1 keyHierarchy:(id)arg2 defaultValue:(id)arg3 valueIfError:(id)arg4 ;
-(NSString *)ctPhoneNumber;
-(unsigned long long)numberOfSubscriptions;
-(void)setCachedCarrierSettings:(NSMutableDictionary *)arg1 ;
-(IDSPhoneCertificateVendor *)phoneCertificateVendor;
-(void)setPhoneCertificateVendor:(IDSPhoneCertificateVendor *)arg1 ;
-(void)setRegisteredSIMID:(NSString *)arg1 ;
-(void)setRegisteredPhoneNumber:(NSString *)arg1 ;
-(BOOL)deviceSupportsMultipleSubscriptions;
-(IMCTXPCServiceSubscriptionInfo *)ctSubscriptionInfo;
-(NSArray *)ctServiceSubscriptions;
-(NSString *)registeredSIMID;
-(void)setCtSubscriptionInfo:(IMCTXPCServiceSubscriptionInfo *)arg1 ;
-(id)copyCarrierBundleValueForSubscriptionContext:(id)arg1 keyHierarchy:(id)arg2 defaultValue:(id)arg3 valueIfError:(id)arg4 ;
-(void)carrierBundleChange:(id)arg1 ;
-(void)subscriptionInfoDidChange;
-(id)init;
@end
