/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:51 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableSet;

@interface OITSUDateFormatCategoryEntry : NSObject {

	unsigned short _separator;
	NSMutableArray* _formatters;
	NSMutableSet* _formatStrings;

}
-(unsigned short)separator;
-(id)formatStrings;
-(id)newDateFromString:(id)arg1 forceAllowAMPM:(BOOL)arg2 successfulFormatString:(id*)arg3 perfect:(BOOL*)arg4 ;
-(id)initWithSeparator:(unsigned short)arg1 ;
-(void)addFormat:(id)arg1 locale:(id)arg2 ;
@end
