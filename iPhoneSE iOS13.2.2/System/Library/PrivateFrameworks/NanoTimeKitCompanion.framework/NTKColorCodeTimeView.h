/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:07 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class NSArray, NSCalendar, NSDate;

@interface NTKColorCodeTimeView : UIView {

	NSArray* _colorViews;
	NSArray* _digitToColor;
	NSCalendar* _cal;
	NSDate* _date;

}

@property (nonatomic,retain) NSDate * date;              //@synthesize date=_date - In the implementation block
-(id)init;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(void)layoutSubviews;
@end
