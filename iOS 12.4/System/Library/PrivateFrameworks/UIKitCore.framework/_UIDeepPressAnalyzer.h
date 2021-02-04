/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:23 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class _UIVelocityIntegrator;

@interface _UIDeepPressAnalyzer : NSObject {

	_UIVelocityIntegrator* _touchForceIntegrator;
	_UIVelocityIntegrator* _locationIntegrator;

}

@property (nonatomic,retain) _UIVelocityIntegrator * touchForceIntegrator;                 //@synthesize touchForceIntegrator=_touchForceIntegrator - In the implementation block
@property (nonatomic,retain) _UIVelocityIntegrator * locationIntegrator;                   //@synthesize locationIntegrator=_locationIntegrator - In the implementation block
@property (getter=isDeepPressLikely,nonatomic,readonly) BOOL deepPressLikely; 
-(id)init;
-(void)analyzeTouches:(id)arg1 ;
-(void)setTouchForceIntegrator:(_UIVelocityIntegrator *)arg1 ;
-(void)setLocationIntegrator:(_UIVelocityIntegrator *)arg1 ;
-(double)_touchForceFromTouches:(id)arg1 ;
-(void)analyzeTouchForce:(double)arg1 centroidAtLocation:(CGPoint)arg2 ;
-(_UIVelocityIntegrator *)touchForceIntegrator;
-(_UIVelocityIntegrator *)locationIntegrator;
-(BOOL)isDeepPressLikely;
@end
