/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:27 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIStatusBarItem.h>

@protocol _UIStatusBarCellularItemTypeStringProvider;
@class _UIStatusBarStringView, _UIStatusBarCellularSignalView, _UIStatusBarImageView, NSString;

@interface _UIStatusBarCellularItem : _UIStatusBarItem {

	BOOL _showsDisabledSignalBars;
	id<_UIStatusBarCellularItemTypeStringProvider> _typeStringProvider;
	_UIStatusBarStringView* _serviceNameView;
	_UIStatusBarCellularSignalView* _signalView;
	_UIStatusBarStringView* _networkTypeView;
	_UIStatusBarImageView* _sosView;
	_UIStatusBarImageView* _warningView;
	_UIStatusBarImageView* _callForwardingView;

}

@property (nonatomic,readonly) NSString * cellularDataEntryKey; 
@property (nonatomic,retain) _UIStatusBarStringView * serviceNameView;                                              //@synthesize serviceNameView=_serviceNameView - In the implementation block
@property (nonatomic,retain) _UIStatusBarCellularSignalView * signalView;                                           //@synthesize signalView=_signalView - In the implementation block
@property (nonatomic,retain) _UIStatusBarStringView * networkTypeView;                                              //@synthesize networkTypeView=_networkTypeView - In the implementation block
@property (nonatomic,retain) _UIStatusBarImageView * sosView;                                                       //@synthesize sosView=_sosView - In the implementation block
@property (nonatomic,retain) _UIStatusBarImageView * warningView;                                                   //@synthesize warningView=_warningView - In the implementation block
@property (nonatomic,retain) _UIStatusBarImageView * callForwardingView;                                            //@synthesize callForwardingView=_callForwardingView - In the implementation block
@property (assign,nonatomic) BOOL showsDisabledSignalBars;                                                          //@synthesize showsDisabledSignalBars=_showsDisabledSignalBars - In the implementation block
@property (assign,nonatomic,__weak) id<_UIStatusBarCellularItemTypeStringProvider> typeStringProvider;              //@synthesize typeStringProvider=_typeStringProvider - In the implementation block
+(id)signalStrengthDisplayIdentifier;
+(id)nameDisplayIdentifier;
+(id)typeDisplayIdentifier;
+(id)sosDisplayIdentifier;
+(id)warningDisplayIdentifier;
+(id)callForwardingDisplayIdentifier;
+(id)groupWithHighPriority:(long long)arg1 lowPriority:(long long)arg2 ;
-(id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2 ;
-(id)dependentEntryKeys;
-(id)viewForIdentifier:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 statusBar:(id)arg2 ;
-(void)setShowsDisabledSignalBars:(BOOL)arg1 ;
-(NSString *)cellularDataEntryKey;
-(id)_backgroundColorForUpdate:(id)arg1 ;
-(id)_fillColorForUpdate:(id)arg1 ;
-(id)entryForDisplayItemWithIdentifier:(id)arg1 ;
-(_UIStatusBarCellularSignalView *)signalView;
-(BOOL)_updateSignalView:(id)arg1 withUpdate:(id)arg2 entry:(id)arg3 ;
-(_UIStatusBarStringView *)serviceNameView;
-(id)_stringForCellularType:(long long)arg1 ;
-(_UIStatusBarStringView *)networkTypeView;
-(_UIStatusBarImageView *)sosView;
-(_UIStatusBarImageView *)warningView;
-(_UIStatusBarImageView *)callForwardingView;
-(void)prepareAnimation:(id)arg1 forDisplayItem:(id)arg2 ;
-(BOOL)showsDisabledSignalBars;
-(id<_UIStatusBarCellularItemTypeStringProvider>)typeStringProvider;
-(void)setTypeStringProvider:(id<_UIStatusBarCellularItemTypeStringProvider>)arg1 ;
-(void)setServiceNameView:(_UIStatusBarStringView *)arg1 ;
-(void)setSignalView:(_UIStatusBarCellularSignalView *)arg1 ;
-(void)setNetworkTypeView:(_UIStatusBarStringView *)arg1 ;
-(void)setSosView:(_UIStatusBarImageView *)arg1 ;
-(void)setWarningView:(_UIStatusBarImageView *)arg1 ;
-(void)setCallForwardingView:(_UIStatusBarImageView *)arg1 ;
@end
