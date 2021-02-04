/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:54 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/DrawingKit.framework/DrawingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DrawingKit/DrawingKit-Structs.h>
#import <GLKit/GLKView.h>
#import <libobjc.A.dylib/DKOpenGLRendererDelegate.h>
#import <libobjc.A.dylib/DKInkRenderer.h>

@protocol DKInkRendererDelegate;
@class UIColor, NSMutableArray, DKOpenGLRenderer, NSString;

@interface DKInkRendererGL : GLKView <DKOpenGLRendererDelegate, DKInkRenderer> {

	UIColor* _inkColor;
	NSMutableArray* _brushPointQueue;
	NSMutableArray* _brushStrokes;
	NSMutableArray* _currentBrushStroke;
	BOOL _initialized;
	double _backingScale;
	DKOpenGLRenderer* _inkRenderer;
	BOOL _needToNotify;
	BOOL scaleDrawingToFitCanvas;
	BOOL drawingEnabled;
	id<DKInkRendererDelegate> delegate;
	double _drawingScale;
	unsigned long long _mode;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIColor * inkColor;                                               //@synthesize inkColor=_inkColor - In the implementation block
@property (assign,nonatomic,__weak) id<DKInkRendererDelegate> delegate; 
@property (assign,nonatomic) BOOL scaleDrawingToFitCanvas; 
@property (assign,nonatomic) double drawingScale;                                              //@synthesize drawingScale=_drawingScale - In the implementation block
@property (assign,nonatomic) unsigned long long mode;                                          //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) BOOL drawingEnabled; 
@property (nonatomic,readonly) BOOL supportsBleedAnimation; 
@property (nonatomic,readonly) BOOL initialized; 
@property (nonatomic,readonly) unsigned long long maximumPointsForBleedAnimation; 
-(BOOL)initialized;
-(double)drawingScale;
-(void)beginStroke;
-(void)removeLastStroke;
-(void)resetRendererState;
-(void)completeAnimationsImmediately;
-(BOOL)scaleDrawingToFitCanvas;
-(void)setScaleDrawingToFitCanvas:(BOOL)arg1 ;
-(void)setDrawingScale:(double)arg1 ;
-(BOOL)supportsBleedAnimation;
-(unsigned long long)maximumPointsForBleedAnimation;
-(void)displayForcefully;
-(void)addPointsFromBrushPointQueueWithSegmentLength:(unsigned long long)arg1 ;
-(void)rendererDidFinishAnimatingDrawing:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<DKInkRendererDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id<DKInkRendererDelegate>)delegate;
-(BOOL)canBecomeFirstResponder;
-(void)_commonInit;
-(void)teardown;
-(void)drawRect:(CGRect)arg1 ;
-(id)snapshot;
-(void)clear;
-(unsigned long long)mode;
-(void)force;
-(void)setMode:(unsigned long long)arg1 ;
-(void)addPoint:(SCD_Struct_DK0)arg1 ;
-(void)flush;
-(void)endStroke;
-(UIColor *)inkColor;
-(void)setInkColor:(UIColor *)arg1 ;
-(BOOL)drawingEnabled;
-(void)setDrawingEnabled:(BOOL)arg1 ;
-(void)display;
@end
