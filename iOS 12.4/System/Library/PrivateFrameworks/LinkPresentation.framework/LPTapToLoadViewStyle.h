/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:38 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIColor, LPTextViewStyle, LPPointUnit;

@interface LPTapToLoadViewStyle : NSObject {

	UIColor* _backgroundColor;
	UIColor* _tapHighlightColor;
	LPTextViewStyle* _caption;
	LPPointUnit* _width;
	LPPointUnit* _height;

}

@property (nonatomic,retain) UIColor * backgroundColor;                //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * tapHighlightColor;              //@synthesize tapHighlightColor=_tapHighlightColor - In the implementation block
@property (nonatomic,readonly) LPTextViewStyle * caption;              //@synthesize caption=_caption - In the implementation block
@property (nonatomic,retain) LPPointUnit * width;                      //@synthesize width=_width - In the implementation block
@property (nonatomic,retain) LPPointUnit * height;                     //@synthesize height=_height - In the implementation block
-(LPTextViewStyle *)caption;
-(void)setTapHighlightColor:(UIColor *)arg1 ;
-(id)initWithPlatform:(long long)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(LPPointUnit *)width;
-(void)setWidth:(LPPointUnit *)arg1 ;
-(void)setHeight:(LPPointUnit *)arg1 ;
-(LPPointUnit *)height;
-(UIColor *)tapHighlightColor;
@end
