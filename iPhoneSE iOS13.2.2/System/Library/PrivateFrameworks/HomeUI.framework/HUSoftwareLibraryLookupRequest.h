/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:36 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HUSoftwareLibraryLookupRequest : NSObject <NSCopying> {

	NSString* _bundleID;
	NSString* _storeID;

}

@property (nonatomic,readonly) NSString * bundleID;              //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) NSString * storeID;               //@synthesize storeID=_storeID - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)bundleID;
-(NSString *)storeID;
-(id)initWithBundleID:(id)arg1 storeID:(id)arg2 ;
@end
