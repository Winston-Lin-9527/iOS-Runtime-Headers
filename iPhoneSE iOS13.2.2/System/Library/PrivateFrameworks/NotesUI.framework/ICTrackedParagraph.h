/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:31 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NotesUI/NotesUI-Structs.h>
@class TTParagraphStyle;

@interface ICTrackedParagraph : NSObject {

	TTParagraphStyle* _paragraph;
	NSRange _characterRange;

}

@property (nonatomic,retain) TTParagraphStyle * paragraph;              //@synthesize paragraph=_paragraph - In the implementation block
@property (assign,nonatomic) NSRange characterRange;                    //@synthesize characterRange=_characterRange - In the implementation block
-(id)description;
-(void)setCharacterRange:(NSRange)arg1 ;
-(NSRange)characterRange;
-(TTParagraphStyle *)paragraph;
-(void)setParagraph:(TTParagraphStyle *)arg1 ;
@end
