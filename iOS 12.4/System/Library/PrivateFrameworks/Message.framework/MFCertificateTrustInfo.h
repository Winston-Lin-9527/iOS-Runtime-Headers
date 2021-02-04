/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:17 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Message/Message-Structs.h>
@class ECSecureMIMETrustEvaluation, NSString;

@interface MFCertificateTrustInfo : NSObject {

	SecTrustRef _unevaluatedTrust;
	ECSecureMIMETrustEvaluation* _trustEvaluation;
	BOOL _forceNetworkAccessAllowed;
	NSString* _uncommentedSender;
	unsigned long long _certificateType;
	NSString* _sender;

}

@property (nonatomic,readonly) unsigned long long certificateType;                         //@synthesize certificateType=_certificateType - In the implementation block
@property (nonatomic,copy,readonly) NSString * sender;                                     //@synthesize sender=_sender - In the implementation block
@property (nonatomic,copy,readonly) NSString * commonName; 
@property (nonatomic,copy,readonly) NSString * emailAddress; 
@property (nonatomic,readonly) ECSecureMIMETrustEvaluation * trustEvaluation; 
@property (nonatomic,readonly) SecTrustRef trust; 
@property (nonatomic,readonly) SecCertificateRef certificate; 
@property (nonatomic,readonly) int action; 
@property (nonatomic,readonly) unsigned long long keychainStatus; 
@property (nonatomic,readonly) BOOL canSaveCertificateToKeychain; 
@property (nonatomic,readonly) BOOL hasTrustException; 
-(id)initWithCertificateType:(unsigned long long)arg1 trust:(SecTrustRef)arg2 sender:(id)arg3 ;
-(SecTrustRef)trust;
-(ECSecureMIMETrustEvaluation *)trustEvaluation;
-(NSString *)commonName;
-(BOOL)hasTrustException;
-(void)addTrustException;
-(void)removeTrustException;
-(BOOL)canSaveCertificateToKeychain;
-(unsigned long long)keychainStatus;
-(void)saveCertificateToKeychain;
-(void)removeCertificateFromKeychain;
-(unsigned long long)certificateType;
-(SecCertificateRef)certificate;
-(NSString *)emailAddress;
-(void)reevaluateTrustWithNetworkAccessAllowed;
-(void)dealloc;
-(int)action;
-(NSString *)sender;
@end
