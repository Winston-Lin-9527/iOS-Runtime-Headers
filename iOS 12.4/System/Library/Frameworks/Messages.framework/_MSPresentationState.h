/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:55 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Messages.framework/Messages
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _MSPresentationState : NSObject <NSSecureCoding> {

	unsigned long long _presentationStyle;
	unsigned long long _presentationContext;

}

@property (assign,nonatomic) unsigned long long presentationStyle;                  //@synthesize presentationStyle=_presentationStyle - In the implementation block
@property (nonatomic,readonly) unsigned long long presentationContext;              //@synthesize presentationContext=_presentationContext - In the implementation block
+(BOOL)isRunningInCameraContext;
+(BOOL)supportsSecureCoding;
-(unsigned long long)presentationContext;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(void)setPresentationStyle:(unsigned long long)arg1 ;
-(unsigned long long)presentationStyle;
@end
