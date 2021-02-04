/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:44 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IDS/IDS-Structs.h>
@class NSMutableDictionary;

@interface _IDSDeviceConnectionActiveMap : NSObject {

	NSMutableDictionary* _activeConnectionMap;
	os_unfair_lock_s _writeLock;

}
+(id)sharedInstance;
-(void)setActiveConnection:(id)arg1 forKey:(id)arg2 ;
-(BOOL)hasActiveConnection:(id)arg1 forKey:(id)arg2 ;
-(void)removeActiveConnection:(id)arg1 forKey:(id)arg2 ;
-(id)init;
@end
