/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:18 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, TUHandle;

@interface TUMetadataDestinationID : NSObject <NSCopying> {

	NSString* _destinationID;
	NSString* _countryCode;
	CFPhoneNumberRef _phoneNumber;
	NSString* _cacheKey;
	TUHandle* _normalizedHandle;

}

@property (nonatomic,copy,readonly) NSString * cacheKey;                   //@synthesize cacheKey=_cacheKey - In the implementation block
@property (nonatomic,readonly) TUHandle * normalizedHandle;                //@synthesize normalizedHandle=_normalizedHandle - In the implementation block
@property (nonatomic,copy,readonly) NSString * destinationID;              //@synthesize destinationID=_destinationID - In the implementation block
@property (nonatomic,copy,readonly) NSString * countryCode;                //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,readonly) CFPhoneNumberRef phoneNumber;               //@synthesize phoneNumber=_phoneNumber - In the implementation block
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)countryCode;
-(CFPhoneNumberRef)phoneNumber;
-(NSString *)cacheKey;
-(NSString *)destinationID;
-(id)initWithCall:(id)arg1 ;
-(id)initWithDestinationID:(id)arg1 countryCode:(id)arg2 ;
-(TUHandle *)normalizedHandle;
@end
