/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:06 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Coherence.framework/Coherence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TTMergeableStringDelegate <NSObject>
@required
-(void)beginEditing;
-(void)endEditing;
-(void)edited:(unsigned long long)arg1 range:(NSRange)arg2 changeInLength:(long long)arg3;
-(BOOL)wantsUndoCommands;
-(void)addUndoCommand:(id)arg1;

@end
