/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:17 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebContentAnalysis/WebContentAnalysis-Structs.h>
#import <WebContentAnalysis/WFLSMMap.h>

@interface WFLSMScoreNormalizedMap : WFLSMMap {

	float* maxScore;
	float* minScore;

}
-(void)dealloc;
-(id)initWithMap:(LSMMapRef)arg1 ;
-(id)evaluate:(id)arg1 ;
@end
