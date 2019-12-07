/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:45 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/RTMetricManagerMetricIdProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDCoreRoutineHintSourceSubmissionInstance : PBCodable <RTMetricManagerMetricIdProtocol, NSCopying> {

	int _hintSource;
	SCD_Struct_AW5 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasHintSource; 
@property (assign,nonatomic) int hintSource;                        //@synthesize hintSource=_hintSource - In the implementation block
-(id)_init;
-(long long)metricId;
-(BOOL)valid:(id*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHintSource:(int)arg1 ;
-(void)setHasHintSource:(BOOL)arg1 ;
-(BOOL)hasHintSource;
-(int)hintSource;
@end
