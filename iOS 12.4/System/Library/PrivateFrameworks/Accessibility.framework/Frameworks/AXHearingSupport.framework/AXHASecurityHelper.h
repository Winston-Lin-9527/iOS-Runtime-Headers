/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:57 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXHearingSupport/AXHearingSupport-Structs.h>
#import <AXHearingSupport/AXIDCManagerSecurityDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSArray, NSString;

@interface AXHASecurityHelper : NSObject <AXIDCManagerSecurityDelegate> {

	SecIdentityRef _appleIDIdentity;
	NSObject*<OS_dispatch_queue> _securityQueue;
	NSArray* _certificateDescription;

}

@property (nonatomic,retain) NSArray * certificateDescription;              //@synthesize certificateDescription=_certificateDescription - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedHelper;
-(id)securityTrustChainForStream:(id)arg1 ;
-(BOOL)shouldTrustStream:(id)arg1 ;
-(void)appleIDDidChange:(id)arg1 ;
-(BOOL)trustChainAvailable;
-(void)setCertificateDescription:(NSArray *)arg1 ;
-(void)prepareHelper;
-(NSArray *)certificateDescription;
-(id)trustChain;
-(id)certificateChainForIdentity:(SecIdentityRef)arg1 ;
-(id)certificateChainFromTrust:(SecTrustRef)arg1 ;
-(id)init;
-(void)dealloc;
@end
