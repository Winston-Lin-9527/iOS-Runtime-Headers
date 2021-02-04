/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:58 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class UIView;

@interface HKViewTableViewCell : UITableViewCell {

	UIView* _hostedView;

}

@property (nonatomic,readonly) UIView * hostedView;              //@synthesize hostedView=_hostedView - In the implementation block
-(void)_pinViewToContent:(id)arg1 ;
-(void)setHostedView:(UIView *)arg1 ;
-(UIView *)hostedView;
-(void)prepareForReuse;
-(id)initWithReuseIdentifier:(id)arg1 ;
@end
