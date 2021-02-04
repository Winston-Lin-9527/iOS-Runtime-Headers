/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:53 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosEditUI/PhotosEditUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UILabel;

@interface PUPhotoEditOverlayBadge : UIView {

	NSString* _text;
	UILabel* _label;
	UIEdgeInsets _insets;

}

@property (nonatomic,readonly) UILabel * label;                  //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets insets;              //@synthesize insets=_insets - In the implementation block
@property (nonatomic,copy) NSString * text;                      //@synthesize text=_text - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(NSString *)text;
-(CGSize)intrinsicContentSize;
-(void)_updateLabel;
-(UIEdgeInsets)insets;
-(UILabel *)label;
@end
