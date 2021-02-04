/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:34 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSString;

@interface OADFormula : NSObject {

	int mType;
	OADFormulaArg mArgs[3];
	NSString* mName;

}
-(OADFormulaArg)argAtIndex:(unsigned)arg1 ;
-(id)initWithType:(int)arg1 arg0:(OADFormulaArg)arg2 arg1:(OADFormulaArg)arg3 arg2:(OADFormulaArg)arg4 ;
-(void)dealloc;
-(id)name;
-(void)setName:(id)arg1 ;
-(id)description;
-(int)type;
@end
