/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:16 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AVTArchiverBasedDomain : NSObject <NSSecureCoding> {

	NSString* _domainIdentifier;
	NSString* _primaryAvatarIdentifier;

}

@property (nonatomic,copy,readonly) NSString * domainIdentifier;                     //@synthesize domainIdentifier=_domainIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * primaryAvatarIdentifier;              //@synthesize primaryAvatarIdentifier=_primaryAvatarIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)domainIdentifier;
-(id)initWithDomainIdentifier:(id)arg1 primaryAvatarIdentifier:(id)arg2 ;
-(NSString *)primaryAvatarIdentifier;
-(id)domainBySettingPrimaryAvatarIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end
