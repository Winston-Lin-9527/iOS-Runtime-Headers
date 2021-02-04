/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:54 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ICPBDGSRequest, ICPBDGSResponse;

@interface ICPBDGSMessage : PBCodable <NSCopying> {

	ICPBDGSRequest* _request;
	ICPBDGSResponse* _response;

}

@property (nonatomic,readonly) BOOL hasRequest; 
@property (nonatomic,retain) ICPBDGSRequest * request;                //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) BOOL hasResponse; 
@property (nonatomic,retain) ICPBDGSResponse * response;              //@synthesize response=_response - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setRequest:(ICPBDGSRequest *)arg1 ;
-(void)setResponse:(ICPBDGSResponse *)arg1 ;
-(BOOL)hasRequest;
-(BOOL)hasResponse;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(ICPBDGSRequest *)request;
-(ICPBDGSResponse *)response;
@end
