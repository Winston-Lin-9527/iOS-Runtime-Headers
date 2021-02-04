/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:33 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <FrontBoard/FrontBoard-Structs.h>
@class NSHashTable;

@interface FBSceneTransform : NSObject {

	CGAffineTransform _transform;
	NSHashTable* _targets;
	BOOL _appliesToSystemGestureView;

}

@property (assign,nonatomic) CGAffineTransform transform;                  //@synthesize transform=_transform - In the implementation block
@property (assign,nonatomic) BOOL appliesToSystemGestureView;              //@synthesize appliesToSystemGestureView=_appliesToSystemGestureView - In the implementation block
+(CGAffineTransform)concatenateTransforms:(id)arg1 ;
-(void)_notifyTargetsTransformDidUpdate;
-(id)_initWithTransform:(CGAffineTransform)arg1 ;
-(void)setAppliesToSystemGestureView:(BOOL)arg1 ;
-(void)addTransformTarget:(id)arg1 ;
-(void)removeTransformTarget:(id)arg1 ;
-(BOOL)appliesToSystemGestureView;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)transform;
@end
