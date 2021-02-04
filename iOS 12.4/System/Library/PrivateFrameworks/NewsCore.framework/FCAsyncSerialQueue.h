/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:02 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSOperationQueue;

@interface FCAsyncSerialQueue : NSObject {

	NSOperationQueue* _serialOperationQueue;

}

@property (nonatomic,retain) NSOperationQueue * serialOperationQueue;                    //@synthesize serialOperationQueue=_serialOperationQueue - In the implementation block
@property (assign,nonatomic) BOOL suspended; 
@property (nonatomic,readonly) NSOperationQueue * underlyingOperationQueue; 
-(NSOperationQueue *)serialOperationQueue;
-(void)enqueueBlock:(/*^block*/id)arg1 ;
-(id)initWithQualityOfService:(long long)arg1 ;
-(void)withQualityOfService:(long long)arg1 enqueueBlockForMainThread:(/*^block*/id)arg2 ;
-(void)setSerialOperationQueue:(NSOperationQueue *)arg1 ;
-(void)enqueueBlockForMainThread:(/*^block*/id)arg1 ;
-(void)enqueueOperation:(id)arg1 ;
-(void)cancelAllBlocks;
-(NSOperationQueue *)underlyingOperationQueue;
-(BOOL)suspended;
-(id)init;
-(void)setSuspended:(BOOL)arg1 ;
@end
