/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:29 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface TRDeviceSetupLegacySetupActionAuthInfo : NSObject {

	NSDictionary* _headers;
	NSDictionary* _body;

}

@property (nonatomic,readonly) NSDictionary * headers;              //@synthesize headers=_headers - In the implementation block
@property (nonatomic,readonly) NSDictionary * body;                 //@synthesize body=_body - In the implementation block
-(NSDictionary *)body;
-(NSDictionary *)headers;
-(id)initWithHeaders:(id)arg1 body:(id)arg2 ;
@end
