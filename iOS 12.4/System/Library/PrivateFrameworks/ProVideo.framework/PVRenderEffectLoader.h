/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:55 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProVideo/ProVideo-Structs.h>
@interface PVRenderEffectLoader : NSObject {

	deque<PVLoadedEffectItem, std::__1::allocator<PVLoadedEffectItem> >* _loadedEffects;
	HGSynchronizable* _lock;
	float _unusedEffectTimeout;

}

@property (assign,nonatomic) float unusedEffectTimeout;              //@synthesize unusedEffectTimeout=_unusedEffectTimeout - In the implementation block
-(void)unloadEffects;
-(void)_loadEffects_noLock:(id)arg1 ;
-(void)_removeTimedOutEffects_noLock;
-(float)unusedEffectTimeout;
-(void)loadEffectsForGraphs:(id)arg1 loadContext:(HGRef<PVInstructionGraphContext>*)arg2 ;
-(void)ageOutEffects;
-(void)setUnusedEffectTimeout:(float)arg1 ;
-(id)init;
-(void)dealloc;
@end
