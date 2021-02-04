/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:33 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsNaturalLanguage.framework/DataDetectorsNaturalLanguage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataDetectorsNaturalLanguage/IPFeatureExtractor.h>

@interface IPKeywordFeatureExtractor : IPFeatureExtractor
-(id)featuresForTextString:(id)arg1 inMessageUnit:(id)arg2 context:(id)arg3 ;
-(id)matchesForTextString:(id)arg1 inMessageUnit:(id)arg2 eventType:(id)arg3 ;
-(id)matchesForTextString:(id)arg1 inMessageUnit:(id)arg2 eventType:(id)arg3 keywordType:(unsigned long long)arg4 ;
-(id)_matchingKeywordsForRegex:(id)arg1 inText:(id)arg2 message:(id)arg3 eventType:(id)arg4 keywordType:(unsigned long long)arg5 ;
@end
