/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:54 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTranscriptCell.h>

@class UIView;

@interface CKTranscriptHeaderCell : CKTranscriptCell {

	UIView* _loadingIndicator;

}

@property (nonatomic,retain) UIView * loadingIndicator;              //@synthesize loadingIndicator=_loadingIndicator - In the implementation block
+(double)defaultCellHeight;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)loadingIndicator;
-(void)setLoadingIndicator:(UIView *)arg1 ;
-(void)layoutSubviewsForAlignmentContents;
-(void)startAnimatingActivityIndicator;
@end
