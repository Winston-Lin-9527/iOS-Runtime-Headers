/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:02 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSScanner, NSMutableDictionary;

@interface TMLMarkdownParser : NSObject {

	NSArray* _rules;
	NSScanner* _scanner;
	NSMutableDictionary* _attributes;
	NSMutableDictionary* _tag;
	NSArray* _regex;
	NSArray* _extraRules;
	NSArray* _extraRegex;

}
+(id)parse:(id)arg1 tags:(id*)arg2 withRules:(id)arg3 ;
+(id)unescapeString:(id)arg1 ;
+(id)regexFromRules:(id)arg1 ;
+(id)stringOfTagType:(id)arg1 andCount:(unsigned long long)arg2 ;
+(id)preProcessString:(id)arg1 ;
+(id)postProcessString:(id)arg1 ;
-(id)replacestring:(id)arg1 usingRule:(id)arg2 atIndex:(unsigned long long)arg3 additonalRules:(BOOL)arg4 ;
-(BOOL)isListTagOpen:(id)arg1 ;
-(id)tagFromType:(int)arg1 ;
-(id)parse:(id)arg1 tags:(id*)arg2 ;
-(id)init;
@end
