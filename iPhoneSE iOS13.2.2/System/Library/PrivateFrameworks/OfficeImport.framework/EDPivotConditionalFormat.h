/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:56 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EDCollection;

@interface EDPivotConditionalFormat : NSObject {

	unsigned long long mPriority;
	int mType;
	int mScope;
	EDCollection* mPivotAreas;

}
+(id)pivotConditionalFormat;
-(id)init;
-(id)description;
-(int)type;
-(void)setType:(int)arg1 ;
-(unsigned long long)priority;
-(void)setPriority:(unsigned long long)arg1 ;
-(int)scope;
-(void)setScope:(int)arg1 ;
-(id)pivotAreas;
@end
