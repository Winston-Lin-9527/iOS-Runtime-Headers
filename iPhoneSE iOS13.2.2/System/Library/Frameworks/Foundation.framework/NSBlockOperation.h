/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:22 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSMutableArray, NSArray;

@interface NSBlockOperation : NSOperation {

	NSMutableArray* _executionBlocks;
	/*^block*/id _block;

}

@property (copy,readonly) NSArray * executionBlocks; 
+(id)blockOperationWithBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)addExecutionBlock:(/*^block*/id)arg1 ;
-(void)main;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(NSArray *)executionBlocks;
@end
