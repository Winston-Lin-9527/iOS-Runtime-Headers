/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:48 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityPhysicalInteraction.framework/AccessibilityPhysicalInteraction
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AccessibilityPhysicalInteraction/AccessibilityPhysicalInteraction-Structs.h>
@interface AXPIFingerEventTouchInfo : NSObject {

	double _force;
	CGPoint _normalizedLocation;

}

@property (assign,nonatomic) CGPoint normalizedLocation;              //@synthesize normalizedLocation=_normalizedLocation - In the implementation block
@property (assign,nonatomic) double force;                            //@synthesize force=_force - In the implementation block
-(double)force;
-(void)setForce:(double)arg1 ;
-(CGPoint)normalizedLocation;
-(void)setNormalizedLocation:(CGPoint)arg1 ;
@end
