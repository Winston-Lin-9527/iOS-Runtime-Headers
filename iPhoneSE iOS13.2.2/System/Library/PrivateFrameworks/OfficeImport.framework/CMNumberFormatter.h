/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:50 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CMNumberFormatter : NSObject {

	int _format;
	int _language;
	void* _numberFormatter;

}
+(id)formatterForNumberFormat:(int)arg1 language:(int)arg2 ;
-(void)dealloc;
-(id)stringForNumber:(unsigned long long)arg1 ;
-(id)initWithNumberFormat:(int)arg1 language:(int)arg2 ;
@end
