/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:48 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreHandwriting/CoreHandwriting-Structs.h>
@class NSNumber, NSMutableArray;

@interface SubStrokeSegment : NSObject {

	BOOL _isFullStroke;
	NSNumber* _segmentID;
	unsigned long long _startStrokeIndex;
	unsigned long long _startPointIndex;
	unsigned long long _endStrokeIndex;
	unsigned long long _endPointIndex;
	NSMutableArray* _relatedSegmentIDs;
	CGRect _segmentBounds;

}

@property (nonatomic,retain) NSNumber * segmentID;                             //@synthesize segmentID=_segmentID - In the implementation block
@property (assign,nonatomic) unsigned long long startStrokeIndex;              //@synthesize startStrokeIndex=_startStrokeIndex - In the implementation block
@property (assign,nonatomic) unsigned long long startPointIndex;               //@synthesize startPointIndex=_startPointIndex - In the implementation block
@property (assign,nonatomic) unsigned long long endStrokeIndex;                //@synthesize endStrokeIndex=_endStrokeIndex - In the implementation block
@property (assign,nonatomic) unsigned long long endPointIndex;                 //@synthesize endPointIndex=_endPointIndex - In the implementation block
@property (nonatomic,retain) NSMutableArray * relatedSegmentIDs;               //@synthesize relatedSegmentIDs=_relatedSegmentIDs - In the implementation block
@property (assign,nonatomic) CGRect segmentBounds;                             //@synthesize segmentBounds=_segmentBounds - In the implementation block
@property (assign,nonatomic) BOOL isFullStroke;                                //@synthesize isFullStroke=_isFullStroke - In the implementation block
+(unsigned long long)indexForSegmentID:(id)arg1 fromSegments:(id)arg2 ;
+(id)generateSubStrokeSegmentsFromDrawing:(id)arg1 withSegmentationPoints:(id)arg2 extractDelayedStrokeIDs:(set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> >*)arg3 extractedDelayedSegments:(id*)arg4 ;
+(CGRect)boundingBoxFromSegmentID:(unsigned long long)arg1 toSegmentID:(unsigned long long)arg2 withSegments:(id)arg3 withSourceDrawing:(id)arg4 ;
+(void)computeRelatedSegments:(id)arg1 withDelayedSegments:(id)arg2 ;
-(unsigned long long)startPointIndex;
-(unsigned long long)endPointIndex;
-(void)setStartPointIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)relatedSegmentIDs;
-(NSNumber *)segmentID;
-(unsigned long long)startStrokeIndex;
-(unsigned long long)endStrokeIndex;
-(void)setSegmentID:(NSNumber *)arg1 ;
-(void)setStartStrokeIndex:(unsigned long long)arg1 ;
-(void)setEndStrokeIndex:(unsigned long long)arg1 ;
-(void)setEndPointIndex:(unsigned long long)arg1 ;
-(void)setRelatedSegmentIDs:(NSMutableArray *)arg1 ;
-(void)setSegmentBounds:(CGRect)arg1 ;
-(void)setIsFullStroke:(BOOL)arg1 ;
-(id)initWithSegmentID:(id)arg1 startStrokeIndex:(unsigned long long)arg2 startPointIndex:(unsigned long long)arg3 endStrokeIndex:(unsigned long long)arg4 endPointIndex:(unsigned long long)arg5 segmentBounds:(CGRect)arg6 isFullStroke:(BOOL)arg7 ;
-(CGRect)segmentBounds;
-(BOOL)isFullStroke;
-(void)dealloc;
@end
