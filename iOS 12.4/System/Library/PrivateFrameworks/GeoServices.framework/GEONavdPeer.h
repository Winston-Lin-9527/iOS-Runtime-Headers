/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:12 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection, NSMutableDictionary, GEONavdClientInfo;

@interface GEONavdPeer : NSObject {

	NSXPCConnection* _connection;
	NSMutableDictionary* _entitlementCache;
	GEONavdClientInfo* _clientInfo;
	BOOL _expectingUpdates;

}

@property (nonatomic,readonly) NSXPCConnection * connection;                //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) GEONavdClientInfo * clientInfo;              //@synthesize clientInfo=_clientInfo - In the implementation block
@property (assign,nonatomic) BOOL expectingUpdates;                         //@synthesize expectingUpdates=_expectingUpdates - In the implementation block
-(id)initWithXPCConnection:(id)arg1 ;
-(BOOL)hasEntitlement:(id)arg1 ;
-(void)updateConnection:(id)arg1 ;
-(GEONavdClientInfo *)clientInfo;
-(BOOL)expectingUpdates;
-(void)setExpectingUpdates:(BOOL)arg1 ;
-(void)dealloc;
-(NSXPCConnection *)connection;
@end
