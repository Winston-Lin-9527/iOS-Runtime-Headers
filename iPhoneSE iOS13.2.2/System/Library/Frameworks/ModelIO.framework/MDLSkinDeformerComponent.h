/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:52 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSData;


@protocol MDLSkinDeformerComponent <MDLComponent>
@property (nonatomic,readonly) NSArray * jointPaths; 
@property (nonatomic,readonly) NSData * jointBindTransforms; 
@property (nonatomic,readonly) SCD_Struct_MD1 meshBindTransform; 
@required
-(unsigned long long)copyJointBindTransformsInto:(/*function pointer*/void**)arg1 maxCount:(unsigned long long)arg2;
-(NSArray *)jointPaths;
-(NSData *)jointBindTransforms;
-(SCD_Struct_MD1)meshBindTransform;

@end
