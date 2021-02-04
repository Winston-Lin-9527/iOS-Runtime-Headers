/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:56 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallKit/CallKit-Structs.h>
#import <CallKit/CXCallAction.h>

@class NSDate;

@interface CXEndCallAction : CXCallAction {

	NSDate* _dateEnded;

}

@property (nonatomic,copy) NSDate * dateEnded;              //@synthesize dateEnded=_dateEnded - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)dateEnded;
-(void)setDateEnded:(NSDate *)arg1 ;
-(void)fulfill;
-(id)customDescription;
-(void)updateSanitizedCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(void)fulfillWithDateEnded:(id)arg1 ;
-(void)updateAsFulfilledWithDateEnded:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end
