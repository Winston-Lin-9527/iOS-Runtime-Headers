/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:42 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CUMessageSessionXPCServerInterface.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet, CUMessageSessionServer, NSXPCConnection;

@interface CUMessageSessionXPCConnection : NSObject <CUMessageSessionXPCServerInterface> {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	BOOL _invalidated;
	NSMutableSet* _registeredRequestIDs;
	CUMessageSessionServer* _server;
	NSXPCConnection* _xpcCnx;

}
-(void)remoteSendRequestID:(id)arg1 options:(id)arg2 request:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
-(void)remoteRegisterRequestID:(id)arg1 options:(id)arg2 ;
-(void)connectionInvalidated;
@end
