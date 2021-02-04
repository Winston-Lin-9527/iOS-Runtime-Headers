/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:24 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
@class NSMapTable, NSLock;

@interface _NTKSharedJetsamInfo : NSObject {

	NSMapTable* _fetchers;
	NSLock* _fetchersLock;
	int _pid;

}
+(id)sharedJetsamInfo;
-(BOOL)getInfoFor:(id)arg1 into:(jetsam_info*)arg2 ;
-(BOOL)resetIntervalFor:(id)arg1 ;
-(void)unregister:(id)arg1 ;
-(id)init;
@end
