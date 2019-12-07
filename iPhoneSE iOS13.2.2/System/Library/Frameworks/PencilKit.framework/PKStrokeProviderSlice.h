/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:30 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilKit/PencilKit-Structs.h>
#import <libobjc.A.dylib/CHStroke.h>

@class PKStrokeProviderSliceIdentifier, PKStroke, NSString;

@interface PKStrokeProviderSlice : NSObject <CHStroke> {

	PKStrokeProviderSliceIdentifier* _identifier;
	PKStroke* _stroke;
	CGRect _bounds;

}

@property (nonatomic,readonly) PKStrokeProviderSliceIdentifier * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) PKStroke * stroke;                                           //@synthesize stroke=_stroke - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) id<CHStrokeIdentifier> strokeIdentifier; 
@property (nonatomic,readonly) CGRect bounds;                                               //@synthesize bounds=_bounds - In the implementation block
@property (nonatomic,readonly) double startTimestamp; 
@property (nonatomic,readonly) double endTimestamp; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(PKStrokeProviderSliceIdentifier *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(CGRect)bounds;
-(PKStroke *)stroke;
-(double)startTimestamp;
-(double)endTimestamp;
-(long long)compareTo:(id)arg1 ;
-(CGPoint)_splineControlPoint:(long long)arg1 ;
-(double)_lengthOfSplineSegment:(unsigned long long)arg1 ;
-(void)enumeratePointsWithDistanceStep:(double)arg1 usingBlock:(/*^block*/id)arg2 ;
-(CGPoint)_interpolatedPointForSplineSegment:(long long)arg1 t:(double)arg2 ;
-(double)_strokeLength;
-(double)_interpolatedTimeForSplineSegment:(long long)arg1 t:(double)arg2 ;
-(void)enumeratePointsWithTimestep:(double)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id<CHStrokeIdentifier>)strokeIdentifier;
-(id)initWithStroke:(id)arg1 tStart:(double)arg2 tEnd:(double)arg3 ;
@end
