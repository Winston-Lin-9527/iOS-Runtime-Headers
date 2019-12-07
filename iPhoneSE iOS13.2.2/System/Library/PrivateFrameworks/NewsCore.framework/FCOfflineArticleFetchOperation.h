/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:52 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCMultiStepFetchOperation.h>

@protocol FCContentContext, FCFlintHelper;
@class NSString, FCHeadline;

@interface FCOfflineArticleFetchOperation : FCMultiStepFetchOperation {

	id<FCContentContext> _context;
	id<FCFlintHelper> _flintHelper;
	NSString* _articleID;
	FCHeadline* _headline;
	id _thumbnailFetchedObject;
	id _classificationFetchedObject;
	id _contentFetchedObject;

}

@property (nonatomic,retain) id<FCContentContext> context;                //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) id<FCFlintHelper> flintHelper;               //@synthesize flintHelper=_flintHelper - In the implementation block
@property (nonatomic,copy) NSString * articleID;                          //@synthesize articleID=_articleID - In the implementation block
@property (nonatomic,retain) FCHeadline * headline;                       //@synthesize headline=_headline - In the implementation block
@property (nonatomic,retain) id thumbnailFetchedObject;                   //@synthesize thumbnailFetchedObject=_thumbnailFetchedObject - In the implementation block
@property (nonatomic,retain) id classificationFetchedObject;              //@synthesize classificationFetchedObject=_classificationFetchedObject - In the implementation block
@property (nonatomic,retain) id contentFetchedObject;                     //@synthesize contentFetchedObject=_contentFetchedObject - In the implementation block
-(id<FCContentContext>)context;
-(void)setContext:(id<FCContentContext>)arg1 ;
-(void)setHeadline:(FCHeadline *)arg1 ;
-(FCHeadline *)headline;
-(NSString *)articleID;
-(void)setArticleID:(NSString *)arg1 ;
-(id<FCFlintHelper>)flintHelper;
-(void)setFlintHelper:(id<FCFlintHelper>)arg1 ;
-(id)completeFetchOperation;
-(id)initWithContext:(id)arg1 flintHelper:(id)arg2 articleID:(id)arg3 ;
-(id)fetchHeadlineWithCompletion:(/*^block*/id)arg1 ;
-(id)fetchThumbnailWithCompletion:(/*^block*/id)arg1 ;
-(id)fetchContentWithCompletion:(/*^block*/id)arg1 ;
-(void)setThumbnailFetchedObject:(id)arg1 ;
-(void)setContentFetchedObject:(id)arg1 ;
-(id)classificationFetchedObject;
-(id)contentFetchedObject;
-(id)thumbnailFetchedObject;
-(void)setClassificationFetchedObject:(id)arg1 ;
@end
