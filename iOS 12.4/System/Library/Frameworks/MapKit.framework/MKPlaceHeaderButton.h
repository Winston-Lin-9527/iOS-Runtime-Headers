/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:52 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIButton.h>
#import <libobjc.A.dylib/_MKPlaceActionButtonControllerProtocol.h>

@class NSLayoutConstraint, _MKPlaceActionButtonController, NSString;

@interface MKPlaceHeaderButton : UIButton <_MKPlaceActionButtonControllerProtocol> {

	unsigned long long _buttonType;
	BOOL _primary;
	NSLayoutConstraint* _heightConstraint;
	BOOL _highlighted;
	_MKPlaceActionButtonController* _buttonController;

}

@property (assign,nonatomic,__weak) _MKPlaceActionButtonController * buttonController;              //@synthesize buttonController=_buttonController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_contentSizeDidChange;
-(void)infoCardThemeChanged:(id)arg1 ;
-(void)placeActionbuttonControllerTextDidChanged:(id)arg1 ;
-(id)initWithPrimaryType:(unsigned long long)arg1 ;
-(void)setButtonController:(_MKPlaceActionButtonController *)arg1 ;
-(void)applyButtonDefaultConfiguration;
-(id)_primaryButtonTextColor;
-(id)_primaryButtonColor;
-(void)setPrimaryButtonTitle:(id)arg1 ;
-(void)_updateStylePrimaryButton;
-(void)_updateStyleNonPrimaryButton;
-(void)setAttributesWithTitle:(id)arg1 subTitle:(id)arg2 ;
-(_MKPlaceActionButtonController *)buttonController;
-(id)init;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(CGRect)titleRectForContentRect:(CGRect)arg1 ;
-(void)buttonSelected:(id)arg1 ;
@end
