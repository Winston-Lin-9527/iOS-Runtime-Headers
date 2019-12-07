/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:21 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSError;

@interface AFSiriActivationResult : NSObject <NSCopying, NSSecureCoding> {

	long long _actionType;
	NSError* _error;

}

@property (nonatomic,readonly) long long actionType;              //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,copy,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSError *)error;
-(long long)actionType;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(id)initWithActionType:(long long)arg1 error:(id)arg2 ;
@end
