/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:47 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class REUpNextBaseCell;

@interface TableCell : UITableViewCell {

	REUpNextBaseCell* _contentCell;

}

@property (nonatomic,retain) REUpNextBaseCell * contentCell;              //@synthesize contentCell=_contentCell - In the implementation block
-(void)configureWithContent:(id)arg1 ;
-(REUpNextBaseCell *)contentCell;
-(void)setContentCell:(REUpNextBaseCell *)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end
