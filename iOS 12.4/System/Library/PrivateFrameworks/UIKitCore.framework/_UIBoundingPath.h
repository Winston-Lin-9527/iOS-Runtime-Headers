/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:18 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol UICoordinateSpace;
@interface _UIBoundingPath : NSObject <NSSecureCoding> {

	id<UICoordinateSpace> _coordinateSpace;

}

@property (assign,nonatomic,__weak) id<UICoordinateSpace> coordinateSpace;              //@synthesize coordinateSpace=_coordinateSpace - In the implementation block
@property (nonatomic,readonly) BOOL isNonRectangular; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<UICoordinateSpace>)coordinateSpace;
-(void)setCoordinateSpace:(id<UICoordinateSpace>)arg1 ;
-(id)initWithCoordinateSpace:(id)arg1 ;
-(CGRect)_inscribedRectInBoundingRect:(CGRect)arg1 byInsettingRect:(CGRect)arg2 onEdges:(unsigned long long)arg3 ;
-(CGRect)_largestInscribedRectInBoundingRect:(CGRect)arg1 withCenter:(CGPoint)arg2 aspectRatio:(double)arg3 ;
-(id)boundingPathForCoordinateSpace:(id)arg1 ;
-(BOOL)validateForCoordinateSpace;
-(BOOL)isNonRectangular;
-(CGRect)_inscribedRectInBoundingPathAndRect:(CGRect)arg1 byInsettingRect:(CGRect)arg2 onEdges:(unsigned long long)arg3 withOptions:(unsigned long long)arg4 ;
-(CGRect)_largestInscribedRectInBoundingPathAndRect:(CGRect)arg1 withCenter:(CGPoint)arg2 aspectRatio:(double)arg3 ;
@end
