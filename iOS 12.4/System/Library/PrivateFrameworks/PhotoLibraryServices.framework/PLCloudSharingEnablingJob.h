/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:16 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@interface PLCloudSharingEnablingJob : PLCloudSharingJob {

	BOOL _enableSharing;

}

@property (assign,nonatomic) BOOL enableSharing;              //@synthesize enableSharing=_enableSharing - In the implementation block
+(void)enableCloudSharing:(BOOL)arg1 ;
+(void)deleteAllLocalSharedAlbumsInLibrary:(id)arg1 keepPendingAlbums:(BOOL)arg2 withReason:(id)arg3 ;
-(void)runDaemonSide;
-(void)encodeToXPCObject:(id)arg1 ;
-(id)initFromXPCObject:(id)arg1 connection:(id)arg2 ;
-(long long)daemonOperation;
-(BOOL)shouldArchiveXPCToDisk;
-(BOOL)enableSharing;
-(void)setEnableSharing:(BOOL)arg1 ;
-(id)description;
-(void)run;
@end
