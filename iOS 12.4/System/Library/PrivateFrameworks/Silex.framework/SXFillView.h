/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:01 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <UIKitCore/UIView.h>

@protocol SXDraggable;
@class SXFill;

@interface SXFillView : UIView {

	SXFill* _fill;
	id<SXDraggable> _dragable;
	CGRect _originalFrame;

}

@property (nonatomic,readonly) SXFill * fill;                         //@synthesize fill=_fill - In the implementation block
@property (assign,nonatomic) CGRect originalFrame;                    //@synthesize originalFrame=_originalFrame - In the implementation block
@property (assign,nonatomic) CGRect contentFrame; 
@property (nonatomic,readonly) id<SXDraggable> dragable;              //@synthesize dragable=_dragable - In the implementation block
-(CGRect)fillFrameWithBoundingSize:(CGSize)arg1 ;
-(id)initWithFill:(id)arg1 ;
-(id<SXDraggable>)dragable;
-(void)setOriginalFrame:(CGRect)arg1 ;
-(void)load;
-(SXFill *)fill;
-(CGRect)contentFrame;
-(void)setContentFrame:(CGRect)arg1 ;
-(CGRect)originalFrame;
@end
