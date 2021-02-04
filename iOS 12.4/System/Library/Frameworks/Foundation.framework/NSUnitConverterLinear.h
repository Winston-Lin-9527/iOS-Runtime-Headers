/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:11 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSUnitConverter.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NSUnitConverterLinear : NSUnitConverter <NSSecureCoding> {

	double _coefficient;
	double _constant;

}

@property (readonly) double coefficient;              //@synthesize coefficient=_coefficient - In the implementation block
@property (readonly) double constant;                 //@synthesize constant=_constant - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)baseUnitValueFromValue:(double)arg1 ;
-(double)valueFromBaseUnitValue:(double)arg1 ;
-(id)initWithCoefficient:(double)arg1 constant:(double)arg2 ;
-(double)coefficient;
-(id)initWithCoefficient:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(double)constant;
@end
