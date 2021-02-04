/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:49 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKCustomSeparatorTableViewCell.h>

@class _MKUILabel, NSLayoutConstraint, NSString;

@interface MKTransitMessageCell : MKCustomSeparatorTableViewCell {

	_MKUILabel* _messageLabel;
	NSLayoutConstraint* _topConstraint;
	NSLayoutConstraint* _bottomConstraint;

}

@property (nonatomic,copy) NSString * messageText; 
-(void)_updateConstraintValues;
-(void)dealloc;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setMessageText:(NSString *)arg1 ;
-(NSString *)messageText;
-(void)_contentSizeCategoryDidChange;
@end
