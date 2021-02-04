/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:58 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@class NSMutableOrderedSet, NSMapTable;

@interface PKFreeTransformGestureRecognizer : UIGestureRecognizer {

	BOOL _allowSingleTouchDrag;
	BOOL _axisAligned;
	BOOL _canBegin;
	BOOL _isScaling;
	BOOL _isPanning;
	double _startThreshold;
	double _scaleThreshold;
	double _cancelThreshold;
	unsigned long long _allowedPanEdges;
	double _minScale;
	double _maxScale;
	double _scaleDamping;
	double _previousScale;
	NSMutableOrderedSet* _touches;
	double _deltaScale;
	NSMapTable* _touchStartLocations;
	NSMapTable* _actualTouchStartLocations;
	CGAffineTransform _accumulatedTransform;

}

@property (assign,nonatomic) BOOL canBegin;                                          //@synthesize canBegin=_canBegin - In the implementation block
@property (assign,nonatomic) BOOL isScaling;                                         //@synthesize isScaling=_isScaling - In the implementation block
@property (assign,nonatomic) BOOL isPanning;                                         //@synthesize isPanning=_isPanning - In the implementation block
@property (assign,nonatomic) double previousScale;                                   //@synthesize previousScale=_previousScale - In the implementation block
@property (assign,nonatomic) double deltaScale;                                      //@synthesize deltaScale=_deltaScale - In the implementation block
@property (assign,nonatomic) CGAffineTransform accumulatedTransform;                 //@synthesize accumulatedTransform=_accumulatedTransform - In the implementation block
@property (nonatomic,retain) NSMapTable * touchStartLocations;                       //@synthesize touchStartLocations=_touchStartLocations - In the implementation block
@property (nonatomic,retain) NSMapTable * actualTouchStartLocations;                 //@synthesize actualTouchStartLocations=_actualTouchStartLocations - In the implementation block
@property (assign,nonatomic) double startThreshold;                                  //@synthesize startThreshold=_startThreshold - In the implementation block
@property (assign,nonatomic) double scaleThreshold;                                  //@synthesize scaleThreshold=_scaleThreshold - In the implementation block
@property (assign,nonatomic) double cancelThreshold;                                 //@synthesize cancelThreshold=_cancelThreshold - In the implementation block
@property (assign,nonatomic) unsigned long long allowedPanEdges;                     //@synthesize allowedPanEdges=_allowedPanEdges - In the implementation block
@property (assign,nonatomic) BOOL allowSingleTouchDrag;                              //@synthesize allowSingleTouchDrag=_allowSingleTouchDrag - In the implementation block
@property (assign,nonatomic) BOOL axisAligned;                                       //@synthesize axisAligned=_axisAligned - In the implementation block
@property (assign,nonatomic) double minScale;                                        //@synthesize minScale=_minScale - In the implementation block
@property (assign,nonatomic) double maxScale;                                        //@synthesize maxScale=_maxScale - In the implementation block
@property (assign,nonatomic) double scaleDamping;                                    //@synthesize scaleDamping=_scaleDamping - In the implementation block
@property (nonatomic,readonly) BOOL scaleIsGrowing; 
@property (nonatomic,readonly) BOOL scaleIsShrinking; 
@property (nonatomic,readonly) double scale; 
@property (nonatomic,readonly) CGAffineTransform freeTransform; 
@property (nonatomic,readonly) CGAffineTransform unscaledFreeTransform; 
@property (nonatomic,readonly) NSMutableOrderedSet * touches;                        //@synthesize touches=_touches - In the implementation block
-(double)startThreshold;
-(void)setStartThreshold:(double)arg1 ;
-(double)deltaScale;
-(CGAffineTransform)freeTransform;
-(double)scaleDamping;
-(CGAffineTransform)unscaledFreeTransform;
-(BOOL)allowSingleTouchDrag;
-(NSMapTable *)touchStartLocations;
-(BOOL)axisAligned;
-(CGAffineTransform)accumulatedTransform;
-(double)minScale;
-(double)maxScale;
-(CGAffineTransform)clampTransform:(CGAffineTransform)arg1 minScale:(double)arg2 maxScale:(double)arg3 ;
-(double)previousScale;
-(void)setPreviousScale:(double)arg1 ;
-(void)setDeltaScale:(double)arg1 ;
-(void)setAccumulatedTransform:(CGAffineTransform)arg1 ;
-(void)setCanBegin:(BOOL)arg1 ;
-(void)setIsScaling:(BOOL)arg1 ;
-(void)resetStartingTouches;
-(void)resetAndAccumulateTransform;
-(NSMapTable *)actualTouchStartLocations;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 rejectExcessTouches:(BOOL)arg3 ;
-(BOOL)canBegin;
-(BOOL)touchesMovedPastThreshold:(double)arg1 ;
-(double)cancelThreshold;
-(BOOL)touchesMovedPastScaleThreshold:(double)arg1 ;
-(unsigned long long)allowedPanEdges;
-(void)setScaleDamping:(double)arg1 ;
-(BOOL)scaleIsGrowing;
-(BOOL)scaleIsShrinking;
-(void)setCancelThreshold:(double)arg1 ;
-(void)setAllowedPanEdges:(unsigned long long)arg1 ;
-(void)setAllowSingleTouchDrag:(BOOL)arg1 ;
-(void)setAxisAligned:(BOOL)arg1 ;
-(void)setMinScale:(double)arg1 ;
-(void)setMaxScale:(double)arg1 ;
-(void)setTouchStartLocations:(NSMapTable *)arg1 ;
-(void)setActualTouchStartLocations:(NSMapTable *)arg1 ;
-(double)scale;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(CGPoint)locationInView:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(NSMutableOrderedSet *)touches;
-(double)scaleThreshold;
-(void)setScaleThreshold:(double)arg1 ;
-(void)clearTouches;
-(BOOL)isPanning;
-(void)setIsPanning:(BOOL)arg1 ;
-(BOOL)isScaling;
@end
