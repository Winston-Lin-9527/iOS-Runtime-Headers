/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:16 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSReading/TSReading-Structs.h>
@class TSUColor;

@interface TSTTableBadge : NSObject {

	int _badgeType;
	TSUColor* _color;
	double _viewScale;
	CGRect _frame;

}

@property (assign,nonatomic) int badgeType;                 //@synthesize badgeType=_badgeType - In the implementation block
@property (nonatomic,retain) TSUColor * color;              //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) double viewScale;              //@synthesize viewScale=_viewScale - In the implementation block
@property (assign,nonatomic) CGRect frame;                  //@synthesize frame=_frame - In the implementation block
+(id)badgeWithType:(int)arg1 color:(id)arg2 viewScale:(double)arg3 frame:(CGRect)arg4 ;
-(void)setBadgeType:(int)arg1 ;
-(int)badgeType;
-(double)viewScale;
-(void)setViewScale:(double)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)dealloc;
-(CGRect)frame;
-(TSUColor *)color;
-(void)setColor:(TSUColor *)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 ;
@end
