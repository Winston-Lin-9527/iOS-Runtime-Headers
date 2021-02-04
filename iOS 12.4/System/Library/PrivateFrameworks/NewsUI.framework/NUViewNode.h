/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:29 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsUI/NewsUI-Structs.h>
#import <NewsUI/NUNode.h>

@class UIView;

@interface NUViewNode : NUNode {

	UIView* _view;
	Class _viewClass;
	CGRect _frame;
	CGRect _bounds;

}

@property (nonatomic,readonly) Class viewClass;              //@synthesize viewClass=_viewClass - In the implementation block
@property (nonatomic,retain) UIView * view;                  //@synthesize view=_view - In the implementation block
-(void)removeFromSupernode;
-(void)resolveViewsInView:(id)arg1 ;
-(id)initWithViewClass:(Class)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(CGRect)bounds;
-(id)description;
-(UIView *)view;
-(void)setBounds:(CGRect)arg1 ;
-(void)setView:(UIView *)arg1 ;
-(CGRect)frame;
-(id)initWithView:(id)arg1 ;
-(Class)viewClass;
@end
