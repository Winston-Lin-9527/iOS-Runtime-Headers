/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:08 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/SFKeyDerivingOperation.h>

@class NSString;

@interface SFX963KeyDerivationOperation : NSObject <SFKeyDerivingOperation> {

	id _x963KeyDerivationOperationInternal;

}

@property (nonatomic,copy) id<SFKeyDerivingOperation> sharedSecretOperation; 
@property (nonatomic,copy) id<SFDigestOperation> digestOperation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(long long)keySource;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<SFDigestOperation>)digestOperation;
-(void)setDigestOperation:(id<SFDigestOperation>)arg1 ;
-(id<SFKeyDerivingOperation>)sharedSecretOperation;
-(id)deriveKeyWithSpecifier:(id)arg1 fromKeySource:(id)arg2 error:(id*)arg3 ;
-(id)initWithSharedSecretOperation:(id)arg1 ;
-(id)initWithSharedSecretOperation:(id)arg1 digestOperation:(id)arg2 ;
-(void)setSharedSecretOperation:(id<SFKeyDerivingOperation>)arg1 ;
@end
