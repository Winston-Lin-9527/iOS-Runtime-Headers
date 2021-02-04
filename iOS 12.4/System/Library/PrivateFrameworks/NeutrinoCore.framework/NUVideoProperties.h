/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:32 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSDictionary;


@protocol NUVideoProperties <NSObject>
@property (readonly) NSArray * metadata; 
@property (readonly) SCD_Struct_NU5 size; 
@property (readonly) SCD_Struct_NU6 cleanAperture; 
@property (readonly) long long orientation; 
@property (readonly) NSDictionary * colorProperties; 
@property (readonly) SCD_Struct_NU7 livePhotoKeyFrameTime; 
@required
-(SCD_Struct_NU6)cleanAperture;
-(NSDictionary *)colorProperties;
-(SCD_Struct_NU7)livePhotoKeyFrameTime;
-(SCD_Struct_NU5)size;
-(long long)orientation;
-(NSArray *)metadata;

@end
