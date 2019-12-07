/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:55 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMActivationAdvancedDeclaration_StatusInstalledConfigurationsItem : CEMPayloadBase {

	NSString* _statusIdentifier;
	NSString* _statusServerHash;

}

@property (nonatomic,copy) NSString * statusIdentifier;              //@synthesize statusIdentifier=_statusIdentifier - In the implementation block
@property (nonatomic,copy) NSString * statusServerHash;              //@synthesize statusServerHash=_statusServerHash - In the implementation block
+(id)allowedStatusKeys;
+(id)buildWithIdentifier:(id)arg1 withServerHash:(id)arg2 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 withServerHash:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload;
-(void)setStatusIdentifier:(NSString *)arg1 ;
-(void)setStatusServerHash:(NSString *)arg1 ;
-(NSString *)statusIdentifier;
-(NSString *)statusServerHash;
@end
