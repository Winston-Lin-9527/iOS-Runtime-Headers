/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:33 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <Foundation/NSFormatter.h>

@class NSLocale, NSString;

@interface WFTemperatureFormatter : NSFormatter {

	BOOL _includeDegreeSymbol;
	int _inputUnit;
	int _outputUnit;
	int _symbolType;
	UAMeasureFormatRef _measureFormatter;
	NSLocale* _locale;
	NSString* _fallbackTemperatureString;
	unsigned long long _roundingMode;
	unsigned long long _maximumFractionDigits;

}

@property (assign,nonatomic) UAMeasureFormatRef measureFormatter;                   //@synthesize measureFormatter=_measureFormatter - In the implementation block
@property (nonatomic,retain) NSLocale * locale;                                     //@synthesize locale=_locale - In the implementation block
@property (nonatomic,copy) NSString * fallbackTemperatureString;                    //@synthesize fallbackTemperatureString=_fallbackTemperatureString - In the implementation block
@property (assign,nonatomic) int inputUnit;                                         //@synthesize inputUnit=_inputUnit - In the implementation block
@property (assign,nonatomic) int outputUnit;                                        //@synthesize outputUnit=_outputUnit - In the implementation block
@property (assign,nonatomic) unsigned long long roundingMode;                       //@synthesize roundingMode=_roundingMode - In the implementation block
@property (assign,nonatomic) unsigned long long maximumFractionDigits;              //@synthesize maximumFractionDigits=_maximumFractionDigits - In the implementation block
@property (assign,nonatomic) int symbolType;                                        //@synthesize symbolType=_symbolType - In the implementation block
@property (assign,nonatomic) BOOL includeDegreeSymbol;                              //@synthesize includeDegreeSymbol=_includeDegreeSymbol - In the implementation block
+(id)temperatureFormatterWithInputUnit:(int)arg1 outputUnit:(int)arg2 ;
-(unsigned long long)roundingMode;
-(void)setRoundingMode:(unsigned long long)arg1 ;
-(void)setMaximumFractionDigits:(unsigned long long)arg1 ;
-(void)setInputUnit:(int)arg1 ;
-(int)inputUnit;
-(int)outputUnit;
-(void)setMeasureFormatter:(UAMeasureFormatRef)arg1 ;
-(id)formattedTemperatureFromString:(id)arg1 ;
-(id)formattedStringFromTemperature:(id)arg1 ;
-(id)_formatTemperatureValue:(id)arg1 toUnit:(int)arg2 ;
-(UAMeasureFormatRef)measureFormatter;
-(BOOL)includeDegreeSymbol;
-(void)setOutputUnit:(int)arg1 ;
-(void)setIncludeDegreeSymbol:(BOOL)arg1 ;
-(void)setSymbolType:(int)arg1 ;
-(int)symbolType;
-(void)_localeDidChangeNotification:(id)arg1 ;
-(NSString *)fallbackTemperatureString;
-(void)setFallbackTemperatureString:(NSString *)arg1 ;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(unsigned long long)maximumFractionDigits;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(id)stringForObjectValue:(id)arg1 ;
-(NSLocale *)locale;
@end
