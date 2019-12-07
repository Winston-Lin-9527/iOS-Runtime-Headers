/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:50 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSMutableSet, NSMutableArray;

@interface AMSDaemonConnection : NSObject {

	NSXPCConnection* _sharedConnection;
	NSObject*<OS_dispatch_queue> _sharedConnectionAccessQueue;
	NSMutableSet* _activePromises;
	NSMutableArray* _interruptionHandlers;

}

@property (nonatomic,retain) NSXPCConnection * sharedConnection;                                      //@synthesize sharedConnection=_sharedConnection - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> sharedConnectionAccessQueue;              //@synthesize sharedConnectionAccessQueue=_sharedConnectionAccessQueue - In the implementation block
@property (nonatomic,readonly) NSMutableSet * activePromises;                                         //@synthesize activePromises=_activePromises - In the implementation block
@property (nonatomic,readonly) NSMutableArray * interruptionHandlers;                                 //@synthesize interruptionHandlers=_interruptionHandlers - In the implementation block
-(id)init;
-(void)dealloc;
-(NSXPCConnection *)sharedConnection;
-(void)_handleInvalidation;
-(NSObject*<OS_dispatch_queue>)sharedConnectionAccessQueue;
-(void)setSharedConnection:(NSXPCConnection *)arg1 ;
-(void)addInterruptionHandler:(/*^block*/id)arg1 ;
-(id)deviceMessengerProxyWithDelegate:(id)arg1 ;
-(id)securityServiceProxyWithDelegate:(id)arg1 ;
-(id)pushNotificationService;
-(NSMutableArray *)interruptionHandlers;
-(id)_connectionProxyForAsync:(BOOL)arg1 accessBlock:(/*^block*/id)arg2 ;
-(NSMutableSet *)activePromises;
-(void)_handleInterruption;
@end
