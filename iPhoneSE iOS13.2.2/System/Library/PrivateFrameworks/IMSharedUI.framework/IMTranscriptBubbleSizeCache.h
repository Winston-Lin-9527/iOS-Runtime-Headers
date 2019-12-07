/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:13 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IMSharedUI/IMSharedUI-Structs.h>
@class NSMutableArray;

@interface IMTranscriptBubbleSizeCache : NSObject {

	NSMutableArray* _sizeCache;

}

@property (retain) NSMutableArray * sizeCache;              //@synthesize sizeCache=_sizeCache - In the implementation block
-(id)init;
-(void)flush;
-(void)setSizeCache:(NSMutableArray *)arg1 ;
-(NSMutableArray *)sizeCache;
-(id)_cacheEntryForMaximumWidth:(double)arg1 getEffectiveIndex:(unsigned long long*)arg2 ;
-(void)_insertCacheEntry:(id)arg1 ;
-(CGSize)sizeForMaximumWidth:(double)arg1 ;
-(void)setSize:(CGSize)arg1 forMaximumWidth:(double)arg2 ;
@end
