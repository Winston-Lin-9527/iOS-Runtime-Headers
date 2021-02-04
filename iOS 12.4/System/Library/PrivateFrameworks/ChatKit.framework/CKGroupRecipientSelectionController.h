/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:25 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKRecipientSelectionController.h>
#import <libobjc.A.dylib/CKRecipientSelectionControllerDelegate.h>

@class UIBarButtonItem, NSString;

@interface CKGroupRecipientSelectionController : CKRecipientSelectionController <CKRecipientSelectionControllerDelegate> {

	UIBarButtonItem* _doneButton;

}

@property (nonatomic,retain) UIBarButtonItem * doneButton;              //@synthesize doneButton=_doneButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppearDeferredSetup;
-(BOOL)homogenizePreferredServiceForiMessage;
-(void)recipientSelectionControllerDidChange;
-(void)recipientSelectionController:(id)arg1 textDidChange:(id)arg2 ;
-(void)recipientSelectionControllerReturnPressed:(id)arg1 ;
-(void)recipientSelectionControllerDidChangeSize:(id)arg1 ;
-(void)recipientSelectionControllerRequestDismissKeyboard:(id)arg1 ;
-(void)recipientSelectionControllerDidPushABViewController:(id)arg1 ;
-(void)recipientSelectionControllerDidBecomeFirstResponder:(id)arg1 ;
-(void)recipientAvailibilitiesDidUpdate;
-(void)recipientSelectionController:(id)arg1 didFinishAvailaiblityLookupForRecipient:(id)arg2 ;
-(BOOL)shouldSuppressSearchResultsTable;
-(BOOL)alwaysShowSearchResultsTable;
-(void)recipientSelectionControllerSearchListDidShowOrHide:(id)arg1 ;
-(UIEdgeInsets)navigationBarInsetsForRecipientSelectionController:(id)arg1 ;
-(id)initWithConversation:(id)arg1 ;
-(void)_updateNavigationButton;
-(void)_frecencySearch;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(BOOL)shouldAutorotate;
-(void)setDoneButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)doneButton;
@end
