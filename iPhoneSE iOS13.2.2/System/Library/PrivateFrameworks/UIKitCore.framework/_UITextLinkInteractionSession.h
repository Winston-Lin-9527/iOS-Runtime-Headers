/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:07 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UITextLinkInteraction;
#import <UIKitCore/UIKitCore-Structs.h>
@class UITextItemInteractionInteraction, UIView;

@interface _UITextLinkInteractionSession : NSObject {

	UITextItemInteractionInteraction* _interaction;
	UIView*<UITextLinkInteraction> _linkInteractionView;

}
-(void)dealloc;
-(BOOL)tapOnLinkWithGesture:(id)arg1 ;
-(BOOL)_allowItemInteractions;
-(id)initWithTextItemInteraction:(id)arg1 ;
-(BOOL)canInteractWithLinkAtPoint:(CGPoint)arg1 ;
@end
