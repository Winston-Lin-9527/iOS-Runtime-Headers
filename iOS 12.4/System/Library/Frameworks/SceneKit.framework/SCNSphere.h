/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:47 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNGeometry.h>

@interface SCNSphere : SCNGeometry {

	double _sphereradius;
	double _sphereradialSpan;
	long long _spheresegmentCount;
	long long _sphereprimitiveType;
	BOOL _spheregeodesic;
	BOOL _spherehemispheric;

}

@property (assign,nonatomic) double radius; 
@property (assign,getter=isGeodesic,nonatomic) BOOL geodesic; 
@property (assign,nonatomic) long long segmentCount; 
+(id)sphereWithRadius:(double)arg1 ;
+(BOOL)supportsSecureCoding;
-(void)setGeodesic:(BOOL)arg1 ;
-(BOOL)getBoundingBoxMin:(SCNVector3*)arg1 max:(SCNVector3*)arg2 ;
-(void)setRadialSpan:(double)arg1 ;
-(id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2 ;
-(void)setPrimitiveType:(long long)arg1 ;
-(id)presentationGeometry;
-(BOOL)getBoundingSphereCenter:(SCNVector3*)arg1 radius:(double*)arg2 ;
-(void)_setupObjCModelFrom:(id)arg1 ;
-(_C3DGeometry*)__createCFObject;
-(void)_syncObjCModel:(_C3DParametricGeometry*)arg1 ;
-(id)initPresentationParametricGeometryWithParametricGeometryRef:(_C3DParametricGeometry*)arg1 ;
-(id)initWithParametricGeometryRef:(_C3DParametricGeometry*)arg1 ;
-(id)presentationSphere;
-(BOOL)isGeodesic;
-(double)radialSpan;
-(long long)segmentCount;
-(BOOL)isHemispheric;
-(void)setHemispheric:(BOOL)arg1 ;
-(BOOL)geodesic;
-(long long)primitiveType;
-(void)setSegmentCount:(long long)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)radius;
-(void)setRadius:(double)arg1 ;
@end
