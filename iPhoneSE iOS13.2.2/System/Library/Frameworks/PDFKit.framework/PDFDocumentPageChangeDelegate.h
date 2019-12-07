/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:33 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PDFDocumentPageChangeDelegate <NSObject>
@optional
-(void)willInsertPage:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)didInsertPage:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)willRemovePage:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)didRemovePage:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)willSwapPage:(id)arg1 atIndex:(unsigned long long)arg2 forPage:(id)arg3 atIndex:(unsigned long long)arg4;
-(void)didSwapPage:(id)arg1 atIndex:(unsigned long long)arg2 forPage:(id)arg3 atIndex:(unsigned long long)arg4;

@end
