/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:58 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SecurityFoundation/SecurityFoundation-Structs.h>
@class NSString;

@interface SFAccessControlEntry_Ivars : NSObject {

	NSString* bundleID;
	struct {
		unsigned isOwner : 1;
		unsigned canRead : 1;
		unsigned canWrite : 1;
	}  accessControlEntryFlags;

}
@end
