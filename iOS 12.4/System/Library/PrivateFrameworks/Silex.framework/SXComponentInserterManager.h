/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:03 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXComponentInserterManager.h>

@protocol SXComponentInserterManager <SXComponentInserterProvider>
@required
-(void)addInserter:(id)arg1;
-(void)removeInserter:(id)arg1;

@end


@class NSMutableArray, NSString, NSArray;

@interface SXComponentInserterManager : NSObject <SXComponentInserterManager> {

	NSMutableArray* _mutableInserters;

}

@property (nonatomic,readonly) NSMutableArray * mutableInserters;              //@synthesize mutableInserters=_mutableInserters - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * inserters; 
-(NSMutableArray *)mutableInserters;
-(NSArray *)inserters;
-(void)addInserter:(id)arg1 ;
-(void)removeInserter:(id)arg1 ;
-(id)init;
@end
