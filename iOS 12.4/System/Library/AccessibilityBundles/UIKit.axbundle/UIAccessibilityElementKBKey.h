/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:28 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKitCore/UIAccessibilityElement.h>

@class UIKBTree, NSArray;

@interface UIAccessibilityElementKBKey : UIAccessibilityElement {

	UIKBTree* _key;
	BOOL _changesOnShiftDown;
	NSArray* _cachedVariantKeys;

}

@property (nonatomic,retain) NSArray * cachedVariantKeys;              //@synthesize cachedVariantKeys=_cachedVariantKeys - In the implementation block
@property (nonatomic,retain) UIKBTree * key;                           //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL changesOnShiftDown;                  //@synthesize changesOnShiftDown=_changesOnShiftDown - In the implementation block
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(id)variantKeysForKey:(id)arg1 ;
-(BOOL)_accessibilitySupportsActivateAction;
-(id)_accessibilitySupportGesturesAttributes;
-(id)initWithAccessibilityContainer:(id)arg1 key:(id)arg2 ;
-(id)_accessibilityVariantKeys;
-(BOOL)_accessibilityKeyboardSupportsGestureMode;
-(BOOL)_accessibilityAllowsAlternativeCharacterActivation;
-(BOOL)_accessibilityHasVariantKeys;
-(BOOL)_accessibilityKeyboardKeyHasSignificantAlternateActions;
-(BOOL)_accessibilityWasForcedToUseForeignKB;
-(BOOL)isButtonType;
-(id)_axLayoutStar;
-(BOOL)_accessibilityActivateForPanAlternate:(BOOL)arg1 isSecondAlternate:(BOOL)arg2 ;
-(BOOL)_accessibilityIsInternationalKeyboardKey;
-(BOOL)_axIsDictationKey;
-(id)_accessibilityLocalizedStringForKeyboardLocale:(id)arg1 ;
-(BOOL)_axIsShifted;
-(void)setChangesOnShiftDown:(BOOL)arg1 ;
-(id)_axDualStringLabel;
-(BOOL)allowsCaseChangeOnShift;
-(BOOL)isUnaffectedByShiftLock;
-(BOOL)changesOnShiftDown;
-(void)_applyCapitalLetterTransform;
-(id)_accessibilityLabel;
-(BOOL)_allowCachingAccessibilityLabel;
-(BOOL)_accessibilityIsDeleteKey;
-(BOOL)_accessibilityIsKeySelected;
-(NSArray *)cachedVariantKeys;
-(void)setCachedVariantKeys:(NSArray *)arg1 ;
-(BOOL)_performCapsLockDoubleTap;
-(BOOL)_accessibilityActivatePanAlternate:(id)arg1 ;
-(BOOL)_accessibilityKeyboardKeyAllowsTouchTyping;
-(BOOL)_accessibilityDismissAlternativeKeyPicker;
-(id)_accessibilityKeyboardKeyEnteredString;
-(id)_accessibilityKeyComponentName;
-(id)_accessibilityLayoutCursorKeyplaneComponentName;
-(CGRect)accessibilityFrame;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(id)accessibilityHint;
-(CGPoint)accessibilityActivationPoint;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(BOOL)accessibilityActivate;
-(id)accessibilityCustomActions;
-(id)accessibilityIdentifier;
-(id)description;
-(UIKBTree *)key;
-(void)setKey:(UIKBTree *)arg1 ;
@end
