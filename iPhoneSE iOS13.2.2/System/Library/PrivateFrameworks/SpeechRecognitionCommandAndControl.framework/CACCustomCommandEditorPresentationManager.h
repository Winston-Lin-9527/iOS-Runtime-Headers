/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:18 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpeechRecognitionCommandAndControl/CACOutOfProcessPresentationManager.h>

@interface CACCustomCommandEditorPresentationManager : CACOutOfProcessPresentationManager
+(long long)remoteViewType;
+(int)axNotification;
-(void)_showCustomCommandEditorWithContextKey:(id)arg1 contextValue:(id)arg2 ;
-(BOOL)showCustomCommandEditorWithGesture:(id)arg1 ;
-(BOOL)showCustomCommandEditorWithTextToInsert:(id)arg1 ;
-(BOOL)showCustomCommandEditorWithRecordedUserActionFlow:(id)arg1 ;
-(BOOL)showCustomCommandEditorWithShortcutsWorkflow:(id)arg1 ;
-(void)handleAXNotificationData:(void*)arg1 ;
@end
