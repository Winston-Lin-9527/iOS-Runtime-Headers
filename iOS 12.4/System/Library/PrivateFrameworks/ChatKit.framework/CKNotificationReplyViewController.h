/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:21 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CKBalloonViewDelegate.h>
#import <libobjc.A.dylib/CKInlineReplyRaiseControllerDelegate.h>
#import <libobjc.A.dylib/CKMessageEntryViewDelegate.h>
#import <libobjc.A.dylib/CKAudioControllerDelegate.h>

@protocol CKNotificationReplyViewControllerDelegate;
@class CKMessageEntryView, NSObject, CKConversation, CKScheduledUpdater, CKAudioController, UIView, CKAudioBalloonView, CKAudioMediaObject, CKInlineReplyRaiseController, NSString;

@interface CKNotificationReplyViewController : UIViewController <CKBalloonViewDelegate, CKInlineReplyRaiseControllerDelegate, CKMessageEntryViewDelegate, CKAudioControllerDelegate> {

	BOOL _isAudioMessage;
	BOOL _isAudioPlaybackOnly;
	BOOL _isRaise;
	BOOL _didSendMessage;
	BOOL _shouldShowKeyboard;
	CKMessageEntryView* _entryView;
	NSObject*<CKNotificationReplyViewControllerDelegate> _delegate;
	CKConversation* _conversation;
	CKScheduledUpdater* _typingUpdater;
	CKAudioController* _audioController;
	UIView* _audioMessageView;
	CKAudioBalloonView* _balloonView;
	CKAudioMediaObject* _audioMediaObject;
	CKInlineReplyRaiseController* _raiseController;

}

