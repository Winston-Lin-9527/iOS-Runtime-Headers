/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:06 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface TUMetadataDestinationID : NSObject <NSCopying> {

	NSString* _destinationID;
	NSString* _countryCode;
	CFPhoneNumberRef _phoneNumber;
	NSString* _cacheKey;

}

@property (nonatomic,copy,readonly) NSString * cacheKey;                   //@synthesize cacheKey=_cacheKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * destinationID;              //@synthesize destinationID=_destinationID - In the implementation block
@property (nonatomic,copy,readonly) NSString * countryCode;                //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,readonly) CFPhoneNumberRef phoneNumber;               //@synthesize phoneNumber=_phoneNumber - In the implementation block
+(id)destinationIDWithRecentCall:(id)arg1 ;
+(id)destinationIDWithDestinationID:(id)arg1 countryCode:(id)arg2 ;
+(id)destinationIDWithCall:(id)arg1 ;
-(NSString *)countryCode;
-(id)initWithRecentCall:(id)arg1 ;
-(id)initWithCall:(id)arg1 ;
-(id)initWithDestinationID:(id)arg1 countryCode:(id)arg2 ;
-(NSString *)destinationID;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)cacheKey;
-(CFPhoneNumberRef)phoneNumber;
@end
