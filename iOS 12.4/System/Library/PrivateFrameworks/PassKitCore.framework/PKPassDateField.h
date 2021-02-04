/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:36 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPassField.h>

@interface PKPassDateField : PKPassField {

	BOOL _isRelative;
	BOOL _ignoresTimeZone;
	long long _dateStyle;
	long long _timeStyle;

}

@property (assign,nonatomic) long long dateStyle;               //@synthesize dateStyle=_dateStyle - In the implementation block
@property (assign,nonatomic) long long timeStyle;               //@synthesize timeStyle=_timeStyle - In the implementation block
@property (assign,nonatomic) BOOL isRelative;                   //@synthesize isRelative=_isRelative - In the implementation block
@property (assign,nonatomic) BOOL ignoresTimeZone;              //@synthesize ignoresTimeZone=_ignoresTimeZone - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setIsRelative:(BOOL)arg1 ;
-(void)setIgnoresTimeZone:(BOOL)arg1 ;
-(long long)dateStyle;
-(long long)timeStyle;
-(BOOL)ignoresTimeZone;
-(BOOL)isRelative;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)value;
-(void)setDateStyle:(long long)arg1 ;
-(void)setTimeStyle:(long long)arg1 ;
@end
