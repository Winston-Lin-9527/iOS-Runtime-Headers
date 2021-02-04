/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:50 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ICSearchResultRanker : NSObject
+(id)rankingScoresForSearchableItems:(id)arg1 withRankingQueryBitDictionary:(id)arg2 ;
+(id)relevanceBitFieldForSearchableItems:(id)arg1 ;
+(id)initializeScoreArrayOfLength:(unsigned long long)arg1 setAllZeros:(BOOL)arg2 ;
+(id)rankingRules;
+(BOOL)bitAtPosition:(long long)arg1 isTrueInValue:(unsigned long long)arg2 ;
+(/*^block*/id)titleOfNoteOrAttachmentMatchingRule;
+(/*^block*/id)participantNameOrEmailMatchingRule;
+(/*^block*/id)bodyOfNoteOrAttachmentMatchingRule;
@end
