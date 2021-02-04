/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:33 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UITextViewInteractableItem.h>

@class NSTextAttachment;

@interface _UITextViewInteractableAttachment : _UITextViewInteractableItem {

	NSTextAttachment* _attachment;

}

@property (nonatomic,retain) NSTextAttachment * attachment;              //@synthesize attachment=_attachment - In the implementation block
+(id)interactableLinkWithAttachment:(id)arg1 range:(NSRange)arg2 ;
-(id)_image;
-(id)actions;
-(id)localizedTitle;
-(void)setAttachment:(NSTextAttachment *)arg1 ;
-(NSTextAttachment *)attachment;
-(BOOL)allowInteraction:(long long)arg1 ;
-(id)defaultAction;
-(void)_copyImage;
-(void)_saveToCameraRoll;
@end
