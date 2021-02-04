/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:59 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@protocol FCCoreConfiguration;
@class FCCloudContext, FCDateRange, NSArray, FCFeedPersonalizedItems, NSDictionary, NSError;

@interface FCMyArticlesOperation : FCOperation {

	BOOL _streamFeedItems;
	id<FCCoreConfiguration> _configuration;
	FCCloudContext* _context;
	FCDateRange* _dateRange;
	/*^block*/id _feedItemsChangedHandler;
	NSArray* _feedItems;
	FCFeedPersonalizedItems* _nonEditorialPersonalizedArticles;
	NSDictionary* _feedContextByFeedID;
	NSError* _error;
	long long _binOverride;
	/*^block*/id _feedItemCompletionBlock;
	unsigned long long _maxNumberOfFeedsToQuery;
	unsigned long long _perFeedLimit;

}

@property (copy) NSArray * feedItems;                                                       //@synthesize feedItems=_feedItems - In the implementation block
@property (copy) NSDictionary * feedContextByFeedID;                                        //@synthesize feedContextByFeedID=_feedContextByFeedID - In the implementation block
@property (copy) NSError * error;                                                           //@synthesize error=_error - In the implementation block
@property (retain) FCFeedPersonalizedItems * nonEditorialPersonalizedArticles;              //@synthesize nonEditorialPersonalizedArticles=_nonEditorialPersonalizedArticles - In the implementation block
@property (nonatomic,copy) id<FCCoreConfiguration> configuration;                           //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) FCCloudContext * context;                                      //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) FCDateRange * dateRange;                                         //@synthesize dateRange=_dateRange - In the implementation block
@property (assign,nonatomic) BOOL streamFeedItems;                                          //@synthesize streamFeedItems=_streamFeedItems - In the implementation block
@property (nonatomic,copy) id feedItemsChangedHandler;                                      //@synthesize feedItemsChangedHandler=_feedItemsChangedHandler - In the implementation block
@property (copy,readonly) NSArray * nonEditorialFeedItems; 
@property (assign,nonatomic) long long binOverride;                                         //@synthesize binOverride=_binOverride - In the implementation block
@property (nonatomic,copy) id feedItemCompletionBlock;                                      //@synthesize feedItemCompletionBlock=_feedItemCompletionBlock - In the implementation block
@property (assign,nonatomic) unsigned long long maxNumberOfFeedsToQuery;                    //@synthesize maxNumberOfFeedsToQuery=_maxNumberOfFeedsToQuery - In the implementation block
@property (assign,nonatomic) unsigned long long perFeedLimit;                               //@synthesize perFeedLimit=_perFeedLimit - In the implementation block
-(BOOL)validateOperation;
-(void)performOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)setFeedContextByFeedID:(NSDictionary *)arg1 ;
-(NSDictionary *)feedContextByFeedID;
-(FCDateRange *)dateRange;
-(void)setDateRange:(FCDateRange *)arg1 ;
-(void)setFeedItems:(NSArray *)arg1 ;
-(FCFeedPersonalizedItems *)nonEditorialPersonalizedArticles;
-(NSArray *)nonEditorialFeedItems;
-(NSArray *)feedItems;
-(unsigned long long)maxNumberOfFeedsToQuery;
-(long long)binOverride;
-(unsigned long long)perFeedLimit;
-(BOOL)streamFeedItems;
-(void)_appendFeedItems:(id)arg1 ;
-(void)setNonEditorialPersonalizedArticles:(FCFeedPersonalizedItems *)arg1 ;
-(void)_fetchTagsForQueryingWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)feedItemCompletionBlock;
-(id)feedItemsChangedHandler;
-(void)setStreamFeedItems:(BOOL)arg1 ;
-(void)setFeedItemsChangedHandler:(id)arg1 ;
-(void)setBinOverride:(long long)arg1 ;
-(void)setFeedItemCompletionBlock:(id)arg1 ;
-(void)setMaxNumberOfFeedsToQuery:(unsigned long long)arg1 ;
-(void)setPerFeedLimit:(unsigned long long)arg1 ;
-(id)init;
-(void)setContext:(FCCloudContext *)arg1 ;
-(FCCloudContext *)context;
-(id<FCCoreConfiguration>)configuration;
-(void)setConfiguration:(id<FCCoreConfiguration>)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end
