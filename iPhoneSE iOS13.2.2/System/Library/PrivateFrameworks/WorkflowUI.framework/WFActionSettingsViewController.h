/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:22 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@protocol WFActionSettingsViewControllerDelegate;
@class WFAction, NSDictionary;

@interface WFActionSettingsViewController : UIViewController {

	id<WFActionSettingsViewControllerDelegate> _delegate;
	WFAction* _action;
	NSDictionary* _definition;

}

@property (assign,nonatomic,__weak) id<WFActionSettingsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) WFAction * action;                                                     //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) NSDictionary * definition;                                             //@synthesize definition=_definition - In the implementation block
-(id<WFActionSettingsViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFActionSettingsViewControllerDelegate>)arg1 ;
-(WFAction *)action;
-(NSDictionary *)definition;
-(BOOL)accessibilityPerformEscape;
-(void)donePressed:(id)arg1 ;
-(id)initWithAction:(id)arg1 definition:(id)arg2 ;
@end
