/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PLManagedAsset, NSManagedObjectContext, PLFaceRebuildHelper;

@interface PLCPLFaceRebuildSupport : NSObject {

	PLManagedAsset* _asset;
	NSManagedObjectContext* _context;
	PLFaceRebuildHelper* _rebuildHelper;
	int _detectedFaceCount;
	int _rejectedFaceCount;
	int _hiddenFaceCount;

}
+(void)rebuildDeferredFacesForAsset:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(id)initWithAsset:(id)arg1 managedObjectContext:(id)arg2 ;
-(void)rebuildAllFaces;
-(id)fetchDeferredFacesToRebuild;
-(void)rebuildFace:(id)arg1 ;
-(void)rebuildDetectedFace:(id)arg1 ;
-(void)rebuildRejectedFace:(id)arg1 ;
-(void)rebuildHiddenFace:(id)arg1 ;
-(id)fetchPersonForDeferredFace:(id)arg1 ;
-(void)dealloc;
@end
