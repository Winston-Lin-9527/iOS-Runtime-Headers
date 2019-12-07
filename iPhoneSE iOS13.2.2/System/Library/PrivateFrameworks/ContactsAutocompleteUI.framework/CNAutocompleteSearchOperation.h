/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:40 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class CNAutocompleteSearchManager, NSNumber, NSString;

@interface CNAutocompleteSearchOperation : NSOperation {

	CNAutocompleteSearchManager* _owner;
	NSNumber* _taskID;
	NSString* _text;
	NSString* _sendingAddress;

}

@property (nonatomic,readonly) CNAutocompleteSearchManager * owner;              //@synthesize owner=_owner - In the implementation block
@property (nonatomic,readonly) NSNumber * taskID;                                //@synthesize taskID=_taskID - In the implementation block
@property (nonatomic,readonly) NSString * text;                                  //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) NSString * sendingAddress;                        //@synthesize sendingAddress=_sendingAddress - In the implementation block
@property (nonatomic,readonly) unsigned long long type; 
+(id)operationWithOwner:(id)arg1 text:(id)arg2 taskID:(id)arg3 ;
-(unsigned long long)type;
-(CNAutocompleteSearchManager *)owner;
-(NSString *)text;
-(NSString *)sendingAddress;
-(NSNumber *)taskID;
@end
