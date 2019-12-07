/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:53 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/VCAudioStreamConfig.h>

@class VCAudioRuleCollection;

@interface VCSessionParticipantAudioStreamConfig : VCAudioStreamConfig {

	VCAudioRuleCollection* _audioRules;
	VCAudioRuleCollection* _audioRulesNegotiated;

}

@property (nonatomic,retain) VCAudioRuleCollection * audioRules;                        //@synthesize audioRules=_audioRules - In the implementation block
@property (nonatomic,retain) VCAudioRuleCollection * audioRulesNegotiated;              //@synthesize audioRulesNegotiated=_audioRulesNegotiated - In the implementation block
-(void)dealloc;
-(VCAudioRuleCollection *)audioRulesNegotiated;
-(void)setAudioRulesNegotiated:(VCAudioRuleCollection *)arg1 ;
-(VCAudioRuleCollection *)audioRules;
-(void)setAudioRules:(VCAudioRuleCollection *)arg1 ;
@end
