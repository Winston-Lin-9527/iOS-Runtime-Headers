/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:43 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenReaderCore/SCRCMathExpression.h>

@class SCRCMathExpression;

@interface SCRCMathSubSuperscriptExpression : SCRCMathExpression {

	SCRCMathExpression* _base;
	SCRCMathExpression* _subscript;
	SCRCMathExpression* _superscript;

}

@property (nonatomic,retain) SCRCMathExpression * base;                     //@synthesize base=_base - In the implementation block
@property (nonatomic,retain) SCRCMathExpression * subscript;                //@synthesize subscript=_subscript - In the implementation block
@property (nonatomic,retain) SCRCMathExpression * superscript;              //@synthesize superscript=_superscript - In the implementation block
-(id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(BOOL)arg2 ;
-(id)speakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3 ;
-(id)subExpressions;
-(id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2 ;
-(id)latexMathModeDescription;
-(unsigned long long)fractionLevel;
-(BOOL)isRangeSubSuperscript;
-(BOOL)isBaseSubSuperscript;
-(void)setSubscript:(SCRCMathExpression *)arg1 ;
-(SCRCMathExpression *)subscript;
-(id)_stringToAddForSuperscript:(id)arg1 withPriorDescription:(id)arg2 updatedDescription:(id*)arg3 ;
-(id)mathMLString;
-(BOOL)isNumber;
-(SCRCMathExpression *)superscript;
-(void)setSuperscript:(SCRCMathExpression *)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(void)setBase:(SCRCMathExpression *)arg1 ;
-(SCRCMathExpression *)base;
@end
