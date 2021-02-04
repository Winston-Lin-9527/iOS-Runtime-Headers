/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:05 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class MLGKDecisionTree, GKDecisionNode, GKRandomSource;

@interface GKDecisionTree : NSObject <NSSecureCoding> {

	GKCDecisionTree* _decisionTree;
	BOOL _isInduced;
	MLGKDecisionTree* mlkitDecisionTree;
	GKDecisionNode* _rootNode;
	GKRandomSource* _randomSource;

}

@property (nonatomic,retain) GKDecisionNode * rootNode;                //@synthesize rootNode=_rootNode - In the implementation block
@property (nonatomic,copy) GKRandomSource * randomSource;              //@synthesize randomSource=_randomSource - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setRootNode:(GKDecisionNode *)arg1 ;
-(GKRandomSource *)randomSource;
-(void)setRandomSource:(GKRandomSource *)arg1 ;
-(id)findActionForAnswers:(id)arg1 ;
-(id)initWithAttribute:(id)arg1 ;
-(id)initWithExamples:(id)arg1 actions:(id)arg2 attributes:(id)arg3 ;
-(BOOL)exportToURL:(id)arg1 error:(id)arg2 ;
-(id)getFlattenedTree;
-(id)findAccuracyWithExamples:(id)arg1 actions:(id)arg2 attributes:(id)arg3 ;
-(GKDecisionNode *)rootNode;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithURL:(id)arg1 error:(id)arg2 ;
@end
