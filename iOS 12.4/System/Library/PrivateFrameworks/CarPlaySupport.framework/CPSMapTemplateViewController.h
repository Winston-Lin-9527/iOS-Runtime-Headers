/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:21 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarPlaySupport/CarPlaySupport-Structs.h>
#import <CarPlaySupport/CPSBaseTemplateViewController.h>
#import <libobjc.A.dylib/CARSessionObserving.h>
#import <libobjc.A.dylib/CPSButtonDelegate.h>
#import <libobjc.A.dylib/CPSTripInitiating.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/CPSPanEventDelegate.h>
#import <libobjc.A.dylib/CPSNavigationAlertQueueDelegate.h>
#import <libobjc.A.dylib/CPSNavigationDisplaying.h>
#import <libobjc.A.dylib/CARNavigationOwnershipManagerDelegate.h>
#import <libobjc.A.dylib/CPSEventObserverDelegate.h>
#import <libobjc.A.dylib/CPSApplicationStateObserving.h>
#import <libobjc.A.dylib/CPSLayoutHelperViewDelegate.h>
#import <libobjc.A.dylib/CPMapTemplateProviding.h>
#import <libobjc.A.dylib/CPSLinearFocusProviding.h>

@protocol CPSSafeAreaDelegate, UIFocusItem;
@class UIStackView, NSMutableArray, CPSNavigationCardView, CPSLayoutHelperView, NSLayoutConstraint, CPSTripPreviewsCardView, CARSessionStatus, CPSNavigator, UITapGestureRecognizer, UIPanGestureRecognizer, NSTimer, NSMutableSet, NSArray, CPTripPreviewTextConfiguration, CPSPanViewController, UIView, CPSNavigationAlertQueue, CPSApplicationStateMonitor, CPSNavigationETAView, NSMutableDictionary, CPSEventObserver, UIColor, _CPSFocusHoldingButton, UIFocusGuide, CPMapTemplate, NSString;

@interface CPSMapTemplateViewController : CPSBaseTemplateViewController <CARSessionObserving, CPSButtonDelegate, CPSTripInitiating, UIGestureRecognizerDelegate, CPSPanEventDelegate, CPSNavigationAlertQueueDelegate, CPSNavigationDisplaying, CARNavigationOwnershipManagerDelegate, CPSEventObserverDelegate, CPSApplicationStateObserving, CPSLayoutHelperViewDelegate, CPMapTemplateProviding, CPSLinearFocusProviding> {

	BOOL _previewOnlyRouteChoices;
	BOOL _autoHidesNavigationBar;
	BOOL _hidesButtonsWithNavigationBar;
	BOOL _demoAutoHideTimerDisabled;
	BOOL _applicationIsFrontmost;
	BOOL _rightHandDrive;
	BOOL _shouldRestoreFocusToNavigationBar;
	UIStackView* _trailingBottomStackView;
	unsigned long long _maximumMapButtonCount;
	NSMutableArray* _mapButtons;
	CPSNavigationCardView* _navigationCardView;
	CPSLayoutHelperView* _navigationCardViewLayoutHelperView;
	NSLayoutConstraint* _navigationCardViewLayoutViewBottomConstraint;
	NSLayoutConstraint* _navigationCardViewHeightConstraint;
	NSLayoutConstraint* _navigationCardViewBottomConstraint;
	NSLayoutConstraint* _navigationCardViewTopConstraint;
	CPSTripPreviewsCardView* _previewsView;
	CARSessionStatus* _sessionStatus;
	CPSNavigator* _navigator;
	UITapGestureRecognizer* _hideTapGestureRecognizer;
	UITapGestureRecognizer* _navBarHideTapGestureRecognizer;
	UIPanGestureRecognizer* _panGestureRecognizer;
	NSTimer* _autoHideTimer;
	NSMutableSet* _autoHideDisabledReasons;
	NSArray* _tripPreviews;
	CPTripPreviewTextConfiguration* _tripPreviewTextConfiguration;
	CPSPanViewController* _panViewController;
	UIView* _panContainerView;
	NSLayoutConstraint* _panContainerLeftConstraint;
	NSLayoutConstraint* _panContainerRightConstraint;
	CPSNavigationAlertQueue* _navigationAlertQueue;
	NSLayoutConstraint* _navigationAlertBottomConstraint;
	NSLayoutConstraint* _navigationAlertHeightConstraint;
	CPSApplicationStateMonitor* _applicationStateMonitor;
	CPSNavigationETAView* _navigationETAView;
	CPSLayoutHelperView* _navigationETAViewLayoutHelperView;
	NSLayoutConstraint* _navigationETAViewBottomConstraint;
	NSMutableDictionary* _lastTravelEstimatesByTrip;
	id<CPSSafeAreaDelegate> _safeAreaDelegate;
	CPSEventObserver* _eventObserver;
	id<UIFocusItem> _lastFocusedItem;
	id<UIFocusItem> _itemFocusedBeforeNavAlert;
	UIColor* _guidanceBackgroundColor;
	unsigned long long _tripEstimateStyle;
	_CPSFocusHoldingButton* _focusHoldingButton;
	UIFocusGuide* _focusHolderLeftFocusGuide;
	UIFocusGuide* _focusHolderRightFocusGuide;
	CGPoint _lastPanGesturePoint;

}

