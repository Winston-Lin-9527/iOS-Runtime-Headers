/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:42 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIPDFPageView;


@protocol UIPDFSelectionWidget
@property (nonatomic,readonly) CGPoint initialSelectionPointOnPage; 
@property (nonatomic,readonly) CGPoint currentSelectionPointOnPage; 
@property (assign,nonatomic) UIPDFPageView * pageView; 
@required
-(void)remove;
-(void)layout;
-(void)hide;
-(void)setSelection:(id)arg1;
-(UIPDFPageView *)pageView;
-(BOOL)hitTest:(CGPoint)arg1 fixedPoint:(CGPoint*)arg2 preceeds:(BOOL*)arg3;
-(CGPoint*)selectedPointFor:(CGPoint)arg1;
-(CGPoint*)viewOffset;
-(void)track:(CGPoint)arg1;
-(void)endTracking;
-(CGRect*)selectionRectangle;
-(void)setSelectedGrabber:(unsigned long long)arg1;
-(CGPoint)initialSelectionPointOnPage;
-(CGPoint)currentSelectionPointOnPage;
-(void)setPageView:(id)arg1;

@end
