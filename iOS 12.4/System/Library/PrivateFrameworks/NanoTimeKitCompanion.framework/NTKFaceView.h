/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:26 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PUICCrownInputSequencerDelegate.h>
#import <libobjc.A.dylib/NTKTimeTravelModuleViewTapClient.h>
#import <libobjc.A.dylib/NTKContainerViewLayoutDelegate.h>
#import <libobjc.A.dylib/NTKComplicationDisplayWrapperViewAnimationDelegate.h>
#import <libobjc.A.dylib/NTKClockIconZoomAnimator.h>
#import <libobjc.A.dylib/NTKTimeView.h>
#import <libobjc.A.dylib/NTKClockHardwareInput.h>

@protocol NTKFaceViewDelegate, NTKTimeView;
@class NSTimer, NSDate, NTKTimeTravelModuleView, UIView, UIImage, NTKExtraLargeTimeView, NSMutableDictionary, NSMutableSet, NSString, NTKContainerView, CAFilter, CLKDevice, NTKFaceEditView, NTKClockIconView;

@interface NTKFaceView : UIView <PUICCrownInputSequencerDelegate, NTKTimeTravelModuleViewTapClient, NTKContainerViewLayoutDelegate, NTKComplicationDisplayWrapperViewAnimationDelegate, NTKClockIconZoomAnimator, NTKTimeView, NTKClockHardwareInput> {

	double _accumulatedTimeTravelEntryRotation;
	NSTimer* _accumulateTimeTravelEntryRotationTimeoutTimer;
	NSTimer* _fastCrownModeTimeoutTimer;
	BOOL _fastCrownMode;
	BOOL _transitioningBetweenLiveAndScrubbing;
	BOOL _wasScrubbingAtStartOfTransition;
	BOOL _canHandleHardwareEvents;
	NSDate* _timeTravelEnterDate;
	NSDate* _scrubDate;
	NTKTimeTravelModuleView* _timeTravelModuleView;
	UIView* _timeTravelCaptionView;
	UIImage* _timeTravelCaptionImage;
	double _timeTravelDistanceToYesterdayStart;
	double _timeTravelDistanceToTomorrowEnd;
	NSDate* _yesterdayStart;
	NSDate* _tomorrowEnd;
	NSTimer* _crownIdleTimer;
	double _lastCrownOffset;
	NSDate* _aggdTimeTravelSessionStart;
	double _aggdTimeTravelMaximumOffset;
	BOOL _statusIconVisible;
	NTKExtraLargeTimeView* _sensitiveUIShieldView;
	NSMutableDictionary* _complicationDisplayWrappers;
	NSMutableDictionary* _complicationLayouts;
	NSMutableDictionary* _complicationPickerViews;
	NSMutableDictionary* _editConfigurations;
	NSMutableSet* _hiddenComplicationSlots;
	NSString* _timeTravelCaptionKey;
	CGSize _boundsSizeForComputedLayouts;
	NTKContainerView* _foregroundContainerView;
	NSDate* _overrideDate;
	BOOL _needsRender;
	BOOL _needsImageQueueDiscardOnRender;
	BOOL _needsTraceOnRender;
	BOOL _removedFromWindowDuringThisTransaction;
	BOOL _isBackgrounded;
	BOOL _renderWasIgnored;
	BOOL _unadornedSnapshotRemoved;
	float _complicationEditingSaturationValue;
	CAFilter* _complicationEditingSaturationFilter;
	BOOL _shouldShowUnsnapshotableContent;
	BOOL _showsCanonicalContent;
	BOOL _showContentForUnadornedSnapshot;
	BOOL _showsLockedUI;
	BOOL _zooming;
	BOOL _everyComplicationHidden;
	BOOL _frozen;
	BOOL _slow;
	BOOL _orbing;
	BOOL _complicationsShowEditingContent;
	BOOL _timeScrubbing;
	BOOL _editing;
	long long _faceStyle;
	CLKDevice* _device;
	NSString* _clientIdentifier;
	long long _dataMode;
	id<NTKFaceViewDelegate> _delegate;
	NTKFaceEditView* _editView;
	UIView* _unadornedSnapshotView;
	NTKClockIconView* _zoomingIconView;
	double _minIconDiameter;
	double _maxIconDiameter;
	NSString* _resourceDirectory;
	NSString* _selectedComplicationSlot;
	long long _detailMode;
	UIView*<NTKTimeView> _timeView;
	long long _fromEditMode;
	long long _toEditMode;
	double _editModeTransitionFraction;

}

