/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:17 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MFContactsSearchOperation.h>

@class NSString;

@interface MFRecentsSearchOperation : MFContactsSearchOperation {

	NSString* _bundleIdentifier;
	unsigned long long _implicitGroupThreshold;
	unsigned long long _queryOptions;

}
+(id)operationWithAddressBook:(void*)arg1 owner:(id)arg2 text:(id)arg3 taskID:(id)arg4 properties:(id)arg5 bundleIdentifier:(id)arg6 implicitGroupThreshold:(unsigned long long)arg7 queryOptions:(unsigned long long)arg8 ;
-(void)dealloc;
-(unsigned long long)type;
-(void)main;
@end
