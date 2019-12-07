/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:26 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray, NSNumber, NSArray;

@interface MKLaneDirectionCollisionCalculator : NSObject {

	NSMutableDictionary* _collisionsForDirection;
	NSMutableArray* _directions;
	NSNumber* _directionWithMostCollisions;
	BOOL _hasCollisions;

}

@property (nonatomic,readonly) BOOL hasCollisions;                              //@synthesize hasCollisions=_hasCollisions - In the implementation block
@property (nonatomic,readonly) BOOL hasDirectionWithMaxCollisions; 
@property (nonatomic,readonly) NSArray * directions; 
-(NSArray *)directions;
-(id)initWithDirections:(id)arg1 ;
-(BOOL)hasCollisions;
-(BOOL)hasDirectionWithMaxCollisions;
-(void)removeNextDirectionWithCollisions;
-(void)removeDirectionWithCollisionsLeastSimilarToDirection:(int)arg1 ;
-(void)_recalculateCollisions;
@end
