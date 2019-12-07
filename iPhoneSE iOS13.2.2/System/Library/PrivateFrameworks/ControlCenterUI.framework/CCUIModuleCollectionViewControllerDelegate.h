/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:28 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CCUIModuleCollectionViewControllerDelegate <NSObject>
@required
-(long long)interfaceOrientationForModuleCollectionViewController:(id)arg1;
-(void)moduleCollectionViewController:(id)arg1 didBeginInteractionWithModule:(id)arg2;
-(void)moduleCollectionViewController:(id)arg1 didFinishInteractionWithModule:(id)arg2;
-(void)moduleCollectionViewController:(id)arg1 willOpenExpandedModule:(id)arg2;
-(void)moduleCollectionViewController:(id)arg1 didOpenExpandedModule:(id)arg2;
-(void)moduleCollectionViewController:(id)arg1 willCloseExpandedModule:(id)arg2;
-(void)moduleCollectionViewController:(id)arg1 didCloseExpandedModule:(id)arg2;
-(void)moduleCollectionViewController:(id)arg1 willPresentViewController:(id)arg2;
-(void)moduleCollectionViewController:(id)arg1 willDismissViewController:(id)arg2;
-(void)moduleCollectionViewController:(id)arg1 didAddModuleContainerViewController:(id)arg2;
-(void)moduleCollectionViewController:(id)arg1 willRemoveModuleContainerViewController:(id)arg2;
-(void)moduleCollectionViewController:(id)arg1 didUpdateHomeGestureDismissalAllowed:(BOOL)arg2;

@end
