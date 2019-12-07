/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:09 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSDBackgroundLayoutAndRenderStateDelegate;
@interface TSDBackgroundLayoutAndRenderState : NSObject {

	id<TSDBackgroundLayoutAndRenderStateDelegate> mDelegate;
	BOOL mNeedsLayoutAndRender;
	BOOL mNeedsLayoutForTilingLayers;

}
-(id)initWithDelegate:(id)arg1 ;
-(void)clearDelegate;
-(void)setNeedsLayoutForTilingLayers;
-(void)p_didBackgroundLayoutAndRender;
-(void)setNeedsLayoutAndRender;
@end
