/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:16 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardServices/SBSApplicationShortcutIcon.h>

@class NSString, NSData;

@interface SBSApplicationShortcutContactIcon : SBSApplicationShortcutIcon {

	NSString* _contactIdentifier;
	NSString* _firstName;
	NSString* _lastName;
	NSData* _imageData;

}

@property (nonatomic,readonly) NSString * contactIdentifier;              //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * firstName;                      //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,readonly) NSString * lastName;                       //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,readonly) NSData * imageData;                        //@synthesize imageData=_imageData - In the implementation block
-(id)_initForSubclass;
-(id)initWithContactIdentifier:(id)arg1 ;
-(id)initWithFirstName:(id)arg1 lastName:(id)arg2 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSData *)imageData;
-(NSString *)contactIdentifier;
-(id)initWithFirstName:(id)arg1 lastName:(id)arg2 imageData:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
@end
