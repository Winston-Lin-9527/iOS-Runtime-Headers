/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:43 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoFoundation/PFDispatchQueue.h>

@interface PFLimitedConcurrencyQueue : PFDispatchQueue {

	unsigned long long _concurrencyLimit;

}

@property (readonly) unsigned long long concurrencyLimit;              //@synthesize concurrencyLimit=_concurrencyLimit - In the implementation block
+(id)newQueueWithLabel:(id)arg1 concurrencyLimit:(unsigned long long)arg2 qos:(unsigned)arg3 ;
+(id)newQueueWithLabel:(id)arg1 qos:(unsigned)arg2 targetQueue:(id)arg3 extensions:(id)arg4 ;
+(id)_newQueueWithLabel:(id)arg1 qos:(unsigned)arg2 targetQueue:(id)arg3 ;
+(Class)concreteQueueClass;
+(id)newQueueWithLabel:(id)arg1 concurrencyLimit:(unsigned long long)arg2 ;
+(id)newQueueWithLabel:(id)arg1 concurrencyLimit:(unsigned long long)arg2 qos:(unsigned)arg3 targetQueue:(id)arg4 extensions:(id)arg5 ;
+(unsigned long long)defaultConcurrency;
-(unsigned long long)concurrencyLimit;
@end
