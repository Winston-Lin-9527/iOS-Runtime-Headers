/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:11 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@interface _NSXPCInterfaceInfo : NSObject {

	unsigned long long _remoteVersion;
	os_unfair_lock_s _knownSelectorsLock;
	CFDictionaryRef _knownSelectors;
	CFDictionaryRef _methodInfo;
	Class _xpcDOSubclass;

}

@property (assign) unsigned long long remoteVersion;              //@synthesize remoteVersion=_remoteVersion - In the implementation block
-(unsigned long long)remoteVersion;
-(void)setRemoteVersion:(unsigned long long)arg1 ;
-(id)init;
-(void)dealloc;
@end