@property (nonatomic,retain) UIStackView * trailingBottomStackView;                                          //@synthesize trailingBottomStackView=_trailingBottomStackView - In the implementation block
@property (assign,nonatomic) unsigned long long maximumMapButtonCount;                                       //@synthesize maximumMapButtonCount=_maximumMapButtonCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * mapButtons;                                                    //@synthesize mapButtons=_mapButtons - In the implementation block
@property (nonatomic,retain) CPSNavigationCardView * navigationCardView;                                     //@synthesize navigationCardView=_navigationCardView - In the implementation block
@property (nonatomic,retain) CPSLayoutHelperView * navigationCardViewLayoutHelperView;                       //@synthesize navigationCardViewLayoutHelperView=_navigationCardViewLayoutHelperView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * navigationCardViewLayoutViewBottomConstraint;              //@synthesize navigationCardViewLayoutViewBottomConstraint=_navigationCardViewLayoutViewBottomConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * navigationCardViewHeightConstraint;                        //@synthesize navigationCardViewHeightConstraint=_navigationCardViewHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * navigationCardViewBottomConstraint;                        //@synthesize navigationCardViewBottomConstraint=_navigationCardViewBottomConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * navigationCardViewTopConstraint;                           //@synthesize navigationCardViewTopConstraint=_navigationCardViewTopConstraint - In the implementation block
@property (nonatomic,retain) CPSTripPreviewsCardView * previewsView;                                         //@synthesize previewsView=_previewsView - In the implementation block
@property (assign,nonatomic) BOOL previewOnlyRouteChoices;                                                   //@synthesize previewOnlyRouteChoices=_previewOnlyRouteChoices - In the implementation block
@property (nonatomic,retain) CARSessionStatus * sessionStatus;                                               //@synthesize sessionStatus=_sessionStatus - In the implementation block
@property (nonatomic,retain) CPSNavigator * navigator;                                                       //@synthesize navigator=_navigator - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * hideTapGestureRecognizer;                              //@synthesize hideTapGestureRecognizer=_hideTapGestureRecognizer - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * navBarHideTapGestureRecognizer;                        //@synthesize navBarHideTapGestureRecognizer=_navBarHideTapGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * panGestureRecognizer;                                  //@synthesize panGestureRecognizer=_panGestureRecognizer - In the implementation block
@property (nonatomic,retain) NSTimer * autoHideTimer;                                                        //@synthesize autoHideTimer=_autoHideTimer - In the implementation block
@property (assign,nonatomic) BOOL autoHidesNavigationBar;                                                    //@synthesize autoHidesNavigationBar=_autoHidesNavigationBar - In the implementation block
@property (assign,nonatomic) BOOL hidesButtonsWithNavigationBar;                                             //@synthesize hidesButtonsWithNavigationBar=_hidesButtonsWithNavigationBar - In the implementation block
@property (nonatomic,retain) NSMutableSet * autoHideDisabledReasons;                                         //@synthesize autoHideDisabledReasons=_autoHideDisabledReasons - In the implementation block
@property (nonatomic,copy) NSArray * tripPreviews;                                                           //@synthesize tripPreviews=_tripPreviews - In the implementation block
@property (nonatomic,retain) CPTripPreviewTextConfiguration * tripPreviewTextConfiguration;                  //@synthesize tripPreviewTextConfiguration=_tripPreviewTextConfiguration - In the implementation block
@property (nonatomic,retain) CPSPanViewController * panViewController;                                       //@synthesize panViewController=_panViewController - In the implementation block
@property (nonatomic,retain) UIView * panContainerView;                                                      //@synthesize panContainerView=_panContainerView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * panContainerLeftConstraint;                                //@synthesize panContainerLeftConstraint=_panContainerLeftConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * panContainerRightConstraint;                               //@synthesize panContainerRightConstraint=_panContainerRightConstraint - In the implementation block
@property (assign,nonatomic) BOOL demoAutoHideTimerDisabled;                                                 //@synthesize demoAutoHideTimerDisabled=_demoAutoHideTimerDisabled - In the implementation block
@property (nonatomic,retain) CPSNavigationAlertQueue * navigationAlertQueue;                                 //@synthesize navigationAlertQueue=_navigationAlertQueue - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * navigationAlertBottomConstraint;                           //@synthesize navigationAlertBottomConstraint=_navigationAlertBottomConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * navigationAlertHeightConstraint;                           //@synthesize navigationAlertHeightConstraint=_navigationAlertHeightConstraint - In the implementation block
@property (assign,nonatomic) BOOL applicationIsFrontmost;                                                    //@synthesize applicationIsFrontmost=_applicationIsFrontmost - In the implementation block
@property (assign,nonatomic,__weak) CPSApplicationStateMonitor * applicationStateMonitor;                    //@synthesize applicationStateMonitor=_applicationStateMonitor - In the implementation block
@property (nonatomic,retain) CPSNavigationETAView * navigationETAView;                                       //@synthesize navigationETAView=_navigationETAView - In the implementation block
@property (nonatomic,retain) CPSLayoutHelperView * navigationETAViewLayoutHelperView;                        //@synthesize navigationETAViewLayoutHelperView=_navigationETAViewLayoutHelperView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * navigationETAViewBottomConstraint;                         //@synthesize navigationETAViewBottomConstraint=_navigationETAViewBottomConstraint - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * lastTravelEstimatesByTrip;                                //@synthesize lastTravelEstimatesByTrip=_lastTravelEstimatesByTrip - In the implementation block
@property (assign,nonatomic) BOOL rightHandDrive;                                                            //@synthesize rightHandDrive=_rightHandDrive - In the implementation block
@property (assign,nonatomic,__weak) id<CPSSafeAreaDelegate> safeAreaDelegate;                                //@synthesize safeAreaDelegate=_safeAreaDelegate - In the implementation block
@property (nonatomic,retain) CPSEventObserver * eventObserver;                                               //@synthesize eventObserver=_eventObserver - In the implementation block
@property (nonatomic,readonly) CPMapTemplate * mapTemplate; 
@property (nonatomic,__weak,readonly) id<CPMapClientTemplateDelegate> mapTemplateDelegate; 
@property (assign,nonatomic,__weak) id<UIFocusItem> lastFocusedItem;                                         //@synthesize lastFocusedItem=_lastFocusedItem - In the implementation block
@property (assign,nonatomic,__weak) id<UIFocusItem> itemFocusedBeforeNavAlert;                               //@synthesize itemFocusedBeforeNavAlert=_itemFocusedBeforeNavAlert - In the implementation block
@property (assign,nonatomic) CGPoint lastPanGesturePoint;                                                    //@synthesize lastPanGesturePoint=_lastPanGesturePoint - In the implementation block
@property (nonatomic,retain) UIColor * guidanceBackgroundColor;                                              //@synthesize guidanceBackgroundColor=_guidanceBackgroundColor - In the implementation block
@property (assign,nonatomic) unsigned long long tripEstimateStyle;                                           //@synthesize tripEstimateStyle=_tripEstimateStyle - In the implementation block
@property (nonatomic,retain) _CPSFocusHoldingButton * focusHoldingButton;                                    //@synthesize focusHoldingButton=_focusHoldingButton - In the implementation block
@property (nonatomic,retain) UIFocusGuide * focusHolderLeftFocusGuide;                                       //@synthesize focusHolderLeftFocusGuide=_focusHolderLeftFocusGuide - In the implementation block
@property (nonatomic,retain) UIFocusGuide * focusHolderRightFocusGuide;                                      //@synthesize focusHolderRightFocusGuide=_focusHolderRightFocusGuide - In the implementation block
@property (assign,nonatomic) BOOL shouldRestoreFocusToNavigationBar;                                         //@synthesize shouldRestoreFocusToNavigationBar=_shouldRestoreFocusToNavigationBar - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)sessionDidConnect:(id)arg1 ;
-(void)setApplicationStateMonitor:(CPSApplicationStateMonitor *)arg1 ;
-(CPSEventObserver *)eventObserver;
-(void)_animateButtonsHidden:(BOOL)arg1 ;
-(CPSNavigator *)navigator;
-(CPSApplicationStateMonitor *)applicationStateMonitor;
-(void)setControl:(id)arg1 enabled:(BOOL)arg2 ;
-(id)_linearFocusItems;
-(void)applicationStateMonitor:(id)arg1 didBecomeActive:(BOOL)arg2 ;
-(id)initWithMapTemplate:(id)arg1 templateDelegate:(id)arg2 safeAreaDelegate:(id)arg3 applicationStateMonitor:(id)arg4 ;
-(void)panWithDirection:(long long)arg1 ;
-(void)panBeganWithDirection:(long long)arg1 ;
-(void)panEndedWithDirection:(long long)arg1 ;
-(void)navigator:(id)arg1 pausedTripForReason:(unsigned long long)arg2 description:(id)arg3 ;
-(void)showManeuvers:(id)arg1 usingDisplayStyles:(id)arg2 ;
-(void)navigator:(id)arg1 didEndTrip:(BOOL)arg2 ;
-(void)updateEstimates:(id)arg1 forManeuver:(id)arg2 ;
-(void)navigationOwnershipChangedToOwner:(unsigned long long)arg1 ;
-(unsigned long long)tripEstimateStyle;
-(void)setTripEstimateStyle:(unsigned long long)arg1 ;
-(void)didChangeLayout:(id)arg1 ;
-(id)_buttonForIdentifier:(id)arg1 ;
-(void)navigationAlertQueue:(id)arg1 shouldDisplayAlertView:(id)arg2 animated:(BOOL)arg3 ;
-(void)navigationAlertQueue:(id)arg1 shouldRemoveAlertView:(id)arg2 animated:(BOOL)arg3 dismissalContext:(unsigned long long)arg4 ;
-(BOOL)canAnimateNavigationAlert;
-(void)updateNavigationAlert:(id)arg1 ;
-(void)tripView:(id)arg1 startedTrip:(id)arg2 routeChoice:(id)arg3 ;
-(void)tripView:(id)arg1 selectedTrip:(id)arg2 routeChoice:(id)arg3 ;
-(BOOL)hidesButtonsWithNavigationBar;
-(CPSNavigationAlertQueue *)navigationAlertQueue;
-(UIColor *)guidanceBackgroundColor;
-(CPSNavigationCardView *)navigationCardView;
-(void)setGuidanceBackgroundColor:(UIColor *)arg1 ;
-(CPSNavigationETAView *)navigationETAView;
-(void)setTrailingBottomStackView:(UIStackView *)arg1 ;
-(CPMapTemplate *)mapTemplate;
-(NSMutableArray *)mapButtons;
-(void)_updateMapButtonsWithButtons:(id)arg1 ;
-(void)_reloadPreviewsView;
-(void)setHideTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setNavBarHideTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)hideTapGestureRecognizer;
-(void)_nightModeChanged:(id)arg1 ;
-(void)_resetAutoHideTimer;
-(void)setPanViewController:(CPSPanViewController *)arg1 ;
-(void)setPanContainerLeftConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setPanContainerRightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)panContainerLeftConstraint;
-(NSLayoutConstraint *)panContainerRightConstraint;
-(void)setPanContainerView:(UIView *)arg1 ;
-(void)setFocusHoldingButton:(_CPSFocusHoldingButton *)arg1 ;
-(void)setFocusHolderLeftFocusGuide:(UIFocusGuide *)arg1 ;
-(void)setFocusHolderRightFocusGuide:(UIFocusGuide *)arg1 ;
-(UIFocusGuide *)focusHolderLeftFocusGuide;
-(_CPSFocusHoldingButton *)focusHoldingButton;
-(UIFocusGuide *)focusHolderRightFocusGuide;
-(void)_updateSafeArea;
-(unsigned long long)maximumMapButtonCount;
-(void)setMaximumMapButtonCount:(unsigned long long)arg1 ;
-(void)_updateMapButtonVisibility;
-(void)setMapButtons:(NSMutableArray *)arg1 ;
-(UIStackView *)trailingBottomStackView;
-(void)_setFocusHoldersEnabled:(BOOL)arg1 ;
-(void)_setAutoHideDisabled:(BOOL)arg1 forRequester:(id)arg2 ;
-(UITapGestureRecognizer *)navBarHideTapGestureRecognizer;
-(NSTimer *)autoHideTimer;
-(void)setAutoHideTimer:(NSTimer *)arg1 ;
-(CPSTripPreviewsCardView *)previewsView;
-(NSArray *)tripPreviews;
-(BOOL)previewOnlyRouteChoices;
-(CPTripPreviewTextConfiguration *)tripPreviewTextConfiguration;
-(void)setPreviewsView:(CPSTripPreviewsCardView *)arg1 ;
-(void)setLastFocusedItem:(id<UIFocusItem>)arg1 ;
-(NSLayoutConstraint *)navigationAlertBottomConstraint;
-(void)setNavigationAlertBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)navigationAlertHeightConstraint;
-(void)setNavigationAlertHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_performAlertSizingForAlert:(id)arg1 animated:(BOOL)arg2 ;
-(NSLayoutConstraint *)navigationCardViewLayoutViewBottomConstraint;
-(CPSLayoutHelperView *)navigationCardViewLayoutHelperView;
-(void)setNavigationCardViewLayoutViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)navigationETAViewBottomConstraint;
-(id<UIFocusItem>)lastFocusedItem;
-(void)setItemFocusedBeforeNavAlert:(id<UIFocusItem>)arg1 ;
-(id<CPMapClientTemplateDelegate>)mapTemplateDelegate;
-(void)_setNavigationAlertView:(id)arg1 visible:(BOOL)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(id<UIFocusItem>)itemFocusedBeforeNavAlert;
-(void)setNavigationCardView:(CPSNavigationCardView *)arg1 ;
-(void)setNavigationCardViewLayoutHelperView:(CPSLayoutHelperView *)arg1 ;
-(void)setNavigationCardViewTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setNavigationCardViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)navigationCardViewTopConstraint;
-(NSLayoutConstraint *)navigationCardViewBottomConstraint;
-(CPSLayoutHelperView *)navigationETAViewLayoutHelperView;
-(void)setNavigationETAView:(CPSNavigationETAView *)arg1 ;
-(void)setNavigationETAViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setNavigationETAViewLayoutHelperView:(CPSLayoutHelperView *)arg1 ;
-(void)setNavigator:(CPSNavigator *)arg1 ;
-(id)_buttons;
-(NSMutableDictionary *)lastTravelEstimatesByTrip;
-(id)_tripDidBegin:(id)arg1 withEstimates:(id)arg2 forIdentifier:(id)arg3 ;
-(void)_setPanInterfaceVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UIView *)panContainerView;
-(NSMutableSet *)autoHideDisabledReasons;
-(BOOL)autoHidesNavigationBar;
-(void)setAutoHideDisabledReasons:(NSMutableSet *)arg1 ;
-(void)_showBar;
-(BOOL)_isAutoHideEnabled;
-(BOOL)demoAutoHideTimerDisabled;
-(void)_hideBar:(id)arg1 ;
-(BOOL)shouldRestoreFocusToNavigationBar;
-(void)setShouldRestoreFocusToNavigationBar:(BOOL)arg1 ;
-(void)setLastPanGesturePoint:(CGPoint)arg1 ;
-(CGPoint)lastPanGesturePoint;
-(void)_addPanControllerAsChild;
-(void)_updateInterestingArea;
-(void)_setMaximumVisibleMapButtons:(unsigned long long)arg1 ;
-(void)_removePanController;
-(CPSPanViewController *)panViewController;
-(UIEdgeInsets)_navBarInsets;
-(UIEdgeInsets)_mapButtonsEdgeInsets;
-(id<CPSSafeAreaDelegate>)safeAreaDelegate;
-(UIEdgeInsets)_cardViewEdgeInsets;
-(UIEdgeInsets)_previewEdgeInsets;
-(UIEdgeInsets)_navigationAlertInsets;
-(NSLayoutConstraint *)navigationCardViewHeightConstraint;
-(void)setNavigationCardViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)eventObserver:(id)arg1 observedEvent:(unsigned long long)arg2 ;
-(void)setHostGuidanceBackgroundColor:(id)arg1 ;
-(void)setHostTripEstimateStyle:(unsigned long long)arg1 ;
-(void)setHostAutoHidesNavigationBar:(BOOL)arg1 ;
-(void)setHostHidesButtonsWithNavigationBar:(BOOL)arg1 ;
-(void)setMapButton:(id)arg1 hidden:(BOOL)arg2 ;
-(void)setMapButton:(id)arg1 image:(id)arg2 ;
-(void)setMapButton:(id)arg1 focusedImage:(id)arg2 ;
-(void)hostSetMapButtons:(id)arg1 ;
-(void)setHostTripPreviews:(id)arg1 textConfiguration:(id)arg2 previewOnlyRouteChoices:(BOOL)arg3 ;
-(void)hostUpdateTravelEstimates:(id)arg1 forTripIdentifier:(id)arg2 ;
-(void)hostStartNavigationSessionForTrip:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)hostSetPanInterfaceVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)hostPanInterfaceVisible:(/*^block*/id)arg1 ;
-(void)showNavigationAlert:(id)arg1 animated:(BOOL)arg2 ;
-(void)dismissNavigationAlertAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setPreviewOnlyRouteChoices:(BOOL)arg1 ;
-(void)setAutoHidesNavigationBar:(BOOL)arg1 ;
-(void)setHidesButtonsWithNavigationBar:(BOOL)arg1 ;
-(void)setTripPreviews:(NSArray *)arg1 ;
-(void)setTripPreviewTextConfiguration:(CPTripPreviewTextConfiguration *)arg1 ;
-(void)setDemoAutoHideTimerDisabled:(BOOL)arg1 ;
-(void)setNavigationAlertQueue:(CPSNavigationAlertQueue *)arg1 ;
-(BOOL)applicationIsFrontmost;
-(void)setApplicationIsFrontmost:(BOOL)arg1 ;
-(void)setLastTravelEstimatesByTrip:(NSMutableDictionary *)arg1 ;
-(void)setRightHandDrive:(BOOL)arg1 ;
-(void)setSafeAreaDelegate:(id<CPSSafeAreaDelegate>)arg1 ;
-(void)setEventObserver:(CPSEventObserver *)arg1 ;
-(void)dealloc;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(id)preferredFocusEnvironments;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_handlePanGesture:(id)arg1 ;
-(void)_handleTapGesture:(id)arg1 ;
-(CARSessionStatus *)sessionStatus;
-(void)setSessionStatus:(CARSessionStatus *)arg1 ;
-(BOOL)rightHandDrive;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(void)setPanGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(void)didSelectButton:(id)arg1 ;
@end
