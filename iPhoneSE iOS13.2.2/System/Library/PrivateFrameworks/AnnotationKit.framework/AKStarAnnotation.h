/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:29 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AKPolygonAnnotation.h>

@interface AKStarAnnotation : AKPolygonAnnotation {

	double _innerRadiusFactor;

}

@property (assign) double innerRadiusFactor;              //@synthesize innerRadiusFactor=_innerRadiusFactor - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffectingHitTestBounds;
+(id)keyPathsForValuesAffectingDrawingBounds;
+(id)displayNameForUndoablePropertyChangeWithKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)displayName;
-(id)keysForValuesToObserveForUndo;
-(id)keysForValuesToObserveForRedrawing;
-(id)keysForValuesToObserveForAdornments;
-(double)innerRadiusFactor;
-(void)setInnerRadiusFactor:(double)arg1 ;
@end
