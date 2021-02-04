/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:31 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUImageLayout.h>

@interface _NUContiguousImageLayout : NUImageLayout
-(void)enumerateTilesForReadingInRect:(SCD_Struct_NU6)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)tileInfoAtIndex:(long long)arg1 ;
-(SCD_Struct_NU6)frameRectForTileAtIndex:(long long)arg1 ;
-(SCD_Struct_NU6)contentRectForTileAtIndex:(long long)arg1 ;
-(long long)tileIndexAtPoint:(SCD_Struct_NU5)arg1 ;
-(void)enumerateTilesForWritingInRect:(SCD_Struct_NU6)arg1 withBlock:(/*^block*/id)arg2 ;
-(SCD_Struct_NU5)borderSize;
-(SCD_Struct_NU5)tileCounts;
-(long long)tileCount;
-(SCD_Struct_NU5)tileSize;
@end
