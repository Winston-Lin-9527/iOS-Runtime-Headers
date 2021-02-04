/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:36 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <StoreServices/StoreServices-Structs.h>
@class NSData, NSDictionary;

@interface SSHTTPServerResponse : NSObject {

	short _statusCode;
	NSData* _body;
	NSDictionary* _headers;

}

@property (nonatomic,retain) NSData * body;                       //@synthesize body=_body - In the implementation block
@property (nonatomic,retain) NSDictionary * headers;              //@synthesize headers=_headers - In the implementation block
@property (assign,nonatomic) short statusCode;                    //@synthesize statusCode=_statusCode - In the implementation block
-(void)setStatusCode:(short)arg1 ;
-(id)initWithStatusCode:(short)arg1 ;
-(void)setBodyWithBag:(id)arg1 ;
-(id)bagFromBody;
-(CFHTTPMessageRef)copyHTTPMessage;
-(void)setHeaders:(NSDictionary *)arg1 ;
-(NSDictionary *)headers;
-(void)setBody:(NSData *)arg1 ;
-(NSData *)body;
-(short)statusCode;
@end
