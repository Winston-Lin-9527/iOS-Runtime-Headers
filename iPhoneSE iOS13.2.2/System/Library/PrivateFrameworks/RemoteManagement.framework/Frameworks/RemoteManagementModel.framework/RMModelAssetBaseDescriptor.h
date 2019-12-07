/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:10 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementModel.framework/RemoteManagementModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagementModel/RemoteManagementModel-Structs.h>
#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString;

@interface RMModelAssetBaseDescriptor : RMModelPayloadBase {

	NSString* _payloadTitle;
	NSString* _payloadDescription;

}

@property (nonatomic,copy) NSString * payloadTitle;                    //@synthesize payloadTitle=_payloadTitle - In the implementation block
@property (nonatomic,copy) NSString * payloadDescription;              //@synthesize payloadDescription=_payloadDescription - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithTitle:(id)arg1 ;
+(id)buildWithTitle:(id)arg1 description:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)payloadDescription;
-(void)setPayloadTitle:(NSString *)arg1 ;
-(void)setPayloadDescription:(NSString *)arg1 ;
-(NSString *)payloadTitle;
-(BOOL)loadPayload:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(id)serializePayloadWithType:(short)arg1 ;
@end
