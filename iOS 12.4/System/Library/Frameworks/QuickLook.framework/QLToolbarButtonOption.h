/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:07 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface QLToolbarButtonOption : NSObject <NSSecureCoding> {

	NSString* _identifier;
	NSString* _title;
	long long _style;

}

@property (readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (copy) NSString * title;                       //@synthesize title=_title - In the implementation block
@property (assign) long long style;                      //@synthesize style=_style - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setStyle:(long long)arg1 ;
-(long long)style;
-(id)initWithIdentifier:(id)arg1 ;
@end
