/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:46 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimerUI/MobileTimerUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MTClock.h>

@class UIImage, UIImageView, UIView, NSDate, NSCalendar, NSTimeZone;

@interface MTUIAnalogClockView : UIView <MTClock> {

	long long _runMode;
	UIImage* _faceDayImage;
	UIImage* _faceNightImage;
	UIImageView* _faceView;
	UIView* _dayHands[3];
	UIView* _nightHands[3];
	UIImageView* _middleDotDay;
	UIImageView* _middleDotNight;
	UIImageView* _middleRedDot;
	NSDate* _time;
	BOOL _nighttime;
	double _seconds;
	int _flutterIndex;
	BOOL _isRenderStateStale;
	NSCalendar* _calendar;
	BOOL _minuteHourAnimationTriggered;

}

@property (assign,nonatomic) long long runMode;                                //@synthesize runMode=_runMode - In the implementation block
@property (nonatomic,readonly) long long style; 
@property (nonatomic,readonly) UIImageView * faceView;                         //@synthesize faceView=_faceView - In the implementation block
@property (nonatomic,readonly) long long hour; 
@property (nonatomic,readonly) long long minute; 
@property (nonatomic,retain) NSDate * time;                                    //@synthesize time=_time - In the implementation block
@property (nonatomic,retain) NSTimeZone * timeZone; 
@property (getter=isNighttime,nonatomic,readonly) BOOL nighttime;              //@synthesize nighttime=_nighttime - In the implementation block
@property (getter=isStarted,nonatomic,readonly) BOOL started; 
+(void)initialize;
+(id)resourcePath;
+(long long)style;
+(UIEdgeInsets)shadowInsets;
+(void)registerClock:(id)arg1 ;
+(void)unregisterClock:(id)arg1 ;
+(id)cacheTopLevelPath;
+(id)cacheVersionHash;
+(void)updateFlutterForAllTicking;
+(void)registerTickingClock:(id)arg1 ;
+(void)registerSweepingClock:(id)arg1 ;
+(void)updateTimeForAllTicking;
+(void)updateTimeForAllSweeping;
+(void)unregisterTickingClock:(id)arg1 ;
+(void)unregisterSweepingClock:(id)arg1 ;
+(Class)classForStyle:(long long)arg1 ;
+(CGSize)clockSize;
+(double)secondHandMainLength;
+(double)secondHandOverhangLength;
+(double)faceRadius;
+(double)antialiasPaddingRatio;
+(double)hourHandWidth;
+(double)secondHandWidth;
+(double)hourHandLength;
+(double)minuteHandWidth;
+(double)minuteHandLength;
+(id)imageForType:(int)arg1 dayTime:(BOOL)arg2 generation:(/*^block*/id)arg3 ignoreCache:(BOOL)arg4 ;
+(BOOL)shouldCacheImageOnDiskForType:(int)arg1 dayTime:(BOOL)arg2 ;
+(id)cacheVersionedPath;
+(id)imageCacheNameForType:(int)arg1 daytime:(BOOL)arg2 ;
+(id)dayTimeFaceColor;
+(id)dayTimeTextColor;
+(id)nightTimeFaceColor;
+(id)nightTimeTextColor;
+(BOOL)doesFaceHaveShadow;
+(id)shadowInfoAtIndex:(unsigned long long)arg1 ;
+(double)numeralInset;
+(id)numeralFont;
+(void)adjustNumberalCenter:(CGPoint*)arg1 forNumeralIndex:(long long)arg2 ;
+(id)clockFaceForDaytime:(BOOL)arg1 ignoreCache:(BOOL)arg2 ;
+(id)makeClockFaceForDaytime:(BOOL)arg1 ;
+(id)dayTimeHourHandColor;
+(id)nightTimeHourHandColor;
+(id)dayTimeMinuteHandColor;
+(id)nightTimeMinuteHandColor;
+(id)dayTimeSecondHandColor;
+(id)nightTimeSecondHandColor;
+(double)secondHandLength;
+(id)makeClockHand:(long long)arg1 daytime:(BOOL)arg2 ;
+(id)imageForType:(int)arg1 dayTime:(BOOL)arg2 generation:(/*^block*/id)arg3 ;
+(double)overHourHandDotSize;
+(id)dayTimeOverHourHandDotColor;
+(id)nightTimeOverHourHandDotColor;
+(id)makeDotImageSize:(double)arg1 color:(id)arg2 ;
+(id)overHourHandDotImageForDaytime:(BOOL)arg1 ;
+(double)overSecondHandDotSize;
+(id)overSecondHandDotColor;
+(id)makeOverSecondHandDotImage;
+(id)clockFaceForDaytime:(BOOL)arg1 ;
+(id)clockHand:(long long)arg1 daytime:(BOOL)arg2 ;
+(CGPoint)handRotationalCenterForHand:(long long)arg1 ;
+(BOOL)hasOverHourHandDot;
+(id)overHourHandDotForDayTime:(BOOL)arg1 ;
+(BOOL)hasOverSecondHandDot;
+(id)overSecondHandDotImage;
+(BOOL)isClockRegistered:(id)arg1 ;
+(CGSize)sizeForStyle:(long long)arg1 ;
+(UIEdgeInsets)insetsForStyle:(long long)arg1 ;
+(id)analogClockWithStyle:(long long)arg1 ;
+(CGPoint)shadowRotationalCenterForHand:(long long)arg1 ;
+(id)imageInBundleForName:(id)arg1 ;
-(id)init;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSTimeZone *)timeZone;
-(long long)hour;
-(long long)minute;
-(BOOL)isStarted;
-(void)stop;
-(void)start;
-(NSDate *)time;
-(long long)style;
-(void)setTime:(NSDate *)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(double)updateInterval;
-(void)updateTime;
-(long long)runMode;
-(void)setRunMode:(long long)arg1 ;
-(void)handleLocaleChange;
-(void)updateFlutter;
-(void)updateTimeContinuously:(long long)arg1 ;
-(double)coarseUpdateInterval;
-(void)setHandTransformForHandIndex:(long long)arg1 ;
-(void)setHandAngle:(double)arg1 forHandIndex:(long long)arg2 ;
-(void)updateTimeAnimated:(BOOL)arg1 ;
-(void)setTime:(id)arg1 animated:(BOOL)arg2 ;
-(void)setNighttime:(BOOL)arg1 ;
-(UIImageView *)faceView;
-(BOOL)isNighttime;
@end
