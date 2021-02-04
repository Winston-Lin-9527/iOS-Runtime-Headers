/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:08 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PLXPCProxyCreating.h>

@protocol OS_dispatch_queue, PLXPCProxyCreating;
@class NSObject, NSString;

@interface PLAssetsdServiceProxyFactory : NSObject <PLXPCProxyCreating> {

	SEL _proxyGetter;
	NSObject*<OS_dispatch_queue> _queue;
	id<PLXPCProxyCreating> _serviceProxy;
	id<PLXPCProxyCreating> _proxyCreating;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)serviceProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)initWithQueue:(id)arg1 proxyCreating:(id)arg2 proxyGetter:(SEL)arg3 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
@end
