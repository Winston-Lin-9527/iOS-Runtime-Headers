/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:48 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, CNAvatarImageRenderer;

@interface MKPlaceReviewAvatarGenerator : NSObject {

	NSObject*<OS_dispatch_queue> _workQueue;
	NSMutableDictionary* _cachedMaskedImages;
	CNAvatarImageRenderer* _monogrammer;

}

@property (nonatomic,retain) CNAvatarImageRenderer * monogrammer;              //@synthesize monogrammer=_monogrammer - In the implementation block
-(void)monogramForReviewerName:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)avatarForReview:(id)arg1 completion:(/*^block*/id)arg2 ;
-(CNAvatarImageRenderer *)monogrammer;
-(void)setMonogrammer:(CNAvatarImageRenderer *)arg1 ;
-(id)init;
@end
