/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:14 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsToday/NewsToday-Structs.h>
#import <libobjc.A.dylib/NTSectionFetchDescriptor.h>

@class NTPBArticleListTodaySectionSpecificConfig, NSString;

@interface NTArticleListSectionFetchDescriptor : NSObject <NTSectionFetchDescriptor> {

	NTPBArticleListTodaySectionSpecificConfig* _articleListRequest;

}

@property (nonatomic,copy) NTPBArticleListTodaySectionSpecificConfig * articleListRequest;              //@synthesize articleListRequest=_articleListRequest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)configureCatchUpOperationWithFetchRequest:(id)arg1 ;
-(id)assembleResultsWithCatchUpOperation:(id)arg1 ;
-(id)incrementalSortTransformationWithFeedPersonalizer:(id)arg1 ;
-(id)incrementalLimitTransformationWithFeedPersonalizer:(id)arg1 limit:(unsigned long long)arg2 priorFeedItems:(id)arg3 ;
-(id)initWithArticleListConfiguration:(id)arg1 ;
-(NTPBArticleListTodaySectionSpecificConfig *)articleListRequest;
-(void)setArticleListRequest:(NTPBArticleListTodaySectionSpecificConfig *)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
