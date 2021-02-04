/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:14 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection, NSLock, NSXPCListenerEndpoint;

@interface FLDaemon : NSObject {

	NSXPCConnection* _conn;
	NSLock* _connLock;
	NSXPCListenerEndpoint* _daemonXPCEndpoint;

}

@property (nonatomic,retain) NSXPCListenerEndpoint * daemonXPCEndpoint;              //@synthesize daemonXPCEndpoint=_daemonXPCEndpoint - In the implementation block
+(id)daemonWithErrorHandler:(/*^block*/id)arg1 ;
+(id)sharedInstance;
-(id)daemonWithErrorHandler:(/*^block*/id)arg1 ;
-(id)remoteObjectInterface;
-(id)synchronousDaemonWithErrorHandler:(/*^block*/id)arg1 ;
-(void)setDaemonXPCEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(NSXPCListenerEndpoint *)daemonXPCEndpoint;
-(void)invalidateConnection;
-(id)init;
-(id)connection;
@end
