/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:18 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProofReader/ProofReader-Structs.h>
@class NSString;

@interface PRLexicon : NSObject {

	NSString* _localization;
	NSString* _unigramsPath;
	NSString* _converterPath;
	const void* _lexicon;
	void* _converter;

}
+(id)lexiconWithLocalization:(id)arg1 unigramsPath:(id)arg2 converterPath:(id)arg3 ;
-(void*)converter;
-(unsigned)tokenIDForString:(id)arg1 ;
-(id)stringForTokenID:(unsigned)arg1 ;
-(void)enumerateCompletionsForPrefix:(id)arg1 maxCompletions:(unsigned long long)arg2 withBlock:(/*^block*/id)arg3 ;
-(BOOL)getProbabilityForTokenID:(unsigned)arg1 probability:(double*)arg2 ;
-(BOOL)getProbabilityForString:(id)arg1 probability:(double*)arg2 ;
-(void)enumerateEntriesForString:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(LXLexiconRef)lexicon;
-(id)initWithLocalization:(id)arg1 unigramsPath:(id)arg2 converterPath:(id)arg3 ;
-(id)createCursor;
-(void)dealloc;
-(id)description;
@end
