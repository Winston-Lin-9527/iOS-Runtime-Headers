/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:52 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ToneKit/ToneKit-Structs.h>
#import <QuartzCore/CAShapeLayer.h>

@interface TKVibrationRecorderRippleRingLayer : CAShapeLayer {

	double _creationTimestamp;
	double _ringSpeed;
	CGPoint _normalizedRingLocation;

}

@property (nonatomic,readonly) CGPoint normalizedRingLocation;              //@synthesize normalizedRingLocation=_normalizedRingLocation - In the implementation block
@property (nonatomic,readonly) double ringSpeed;                            //@synthesize ringSpeed=_ringSpeed - In the implementation block
-(double)timeIntervalSinceCreation;
-(void)configureWithTimeIntervalSinceCreation:(double)arg1 normalizedRingLocation:(CGPoint)arg2 ringSpeed:(double)arg3 ;
-(CGPoint)normalizedRingLocation;
-(double)ringSpeed;
-(id)init;
-(void)reset;
@end
