/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKTableHeaderView.h>

@class PKTableHeaderView;

@interface PKPassPersonalizationHeaderView : PKTableHeaderView {

	PKTableHeaderView* _tableHeaderView;
	unsigned long long _state;

}

@property (assign,nonatomic) unsigned long long state;              //@synthesize state=_state - In the implementation block
-(void)_configureForCurrentState;
-(id)initWithLogoImage:(id)arg1 description:(id)arg2 ;
-(void)dealloc;
-(unsigned long long)state;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
@end
