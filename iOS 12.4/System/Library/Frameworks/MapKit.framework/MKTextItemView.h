/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:49 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class NSArray;

@interface MKTextItemView : UIView {

	NSArray* _labels;

}

@property (nonatomic,copy) NSArray * labels;              //@synthesize labels=_labels - In the implementation block
-(id)initWithStrings:(id)arg1 labelsFont:(id)arg2 labelsSpacing:(double)arg3 labelsNumberOfLines:(long long)arg4 ;
-(void)setTextColor:(id)arg1 ;
-(void)setLabels:(NSArray *)arg1 ;
-(NSArray *)labels;
@end
