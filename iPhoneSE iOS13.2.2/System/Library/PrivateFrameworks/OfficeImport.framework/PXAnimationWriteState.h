/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:58 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OCXWriteState, TCXmlPrefixStreamWriter;

@interface PXAnimationWriteState : NSObject {

	unsigned long long mCommonTimeNodeDataId;
	OCXWriteState* mWriteState;
	TCXmlPrefixStreamWriter* mFile;
	BOOL mHasMainSeqTimeNodeId;
	unsigned long long mMainSeqTimeNodeId;

}

@property (nonatomic,retain) OCXWriteState * writeState; 
@property (nonatomic,retain) TCXmlPrefixStreamWriter * file; 
-(TCXmlPrefixStreamWriter *)file;
-(void)setFile:(TCXmlPrefixStreamWriter *)arg1 ;
-(id)initWithWriteState:(id)arg1 file:(id)arg2 ;
-(unsigned long long)newCommonTimeNodeDataId;
-(BOOL)hasMainSeqTimeNodeId;
-(void)setMainSeqTimeNodeId:(unsigned long long)arg1 ;
-(unsigned long long)mainSeqTimeNodeId;
-(OCXWriteState *)writeState;
-(void)setWriteState:(OCXWriteState *)arg1 ;
@end
