/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:15 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NPKProtoStandalonePaymentProvisioningFlowManualEntryStepContext : PBCodable <NSCopying> {

	NSMutableArray* _setupFields;
	BOOL _cameraFirstProvisioningEnabled;
	SCD_Struct_NP2 _has;

}

@property (assign,nonatomic) BOOL hasCameraFirstProvisioningEnabled; 
@property (assign,nonatomic) BOOL cameraFirstProvisioningEnabled;                 //@synthesize cameraFirstProvisioningEnabled=_cameraFirstProvisioningEnabled - In the implementation block
@property (nonatomic,retain) NSMutableArray * setupFields;                        //@synthesize setupFields=_setupFields - In the implementation block
+(Class)setupFieldsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)setupFields;
-(void)setCameraFirstProvisioningEnabled:(BOOL)arg1 ;
-(void)setSetupFields:(NSMutableArray *)arg1 ;
-(BOOL)cameraFirstProvisioningEnabled;
-(void)addSetupFields:(id)arg1 ;
-(unsigned long long)setupFieldsCount;
-(void)clearSetupFields;
-(id)setupFieldsAtIndex:(unsigned long long)arg1 ;
-(void)setHasCameraFirstProvisioningEnabled:(BOOL)arg1 ;
-(BOOL)hasCameraFirstProvisioningEnabled;
@end
