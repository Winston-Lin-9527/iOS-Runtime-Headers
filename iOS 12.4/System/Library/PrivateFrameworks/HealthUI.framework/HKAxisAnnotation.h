/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:58 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIColor, HKAxisLabel;

@interface HKAxisAnnotation : NSObject {

	UIColor* _textColor;
	HKAxisLabel* _axisLabel;

}

@property (nonatomic,readonly) UIColor * textColor;                  //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,readonly) HKAxisLabel * axisLabel;              //@synthesize axisLabel=_axisLabel - In the implementation block
-(HKAxisLabel *)axisLabel;
-(id)initWithAnnotation:(id)arg1 color:(id)arg2 position:(id)arg3 ;
-(UIColor *)textColor;
@end
