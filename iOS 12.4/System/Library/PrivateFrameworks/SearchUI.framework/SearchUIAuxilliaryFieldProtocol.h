/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:45 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class SFRichText, SFActionItem, NSString, SFCard, SFSearchResult, SFImage;


@protocol SearchUIAuxilliaryFieldProtocol <NSObject>
@property (readonly) SFRichText * title; 
@property (readonly) SFActionItem * action; 
@property (readonly) NSString * auxiliaryTopText; 
@property (readonly) NSString * auxiliaryMiddleText; 
@property (readonly) NSString * auxiliaryBottomText; 
@property (readonly) int auxiliaryBottomTextColor; 
@property (readonly) SFCard * card; 
@property (readonly) SFSearchResult * identifyingResult; 
@property (readonly) SFImage * thumbnail; 
@required
-(SFSearchResult *)identifyingResult;
-(NSString *)auxiliaryTopText;
-(NSString *)auxiliaryBottomText;
-(NSString *)auxiliaryMiddleText;
-(int)auxiliaryBottomTextColor;
-(SFCard *)card;
-(SFRichText *)title;
-(SFActionItem *)action;
-(SFImage *)thumbnail;

@end
