/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:07 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface NTKBundleComplicationDataSourceLoader : NSObject <NSCopying> {

	NSArray* _cachedDataSources;

}
+(id)complicationDataSourceLoaderWithDirectories:(id)arg1 ;
+(id)disabledComplicationDataSourceLoader;
+(id)defaultComplicationDataSourceLoader;
+(id)complicationDataSourceLoaderWithDirectory:(id)arg1 ;
+(id)complicationDataSourceLoaderWithBlock:(/*^block*/id)arg1 ;
+(id)aggregateComplicationLoaderWithComplicationLoaders:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_loadClassesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerationComplicationClassesWithBlock:(/*^block*/id)arg1 ;
@end
