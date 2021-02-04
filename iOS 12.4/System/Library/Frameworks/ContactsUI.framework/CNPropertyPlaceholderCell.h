/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:34 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNLabeledCell.h>

@class UILabel;

@interface CNPropertyPlaceholderCell : CNLabeledCell {

	UILabel* _label;

}

@property (nonatomic,retain) UILabel * label;              //@synthesize label=_label - In the implementation block
-(void)setCardGroupItem:(id)arg1 ;
-(double)minCellHeight;
-(BOOL)shouldPerformDefaultAction;
-(id)labelView;
-(BOOL)shouldIndentWhileEditing;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
@end
