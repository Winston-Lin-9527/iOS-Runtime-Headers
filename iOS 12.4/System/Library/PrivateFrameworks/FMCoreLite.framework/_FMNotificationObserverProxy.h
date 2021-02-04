/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:05 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMCoreLite/_FMObserverProxy.h>

@class NSOperationQueue, NSString;

@interface _FMNotificationObserverProxy : _FMObserverProxy {

	id _notificationObserver;
	NSOperationQueue* _observerQueue;
	/*^block*/id _observerBlock;
	NSString* _notificationName;

}

@property (nonatomic,readonly) NSOperationQueue * observerQueue;              //@synthesize observerQueue=_observerQueue - In the implementation block
@property (nonatomic,copy,readonly) id observerBlock;                         //@synthesize observerBlock=_observerBlock - In the implementation block
@property (nonatomic,copy,readonly) NSString * notificationName;              //@synthesize notificationName=_notificationName - In the implementation block
-(id)initWithWeakObserver:(id)arg1 notificationName:(id)arg2 observerQueue:(id)arg3 observerBlock:(/*^block*/id)arg4 ;
-(void)performObserverBlock;
-(id)observerBlock;
-(NSOperationQueue *)observerQueue;
-(NSString *)notificationName;
-(void)invalidate;
@end
