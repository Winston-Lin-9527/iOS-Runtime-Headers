/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:19 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/_NURenderResult.h>
#import <libobjc.A.dylib/PIAutoLoopAnalysisResult.h>

@class NSDictionary, NSString;

@interface _PIAutoLoopAnalysisResult : _NURenderResult <PIAutoLoopAnalysisResult> {

	NSDictionary* _recipe;

}

@property (retain) NSDictionary * recipe;                            //@synthesize recipe=_recipe - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<NURenderStatistics> statistics; 
-(NSDictionary *)recipe;
-(void)setRecipe:(NSDictionary *)arg1 ;
@end
