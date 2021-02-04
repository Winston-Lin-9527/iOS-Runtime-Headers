/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:51 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@class NSString;

@interface PGPlaceBusinessMemoryGenerator : PGFeaturedMemoryGenerator {

	NSString* _business;
	long long _year;

}

@property (assign,nonatomic) NSString * business;              //@synthesize business=_business - In the implementation block
@property (assign,nonatomic) long long year;                   //@synthesize year=_year - In the implementation block
-(NSString *)business;
-(void)setBusiness:(NSString *)arg1 ;
-(void)_enumeratePotentialMemoriesUsingBlock:(/*^block*/id)arg1 ;
-(void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(id)_potentialMemoriesForDryTesting;
-(void)_potentialMemoriesWithBusinessNode:(id)arg1 inYear:(long long)arg2 result:(/*^block*/id)arg3 ;
-(long long)year;
-(void)setYear:(long long)arg1 ;
@end
