/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:02 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsUI2/NewsUI2-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/TSAnimatedViewPropertiesProviderType.h>

@class NSString;

@interface TSImageHeadlineView : UIView <TSAnimatedViewPropertiesProviderType> {

	 insetView;
	 offensiveView;
	 thumbnailImageView;
	 textView;
	 footerView;
	 axElement;

}

@property (copy,nonatomic) NSString * accessibilityLabel; 
@property (copy,nonatomic) NSString * accessibilityValue; 
@property (copy,nonatomic) NSString * accessibilityHint; 
@property (assign,nonatomic) unsigned long long accessibilityTraits; 
-(id)animatedViewProperties;
-(NSString *)accessibilityLabel;
-(NSString *)accessibilityValue;
-(NSString *)accessibilityHint;
-(unsigned long long)accessibilityTraits;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(void)setAccessibilityValue:(NSString *)arg1 ;
-(void)setAccessibilityHint:(NSString *)arg1 ;
-(void)setAccessibilityTraits:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
@end
