/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:48 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <ShareSheet/UIActivityItemProvider.h>

@class NSURL, NSString, NSSet, WKWebView;

@interface _SFActivityItemProvider : UIActivityItemProvider {

	NSURL* _url;
	NSString* _pageTitle;
	NSSet* _excludedActivityTypes;
	/*^block*/id _thumbnailHandler;
	WKWebView* _webView;

}

@property (nonatomic,retain) NSURL * url;                              //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSString * pageTitle;                       //@synthesize pageTitle=_pageTitle - In the implementation block
@property (nonatomic,copy) NSSet * excludedActivityTypes;              //@synthesize excludedActivityTypes=_excludedActivityTypes - In the implementation block
@property (nonatomic,copy) id thumbnailHandler;                        //@synthesize thumbnailHandler=_thumbnailHandler - In the implementation block
@property (assign,nonatomic,__weak) WKWebView * webView;               //@synthesize webView=_webView - In the implementation block
-(id)item;
-(void)main;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(WKWebView *)webView;
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(CGSize)arg3 ;
-(id)initWithPlaceholderItem:(id)arg1 ;
-(void)setWebView:(WKWebView *)arg1 ;
-(void)setExcludedActivityTypes:(NSSet *)arg1 ;
-(NSSet *)excludedActivityTypes;
-(NSString *)pageTitle;
-(void)setPageTitle:(NSString *)arg1 ;
-(id)initWithURL:(id)arg1 pageTitle:(id)arg2 webView:(id)arg3 ;
-(id)initWithPlaceholderItem:(id)arg1 URL:(id)arg2 pageTitle:(id)arg3 webView:(id)arg4 ;
-(id)thumbnailHandler;
-(void)setThumbnailHandler:(id)arg1 ;
@end
