/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:20 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CTDataConnectionAvailabilityStatus : NSObject <NSCopying, NSSecureCoding> {

	BOOL _available;
	int _csiError;

}

@property (assign,nonatomic) BOOL available;              //@synthesize available=_available - In the implementation block
@property (assign,nonatomic) int csiError;                //@synthesize csiError=_csiError - In the implementation block
+(BOOL)supportsSecureCoding;
-(int)csiError;
-(void)setCsiError:(int)arg1 ;
-(void)setAvailable:(BOOL)arg1 ;
-(BOOL)available;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
