/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:41 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface SBSwitcherModifierActionSnapshot : NSObject {

	NSArray* _actionNames;
	NSArray* _actionDescriptions;

}

@property (nonatomic,retain) NSArray * actionNames;                     //@synthesize actionNames=_actionNames - In the implementation block
@property (nonatomic,retain) NSArray * actionDescriptions;              //@synthesize actionDescriptions=_actionDescriptions - In the implementation block
-(NSArray *)actionNames;
-(NSArray *)actionDescriptions;
-(void)setActionNames:(NSArray *)arg1 ;
-(void)setActionDescriptions:(NSArray *)arg1 ;
@end
