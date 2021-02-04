/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:16 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSTTableDataList.h>

@class NSMutableDictionary;

@interface TSTCustomFormatList : TSTTableDataList {

	NSMutableDictionary* mNamesList;

}
-(BOOL)supportsIDMapForType:(int)arg1 ;
-(TSUCustomFormat*)customFormatForKey:(unsigned)arg1 ;
-(id)newUniqueNameFromName:(id)arg1 preserveSeed:(BOOL)arg2 ;
-(unsigned)addCustomFormat:(TSUCustomFormat*)arg1 duringImport:(BOOL)arg2 ;
-(void)p_setupNamesList;
-(unsigned)addCustomFormat:(TSUCustomFormat*)arg1 withOldKey:(unsigned)arg2 ;
-(id)customFormatWrapperForKey:(unsigned)arg1 ;
-(unsigned)maxKey;
-(id)allNumberKeys;
-(id)newUniqueNameFromName:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(long long)count;
-(id)initWithContext:(id)arg1 ;
@end
