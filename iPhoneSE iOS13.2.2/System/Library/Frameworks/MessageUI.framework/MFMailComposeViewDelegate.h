/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:33 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MFMailComposeViewDelegate <UIPickerViewDelegate,UITableViewDelegate,UITableViewDataSource,UIDocumentPickerDelegate,UIPopoverPresentationControllerDelegate>
@optional
-(void)composeBodyFieldDidResignFirstResponder;
-(void)showStyleSelector:(id)arg1;
-(void)showMissingAttachmentDataAlert;
-(void)composeBodyFieldDidChangeFontAttributes:(id)arg1;
-(void)composeBodyFieldDidFinishLoad;
-(void)composeViewBodyTextChanged:(id)arg1;
-(id)contentVariationName;
-(BOOL)canShowContentVariationPicker;
-(void)showContentVariationPickerFromRect:(CGRect)arg1 inView:(id)arg2;
-(UIEdgeInsets*)additionalContentInsetForBodyField:(id)arg1;

@required
-(id)emailAddresses;
-(id)presentationViewController;
-(BOOL)hasAttachments;
-(void)didInsertBodyText:(id)arg1;
-(int)compositionType;
-(void)insertPhotoOrVideo;
-(void)importDocument;
-(void)scanDocument;
-(void)insertDrawing;
-(id)compositionContext;
-(void)changeQuoteLevel:(long long)arg1;
-(void)showPhotoPickerWithSourceType:(long long)arg1 fromSource:(id)arg2;
-(BOOL)canShowAttachmentPicker;
-(void)markupAttachment:(id)arg1;
-(void)didInsertAttachment:(id)arg1;
-(id)sendingEmailAddress;
-(void)setSendingEmailAddress:(id)arg1;
-(BOOL)canShowFromField;
-(void)updateSignature;
-(id)sendingAccountProxy;
-(BOOL)canShowImageSizeField;
-(void)selectCurrentEntryForFromAddressPickerView:(id)arg1;
-(void)scrollToSelectedEntryInFromAddressTableView:(id)arg1;
-(id)sendingEmailAddressIfExists;
-(BOOL)sendingEmailDirtied;
-(BOOL)bccAddressesDirtied;
-(id)currentScaleImageSize;
-(id)popoverManager;

@end
