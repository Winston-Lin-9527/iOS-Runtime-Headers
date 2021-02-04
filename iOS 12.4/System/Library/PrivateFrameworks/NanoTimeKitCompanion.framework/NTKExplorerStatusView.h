/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:22 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray;

@interface NTKExplorerStatusView : UIView {

	NSArray* _dotLayers;
	BOOL _observing;
	long long _targetDotPosition;
	BOOL _showsFullSignalStrength;
	long long _position;
	long long _signalStrengthBars;

}

@property (nonatomic,readonly) long long position;                      //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) long long signalStrengthBars;              //@synthesize signalStrengthBars=_signalStrengthBars - In the implementation block
@property (assign,nonatomic) BOOL showsFullSignalStrength;              //@synthesize showsFullSignalStrength=_showsFullSignalStrength - In the implementation block
+(double)dotDiameter;
+(double)dotSpacing;
+(id)connectedDotColor;
+(double)dotBorderWidth;
+(double)noServiceDotHeight;
+(id)noServiceDotColor;
-(void)_updateDotFillStates;
-(void)setDotPosition:(long long)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setSignalStrengthBars:(long long)arg1 ;
-(void)setShowsFullSignalStrength:(BOOL)arg1 ;
-(long long)signalStrengthBars;
-(BOOL)showsFullSignalStrength;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(long long)position;
@end
