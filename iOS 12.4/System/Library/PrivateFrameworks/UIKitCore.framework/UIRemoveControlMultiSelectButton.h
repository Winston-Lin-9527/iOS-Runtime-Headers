/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:33 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIRemoveControlMinusButton.h>

@interface UIRemoveControlMultiSelectButton : UIRemoveControlMinusButton {

	unsigned _isHighlighted : 1;
	unsigned _isSelected : 1;

}
+(id)minusImage;
+(float)defaultWidth;
+(id)plusImage;
+(id)minusCenterImage;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(BOOL)isRotating;
-(BOOL)isRotated;
-(id)initWithRemoveControl:(id)arg1 ;
-(void)setHiding:(BOOL)arg1 ;
-(BOOL)isHiding;
-(void)toggleRotate:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 highlighted:(BOOL)arg2 ;
@end
