/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:36 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TVPDownloadDelegate.h>
#import <libobjc.A.dylib/TVPDownloadSessionDelegate.h>

@class NSMutableArray, NSPointerArray, NSArray, NSString;

@interface VUIDownloadManager : NSObject <TVPDownloadDelegate, TVPDownloadSessionDelegate> {

	BOOL _dialogBeingPresented;
	NSMutableArray* _mutableDownloads;
	NSMutableArray* _failedDownloadsNeedingDialog;
	NSPointerArray* _delegates;

}

@property (nonatomic,retain) NSMutableArray * mutableDownloads;                          //@synthesize mutableDownloads=_mutableDownloads - In the implementation block
@property (nonatomic,retain) NSMutableArray * failedDownloadsNeedingDialog;              //@synthesize failedDownloadsNeedingDialog=_failedDownloadsNeedingDialog - In the implementation block
@property (assign,nonatomic) BOOL dialogBeingPresented;                                  //@synthesize dialogBeingPresented=_dialogBeingPresented - In the implementation block
@property (nonatomic,retain) NSPointerArray * delegates;                                 //@synthesize delegates=_delegates - In the implementation block
@property (nonatomic,readonly) NSArray * downloads; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(NSPointerArray *)delegates;
-(void)setDelegates:(NSPointerArray *)arg1 ;
-(NSArray *)downloads;
-(void)download:(id)arg1 willDownloadToURL:(id)arg2 ;
-(void)download:(id)arg1 didChangeStateTo:(long long)arg2 ;
-(void)download:(id)arg1 didReceiveTaskIdentifier:(id)arg2 ;
-(void)downloadSession:(id)arg1 didAddRestoredDownloads:(id)arg2 ;
-(void)_activeAccountDidChange:(id)arg1 ;
-(void)initializeDownloadManager;
-(id)existingDownloadForCanonicalID:(id)arg1 ;
-(void)addDownloadForVideoManagedObject:(id)arg1 ;
-(void)cancelDownloadForCanonicalID:(id)arg1 ;
-(void)_isPlaybackUIBeingShownDidChange:(id)arg1 ;
-(NSMutableArray *)mutableDownloads;
-(void)_notifyDelegatesThatDownloadsDidChange;
-(void)_loadImageForVideoManagedObject:(id)arg1 imageType:(unsigned long long)arg2 ;
-(void)_loadImageForSeriesManagedObject:(id)arg1 imageType:(unsigned long long)arg2 ;
-(NSMutableArray *)failedDownloadsNeedingDialog;
-(BOOL)dialogBeingPresented;
-(void)_showDownloadErrorDialogIfAppropriate;
-(id)_alertControllerForFailedDownloads:(id)arg1 ;
-(void)setDialogBeingPresented:(BOOL)arg1 ;
-(void)_loadImageForImageInfoManagedObject:(id)arg1 imageType:(unsigned long long)arg2 ;
-(void)setMutableDownloads:(NSMutableArray *)arg1 ;
-(void)setFailedDownloadsNeedingDialog:(NSMutableArray *)arg1 ;
@end
