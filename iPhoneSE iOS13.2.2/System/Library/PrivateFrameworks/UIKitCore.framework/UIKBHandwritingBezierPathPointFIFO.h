/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:57 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKBHandwritingPointFIFO.h>

@class UIBezierPath, NSMutableArray;

@interface UIKBHandwritingBezierPathPointFIFO : UIKBHandwritingPointFIFO {

	UIBezierPath* _path;
	/*^block*/id _emissionHandler;
	NSMutableArray* _prevPoints;

}

@property (nonatomic,retain) NSMutableArray * prevPoints;              //@synthesize prevPoints=_prevPoints - In the implementation block
@property (nonatomic,retain) UIBezierPath * path;                      //@synthesize path=_path - In the implementation block
@property (copy) id emissionHandler;                                   //@synthesize emissionHandler=_emissionHandler - In the implementation block
-(void)clear;
-(UIBezierPath *)path;
-(void)setPath:(UIBezierPath *)arg1 ;
-(void)flush;
-(void)addPoint:(SCD_Struct_UI81)arg1 ;
-(id)initWithFIFO:(id)arg1 ;
-(NSMutableArray *)prevPoints;
-(void)setPrevPoints:(NSMutableArray *)arg1 ;
-(id)emissionHandler;
-(void)setEmissionHandler:(id)arg1 ;
@end
