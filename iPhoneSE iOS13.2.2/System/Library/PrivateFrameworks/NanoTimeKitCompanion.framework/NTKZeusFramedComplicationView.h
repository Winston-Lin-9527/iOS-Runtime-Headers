/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:07 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKZeusComplicationView.h>

@class NSArray;

@interface NTKZeusFramedComplicationView : NTKZeusComplicationView {

	NSArray* _cornerLayers;

}
-(id)init;
-(void)setStyle:(unsigned long long)arg1 ;
-(void)layoutSubviews;
-(void)_updateCorners;
-(void)applyPalette:(id)arg1 ;
-(void)applyTransitionFraction:(double)arg1 fromPalette:(id)arg2 toPalette:(id)arg3 ;
-(id)_cornerImage;
@end
