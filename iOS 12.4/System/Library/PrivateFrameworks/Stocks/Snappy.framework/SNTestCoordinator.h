/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:55 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Stocks/Snappy.framework/Snappy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SNTestCoordinating.h>

@class UIApplication, NSString;

@interface SNTestCoordinator : NSObject <SNTestCoordinating> {

	UIApplication* _application;

}

@property (nonatomic,readonly) UIApplication * application;              //@synthesize application=_application - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)requiresRotationForOrientation:(long long)arg1 ;
-(void)rotateToOrientation:(long long)arg1 beforeRotation:(/*^block*/id)arg2 afterRotation:(/*^block*/id)arg3 ;
-(void)failedTestWithTestName:(id)arg1 failureMessage:(id)arg2 ;
-(void)startedTestWithTestName:(id)arg1 ;
-(void)finishedTestWithTestName:(id)arg1 waitForCommit:(BOOL)arg2 ;
-(void)scrollTestWithTestName:(id)arg1 scrollView:(id)arg2 iterations:(long long)arg3 offset:(long long)arg4 direction:(unsigned long long)arg5 ;
-(id)initWithApplication:(id)arg1 ;
-(UIApplication *)application;
@end
