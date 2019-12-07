/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:10 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementModel.framework/RemoteManagementModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagementModel/RemoteManagementModel-Structs.h>
#import <RemoteManagementModel/RMModelActivationBase.h>
#import <libobjc.A.dylib/RMModelRegisteredTypeProtocol.h>

@class NSArray, RMModelPredicateBase, NSString;

@interface RMModelActivationSimpleDeclaration : RMModelActivationBase <RMModelRegisteredTypeProtocol> {

	NSArray* _payloadStandardConfigurations;
	RMModelPredicateBase* _payloadPredicate;

}

@property (nonatomic,copy) NSArray * payloadStandardConfigurations;              //@synthesize payloadStandardConfigurations=_payloadStandardConfigurations - In the implementation block
@property (nonatomic,copy) RMModelPredicateBase * payloadPredicate;              //@synthesize payloadPredicate=_payloadPredicate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)buildWithIdentifier:(id)arg1 standardConfigurations:(id)arg2 predicate:(id)arg3 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 standardConfigurations:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPayloadStandardConfigurations:(NSArray *)arg1 ;
-(NSArray *)payloadStandardConfigurations;
-(void)setPayloadPredicate:(RMModelPredicateBase *)arg1 ;
-(RMModelPredicateBase *)payloadPredicate;
-(BOOL)loadPayload:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(id)serializePayloadWithType:(short)arg1 ;
@end
