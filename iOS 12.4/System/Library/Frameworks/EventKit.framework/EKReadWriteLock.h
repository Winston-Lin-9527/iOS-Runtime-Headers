/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:07 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface EKReadWriteLock : NSObject {

	NSObject*<OS_dispatch_queue> _queue;

}
-(void)performWithReadLock:(/*^block*/id)arg1 ;
-(void)performWithWriteLock:(/*^block*/id)arg1 ;
-(id)initWithName:(const char*)arg1 ;
@end
