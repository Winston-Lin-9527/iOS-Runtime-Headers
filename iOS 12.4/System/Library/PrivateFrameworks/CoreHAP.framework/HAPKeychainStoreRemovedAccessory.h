/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:32 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSString, NSDate, NSError;

@interface HAPKeychainStoreRemovedAccessory : HMFObject {

	NSString* _accessoryName;
	NSDate* _creationDate;
	NSError* _removeError;

}

@property (nonatomic,readonly) NSString * accessoryName;              //@synthesize accessoryName=_accessoryName - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;                 //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,retain) NSError * removeError;                   //@synthesize removeError=_removeError - In the implementation block
-(NSDate *)creationDate;
-(NSError *)removeError;
-(id)initWithName:(id)arg1 creationDate:(id)arg2 ;
-(void)setRemoveError:(NSError *)arg1 ;
-(NSString *)accessoryName;
-(id)description;
@end
