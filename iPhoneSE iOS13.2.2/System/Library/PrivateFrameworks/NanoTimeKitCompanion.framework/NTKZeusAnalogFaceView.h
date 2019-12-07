/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:09 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKSpriteKitAnalogFaceView.h>

@class NTKZeusColorPalette, UIView, NTKZeusAnalogScene;

@interface NTKZeusAnalogFaceView : NTKSpriteKitAnalogFaceView {

	BOOL _isEditing;
	BOOL _isHandsVisibleInColorEditing;
	BOOL _isStatusBarIconShadowNeeded;
	NTKZeusColorPalette* _palette;
	UIView* _cornerView;
	CGRect _upperComplicationOverrideFrame;
	CGRect _lowerComplicationOverrideFrame;

}

@property (nonatomic,readonly) NTKZeusAnalogScene * analogScene; 
+(id)_swatchColorForColorOption:(id)arg1 forDevice:(id)arg2 ;
+(id)_swatchImageForColorOption:(id)arg1 forDevice:(id)arg2 ;
+(id)_swatchForEditModeDependsOnOptions:(long long)arg1 forDevice:(id)arg2 ;
+(id)_supportedComplicationSlots;
-(CGSize)_sceneSize;
-(void)setOverrideDate:(id)arg1 duration:(double)arg2 ;
-(id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3 ;
-(void)_loadSnapshotContentViews;
-(void)_unloadSnapshotContentViews;
-(id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3 ;
-(double)_verticalPaddingForStatusBar;
-(void)_prepareForStatusChange:(BOOL)arg1 ;
-(void)_configureForEditMode:(long long)arg1 ;
-(void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3 ;
-(void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5 ;
-(unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1 ;
-(void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 ;
-(BOOL)_needsForegroundContainerView;
-(void)_loadLayoutRules;
-(BOOL)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2 ;
-(long long)_complicationPickerStyleForSlot:(id)arg1 ;
-(void)_configureTimeView:(id)arg1 ;
-(BOOL)_wantsStatusBarIconShadow;
-(CGPoint)_timeTravelStatusModuleCenter;
-(double)_backgroundAlphaForEditMode:(long long)arg1 ;
-(void)_updateDateComplicationPositionIfNecessary;
-(void)_loadScene;
-(CGRect)_frameForComplicationDisplayWrapper:(id)arg1 inSlot:(id)arg2 ;
-(double)_secondHandAlphaForDensity:(unsigned long long)arg1 isEditing:(BOOL)arg2 ;
-(CGRect)_lowerComplicationFrameForStyle:(unsigned long long)arg1 ;
-(CGRect)_upperComplicationFrameForStyle:(unsigned long long)arg1 ;
-(void)_setStatusBarIconShadowNeeded:(BOOL)arg1 ;
-(double)_handAlphaForEditing:(BOOL)arg1 ;
-(double)_numbersAlphaForEditMode:(long long)arg1 ;
@end
