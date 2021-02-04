/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:07 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIView;

@interface QLDetailItemViewControllerState : NSObject {

	BOOL _informationVisible;
	NSString* _actionButtonTitle;
	UIView* _actionButtonView;

}

@property (retain) NSString * actionButtonTitle;                              //@synthesize actionButtonTitle=_actionButtonTitle - In the implementation block
@property (retain) UIView * actionButtonView;                                 //@synthesize actionButtonView=_actionButtonView - In the implementation block
@property (getter=isInformationVisible) BOOL informationVisible;              //@synthesize informationVisible=_informationVisible - In the implementation block
+(id)detailItemViewControllerStateWithActionButtonTitle:(id)arg1 actionButtonView:(id)arg2 informationVisible:(BOOL)arg3 ;
-(void)setActionButtonTitle:(NSString *)arg1 ;
-(NSString *)actionButtonTitle;
-(void)setActionButtonView:(UIView *)arg1 ;
-(void)setInformationVisible:(BOOL)arg1 ;
-(UIView *)actionButtonView;
-(BOOL)isInformationVisible;
@end
