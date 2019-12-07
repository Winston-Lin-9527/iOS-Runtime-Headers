/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:31 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilKit/PKPaletteToolView.h>
#import <libobjc.A.dylib/PKPaletteInkingTool.h>
#import <libobjc.A.dylib/PKPaletteSelectingTool.h>

@protocol PKPaletteInkingTool;
@class NSString, PKInk;

@interface PKPaletteSelectingToolView : PKPaletteToolView <PKPaletteInkingTool, PKPaletteSelectingTool> {

	id<PKPaletteInkingTool> _inkTool;

}

@property (nonatomic,retain) id<PKPaletteInkingTool> inkTool;              //@synthesize inkTool=_inkTool - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) PKInk * ink; 
-(void)setSelected:(BOOL)arg1 ;
-(void)setInkColor:(id)arg1 ;
-(PKInk *)ink;
-(id)initWithToolIdentifier:(id)arg1 ;
-(void)setInkWeight:(double)arg1 ;
-(id)attributeViewController;
-(id<PKPaletteInkingTool>)inkTool;
-(void)setInkTool:(id<PKPaletteInkingTool>)arg1 ;
@end
