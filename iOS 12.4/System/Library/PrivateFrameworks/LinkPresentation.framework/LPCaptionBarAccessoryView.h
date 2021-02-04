/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:38 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <LinkPresentation/LPComponentView.h>

@class UIView;

@interface LPCaptionBarAccessoryView : LPComponentView {

	long long _type;
	CGSize _size;
	UIView* _accessoryView;
	BOOL _shouldFlipHorizontally;

}

@property (nonatomic,readonly) CGSize size;              //@synthesize size=_size - In the implementation block
-(void)layoutComponentView;
-(void)componentViewDidMoveToWindow;
-(id)_createImageViewWithImage:(id)arg1 ;
-(id)initWithType:(long long)arg1 side:(long long)arg2 ;
-(CGSize)size;
-(id)init;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end
