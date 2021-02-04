/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:24 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKChatItem.h>

@interface CKTypingChatItem : CKChatItem

@property (getter=isFromMe,nonatomic,readonly) BOOL fromMe; 
@property (nonatomic,readonly) CALayer*<IMTypingIndicatorLayerProtocol> indicatorLayer; 
-(BOOL)isFromMe;
-(CGSize)loadSizeThatFits:(CGSize)arg1 textAlignmentInsets:(out UIEdgeInsets*)arg2 ;
-(CALayer*<IMTypingIndicatorLayerProtocol>)indicatorLayer;
-(char)transcriptOrientation;
-(BOOL)displayDuringSend;
-(BOOL)wantsDrawerLayout;
-(UIEdgeInsets)contentInsets;
-(Class)cellClass;
@end
