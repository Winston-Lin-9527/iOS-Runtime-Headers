/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:36 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Sharing/Sharing-Structs.h>
@class SFTokenBucket;

@interface SFTokenBucketWithDups : NSObject {

	SFTokenBucket* _bucket;
	unsigned long long _maxDups;
	CFArrayRef _dups;

}
-(id)initWithBucket:(id)arg1 dupHistoryLength:(unsigned long long)arg2 ;
-(BOOL)acquireTokenForIdentifier:(unsigned long long)arg1 ;
-(id)init;
-(void)dealloc;
@end
