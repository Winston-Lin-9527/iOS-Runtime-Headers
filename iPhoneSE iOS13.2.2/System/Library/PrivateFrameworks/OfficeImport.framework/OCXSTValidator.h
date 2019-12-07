/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:55 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface OCXSTValidator : NSObject {

	NSMutableDictionary* _simpleTypeMap;

}
+(id)validator;
+(id)validateIntegerValue:(long long)arg1 minValue:(long long)arg2 maxValue:(long long)arg3 ;
+(BOOL)isValidValue:(id)arg1 simpleType:(unsigned long long)arg2 ;
+(id)simpleType:(unsigned long long)arg1 integerValue:(long long)arg2 ;
+(id)simpleType:(unsigned long long)arg1 stringValue:(id)arg2 ;
-(id)init;
-(id)simpleTypeMap;
@end
