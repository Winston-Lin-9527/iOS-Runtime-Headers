/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:04 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CKRecordID, NSString;

@interface PKCloudDeletedRecord : NSObject <NSSecureCoding> {

	CKRecordID* _recordID;
	NSString* _recordType;

}

@property (nonatomic,readonly) CKRecordID * recordID;                   //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,copy,readonly) NSString * recordType;              //@synthesize recordType=_recordType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)recordType;
-(CKRecordID *)recordID;
-(id)initWithRecordID:(id)arg1 recordType:(id)arg2 ;
@end