@property (nonatomic,retain) CKConversation * conversation;                                                     //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,retain) CKScheduledUpdater * typingUpdater;                                                //@synthesize typingUpdater=_typingUpdater - In the implementation block
@property (nonatomic,retain) CKAudioController * audioController;                                               //@synthesize audioController=_audioController - In the implementation block
@property (assign,nonatomic) BOOL isAudioMessage;                                                               //@synthesize isAudioMessage=_isAudioMessage - In the implementation block
@property (nonatomic,retain) UIView * audioMessageView;                                                         //@synthesize audioMessageView=_audioMessageView - In the implementation block
@property (nonatomic,retain) CKAudioBalloonView * balloonView;                                                  //@synthesize balloonView=_balloonView - In the implementation block
@property (nonatomic,retain) CKAudioMediaObject * audioMediaObject;                                             //@synthesize audioMediaObject=_audioMediaObject - In the implementation block
@property (assign,nonatomic) BOOL isAudioPlaybackOnly;                                                          //@synthesize isAudioPlaybackOnly=_isAudioPlaybackOnly - In the implementation block
@property (assign,nonatomic) BOOL isRaise;                                                                      //@synthesize isRaise=_isRaise - In the implementation block
@property (nonatomic,retain) CKInlineReplyRaiseController * raiseController;                                    //@synthesize raiseController=_raiseController - In the implementation block
@property (assign,nonatomic) BOOL didSendMessage;                                                               //@synthesize didSendMessage=_didSendMessage - In the implementation block
@property (assign,nonatomic) BOOL shouldShowKeyboard;                                                           //@synthesize shouldShowKeyboard=_shouldShowKeyboard - In the implementation block
@property (nonatomic,retain) CKMessageEntryView * entryView;                                                    //@synthesize entryView=_entryView - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<CKNotificationReplyViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_isSecureForRemoteViewService;
-(CKAudioBalloonView *)balloonView;
-(void)setBalloonView:(CKAudioBalloonView *)arg1 ;
-(CKConversation *)conversation;
-(id)initWithConversation:(id)arg1 ;
-(void)setConversation:(CKConversation *)arg1 ;
-(double)messageEntryViewMaxHeight:(id)arg1 ;
-(void)setAudioMediaObject:(CKAudioMediaObject *)arg1 ;
-(void)messageEntryViewSendButtonHitWhileDisabled:(id)arg1 ;
-(void)messageEntryViewDidChange:(id)arg1 ;
-(BOOL)messageEntryViewShouldBeginEditing:(id)arg1 ;
-(CGSize)messageEntryViewMaxShelfPluginViewSize:(id)arg1 ;
-(void)messageEntryViewDidBeginEditing:(id)arg1 ;
-(void)messageEntryViewDidEndEditing:(id)arg1 ;
-(BOOL)messageEntryView:(id)arg1 shouldInsertMediaObjects:(id)arg2 ;
-(void)messageEntryView:(id)arg1 didTapMediaObject:(id)arg2 ;
-(void)messageEntryViewRecordingDidChange:(id)arg1 ;
-(void)messageEntryViewSendButtonHit:(id)arg1 ;
-(void)messageEntryViewRaiseGestureAutoSend:(id)arg1 ;
-(void)messageEntryViewSendButtonLongPressBegan:(id)arg1 ;
-(void)messageEntryView:(id)arg1 sendButtonLongPressMoved:(CGPoint)arg2 ;
-(void)messageEntryView:(id)arg1 sendButtonLongPressEnded:(CGPoint)arg2 ;
-(void)balloonViewTapped:(id)arg1 ;
-(void)balloonViewDoubleTapped:(id)arg1 ;
-(void)balloonViewLongTouched:(id)arg1 ;
-(CKMessageEntryView *)entryView;
-(CKScheduledUpdater *)typingUpdater;
-(void)setTypingUpdater:(CKScheduledUpdater *)arg1 ;
-(void)updateTyping;
-(void)setEntryView:(CKMessageEntryView *)arg1 ;
-(void)setShouldShowKeyboard:(BOOL)arg1 ;
-(void)setupView;
-(void)setupConversation;
-(BOOL)isAudioMessage;
-(BOOL)isAudioPlaybackOnly;
-(UIView *)audioMessageView;
-(double)audioBubbleHeight;
-(BOOL)didSendMessage;
-(CKInlineReplyRaiseController *)raiseController;
-(void)setAudioMessageView:(UIView *)arg1 ;
-(double)preferredContentHeight;
-(CKAudioController *)audioController;
-(void)setAudioController:(CKAudioController *)arg1 ;
-(void)setDidSendMessage:(BOOL)arg1 ;
-(void)sendMessage;
-(BOOL)isRaise;
-(void)playSendSoundForMessage:(id)arg1 ;
-(id)viewForTyping;
-(void)proximityStateDidChange:(BOOL)arg1 ;
-(CKAudioMediaObject *)audioMediaObject;
-(void)interactionStartedFromPreviewItemControllerInBalloonView:(id)arg1 ;
-(void)interactionStoppedFromPreviewItemControllerInBalloonView:(id)arg1 ;
-(void)raiseControllerDidStartRecording:(id)arg1 ;
-(void)raiseControllerDidStopRecording:(id)arg1 ;
-(void)audioController:(id)arg1 mediaObjectDidFinishPlaying:(id)arg2 ;
-(void)audioController:(id)arg1 mediaObjectProgressDidChange:(id)arg2 currentTime:(double)arg3 duration:(double)arg4 ;
-(void)audioControllerDidPause:(id)arg1 ;
-(void)audioControllerDidStop:(id)arg1 ;
-(void)setIsAudioPlaybackOnly:(BOOL)arg1 ;
-(void)setIsAudioMessage:(BOOL)arg1 ;
-(void)setIsRaise:(BOOL)arg1 ;
-(void)setRaiseController:(CKInlineReplyRaiseController *)arg1 ;
-(BOOL)shouldShowKeyboard;
-(void)dealloc;
-(void)setDelegate:(NSObject*<CKNotificationReplyViewControllerDelegate>)arg1 ;
-(NSObject*<CKNotificationReplyViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(BOOL)showsKeyboard;
-(id)textInputContextIdentifier;
@end
