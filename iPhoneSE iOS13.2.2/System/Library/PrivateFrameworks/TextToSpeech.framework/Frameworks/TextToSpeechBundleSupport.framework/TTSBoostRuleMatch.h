/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:41 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/Frameworks/TextToSpeechBundleSupport.framework/TextToSpeechBundleSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TextToSpeechBundleSupport/TextToSpeechBundleSupport-Structs.h>
@class NSString, NSArray;

@interface TTSBoostRuleMatch : NSObject {

	NSString* _rule;
	long long _boostRuleIndex;
	NSArray* _groupings;
	NSRange _range;

}

@property (nonatomic,retain) NSString * rule;                       //@synthesize rule=_rule - In the implementation block
@property (assign,nonatomic) NSRange range;                         //@synthesize range=_range - In the implementation block
@property (assign,nonatomic) long long boostRuleIndex;              //@synthesize boostRuleIndex=_boostRuleIndex - In the implementation block
@property (nonatomic,retain) NSArray * groupings;                   //@synthesize groupings=_groupings - In the implementation block
-(id)description;
-(NSRange)range;
-(void)setRange:(NSRange)arg1 ;
-(NSString *)rule;
-(void)setRule:(NSString *)arg1 ;
-(long long)boostRuleIndex;
-(NSArray *)groupings;
-(void)setBoostRuleIndex:(long long)arg1 ;
-(void)setGroupings:(NSArray *)arg1 ;
@end
