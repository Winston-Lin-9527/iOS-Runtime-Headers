/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:20 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTranscriptMessageContentCell.h>

@class CKBalloonView;

@interface CKTranscriptBalloonCell : CKTranscriptMessageContentCell {

	BOOL _mayReparentPluginViews;
	CKBalloonView* _balloonView;

}

@property (nonatomic,retain) CKBalloonView * balloonView;              //@synthesize balloonView=_balloonView - In the implementation block
@property (assign,nonatomic) BOOL mayReparentPluginViews;              //@synthesize mayReparentPluginViews=_mayReparentPluginViews - In the implementation block
-(void)addFilter:(id)arg1 ;
-(void)clearFilters;
-(CKBalloonView *)balloonView;
-(void)setBalloonView:(CKBalloonView *)arg1 ;
-(void)setMayReparentPluginViews:(BOOL)arg1 ;
-(void)setAnimationPauseReasons:(long long)arg1 ;
-(void)willLayoutDrawerLabelFrame:(CGRect*)arg1 ;
-(id)messageDisplayView;
-(BOOL)mayReparentPluginViews;
-(void)configureForChatItem:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
@end
