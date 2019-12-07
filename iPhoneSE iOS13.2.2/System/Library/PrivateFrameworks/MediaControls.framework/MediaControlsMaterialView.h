/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:16 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MTVisualStylingProviding.h>

@class UIView, NSString;

@interface MediaControlsMaterialView : UIView <MTVisualStylingProviding> {

	UIView* _backgroundView;
	UIView* _highlightView;
	BOOL _highlighted;

}

@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;              //@synthesize highlighted=_highlighted - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(id)visualStylingProviderForCategory:(long long)arg1 ;
@end
