/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:04 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKDateTextProvider;

@interface CLKComplicationTemplateModularSmallDate : CLKComplicationTemplate {

	CLKDateTextProvider* _weekdayTextProvider;
	CLKDateTextProvider* _dayTextProvider;
	unsigned long long _highlightMode;

}

@property (nonatomic,copy) CLKDateTextProvider * weekdayTextProvider;              //@synthesize weekdayTextProvider=_weekdayTextProvider - In the implementation block
@property (nonatomic,copy) CLKDateTextProvider * dayTextProvider;                  //@synthesize dayTextProvider=_dayTextProvider - In the implementation block
@property (assign,nonatomic) unsigned long long highlightMode;                     //@synthesize highlightMode=_highlightMode - In the implementation block
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateIntegerKeysWithBlock:(/*^block*/id)arg1 ;
-(id)_initWithJSONObjectRepresentation:(id)arg1 bundle:(id)arg2 ;
-(id)JSONObjectRepresentationWritingResourcesToBundlePath:(id)arg1 ;
-(void)setHighlightLine2:(BOOL)arg1 ;
-(BOOL)highlightLine2;
-(unsigned long long)highlightMode;
-(void)setHighlightMode:(unsigned long long)arg1 ;
-(BOOL)isCompatibleWithFamily:(long long)arg1 ;
-(CLKDateTextProvider *)weekdayTextProvider;
-(CLKDateTextProvider *)dayTextProvider;
-(void)setWeekdayTextProvider:(CLKDateTextProvider *)arg1 ;
-(void)setDayTextProvider:(CLKDateTextProvider *)arg1 ;
@end
