/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:41 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SBSwitcherModifierEventSnapshot, SBSwitcherModifierStackSnapshot, SBSwitcherModifierActionSnapshot;

@interface SBSwitcherModifierTimelineEntry : NSObject {

	SBSwitcherModifierEventSnapshot* _eventSnapshot;
	SBSwitcherModifierStackSnapshot* _postEventStackSnapshot;
	SBSwitcherModifierActionSnapshot* _actionSnapshot;

}

@property (nonatomic,retain) SBSwitcherModifierEventSnapshot * eventSnapshot;                       //@synthesize eventSnapshot=_eventSnapshot - In the implementation block
@property (nonatomic,retain) SBSwitcherModifierStackSnapshot * postEventStackSnapshot;              //@synthesize postEventStackSnapshot=_postEventStackSnapshot - In the implementation block
@property (nonatomic,retain) SBSwitcherModifierActionSnapshot * actionSnapshot;                     //@synthesize actionSnapshot=_actionSnapshot - In the implementation block
-(SBSwitcherModifierEventSnapshot *)eventSnapshot;
-(SBSwitcherModifierActionSnapshot *)actionSnapshot;
-(SBSwitcherModifierStackSnapshot *)postEventStackSnapshot;
-(void)setEventSnapshot:(SBSwitcherModifierEventSnapshot *)arg1 ;
-(void)setPostEventStackSnapshot:(SBSwitcherModifierStackSnapshot *)arg1 ;
-(void)setActionSnapshot:(SBSwitcherModifierActionSnapshot *)arg1 ;
@end
