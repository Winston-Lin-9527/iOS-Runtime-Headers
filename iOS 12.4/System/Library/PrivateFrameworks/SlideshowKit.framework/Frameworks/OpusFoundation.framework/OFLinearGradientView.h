/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:23 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusFoundation/OpusFoundation-Structs.h>
#import <OpusFoundation/OFUIView.h>

@class NSArray;

@interface OFLinearGradientView : OFUIView

@property (nonatomic,copy) NSArray * locations; 
@property (nonatomic,copy) NSArray * colors; 
@property (assign,nonatomic) CGPoint startPoint; 
@property (assign,nonatomic) CGPoint endPoint; 
+(Class)layerClass;
-(NSArray *)locations;
-(CGPoint)endPoint;
-(void)dealloc;
-(void)setColors:(NSArray *)arg1 ;
-(void)setStartPoint:(CGPoint)arg1 ;
-(void)setEndPoint:(CGPoint)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(CGPoint)startPoint;
-(id)gradientLayer;
-(NSArray *)colors;
-(void)setLocations:(NSArray *)arg1 ;
@end
