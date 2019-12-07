/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:17 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VSTreeNode.h>

@class NSString;

@interface VSKeyPathBasedTreeNode : VSTreeNode {

	NSString* _keyPath;

}

@property (nonatomic,copy,readonly) NSString * keyPath;              //@synthesize keyPath=_keyPath - In the implementation block
-(id)init;
-(NSString *)keyPath;
-(id)initWithRepresentedObject:(id)arg1 ;
-(id)initWithRepresentedObject:(id)arg1 keyPath:(id)arg2 ;
@end
