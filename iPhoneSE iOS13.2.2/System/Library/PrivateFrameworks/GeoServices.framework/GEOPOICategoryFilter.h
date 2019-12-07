/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:32 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOSearchFilter.h>
#import <libobjc.A.dylib/GEOAutocompleteFilter.h>

@class NSArray;

@interface GEOPOICategoryFilter : NSObject <GEOSearchFilter, GEOAutocompleteFilter> {

	NSArray* _categoriesToInclude;
	NSArray* _categoriesToExclude;

}

@property (nonatomic,readonly) NSArray * categoriesToInclude;              //@synthesize categoriesToInclude=_categoriesToInclude - In the implementation block
@property (nonatomic,readonly) NSArray * categoriesToExclude;              //@synthesize categoriesToExclude=_categoriesToExclude - In the implementation block
+(id)filterIncludingAllCategories;
+(id)filterExcludingAllCategories;
-(id)initWithCategoriesToInclude:(id)arg1 categoriesToExclude:(id)arg2 ;
-(BOOL)applyToSearchParameters:(id)arg1 error:(id*)arg2 ;
-(BOOL)applyToAutocompleteParameters:(id)arg1 error:(id*)arg2 ;
-(BOOL)shouldDisplayPOIWithType:(int)arg1 ;
-(NSArray *)categoriesToInclude;
-(NSArray *)categoriesToExclude;
@end