@property (assign,getter=isEveryComplicationHidden,nonatomic) BOOL everyComplicationHidden;              //@synthesize everyComplicationHidden=_everyComplicationHidden - In the implementation block
@property (nonatomic,copy) NSString * clientIdentifier;                                                  //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,retain) UIView*<NTKTimeView> timeView;                                              //@synthesize timeView=_timeView - In the implementation block
@property (nonatomic,readonly) UIView * foregroundContainerView;                                         //@synthesize foregroundContainerView=_foregroundContainerView - In the implementation block
@property (nonatomic,readonly) BOOL editing;                                                             //@synthesize editing=_editing - In the implementation block
@property (nonatomic,readonly) long long fromEditMode;                                                   //@synthesize fromEditMode=_fromEditMode - In the implementation block
@property (nonatomic,readonly) long long toEditMode;                                                     //@synthesize toEditMode=_toEditMode - In the implementation block
@property (nonatomic,readonly) double editModeTransitionFraction;                                        //@synthesize editModeTransitionFraction=_editModeTransitionFraction - In the implementation block
@property (nonatomic,readonly) double alphaForDimmedState; 
@property (nonatomic,readonly) NSDate * currentDisplayDate; 
@property (nonatomic,readonly) long long faceStyle;                                                      //@synthesize faceStyle=_faceStyle - In the implementation block
@property (nonatomic,readonly) CLKDevice * device;                                                       //@synthesize device=_device - In the implementation block
@property (assign,nonatomic) BOOL shouldShowUnsnapshotableContent;                                       //@synthesize shouldShowUnsnapshotableContent=_shouldShowUnsnapshotableContent - In the implementation block
@property (assign,nonatomic) long long dataMode;                                                         //@synthesize dataMode=_dataMode - In the implementation block
@property (assign,nonatomic) BOOL showsCanonicalContent;                                                 //@synthesize showsCanonicalContent=_showsCanonicalContent - In the implementation block
@property (assign,nonatomic) BOOL showContentForUnadornedSnapshot;                                       //@synthesize showContentForUnadornedSnapshot=_showContentForUnadornedSnapshot - In the implementation block
@property (assign,nonatomic) BOOL showsLockedUI;                                                         //@synthesize showsLockedUI=_showsLockedUI - In the implementation block
@property (assign,nonatomic,__weak) id<NTKFaceViewDelegate> delegate;                                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NTKFaceEditView * editView;                                                 //@synthesize editView=_editView - In the implementation block
@property (nonatomic,retain) UIView * unadornedSnapshotView;                                             //@synthesize unadornedSnapshotView=_unadornedSnapshotView - In the implementation block
@property (nonatomic,readonly) BOOL zooming;                                                             //@synthesize zooming=_zooming - In the implementation block
@property (nonatomic,readonly) NTKClockIconView * zoomingIconView;                                       //@synthesize zoomingIconView=_zoomingIconView - In the implementation block
@property (nonatomic,readonly) double minIconDiameter;                                                   //@synthesize minIconDiameter=_minIconDiameter - In the implementation block
@property (nonatomic,readonly) double maxIconDiameter;                                                   //@synthesize maxIconDiameter=_maxIconDiameter - In the implementation block
@property (nonatomic,copy) NSString * resourceDirectory;                                                 //@synthesize resourceDirectory=_resourceDirectory - In the implementation block
@property (assign,getter=isFrozen,nonatomic) BOOL frozen;                                                //@synthesize frozen=_frozen - In the implementation block
@property (assign,getter=isSlow,nonatomic) BOOL slow;                                                    //@synthesize slow=_slow - In the implementation block
@property (nonatomic,readonly) BOOL orbing;                                                              //@synthesize orbing=_orbing - In the implementation block
@property (assign,nonatomic) BOOL complicationsShowEditingContent;                                       //@synthesize complicationsShowEditingContent=_complicationsShowEditingContent - In the implementation block
@property (nonatomic,retain) NSString * selectedComplicationSlot;                                        //@synthesize selectedComplicationSlot=_selectedComplicationSlot - In the implementation block
@property (readonly) BOOL timeScrubbing;                                                                 //@synthesize timeScrubbing=_timeScrubbing - In the implementation block
@property (assign,nonatomic) long long detailMode;                                                       //@synthesize detailMode=_detailMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_swatchColorForColorOption:(id)arg1 forDevice:(id)arg2 ;
+(id)_swatchImageForColorOption:(id)arg1 forDevice:(id)arg2 ;
+(id)_swatchForEditModeDependsOnOptions:(long long)arg1 forDevice:(id)arg2 ;
+(void)_prewarmForDevice:(id)arg1 ;
+(id)newFaceViewOfStyle:(long long)arg1 forDevice:(id)arg2 ;
+(id)swatchForEditModeDependsOnOptions:(long long)arg1 forDevice:(id)arg2 ;
+(long long)numberOfDetailModesForFaceStyle:(long long)arg1 ;
+(id)newFaceViewOfStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3 ;
+(long long)_numberOfDetailModes;
-(NSString *)clientIdentifier;
-(CLKDevice *)device;
-(id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3 ;
-(BOOL)zooming;
-(void)_configureComplicationView:(id)arg1 forSlot:(id)arg2 ;
-(void)_loadSnapshotContentViews;
-(void)_unloadSnapshotContentViews;
-(void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3 ;
-(long long)dataMode;
-(id)complicationLayoutforSlot:(id)arg1 ;
-(void)_prepareWristRaiseAnimation;
-(void)_performWristRaiseAnimation;
-(id)optionForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(BOOL)showsCanonicalContent;
-(BOOL)showsLockedUI;
-(UIView *)foregroundContainerView;
-(id)detachedComplicationDisplayWrapperForSlot:(id)arg1 ;
-(void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_cleanupAfterEditing;
-(id)_detachedComplicationDisplays;
-(id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 ;
-(double)_verticalPaddingForStatusBar;
-(BOOL)_needsForegroundContainerView;
-(id)_additionalPrelaunchApplicationIdentifiers;
-(void)_loadLayoutRules;
-(BOOL)_wantsStatusBarHidden;
-(BOOL)_supportsTimeScrubbing;
-(BOOL)_usesCustomZoom;
-(void)_applyDataMode;
-(void)_handleWristRaiseScreenWake;
-(BOOL)presentedViewControllerShouldBecomeFirstResponder:(id)arg1 ;
-(void)_handleOrdinaryScreenWake;
-(void)_finalizeForSnapshotting:(/*^block*/id)arg1 ;
-(void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_cleanupAfterTransitionComplicationSlot:(id)arg1 selectedComplication:(id)arg2 ;
-(void)_applyShowsCanonicalContent;
-(void)_applyShowsLockedUI;
-(void)_becameActiveFace;
-(void)_becameInactiveFace;
-(void)_applyShowContentForUnadornedSnapshot;
-(id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1 ;
-(unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1 ;
-(void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5 ;
-(NSString *)resourceDirectory;
-(void)_prepareForEditing;
-(void)_startScrubbingAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_endScrubbingAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_applyFrozen;
-(void)_updateForResourceDirectoryChange:(id)arg1 ;
-(void)_layoutForegroundContainerView;
-(void)enumerateComplicationDisplayWrappersWithBlock:(/*^block*/id)arg1 ;
-(double)_editSpeedForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(void)_applySlow;
-(void)_prepareForOrb;
-(void)_cleanupAfterOrb:(BOOL)arg1 ;
-(BOOL)orbing;
-(void)_configureForEditMode:(long long)arg1 ;
-(void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3 ;
-(void)_setZoomFraction:(double)arg1 iconDiameter:(double)arg2 ;
-(void)_cleanupAfterZoom;
-(BOOL)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2 ;
-(long long)_complicationPickerStyleForSlot:(id)arg1 ;
-(double)_keylineCornerRadiusForComplicationSlot:(id)arg1 ;
-(id)customEditingViewController;
-(BOOL)timeScrubbing;
-(void)endScrubbingAnimated:(BOOL)arg1 ;
-(void)_scrubToDate:(id)arg1 animated:(BOOL)arg2 ;
-(void)setOverrideDate:(id)arg1 duration:(double)arg2 ;
-(void)endScrubbingAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)layoutComplicationViews;
-(id)complicationPickerViewForSlot:(id)arg1 ;
-(void)invalidateComplicationLayout;
-(void)cleanupAfterZoom;
-(void)prepareWristRaiseAnimation;
-(void)performWristRaiseAnimation;
-(UIEdgeInsets)_keylineLabelActiveAreaInsetsForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(id)normalComplicationDisplayWrapperForSlot:(id)arg1 ;
-(BOOL)showContentForUnadornedSnapshot;
-(BOOL)_canStartTimeScrubbing;
-(BOOL)_wantsTimeTravelStatusModule;
-(void)_prepareForStatusChange:(BOOL)arg1 ;
-(CGRect)_keylineFrameForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(id)keylineViewForComplicationSlot:(id)arg1 ;
-(id)_keylineViewForComplicationSlot:(id)arg1 ;
-(CGPoint)_timeTravelStatusModuleCenter;
-(BOOL)slotSupportsCurvedText:(id)arg1 ;
-(id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3 ;
-(BOOL)_wantsStatusBarIconShadow;
-(double)_timeTravelCaptionLabelMaxWidth;
-(void)_layoutTimeTravelCaptionView:(id)arg1 ;
-(id)_editOptionThatHidesAllComplications;
-(long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2 ;
-(void)setDataMode:(long long)arg1 ;
-(void)setShowsCanonicalContent:(BOOL)arg1 ;
-(BOOL)_slotSupportsCurvedText:(id)arg1 ;
-(long long)complicationPickerStyleForSlot:(id)arg1 ;
-(void)_renderSynchronouslyWithImageQueueDiscard:(BOOL)arg1 ;
-(void)_curvedComplicationCircleRadius:(double*)arg1 centerAngle:(double*)arg2 maxAngularWidth:(double*)arg3 circleCenter:(CGPoint*)arg4 interior:(BOOL*)arg5 forSlot:(id)arg6 ;
-(id)_curvedPickerMaskForSlot:(id)arg1 ;
-(long long)_keylineStyleForComplicationSlot:(id)arg1 ;
-(id)curvedPickerMaskForSlot:(id)arg1 ;
-(id)customEditOptionContainerViewForSlot:(id)arg1 ;
-(long long)faceStyle;
-(BOOL)_shouldHideUI;
-(double)verticalPaddingForStatusBar;
-(BOOL)wantsStatusBarIconShadow;
-(void)prepareForOrb;
-(void)cleanupAfterOrb:(BOOL)arg1 ;
-(void)setSlow:(BOOL)arg1 ;
-(id)blurSourceImage;
-(void)_prepareForSnapshotting;
-(void)setNeedsRender;
-(id)snapshotContainerView;
-(BOOL)supportsUnadornedSnapshot;
-(UIView *)unadornedSnapshotView;
-(void)setUnadornedSnapshotView:(UIView *)arg1 ;
-(void)loadContentToReplaceUnadornedSnapshot;
-(void)handleUnadornedSnapshotRemoved;
-(void)setShowContentForUnadornedSnapshot:(BOOL)arg1 ;
-(void)setShouldShowUnsnapshotableContent:(BOOL)arg1 ;
-(void)setShowsLockedUI:(BOOL)arg1 ;
-(BOOL)complicationIsHiddenAtSlot:(id)arg1 ;
-(void)prepareForEditing;
-(void)setEditView:(NTKFaceEditView *)arg1 ;
-(BOOL)keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1 ;
-(id)keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(unsigned long long)keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(UIEdgeInsets)keylineLabelActiveAreaInsetsForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(CGRect)keylineFrameForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(void)applyTransitionFraction:(double)arg1 fromComplication:(id)arg2 toComplication:(id)arg3 slot:(id)arg4 ;
-(void)setTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 customEditMode:(long long)arg4 slot:(id)arg5 ;
-(CGRect)keylineFrameForComplicationSlot:(id)arg1 selected:(BOOL)arg2 ;
-(void)cleanupAfterTransitionComplicationSlot:(id)arg1 selectedComplication:(id)arg2 ;
-(void)setOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(id)_complicationSlotsHiddenByCurrentConfiguration;
-(void)setComplicationHidden:(BOOL)arg1 atSlot:(id)arg2 ;
-(void)setResourceDirectory:(NSString *)arg1 ;
-(void)cleanupAfterTransitionToOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(BOOL)isEveryComplicationHidden;
-(unsigned long long)keylineLabelAlignmentForComplicationSlot:(id)arg1 ;
-(UIEdgeInsets)keylineLabelActiveAreaInsetsForComplicationAtSlot:(id)arg1 ;
-(void)cleanupAfterEditing;
-(void)setComplicationPickerView:(id)arg1 forSlot:(id)arg2 ;
-(void)curvedComplicationCircleRadius:(double*)arg1 centerAngle:(double*)arg2 maxAngularWidth:(double*)arg3 circleCenter:(CGPoint*)arg4 interior:(BOOL*)arg5 forSlot:(id)arg6 ;
-(void)setSelectedComplicationSlot:(NSString *)arg1 ;
-(unsigned long long)detentTypeForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(double)editSpeedForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(void)applyBreathingFraction:(double)arg1 forComplicationSlot:(id)arg2 ;
-(void)applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)applyRubberBandingFraction:(double)arg1 forComplicationSlot:(id)arg2 ;
-(void)applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(BOOL)wantsStatusBarHidden;
-(void)setNormalComplicationDisplayWrapper:(id)arg1 forSlot:(id)arg2 ;
-(id)layoutRuleForComplicationSlot:(id)arg1 inState:(long long)arg2 layoutOverride:(long long)arg3 ;
-(CGRect)frameForComplicationPickerViewForSlot:(id)arg1 ;
-(void)prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3 ;
-(BOOL)usesCustomZoom;
-(void)setZoomFraction:(double)arg1 iconDiameter:(double)arg2 ;
-(NTKClockIconView *)zoomingIconView;
-(double)minIconDiameter;
-(double)maxIconDiameter;
-(BOOL)_handlePhysicalButton:(unsigned long long)arg1 event:(unsigned long long)arg2 ;
-(void)handleWristRaiseScreenWake;
-(void)handleOrdinaryScreenWake;
-(void)setNextRenderIsFirstAfterWake;
-(void)prepareForStatusChange:(BOOL)arg1 ;
-(void)setDetachedComplicationDisplayWrapper:(id)arg1 forSlot:(id)arg2 ;
-(id)newLegacyComplicationViewForSlot:(id)arg1 family:(long long)arg2 complication:(id)arg3 ;
-(long long)legacyComplicationLayoutOverrideForSlot:(id)arg1 complication:(id)arg2 ;
-(void)configureComplicationViewDisplayWrapper:(id)arg1 forSlot:(id)arg2 ;
-(id)closestVisibleSlotToSlot:(id)arg1 editMode:(long long)arg2 ;
-(void)configureForEditMode:(long long)arg1 ;
-(void)configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3 ;
-(BOOL)_wantsOpportunisticLiveFaceLoading;
-(BOOL)shouldShowUnsnapshotableContent;
-(BOOL)_supportsUnadornedSnapshot;
-(id)swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3 ;
-(id)_complicationContainerViewForSlot:(id)arg1 ;
-(id)_complicationSlotsHiddenByEditOption:(id)arg1 ;
-(CGRect)_frameForComplicationDisplayWrapper:(id)arg1 inSlot:(id)arg2 ;
-(double)_minimumBreathingScaleForComplicationSlot:(id)arg1 ;
-(void)scrubToDate:(id)arg1 animated:(BOOL)arg2 ;
-(void)startScrubbingAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_didEnterBackground;
-(void)_willEnterForeground;
-(void)_cleanupAfterTransitionToOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_bringForegroundViewsToFront;
-(double)_timeTravelStatusModuleCaptionConstraintPadding;
-(void)_layoutTimeTravelStatusModule:(id)arg1 ;
-(void)_handleLocaleDidChange;
-(void)reloadSnapshotContentViews;
-(id)_timeTravelCaptionFontSizeOverrides;
-(void)_loadContentToReplaceUnadornedSnapshot;
-(UIEdgeInsets)_keylineLabelActiveAreaInsetsForComplicationAtSlot:(id)arg1 ;
-(double)editModeTransitionFraction;
-(long long)toEditMode;
-(long long)fromEditMode;
-(id)_customEditOptionContainerViewForSlot:(id)arg1 ;
-(BOOL)_wantsDimWithDesaturationFilterDuringComplicationEditing;
-(id)_additonalViewsToApplyDesaturationDuringComplicationEditing;
-(BOOL)complicationDisplayWrapperView:(id)arg1 shouldStartCustomDataAnimationFromEarlierView:(id)arg2 laterView:(id)arg3 isForward:(BOOL)arg4 ;
-(void)complicationDisplayWrapperView:(id)arg1 startCustomDataAnimationFromEarlierView:(id)arg2 laterView:(id)arg3 isForward:(BOOL)arg4 completionBlock:(/*^block*/id)arg5 ;
-(double)alphaForDimmedState;
-(NSDate *)currentDisplayDate;
-(void)layoutContainerView:(id)arg1 ;
-(UIEdgeInsets)timeTravelModuleTouchInsets;
-(void)performTimeTravelModuleTapAction;
-(void)_disableCrown;
-(void)_enableCrown;
-(unsigned long long)_detentTypeForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(long long)detailMode;
-(void)setDetailMode:(long long)arg1 ;
-(NTKFaceEditView *)editView;
-(void)_adjustUIForBoundsChange;
-(id)_timeTravelCaptionCacheKey;
-(void)_updateComplicationMaxSize;
-(void)_layoutComplicationViews;
-(void)_updateTimeOffset;
-(void)_updateStatusIconVisibility;
-(void)hideAppropriateComplicationsForCurrentConfiguration;
-(void)_updateMaxSizeForDisplayWrapper:(id)arg1 slot:(id)arg2 ;
-(void)_layoutComplicationViewForSlot:(id)arg1 ;
-(void)setNeedsRenderWithAdditionalWork:(/*^block*/id)arg1 ;
-(void)renderIfNeeded;
-(void)_setupComplicationViewsIfHidden;
-(void)_teardownComplicationViewsIfNeeded;
-(void)_setTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3 ;
-(void)_setComplicationAlphaForTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 customEditMode:(long long)arg4 slot:(id)arg5 ;
-(void)_updateSaturationForComplicationEditing;
-(void)shiftSelectedComplicationSlotIfHidden;
-(id)closestVisibleComplicationSlotToSlot:(id)arg1 ;
-(NSString *)selectedComplicationSlot;
-(void)_getKeylineFrame:(CGRect*)arg1 padding:(UIEdgeInsets*)arg2 forComplicationSlot:(id)arg3 selected:(BOOL)arg4 ;
-(CGAffineTransform)_displayTransformForComplicationSlot:(id)arg1 ;
-(id)_blurSourceImage;
-(id)_snapshotContainerView;
-(double)_alphaForComplicationSlot:(id)arg1 inEditOption:(id)arg2 ofEditMode:(long long)arg3 ;
-(void)_setComplicationEditingSaturationValue:(float)arg1 ;
-(id)_layoutRuleForComplicationSlot:(id)arg1 withOverride:(long long)arg2 inEditMode:(long long)arg3 ;
-(CGSize)_maxSizeForComplicationSlot:(id)arg1 layoutOverride:(long long)arg2 ;
-(void)_layoutComplicationViewWithWrapper:(id)arg1 forSlot:(id)arg2 ;
-(void)_didLayoutComplicationViews;
-(id)_createTimeTravelCaptionImage;
-(id)_timeTravelCaptionAttributedText;
-(id)_baseTimeTravelCaptionImageNameForEnglishOnly;
-(void)_resetSequencerBoundaries;
-(void)_applyTransitionFraction:(double)arg1 fromComplication:(id)arg2 toComplication:(id)arg3 slot:(id)arg4 ;
-(id)_allViewsWithComplicationEditingDesaturationFilter;
-(void)_addSaturationFilterToViews:(id)arg1 ;
-(BOOL)needsImageQueueDiscardOnRender;
-(void)setComplicationsShowEditingContent:(BOOL)arg1 ;
-(void)_setupTimeTravel;
-(void)startScrubbingAnimated:(BOOL)arg1 ;
-(void)_prepareScrubbingSequencerBoundaries;
-(void)setEveryComplicationHidden:(BOOL)arg1 ;
-(BOOL)complicationsShowEditingContent;
-(void)dealloc;
-(void)setDelegate:(id<NTKFaceViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<NTKFaceViewDelegate>)delegate;
-(void)setTimeOffset:(double)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(BOOL)editing;
-(void)setFrozen:(BOOL)arg1 ;
-(BOOL)_wheelChangedWithEvent:(id)arg1 ;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(UIView*<NTKTimeView>)timeView;
-(void)setTimeView:(UIView*<NTKTimeView>)arg1 ;
-(BOOL)isSlow;
-(BOOL)isFrozen;
@end
