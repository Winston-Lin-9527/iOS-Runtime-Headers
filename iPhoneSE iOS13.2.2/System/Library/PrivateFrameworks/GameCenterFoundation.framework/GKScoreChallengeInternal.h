/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:20 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKChallengeInternal.h>

@class GKScoreInternal, GKLeaderboardInternal;

@interface GKScoreChallengeInternal : GKChallengeInternal {

	GKScoreInternal* _score;
	GKLeaderboardInternal* _leaderboard;

}

@property (nonatomic,copy) GKScoreInternal * score;                            //@synthesize score=_score - In the implementation block
@property (nonatomic,retain) GKLeaderboardInternal * leaderboard;              //@synthesize leaderboard=_leaderboard - In the implementation block
+(id)internalRepresentation;
+(id)secureCodedPropertyKeys;
-(void)dealloc;
-(unsigned long long)type;
-(GKScoreInternal *)score;
-(void)setScore:(GKScoreInternal *)arg1 ;
-(id)titleText;
-(void)setLeaderboard:(GKLeaderboardInternal *)arg1 ;
-(GKLeaderboardInternal *)leaderboard;
-(id)serverRepresentationForReceivingPlayer:(id)arg1 ;
@end
