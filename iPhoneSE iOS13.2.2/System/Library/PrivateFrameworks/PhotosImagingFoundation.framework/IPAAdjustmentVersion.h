/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:32 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IPAAdjustmentVersion : NSObject {

	unsigned long long _majorVersion;
	unsigned long long _minorVersion;
	NSString* _platform;

}

@property (nonatomic,readonly) unsigned long long majorVersion;              //@synthesize majorVersion=_majorVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long minorVersion;              //@synthesize minorVersion=_minorVersion - In the implementation block
@property (nonatomic,readonly) NSString * platform;                          //@synthesize platform=_platform - In the implementation block
+(void)initialize;
+(id)validatePlatformString:(id)arg1 ;
+(id)versionForMajor:(unsigned long long)arg1 minor:(unsigned long long)arg2 platform:(id)arg3 ;
+(id)versionForMajor:(unsigned long long)arg1 minor:(unsigned long long)arg2 ;
+(id)versionFromArchivalRepresentation:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(long long)compare:(id)arg1 ;
-(NSString *)platform;
-(unsigned long long)majorVersion;
-(unsigned long long)minorVersion;
-(void)setMinorVersion:(unsigned long long)arg1 ;
-(id)initWithMajor:(unsigned long long)arg1 minor:(unsigned long long)arg2 platform:(id)arg3 ;
-(id)archivalRepresentation;
-(BOOL)isEqualToAdjustmentVersion:(id)arg1 ;
@end
