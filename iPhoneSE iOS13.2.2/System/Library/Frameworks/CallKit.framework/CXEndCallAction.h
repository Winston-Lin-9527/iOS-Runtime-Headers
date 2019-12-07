/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:31 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)fulfill;
-(id)customDescription;
-(NSDate *)dateEnded;
-(void)setDateEnded:(NSDate *)arg1 ;
-(void)updateSanitizedCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(void)fulfillWithDateEnded:(id)arg1 ;
-(void)updateAsFulfilledWithDateEnded:(id)arg1 ;
@end
