/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:35 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/News/NewsUI2.framework/NewsUI2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TSBridgedNewsActivityFactoryType.h>

@interface NewsUI2.BridgedNewsActivityFactory : _UKNOWN_SUPERCLASS_ <TSBridgedNewsActivityFactoryType> {

	 tagService;
	 headlineService;
	 headlineModelFactory;

}
-(id)saved;
-(id)history;
-(id)forYouFeedWithFeedViewContext:(id)arg1 articleViewContext:(id)arg2 analyticsReferral:(id)arg3 ;
-(id)feedWithTag:(id)arg1 feedViewContext:(id)arg2 ;
-(void)feedWithTagIdentifier:(id)arg1 feedViewContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)headlineWithHeadlineProviding:(id)arg1 articleContext:(id)arg2 articlePresentationStyle:(long long)arg3 showShareSheet:(BOOL)arg4 forceArticleUpdate:(BOOL)arg5 ;
-(id)unrealizedHeadlineWithArticleID:(id)arg1 articleContext:(id)arg2 articlePresentationStyle:(long long)arg3 showShareSheet:(BOOL)arg4 forceArticleUpdate:(BOOL)arg5 ;
-(id)editorialArticleWithIdentifier:(id)arg1 articleViewContext:(id)arg2 ;
-(id)videoPlayerWithWidgetPlaylist:(id)arg1 analyticsReferral:(id)arg2 ;
-(id)videoPlayerWithArticleIDs:(id)arg1 analyticsReferral:(id)arg2 ;
-(id)pickYourFavorites;
-(id)previewWithHeadline:(id)arg1 ;
-(id)adPreviewWithIdentifier:(id)arg1 ;
-(id)manageSubscriptions;
-(id)webLinkWithURL:(id)arg1 ;
-(id)notifications;
@end
