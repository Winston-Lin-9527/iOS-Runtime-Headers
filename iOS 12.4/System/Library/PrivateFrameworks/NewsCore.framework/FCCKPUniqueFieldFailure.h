/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:58 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FCCKPIdentifier;

@interface FCCKPUniqueFieldFailure : PBCodable <NSCopying> {

	FCCKPIdentifier* _identifierForConstraintFailure;

}

@property (nonatomic,readonly) BOOL hasIdentifierForConstraintFailure; 
@property (nonatomic,retain) FCCKPIdentifier * identifierForConstraintFailure;              //@synthesize identifierForConstraintFailure=_identifierForConstraintFailure - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setIdentifierForConstraintFailure:(FCCKPIdentifier *)arg1 ;
-(BOOL)hasIdentifierForConstraintFailure;
-(FCCKPIdentifier *)identifierForConstraintFailure;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end
