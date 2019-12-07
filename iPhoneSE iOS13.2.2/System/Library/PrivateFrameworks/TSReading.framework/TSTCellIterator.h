/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:13 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSReading/TSReading-Structs.h>
@class TSTTableModel, TSTCellRegion, TSTTableDataStore, TSTTableTileRowInfo, TSTTableTile, TSTCell;

@interface TSTCellIterator : NSObject {

	TSTTableModel* mTableModel;
	TSTCellRegion* mModelRegion;
	NSObject* mModelRegionIterator;
	TSTTableDataStore* mTableDataStore;
	SCD_Struct_TS139 mPreviousCellID;
	TSTTableTileRowInfo* mCurRow;
	TSTTableTile* mCurTile;
	unsigned short mCurRowID;
	NSRange mCurTileRange;
	TSTCell* mCell;
	BOOL mSkipStyleOnlyCells;
	BOOL mSkipCommentStorageOnlyCells;
	BOOL mDontExpandCellRefs;
	int mRowWalkDirection;
	BOOL mDontCheckSize;
	BOOL mDontReturnMergeRegions;
	BOOL mReturnHiddenCells;
	BOOL mDontInflateFormulas;
	BOOL mReturnEmptyCells;

}

@property (readonly) BOOL dontExpandCellRefs; 
@property (readonly) int rowWalkDirection; 
-(void)dealloc;
-(void)terminate;
-(id)initWithTableModel:(id)arg1 region:(id)arg2 flags:(unsigned long long)arg3 ;
-(BOOL)getNext:(SCD_Struct_TS173*)arg1 ;
-(id)initWithTableModel:(id)arg1 ;
-(id)initWithTableModel:(id)arg1 range:(SCD_Struct_TS141)arg2 ;
-(id)initWithTableModel:(id)arg1 flags:(unsigned long long)arg2 ;
-(id)initWithTableModel:(id)arg1 range:(SCD_Struct_TS141)arg2 flags:(unsigned long long)arg3 ;
-(void)p_resetIterData:(SCD_Struct_TS173*)arg1 ;
-(BOOL)p_getData:(SCD_Struct_TS173*)arg1 forCellID:(SCD_Struct_TS139)arg2 ;
-(id)initWithTableModel:(id)arg1 region:(id)arg2 ;
-(BOOL)dontExpandCellRefs;
-(int)rowWalkDirection;
@end
