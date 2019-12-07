/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUTitleValueCell.h>
#import <libobjc.A.dylib/HUEditableTextCellProtocol.h>
#import <libobjc.A.dylib/HUDisableableCellProtocol.h>

@class UITextField, NSString;

@interface HUEditableTextCell : HUTitleValueCell <HUEditableTextCellProtocol, HUDisableableCellProtocol> {

	UITextField* _textField;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UITextField * textField;                    //@synthesize textField=_textField - In the implementation block
@property (assign,getter=isDisabled,nonatomic) BOOL disabled; 
-(void)prepareForReuse;
-(UITextField *)textField;
-(void)setDisabled:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
@end
