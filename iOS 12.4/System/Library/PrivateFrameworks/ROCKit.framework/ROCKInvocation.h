/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:45 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ROCKit.framework/ROCKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSInvocation.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface ROCKInvocation : NSInvocation {

	NSObject*<OS_dispatch_queue> _invocationQueue;
	/*^block*/id _returnHandler;
	/*^block*/id _autoreleasingHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> invocationQueue;              //@synthesize invocationQueue=_invocationQueue - In the implementation block
@property (nonatomic,copy) id returnHandler;                                            //@synthesize returnHandler=_returnHandler - In the implementation block
@property (nonatomic,copy) id autoreleasingHandler;                                     //@synthesize autoreleasingHandler=_autoreleasingHandler - In the implementation block
+(id)invocationWithMethodSignature:(id)arg1 invocationQueue:(id)arg2 returnHandler:(/*^block*/id)arg3 autoreleasingHandler:(/*^block*/id)arg4 ;
-(void)setInvocationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)invocationQueue;
-(id)returnHandler;
-(id)autoreleasingHandler;
-(void)setReturnHandler:(id)arg1 ;
-(void)setAutoreleasingHandler:(id)arg1 ;
-(void)invoke;
@end
