/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:13 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HMFUnfairLock, NSMutableDictionary;

@interface HMFClassRegistry : HMFObject {

	HMFUnfairLock* _lock;
	NSMutableDictionary* _classes;
	Class _defaultClass;

}

@property (readonly) Class defaultClass;              //@synthesize defaultClass=_defaultClass - In the implementation block
-(id)initWithDefaultClass:(Class)arg1 ;
-(Class)defaultClass;
-(Class)classForKey:(id)arg1 ;
-(void)setClass:(Class)arg1 forKey:(id)arg2 ;
-(id)init;
@end
