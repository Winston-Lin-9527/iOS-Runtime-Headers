/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:48 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreIndoor/CoreIndoor-Structs.h>
@class NSURL;

@interface CLAvailabilityTileParser : NSObject {

	shared_ptr<AvailabilityTile>* _avlTile;
	NSURL* _path;

}

@property (nonatomic,readonly) NSURL * path;              //@synthesize path=_path - In the implementation block
+(void)_setParamOverrides:(LocalizerParameters*)arg1 fromDict:(id)arg2 ;
+(BOOL)generateAvlTileFromJSON:(id)arg1 atPath:(id)arg2 ;
-(unsigned long long)venuesCount;
-(BOOL)tileIsOpenForIncrementalIO;
-(BOOL)_openTileFileForIncrementalIO;
-(int)numTotalExpectedExteriorsInVenues;
-(int)numVenuesExpected;
-(BOOL)getNextVenueBoundsIncrementally:(VenueBounds*)arg1 ;
-(id)initWithEmptyTile;
-(id)initWithTilePathIncrementalIO:(id)arg1 ;
-(AvailabilityTile*)getAvlTile;
-(id)init;
-(NSURL *)path;
@end
