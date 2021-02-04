/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:54 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosEditUI/PhotosEditUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol PUPhotoEditResourceLoaderDelegate;
@interface PUPhotoEditResourceLoadRequest : NSObject <NSCopying> {

	BOOL _requireLocalResources;
	BOOL _requireAdjustments;
	BOOL _assetLoadingAsRaw;
	id<PUPhotoEditResourceLoaderDelegate> _delegate;
	long long _version;
	long long __resolvedVersion;
	CGSize _targetSize;

}

@property (assign,setter=_setResolvedVersion:,nonatomic) long long _resolvedVersion;              //@synthesize _resolvedVersion=__resolvedVersion - In the implementation block
@property (assign,nonatomic) BOOL assetLoadingAsRaw;                                              //@synthesize assetLoadingAsRaw=_assetLoadingAsRaw - In the implementation block
@property (assign,nonatomic) BOOL requireLocalResources;                                          //@synthesize requireLocalResources=_requireLocalResources - In the implementation block
@property (assign,nonatomic) BOOL requireAdjustments;                                             //@synthesize requireAdjustments=_requireAdjustments - In the implementation block
@property (assign,nonatomic,__weak) id<PUPhotoEditResourceLoaderDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long version;                                                   //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) CGSize targetSize;                                                   //@synthesize targetSize=_targetSize - In the implementation block
-(void)setRequireAdjustments:(BOOL)arg1 ;
-(void)setRequireLocalResources:(BOOL)arg1 ;
-(BOOL)assetLoadingAsRaw;
-(BOOL)requireLocalResources;
-(BOOL)requireAdjustments;
-(void)_setResolvedVersion:(long long)arg1 ;
-(BOOL)_isWorkVersionResolved;
-(long long)_resolvedVersion;
-(void)_assertWorkVersionResolved;
-(long long)_imageRequestVersionWithAsset:(id)arg1 ;
-(long long)_videoRequestVersion;
-(BOOL)_needsLoadAdjustments;
-(void)_resolveVersionIfNeededWithAdjustmentsResult:(id)arg1 ;
-(id)_adjustmentsRequestOptions;
-(id)_imageRequestOptionsWithAsset:(id)arg1 ;
-(id)_videoRequestOptionsWithAsset:(id)arg1 ;
-(void)setAssetLoadingAsRaw:(BOOL)arg1 ;
-(void)setDelegate:(id<PUPhotoEditResourceLoaderDelegate>)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<PUPhotoEditResourceLoaderDelegate>)delegate;
-(void)setVersion:(long long)arg1 ;
-(long long)version;
-(CGSize)targetSize;
-(void)setTargetSize:(CGSize)arg1 ;
@end
