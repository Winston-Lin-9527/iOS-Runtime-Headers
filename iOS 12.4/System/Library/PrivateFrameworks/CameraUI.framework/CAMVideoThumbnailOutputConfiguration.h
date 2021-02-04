/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:29 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CameraUI/CameraUI-Structs.h>
@class NSArray;

@interface CAMVideoThumbnailOutputConfiguration : NSObject {

	NSArray* _filters;
	CGSize _thumbnailSize;

}

@property (nonatomic,readonly) CGSize thumbnailSize;              //@synthesize thumbnailSize=_thumbnailSize - In the implementation block
@property (nonatomic,readonly) NSArray * filters;                 //@synthesize filters=_filters - In the implementation block
-(id)initWithThumbnailSize:(CGSize)arg1 filters:(id)arg2 ;
-(NSArray *)filters;
-(id)initWithMode:(long long)arg1 ;
-(CGSize)thumbnailSize;
@end
