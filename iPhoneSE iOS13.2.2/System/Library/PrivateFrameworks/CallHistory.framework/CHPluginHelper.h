/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:11 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection, NSXPCInterface;

@interface CHPluginHelper : NSObject {

	NSXPCConnection* _connection;
	NSXPCInterface* _interface;

}
-(id)init;
-(unsigned long long)unreadCallCount;
-(id)recentCallsWithLimitingTypes:(unsigned)arg1 ;
@end
