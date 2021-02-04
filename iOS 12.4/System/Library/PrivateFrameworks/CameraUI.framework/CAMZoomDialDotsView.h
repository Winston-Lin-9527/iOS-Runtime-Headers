/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:31 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>

@class CALayer;

@interface CAMZoomDialDotsView : UIView {

	double _dotSpacingAngle;
	CALayer* __dotLayer;

}

@property (nonatomic,readonly) CALayer * _dotLayer;               //@synthesize _dotLayer=__dotLayer - In the implementation block
@property (assign,nonatomic) long long dotCount; 
@property (assign,nonatomic) CGPoint dotCenter; 
@property (assign,nonatomic) double dotSpacingAngle;              //@synthesize dotSpacingAngle=_dotSpacingAngle - In the implementation block
+(Class)layerClass;
-(id)initWithDotImage:(id)arg1 ;
-(void)setDotCount:(long long)arg1 ;
-(void)setDotSpacingAngle:(double)arg1 ;
-(double)dotSpacingAngle;
-(void)setDotCenter:(CGPoint)arg1 ;
-(long long)dotCount;
-(id)_replicatorLayer;
-(CALayer *)_dotLayer;
-(CGPoint)dotCenter;
@end
