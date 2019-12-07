/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:28 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <libobjc.A.dylib/MSPFavorite.h>
#import <libobjc.A.dylib/MSPMutableObject.h>
#import <libobjc.A.dylib/MSPIdentifiableFavorite.h>

@class NSUUID, MSPBookmarkStorage, NSString;

@interface MSPMutableFavorite : NSObject <MSPFavorite, MSPMutableObject, MSPIdentifiableFavorite> {

	BOOL _immutable;
	NSUUID* _storageIdentifier;
	MSPBookmarkStorage* _bookmarkStorage;

}

@property (getter=_isImmutable,nonatomic,readonly) BOOL immutable;                //@synthesize immutable=_immutable - In the implementation block
@property (nonatomic,readonly) MSPBookmarkStorage * bookmarkStorage;              //@synthesize bookmarkStorage=_bookmarkStorage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * storageIdentifier;                        //@synthesize storageIdentifier=_storageIdentifier - In the implementation block
+(Class)mutableObjectClass;
+(id)mutableObjectProtocol;
+(Class)immutableObjectClass;
+(id)immutableObjectProtocol;
+(id)mutableFavoriteForBookmarkStorage:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)debugTitle;
-(NSUUID *)storageIdentifier;
-(BOOL)isUserVisibleDuplicateOfFavorite:(id)arg1 ;
-(void)ifPlace:(/*^block*/id)arg1 ifRoute:(/*^block*/id)arg2 ifRegion:(/*^block*/id)arg3 ifTransitLine:(/*^block*/id)arg4 ;
-(id)transferToImmutableIfValidWithError:(out id*)arg1 ;
-(id)copyIfValidWithError:(out id*)arg1 ;
-(void)_noteWillMutate;
-(void)_markImmutable;
-(BOOL)_isImmutable;
-(MSPBookmarkStorage *)bookmarkStorage;
-(id)abridgedBookmarkStorageForSpotlightStorage;
-(id)initWithBookmarkStorage:(id)arg1 ;
-(void)ifMutablePlace:(/*^block*/id)arg1 ifMutableRoute:(/*^block*/id)arg2 ifMutableRegion:(/*^block*/id)arg3 ifMutableTransitLine:(/*^block*/id)arg4 ;
-(id)persisterOnlyBookmarkStorage;
@end
