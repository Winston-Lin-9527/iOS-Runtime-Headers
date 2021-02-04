/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:26 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBFObserver.h>

@protocol OS_dispatch_semaphore;
@class NSMutableArray, NSError, NSObject, NSString;

@interface _SBFAccumulatingObserver : NSObject <SBFObserver> {

	NSMutableArray* _results;
	NSError* _error;
	BOOL _didComplete;
	NSObject*<OS_dispatch_semaphore> _semaphore;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)observerDidComplete;
-(void)observerDidReceiveResult:(id)arg1 ;
-(void)observerDidFailWithError:(id)arg1 ;
-(id)waitForResults:(id*)arg1 ;
-(id)init;
@end
