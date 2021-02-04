/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:14 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDContactShadow.h>

@class TSUColor;

@interface TSDMutableContactShadow : TSDContactShadow

@property (assign,nonatomic) double height; 
@property (assign,nonatomic) double perspective; 
@property (assign,nonatomic) double offset; 
@property (assign,nonatomic) CGColorRef color; 
@property (assign,nonatomic) double radius; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,nonatomic) TSUColor * TSUColor; 
-(void)setTSUColor:(TSUColor *)arg1 ;
-(void)setPerspective:(double)arg1 ;
-(void)setOpacity:(double)arg1 ;
-(void)setColor:(CGColorRef)arg1 ;
-(void)setHeight:(double)arg1 ;
-(void)setOffset:(double)arg1 ;
-(void)setRadius:(double)arg1 ;
@end
