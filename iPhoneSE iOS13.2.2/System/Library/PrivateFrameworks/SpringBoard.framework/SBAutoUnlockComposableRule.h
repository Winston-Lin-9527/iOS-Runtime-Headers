/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBAutoUnlockRule.h>

@class NSMutableSet, NSString;

@interface SBAutoUnlockComposableRule : NSObject <SBAutoUnlockRule> {

	NSMutableSet* _rules;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)shouldAutoUnlockForSource:(int)arg1 ;
-(void)addAutoUnlockRule:(id)arg1 ;
-(void)removeAutoUnlockRule:(id)arg1 ;
@end
