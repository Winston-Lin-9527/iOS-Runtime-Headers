/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:38 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/LPLinkPresentationPropertyProvider.h>

@class LPCaptionBarPresentationProperties, NSString, LPImage, LPVideo, UIColor;

@interface LPAppLinkPresentationProperties : NSObject <LPLinkPresentationPropertyProvider> {

	LPCaptionBarPresentationProperties* _captionBar;
	LPCaptionBarPresentationProperties* _mediaTopCaptionBar;
	LPCaptionBarPresentationProperties* _mediaBottomCaptionBar;
	NSString* _topCaption;
	NSString* _bottomCaption;
	NSString* _trailingTopCaption;
	NSString* _trailingBottomCaption;
	NSString* _mediaTopCaption;
	NSString* _mediaBottomCaption;
	LPImage* _image;
	LPImage* _icon;
	LPVideo* _video;
	UIColor* _backgroundColor;

}

@property (nonatomic,retain) LPCaptionBarPresentationProperties * captionBar;                         //@synthesize captionBar=_captionBar - In the implementation block
@property (nonatomic,retain) LPCaptionBarPresentationProperties * mediaTopCaptionBar;                 //@synthesize mediaTopCaptionBar=_mediaTopCaptionBar - In the implementation block
@property (nonatomic,retain) LPCaptionBarPresentationProperties * mediaBottomCaptionBar;              //@synthesize mediaBottomCaptionBar=_mediaBottomCaptionBar - In the implementation block
@property (nonatomic,copy) NSString * topCaption;                                                     //@synthesize topCaption=_topCaption - In the implementation block
@property (nonatomic,copy) NSString * bottomCaption;                                                  //@synthesize bottomCaption=_bottomCaption - In the implementation block
@property (nonatomic,copy) NSString * trailingTopCaption;                                             //@synthesize trailingTopCaption=_trailingTopCaption - In the implementation block
@property (nonatomic,copy) NSString * trailingBottomCaption;                                          //@synthesize trailingBottomCaption=_trailingBottomCaption - In the implementation block
@property (nonatomic,copy) NSString * mediaTopCaption;                                                //@synthesize mediaTopCaption=_mediaTopCaption - In the implementation block
@property (nonatomic,copy) NSString * mediaBottomCaption;                                             //@synthesize mediaBottomCaption=_mediaBottomCaption - In the implementation block
@property (nonatomic,retain) LPImage * image;                                                         //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) LPImage * icon;                                                          //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) LPVideo * video;                                                         //@synthesize video=_video - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                                               //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(LPVideo *)video;
-(void)setVideo:(LPVideo *)arg1 ;
-(NSString *)topCaption;
-(NSString *)bottomCaption;
-(NSString *)trailingTopCaption;
-(NSString *)trailingBottomCaption;
-(LPCaptionBarPresentationProperties *)captionBar;
-(NSString *)mediaTopCaption;
-(NSString *)mediaBottomCaption;
-(LPCaptionBarPresentationProperties *)mediaBottomCaptionBar;
-(LPCaptionBarPresentationProperties *)mediaTopCaptionBar;
-(void)setCaptionBar:(LPCaptionBarPresentationProperties *)arg1 ;
-(void)setMediaBottomCaptionBar:(LPCaptionBarPresentationProperties *)arg1 ;
-(void)setMediaTopCaptionBar:(LPCaptionBarPresentationProperties *)arg1 ;
-(void)setTopCaption:(NSString *)arg1 ;
-(void)setBottomCaption:(NSString *)arg1 ;
-(void)setTrailingTopCaption:(NSString *)arg1 ;
-(void)setTrailingBottomCaption:(NSString *)arg1 ;
-(void)setMediaTopCaption:(NSString *)arg1 ;
-(void)setMediaBottomCaption:(NSString *)arg1 ;
-(void)setImage:(LPImage *)arg1 ;
-(LPImage *)image;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(long long)style;
-(UIColor *)backgroundColor;
-(LPImage *)icon;
-(void)setIcon:(LPImage *)arg1 ;
@end
