/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:14 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSArray, NSURL, AVAsset;

@interface MBAssetLoaderOperation : NSOperation {

	BOOL finished;
	BOOL executing;
	NSArray* _prefetchKeys;
	NSURL* _identifierURL;
	AVAsset* _asset;
	/*^block*/id _preCompletionBlock;

}

@property (getter=isFinished) BOOL finished; 
@property (getter=isExecuting) BOOL executing; 
@property (nonatomic,retain) NSURL * identifierURL;               //@synthesize identifierURL=_identifierURL - In the implementation block
@property (nonatomic,retain) AVAsset * asset;                     //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) NSArray * prefetchKeys;              //@synthesize prefetchKeys=_prefetchKeys - In the implementation block
@property (nonatomic,copy) id preCompletionBlock;                 //@synthesize preCompletionBlock=_preCompletionBlock - In the implementation block
-(void)setFinished:(BOOL)arg1 ;
-(BOOL)isConcurrent;
-(void)setExecuting:(BOOL)arg1 ;
-(NSURL *)identifierURL;
-(id)initWithIdentifierURL:(id)arg1 ;
-(void)setIdentifierURL:(NSURL *)arg1 ;
-(id)preCompletionBlock;
-(void)setPrefetchKeys:(NSArray *)arg1 ;
-(NSArray *)prefetchKeys;
-(void)setPreCompletionBlock:(id)arg1 ;
-(void)start;
-(BOOL)isFinished;
-(void)finish;
-(void)setAsset:(AVAsset *)arg1 ;
-(AVAsset *)asset;
-(BOOL)isExecuting;
@end
