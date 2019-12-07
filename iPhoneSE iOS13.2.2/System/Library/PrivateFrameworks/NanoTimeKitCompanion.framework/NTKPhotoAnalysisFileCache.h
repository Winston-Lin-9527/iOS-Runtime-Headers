/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:11 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NTKTaskScheduler;

@interface NTKPhotoAnalysisFileCache : NSObject {

	NSMutableDictionary* _cache;
	int _sequenceNumber;
	BOOL _cacheDirty;
	NTKTaskScheduler* _taskScheduler;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(BOOL)_load;
-(BOOL)_save;
-(id)photoAnalysisForIdentifier:(id)arg1 ;
-(void)setPhotoAnalysis:(id)arg1 forIdentifier:(id)arg2 ;
-(void)_dirtyCache;
@end
