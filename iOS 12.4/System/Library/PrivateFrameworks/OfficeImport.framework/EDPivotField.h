/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:38 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EDCollection;

@interface EDPivotField : NSObject {

	int mAxis;
	BOOL mCompact;
	BOOL mDataField;
	BOOL mShowDefaultSubTotal;
	BOOL mInsertBlankRow;
	BOOL mOutlineItems;
	BOOL mShowAllItems;
	BOOL mSubtotalTop;
	unsigned long long mNumFmtId;
	EDCollection* mPivotFieldItems;

}
+(id)pivotField;
-(BOOL)dataField;
-(void)setDataField:(BOOL)arg1 ;
-(BOOL)showDefaultSubTotal;
-(void)setShowDefaultSubTotal:(BOOL)arg1 ;
-(BOOL)insertBlankRow;
-(void)setInsertBlankRow:(BOOL)arg1 ;
-(BOOL)outlineItems;
-(void)setOutlineItems:(BOOL)arg1 ;
-(BOOL)showAllItems;
-(void)setShowAllItems:(BOOL)arg1 ;
-(BOOL)subtotalTop;
-(void)setSubtotalTop:(BOOL)arg1 ;
-(unsigned long long)numFmtId;
-(void)setNumFmtId:(unsigned long long)arg1 ;
-(id)pivotFieldItems;
-(id)init;
-(void)dealloc;
-(id)description;
-(BOOL)compact;
-(void)setAxis:(int)arg1 ;
-(int)axis;
-(void)setCompact:(BOOL)arg1 ;
@end
