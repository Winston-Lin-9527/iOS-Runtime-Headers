/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:48 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCFeedGroupEmittingOperation.h>

@class NSString, FCFeedGroup;

@interface FCArticleListGroupEmittingOperation : FCFeedGroupEmittingOperation {

	/*^block*/id _headlineFilter;
	NSString* _articleList;
	FCFeedGroup* _group;

}

@property (nonatomic,readonly) NSString * articleList;              //@synthesize articleList=_articleList - In the implementation block
@property (nonatomic,readonly) FCFeedGroup * group;                 //@synthesize group=_group - In the implementation block
@property (nonatomic,copy) id headlineFilter;                       //@synthesize headlineFilter=_headlineFilter - In the implementation block
-(FCFeedGroup *)group;
-(void)performOperation;
-(NSString *)articleList;
-(id)initWithContext:(id)arg1 articleList:(id)arg2 group:(id)arg3 ;
-(id)headlineFilter;
-(void)setHeadlineFilter:(id)arg1 ;
@end
