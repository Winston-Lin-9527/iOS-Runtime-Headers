/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:07 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSURL, UIColor;


@protocol QLPreviewItemPrivateProtocol <QLPreviewItem>
@property (nonatomic,readonly) NSString * previewItemContentType; 
@property (readonly) NSURL * previewItemURLForDisplay; 
@property (nonatomic,readonly) BOOL isPromisedItem; 
@property (readonly) double autoPlaybackPosition; 
@property (readonly) UIColor * backgroundColorOverride; 
@property (readonly) BOOL wantsDefaultMediaPlayer; 
@property (readonly) NSString * MIMEType; 
@optional
-(UIColor *)backgroundColorOverride;
-(BOOL)wantsDefaultMediaPlayer;
-(double)autoPlaybackPosition;
-(BOOL)isPromisedItem;
-(NSString *)previewItemContentType;
-(NSURL *)previewItemURLForDisplay;
-(NSString *)MIMEType;

@end
