/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:40 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface TIDocumentState : NSObject <NSSecureCoding> {

	NSString* _contextBeforeInput;
	NSString* _markedText;
	NSString* _selectedText;
	NSString* _contextAfterInput;
	NSRange _selectedRangeInMarkedText;

}

@property (nonatomic,readonly) NSString * contextBeforeInput;                  //@synthesize contextBeforeInput=_contextBeforeInput - In the implementation block
@property (nonatomic,readonly) NSString * markedText;                          //@synthesize markedText=_markedText - In the implementation block
@property (nonatomic,readonly) NSString * selectedText;                        //@synthesize selectedText=_selectedText - In the implementation block
@property (nonatomic,readonly) NSString * contextAfterInput;                   //@synthesize contextAfterInput=_contextAfterInput - In the implementation block
@property (nonatomic,readonly) NSRange selectedRangeInMarkedText;              //@synthesize selectedRangeInMarkedText=_selectedRangeInMarkedText - In the implementation block
+(id)documentStateOfDocument:(id)arg1 ;
+(id)documentStateOfDocumentWithParagraph:(id)arg1 ;
+(id)documentStateOfDocumentWithRecentInputIdentifier:(id)arg1 ;
+(id)documentStateOfSecureTextDocument:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)_selectedTextByDeletingInteriorSentences:(id)arg1 ;
+(id)_contextStringByTrimmingSuccedingLines:(id)arg1 ;
+(id)_contextStringByTrimmingPrecedingLines:(id)arg1 ;
+(id)documentStateWithContextBefore:(id)arg1 selectedText:(id)arg2 contextAfter:(id)arg3 ;
+(id)documentStateWithContextBefore:(id)arg1 markedText:(id)arg2 selectedRange:(NSRange)arg3 contextAfter:(id)arg4 ;
+(id)_string:(id)arg1 byTrimmingWordsBeforeIndex:(unsigned long long)arg2 ;
+(id)_string:(id)arg1 byTrimmingWordsAfterIndex:(unsigned long long)arg2 ;
+(id)documentStateForTestingWithText:(id)arg1 selectedRange:(NSRange)arg2 ;
+(id)documentStateForTestingWithContextBefore:(id)arg1 selectedText:(id)arg2 contextAfter:(id)arg3 ;
+(id)unboundedDocumentStateForTestingWithContextBefore:(id)arg1 selectedText:(id)arg2 contextAfter:(id)arg3 ;
-(id)initWithDocument:(id)arg1 ;
-(id)initWithDocumentWithParagraph:(id)arg1 ;
-(id)initWithDocumentWithRecentInputIdentifier:(id)arg1 ;
-(id)initWithSecureTextDocument:(id)arg1 ;
-(id)_positionFromPosition:(id)arg1 toPreviousWordBoundaryInDocument:(id)arg2 tokenAccumulator:(/*^block*/id)arg3 ;
-(id)_contextBeforePosition:(id)arg1 inDocument:(id)arg2 toBoundary:(long long)arg3 ;
-(id)_contextAfterPosition:(id)arg1 inDocument:(id)arg2 toBoundary:(long long)arg3 ;
-(id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2 inDocument:(id)arg3 ;
-(id)copyTextInRange:(id)arg1 fromDocument:(id)arg2 ;
-(id)initWithDocument:(id)arg1 contextBoundary:(long long)arg2 ;
-(id)_positionFromPosition:(id)arg1 toPreviousWordStartInDocument:(id)arg2 tokenAccumulator:(/*^block*/id)arg3 ;
-(id)fullString;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)markedText;
-(NSString *)selectedText;
-(id)initWithUnboundedContextBefore:(id)arg1 markedText:(id)arg2 selectedText:(id)arg3 unboundedContextAfter:(id)arg4 selectedRangeInMarkedText:(NSRange)arg5 ;
-(id)initWithContextBefore:(id)arg1 markedText:(id)arg2 selectedText:(id)arg3 contextAfter:(id)arg4 selectedRangeInMarkedText:(NSRange)arg5 ;
-(NSString *)contextBeforeInput;
-(NSString *)contextAfterInput;
-(BOOL)documentIsEmpty;
-(id)documentStateAfterInsertingText:(id)arg1 ;
-(id)documentStateAfterDeletingBackward;
-(id)documentStateAfterSettingMarkedText:(id)arg1 selectedRange:(NSRange)arg2 ;
-(id)documentStateAfterUnmarkingText;
-(id)documentStateAfterCursorAdjustment:(long long)arg1 ;
-(NSRange)selectedRangeInMarkedText;
-(id)documentStateAfterInsertingTextAfterSelection:(id)arg1 ;
-(id)documentStateAfterDeletingForward;
-(id)inputStemWithTerminatorPredicate:(/*^block*/id)arg1 ;
-(id)documentStateAfterReplacingText:(id)arg1 withText:(id)arg2 ;
-(id)inputStringWithTerminatorPredicate:(/*^block*/id)arg1 ;
-(id)initWithText:(id)arg1 selectedRange:(NSRange)arg2 ;
-(unsigned long long)hashString:(id)arg1 intoHashValue:(unsigned long long)arg2 ;
-(id)documentStateAfterCollapsingSelection;
-(id)wordPrefixOfString:(id)arg1 withTerminatorPredicate:(/*^block*/id)arg2 reverse:(BOOL)arg3 ;
-(unsigned long long)inputIndexWithTerminatorPredicate:(/*^block*/id)arg1 ;
-(BOOL)deletingBackwardsWillRemoveText;
@end
