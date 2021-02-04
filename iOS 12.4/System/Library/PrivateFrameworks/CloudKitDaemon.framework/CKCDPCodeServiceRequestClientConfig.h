/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:46 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKCDPCodeServiceRequestServiceClientConfig;

@interface CKCDPCodeServiceRequestClientConfig : PBCodable <NSCopying> {

	CKCDPCodeServiceRequestServiceClientConfig* _config;
	int _serviceType;
	SCD_Struct_CK1 _has;

}

@property (assign,nonatomic) BOOL hasServiceType; 
@property (assign,nonatomic) int serviceType;                                                  //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,readonly) BOOL hasConfig; 
@property (nonatomic,retain) CKCDPCodeServiceRequestServiceClientConfig * config;              //@synthesize config=_config - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)serviceType;
-(void)setServiceType:(int)arg1 ;
-(void)setHasServiceType:(BOOL)arg1 ;
-(BOOL)hasServiceType;
-(id)serviceTypeAsString:(int)arg1 ;
-(int)StringAsServiceType:(id)arg1 ;
-(BOOL)hasConfig;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(CKCDPCodeServiceRequestServiceClientConfig *)config;
-(void)setConfig:(CKCDPCodeServiceRequestServiceClientConfig *)arg1 ;
@end
