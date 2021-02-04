/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:23 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKAccountOverrideInfo, NSString;

@interface CKContainerOptions : NSObject {

	BOOL _captureResponseHTTPHeaders;
	BOOL _useZoneWidePCS;
	BOOL _wantsSiloedContext;
	BOOL _returnPCSMetadata;
	BOOL _useMMCSEncryptionV2;
	BOOL _bypassPCSEncryption;
	BOOL _enforceNamedOperationGroups;
	BOOL _forceEnableReadOnlyManatee;
	CKAccountOverrideInfo* _accountInfoOverride;
	NSString* _encryptionServiceName;

}

@property (assign,nonatomic) BOOL captureResponseHTTPHeaders;                        //@synthesize captureResponseHTTPHeaders=_captureResponseHTTPHeaders - In the implementation block
@property (assign,nonatomic) BOOL useZoneWidePCS;                                    //@synthesize useZoneWidePCS=_useZoneWidePCS - In the implementation block
@property (assign,nonatomic) BOOL wantsSiloedContext;                                //@synthesize wantsSiloedContext=_wantsSiloedContext - In the implementation block
@property (nonatomic,copy) CKAccountOverrideInfo * accountInfoOverride;              //@synthesize accountInfoOverride=_accountInfoOverride - In the implementation block
@property (assign,nonatomic) BOOL returnPCSMetadata;                                 //@synthesize returnPCSMetadata=_returnPCSMetadata - In the implementation block
@property (assign,nonatomic) BOOL useMMCSEncryptionV2;                               //@synthesize useMMCSEncryptionV2=_useMMCSEncryptionV2 - In the implementation block
@property (nonatomic,retain) NSString * encryptionServiceName;                       //@synthesize encryptionServiceName=_encryptionServiceName - In the implementation block
@property (assign,nonatomic) BOOL bypassPCSEncryption;                               //@synthesize bypassPCSEncryption=_bypassPCSEncryption - In the implementation block
@property (assign,nonatomic) BOOL enforceNamedOperationGroups;                       //@synthesize enforceNamedOperationGroups=_enforceNamedOperationGroups - In the implementation block
@property (assign,nonatomic) BOOL forceEnableReadOnlyManatee;                        //@synthesize forceEnableReadOnlyManatee=_forceEnableReadOnlyManatee - In the implementation block
-(void)setEncryptionServiceName:(NSString *)arg1 ;
-(BOOL)enforceNamedOperationGroups;
-(void)setEnforceNamedOperationGroups:(BOOL)arg1 ;
-(void)setCaptureResponseHTTPHeaders:(BOOL)arg1 ;
-(void)setUseZoneWidePCS:(BOOL)arg1 ;
-(BOOL)forceEnableReadOnlyManatee;
-(CKAccountOverrideInfo *)accountInfoOverride;
-(BOOL)bypassPCSEncryption;
-(BOOL)returnPCSMetadata;
-(BOOL)useZoneWidePCS;
-(BOOL)useMMCSEncryptionV2;
-(void)setUseMMCSEncryptionV2:(BOOL)arg1 ;
-(void)setBypassPCSEncryption:(BOOL)arg1 ;
-(void)setForceEnableReadOnlyManatee:(BOOL)arg1 ;
-(BOOL)wantsSiloedContext;
-(void)setWantsSiloedContext:(BOOL)arg1 ;
-(BOOL)captureResponseHTTPHeaders;
-(void)setReturnPCSMetadata:(BOOL)arg1 ;
-(NSString *)encryptionServiceName;
-(void)setAccountInfoOverride:(CKAccountOverrideInfo *)arg1 ;
@end
