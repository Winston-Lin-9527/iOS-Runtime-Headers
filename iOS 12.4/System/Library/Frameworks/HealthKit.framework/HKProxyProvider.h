/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:22 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, _HKXPCExportable;
@class _HKXPCConnection, NSObject, NSMutableArray, HKHealthStore, NSString;

@interface HKProxyProvider : NSObject {

	_HKXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSMutableArray* _pendingFetchContinuations;
	HKHealthStore* _healthStore;
	NSString* _proxyIdentifier;
	id<_HKXPCExportable> _exportedObject;

}

@property (nonatomic,readonly) HKHealthStore * healthStore;                             //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,readonly) NSString * proxyIdentifier;                              //@synthesize proxyIdentifier=_proxyIdentifier - In the implementation block
@property (nonatomic,__weak,readonly) id<_HKXPCExportable> exportedObject;              //@synthesize exportedObject=_exportedObject - In the implementation block
-(NSString *)proxyIdentifier;
-(void)fetchRetryingProxyWithHandler:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)_fetchRetryingProxyWithErrorCount:(long long)arg1 handler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)fetchProxyWithHandler:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)_connectionQueue_fetchEndpointAndConnectionWithRetryCount:(long long)arg1 ;
-(void)_resetConnection;
-(void)fetchProxyServiceEndpointForIdentifier:(id)arg1 endpointHandler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(id)initWithHealthStore:(id)arg1 proxyIdentifier:(id)arg2 exportedObject:(id)arg3 ;
-(id<_HKXPCExportable>)exportedObject;
-(HKHealthStore *)healthStore;
-(void)dealloc;
-(void)invalidate;
@end
