/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:19 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CNObserver : NSObject
+(void)sendArray:(id)arg1 error:(id)arg2 toObserver:(id)arg3 untilCanceled:(id)arg4 ;
+(void)sendResult:(id)arg1 error:(id)arg2 toObserver:(id)arg3 ;
+(id)observerWithResultBlock:(/*^block*/id)arg1 ;
+(id)observerWithResultBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
+(id)observerWithCompletionHandler:(/*^block*/id)arg1 ;
+(id)observerWithWeakTarget:(id)arg1 resultSelector:(SEL)arg2 ;
+(void)sendArray:(id)arg1 error:(id)arg2 toObserver:(id)arg3 ;
+(void)sendObserver:(id)arg1 resultsOfBlock:(/*^block*/id)arg2 ;
@end
