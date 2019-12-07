/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:11 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@interface NTKClockIconView : UIView {

	BOOL _paused;
	double _fullDiameter;

}

@property (assign,nonatomic) double fullDiameter;              //@synthesize fullDiameter=_fullDiameter - In the implementation block
@property (assign,nonatomic) BOOL paused;                      //@synthesize paused=_paused - In the implementation block
-(BOOL)paused;
-(void)setPaused:(BOOL)arg1 ;
-(id)borrowCircleView;
-(id)borrowTimeView;
-(void)restoreBorrowedViews;
-(double)fullDiameter;
-(void)setFullDiameter:(double)arg1 ;
@end
