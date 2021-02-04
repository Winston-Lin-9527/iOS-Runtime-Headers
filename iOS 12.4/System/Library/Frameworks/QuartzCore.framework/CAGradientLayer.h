/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:31 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSArray, NSString;

@interface CAGradientLayer : CALayer

@property (retain) id colorMap; 
@property (copy) NSArray * interpolations; 
@property (copy) NSArray * colors; 
@property (copy) NSArray * locations; 
@property (assign) CGPoint startPoint; 
@property (assign) CGPoint endPoint; 
@property (copy) NSString * type; 
+(id)defaultValueForKey:(id)arg1 ;
+(BOOL)_hasRenderLayerSubclass;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
-(Layer*)_copyRenderLayer:(Transaction*)arg1 layerFlags:(unsigned)arg2 commitFlags:(unsigned*)arg3 ;
-(void)_colorSpaceDidChange;
-(BOOL)_renderLayerDefinesProperty:(unsigned)arg1 ;
-(unsigned)_renderLayerPropertyAnimationFlags:(unsigned)arg1 ;
-(void)_renderBackgroundInContext:(CGContextRef)arg1 ;
-(NSArray *)interpolations;
-(void)setInterpolations:(NSArray *)arg1 ;
-(NSArray *)locations;
-(CGPoint)endPoint;
-(id)colorMap;
-(void)setColorMap:(id)arg1 ;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(void)setColors:(NSArray *)arg1 ;
-(void)setStartPoint:(CGPoint)arg1 ;
-(void)setEndPoint:(CGPoint)arg1 ;
-(void)didChangeValueForKey:(id)arg1 ;
-(id)implicitAnimationForKeyPath:(id)arg1 ;
-(CGPoint)startPoint;
-(NSArray *)colors;
-(void)setLocations:(NSArray *)arg1 ;
@end
