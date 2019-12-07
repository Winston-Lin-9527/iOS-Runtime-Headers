/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:04 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGTitleGenerator.h>

@protocol PGEventEnrichment;
@interface PGTripHighlightTitleGenerator : PGTitleGenerator {

	id<PGEventEnrichment> _collection;

}

@property (nonatomic,readonly) id<PGEventEnrichment> collection;              //@synthesize collection=_collection - In the implementation block
-(id<PGEventEnrichment>)collection;
-(id)initWithCollection:(id)arg1 ;
-(id)_locationTitle;
-(void)_generateTitleAndSubtitleWithResult:(/*^block*/id)arg1 ;
-(BOOL)_useSplitTimeTitlesIfNeeded;
@end
