/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PLCloudPhotoLibraryHelper : NSObject
+(void)performOnceLibraryIsReadyForCPLManager:(/*^block*/id)arg1 ;
+(BOOL)shouldRepushVideoAssetsMetadataOnce;
+(void)setShouldRepushVideoAssetsMetadataOnce:(BOOL)arg1 ;
+(BOOL)shouldSendOptimizeFeedbackOnce;
+(void)setShouldSendOptimizeFeedbackOnce:(BOOL)arg1 ;
+(BOOL)_isAssetsdReadyForCPLManager;
+(void)_stopWaitingForLibraryToBeReadyForCPLManager;
+(void)disableCPL:(/*^block*/id)arg1 ;
+(void)processCloudPhotosLibraryStateChange:(BOOL)arg1 ;
+(void)pauseCloudPhotos:(BOOL)arg1 reason:(short)arg2 ;
+(void)enableCPL:(/*^block*/id)arg1 ;
@end
