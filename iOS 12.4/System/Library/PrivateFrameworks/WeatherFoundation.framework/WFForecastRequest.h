/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:32 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WeatherFoundation/WFTask.h>

@class WFLocation, NSDateComponents, NSData, NSLocale, NSString;

@interface WFForecastRequest : WFTask {

	BOOL _attachRawAPIData;
	WFLocation* _location;
	NSDateComponents* _date;
	/*^block*/id _completionHandler;
	unsigned long long _forecastType;
	NSData* _rawAPIData;
	NSLocale* _locale;
	NSString* _trackingParameter;

}

@property (nonatomic,copy) id completionHandler;                           //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) NSDateComponents * date;                        //@synthesize date=_date - In the implementation block
@property (nonatomic,copy) WFLocation * location;                          //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) unsigned long long forecastType;              //@synthesize forecastType=_forecastType - In the implementation block
@property (assign,nonatomic) BOOL attachRawAPIData;                        //@synthesize attachRawAPIData=_attachRawAPIData - In the implementation block
@property (nonatomic,retain) NSData * rawAPIData;                          //@synthesize rawAPIData=_rawAPIData - In the implementation block
@property (nonatomic,retain) NSLocale * locale;                            //@synthesize locale=_locale - In the implementation block
@property (nonatomic,retain) NSString * trackingParameter;                 //@synthesize trackingParameter=_trackingParameter - In the implementation block
+(id)forecastRequestForLocation:(id)arg1 date:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)handleResponse:(id)arg1 ;
-(BOOL)attachRawAPIData;
-(void)startWithService:(id)arg1 ;
-(void)setAttachRawAPIData:(BOOL)arg1 ;
-(id)editLinksForForecast:(id)arg1 ;
-(void)handleCancellation;
-(unsigned long long)forecastType;
-(void)setForecastType:(unsigned long long)arg1 ;
-(id)initWithLocation:(id)arg1 date:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSString *)trackingParameter;
-(void)setTrackingParameter:(NSString *)arg1 ;
-(id)initWithLocation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSData *)rawAPIData;
-(void)setRawAPIData:(NSData *)arg1 ;
-(id)description;
-(NSDateComponents *)date;
-(id)completionHandler;
-(void)cleanup;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(void)setDate:(NSDateComponents *)arg1 ;
-(WFLocation *)location;
-(void)setLocation:(WFLocation *)arg1 ;
-(NSLocale *)locale;
@end
