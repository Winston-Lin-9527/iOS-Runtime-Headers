/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:28 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSArray;

@interface WBSParsecSearchResultCache : NSObject {

	NSMutableDictionary* _resultSetCache;
	NSMutableDictionary* _resultSetsByPrefix;
	unsigned long long _cachedQueriesLimit;

}

@property (nonatomic,readonly) NSArray * allCachedQueries; 
-(id)resultSetWithQuery:(id)arg1 ;
-(void)cacheResultSet:(id)arg1 ;
-(BOOL)_shouldCacheResultSetForQueryMatching:(id)arg1 ;
-(BOOL)_resultSet:(id)arg1 isMatchForQuery:(id)arg2 ;
-(id)initWithCachedQueriesLimit:(unsigned long long)arg1 ;
-(void)cacheResultSetsFromSearchResponse:(id)arg1 ;
-(id)bestResultSetForQuery:(id)arg1 ;
-(NSArray *)allCachedQueries;
@end
