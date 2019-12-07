/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:32 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilKit/PencilKit-Structs.h>
#import <libobjc.A.dylib/PKStrokeRenderCache.h>

@protocol MTLTexture;
@class NSMutableArray, NSArray, NSString;

@interface PKMetalLiveStrokePaintRenderCache : NSObject <PKStrokeRenderCache> {

	NSMutableArray* _buffers;
	unsigned long long _totalCost;
	id<MTLTexture> _liveStrokeDestinationTexture;
	CGRect _liveStrokeDestinationFrame;

}

@property (nonatomic,readonly) NSArray * buffers; 
@property (nonatomic,retain) id<MTLTexture> liveStrokeDestinationTexture;              //@synthesize liveStrokeDestinationTexture=_liveStrokeDestinationTexture - In the implementation block
@property (assign,nonatomic) CGRect liveStrokeDestinationFrame;                        //@synthesize liveStrokeDestinationFrame=_liveStrokeDestinationFrame - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)lockPurgeableResourcesAddToSet:(id)arg1 ;
-(unsigned long long)inkVersion;
-(unsigned long long)cacheCost;
-(BOOL)needsCompute;
-(void)addBuffer:(id)arg1 ;
-(NSArray *)buffers;
-(CGRect)liveStrokeDestinationFrame;
-(id<MTLTexture>)liveStrokeDestinationTexture;
-(void)setLiveStrokeDestinationFrame:(CGRect)arg1 ;
-(void)setLiveStrokeDestinationTexture:(id<MTLTexture>)arg1 ;
@end
