/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:10 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIVectorOperatable <NSObject,NSCopying>
@required
+(id)zero;
+(id)epsilon;
-(id)copy;
-(BOOL)isUndefined;
-(id)addVector:(id)arg1;
-(id)getValue;
-(id)interpolateTo:(id)arg1 progress:(double)arg2;
-(void)integrateWithVelocity:(id)arg1 target:(id)arg2 intermediateTarget:(id)arg3 intermediateTargetVelocity:(id)arg4 parameters:(SCD_Struct_UI122)arg5 state:(SCD_Struct_UI123)arg6 delta:(double)arg7;
-(BOOL)isApproximatelyEqualTo:(id)arg1;
-(BOOL)isApproximatelyEqualTo:(id)arg1 withinEpsilon:(id)arg2;
-(void)reinitWithVector:(id)arg1;
-(id)getNSValue;
-(id)multiplyByScalar:(double)arg1;
-(id)multiplyByVector:(id)arg1;

@end
