/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIDraggingImageSlotOwner.h>
#import <UIKitCore/_UIDataTransferMonitorDelegate.h>
#import <libobjc.A.dylib/NSProgressReporting.h>

@protocol _UIDraggingInfo, _UIDruidDestinationConnection;
@class _UIInternalDraggingSessionSource, NSMutableSet, UIView, _UIDragSetDownAnimation, PBItemCollection, _UIDataTransferMonitor, _UIApplicationModalProgressController, _DUIPotentialDrop, UIDragEvent, _UIDropSessionImpl, UIWindow, NSArray, NSProgress, NSString;

@interface _UIInternalDraggingSessionDestination : _UIDraggingImageSlotOwner <_UIDataTransferMonitorDelegate, NSProgressReporting> {

	unsigned _sessionIdentifier;
	unsigned _touchRoutingPolicyContextID;
	_UIInternalDraggingSessionSource* _sessionSource;
	BOOL _connectedToDruid;
	BOOL _dragInteractionDidEnd;
	NSMutableSet* _enteredDestinations;
	UIView* _dropDestinationView;
	/*^block*/id _dropPerformBlock;
	/*^block*/id _dropCompletionBlock;
	/*^block*/id _postDropAnimationCompletionBlock;
	_UIDragSetDownAnimation* _setDownAnimation;
	PBItemCollection* _droppedItemCollection;
	_UIDataTransferMonitor* _dataTransferMonitor;
	_UIApplicationModalProgressController* _modalProgressAlertController;
	BOOL _dropWasPerformed;
	_DUIPotentialDrop* _lastPotentialDrop;
	BOOL _isAccessibilitySession;
	id<_UIDraggingInfo> _publicSession;
	UIDragEvent* _dragEvent;
	_UIDropSessionImpl* _dropSession;
	UIWindow* _centroidWindow;
	NSArray* _dropItemProviders;
	long long _sourceDataOwner;
	NSArray* _internalItems;
	unsigned long long _outsideAppSourceOperationMask;
	unsigned long long _progressIndicatorStyle;
	id<_UIDruidDestinationConnection> _druidConnection;
	NSProgress* _progress;
	CGPoint _centroid;

}

@property (nonatomic,retain) id<_UIDruidDestinationConnection> druidConnection;                    //@synthesize druidConnection=_druidConnection - In the implementation block
@property (nonatomic,retain) NSProgress * progress;                                                //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) unsigned sessionIdentifier;                                         //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,readonly) id<_UIDraggingInfo> publicSession;                                  //@synthesize publicSession=_publicSession - In the implementation block
@property (assign,nonatomic,__weak) UIDragEvent * dragEvent;                                       //@synthesize dragEvent=_dragEvent - In the implementation block
@property (nonatomic,readonly) _UIInternalDraggingSessionSource * inAppSessionSource; 
@property (nonatomic,readonly) _UIDropSessionImpl * dropSession;                                   //@synthesize dropSession=_dropSession - In the implementation block
@property (nonatomic,readonly) CGPoint centroid;                                                   //@synthesize centroid=_centroid - In the implementation block
@property (nonatomic,readonly) UIWindow * centroidWindow;                                          //@synthesize centroidWindow=_centroidWindow - In the implementation block
@property (nonatomic,readonly) BOOL shouldDragEventBeSentToGestureRecognizers; 
@property (nonatomic,readonly) BOOL didRequestDropToBePerformed; 
@property (nonatomic,readonly) NSArray * preDropItemProviders; 
@property (nonatomic,readonly) NSArray * dropItemProviders;                                        //@synthesize dropItemProviders=_dropItemProviders - In the implementation block
@property (nonatomic,readonly) long long sourceDataOwner;                                          //@synthesize sourceDataOwner=_sourceDataOwner - In the implementation block
@property (nonatomic,copy) NSArray * internalItems;                                                //@synthesize internalItems=_internalItems - In the implementation block
@property (nonatomic,readonly) unsigned long long outsideAppSourceOperationMask;                   //@synthesize outsideAppSourceOperationMask=_outsideAppSourceOperationMask - In the implementation block
@property (nonatomic,readonly) unsigned long long sourceOperationMask; 
@property (nonatomic,readonly) BOOL isAccessibilitySession;                                        //@synthesize isAccessibilitySession=_isAccessibilitySession - In the implementation block
@property (assign,nonatomic) unsigned long long progressIndicatorStyle;                            //@synthesize progressIndicatorStyle=_progressIndicatorStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setProgress:(NSProgress *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(_UIDropSessionImpl *)dropSession;
-(NSProgress *)progress;
-(CGPoint)centroid;
-(id<_UIDraggingInfo>)publicSession;
-(void)enteredDestination:(id)arg1 ;
-(void)dragInteractionEnding;
-(void)requestDropOnView:(id)arg1 withOperation:(unsigned long long)arg2 perform:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(unsigned long long)sourceOperationMask;
-(NSArray *)dropItemProviders;
-(NSArray *)preDropItemProviders;
-(unsigned long long)actualDragOperationForProposedDragOperation:(unsigned long long)arg1 destinationDataOwner:(long long)arg2 forbidden:(BOOL*)arg3 ;
-(void)takePotentialDrop:(id)arg1 ;
-(unsigned long long)outsideAppSourceOperationMask;
-(NSArray *)internalItems;
-(void)setProgressIndicatorStyle:(unsigned long long)arg1 ;
-(long long)sourceDataOwner;
-(unsigned long long)progressIndicatorStyle;
-(void)sawDragEndEvent;
-(void)itemsBecameDirty:(id)arg1 ;
-(UIWindow *)centroidWindow;
-(_UIInternalDraggingSessionSource *)inAppSessionSource;
-(unsigned)sessionIdentifier;
-(BOOL)canBeDrivenByDragEvent:(id)arg1 ;
-(void)setDragEvent:(UIDragEvent *)arg1 ;
-(id)initWithDragManager:(id)arg1 dragEvent:(id)arg2 ;
-(void)connect;
-(id<_UIDruidDestinationConnection>)druidConnection;
-(void)setDruidConnection:(id<_UIDruidDestinationConnection>)arg1 ;
-(UIDragEvent *)dragEvent;
-(void)dragDidExitApp;
-(void)setInternalItems:(NSArray *)arg1 ;
-(void)updateCentroidFromDragEvent;
-(void)takeVisibleDroppedItems:(id)arg1 ;
-(void)setUpDropAnimation:(id)arg1 ;
-(void)handOffDroppedItems:(id)arg1 ;
-(void)_sessionDidEndNormally:(BOOL)arg1 ;
-(void)_removeFromDragManager;
-(void)dataTransferMonitorBeganTransfers:(id)arg1 ;
-(void)dataTransferMonitorFinishedTransfers:(id)arg1 ;
-(BOOL)shouldDragEventBeSentToGestureRecognizers;
-(BOOL)didRequestDropToBePerformed;
-(BOOL)isAccessibilitySession;
@end
