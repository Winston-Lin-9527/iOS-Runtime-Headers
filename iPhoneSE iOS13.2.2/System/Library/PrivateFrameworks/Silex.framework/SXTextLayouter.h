/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:41 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Silex/Silex-Structs.h>
@class SXTextSource, NSSet, STTextTangierDocumentRoot, TSDLayoutController, STTextTangierContainerInfo, NSArray;

@interface SXTextLayouter : NSObject {

	SXTextSource* _textSource;
	NSSet* _exclusionPaths;
	STTextTangierDocumentRoot* _documentRoot;
	TSDLayoutController* _layoutController;
	STTextTangierContainerInfo* _textInfo;

}

@property (nonatomic,retain) STTextTangierDocumentRoot * documentRoot;              //@synthesize documentRoot=_documentRoot - In the implementation block
@property (nonatomic,retain) SXTextSource * textSource;                             //@synthesize textSource=_textSource - In the implementation block
@property (nonatomic,retain) NSSet * exclusionPaths;                                //@synthesize exclusionPaths=_exclusionPaths - In the implementation block
@property (nonatomic,retain) TSDLayoutController * layoutController;                //@synthesize layoutController=_layoutController - In the implementation block
@property (nonatomic,retain) STTextTangierContainerInfo * textInfo;                 //@synthesize textInfo=_textInfo - In the implementation block
@property (nonatomic,readonly) NSArray * paragraphRanges; 
-(id)init;
-(void)invalidate;
-(void)reset;
-(CGRect)typographicBounds;
-(NSSet *)exclusionPaths;
-(void)setExclusionPaths:(NSSet *)arg1 ;
-(CGSize)boundingSize;
-(id)textLayout;
-(void)setTextInfo:(STTextTangierContainerInfo *)arg1 ;
-(STTextTangierContainerInfo *)textInfo;
-(STTextTangierDocumentRoot *)documentRoot;
-(void)removeAllExclusionPaths;
-(void)addExclusionPath:(id)arg1 ;
-(TSDLayoutController *)layoutController;
-(SXTextSource *)textSource;
-(void)setTextSource:(SXTextSource *)arg1 ;
-(void)setDocumentRoot:(STTextTangierDocumentRoot *)arg1 ;
-(NSArray *)paragraphRanges;
-(double)verticalLocationOfCharacterAtIndex:(unsigned long long)arg1 ;
-(id)wpStorage;
-(id)wpLayout;
-(id)initWithTextSource:(id)arg1 andDocumentRoot:(id)arg2 ;
-(double)calculateHeightForWidth:(double)arg1 ;
-(void)createTextInfoIfNeeded;
-(void)assignExclusionPaths;
-(NSRange)validAnchorRangeForRange:(NSRange)arg1 ;
-(id)exclusionPathIndexes;
-(double)baselineForLastLine;
-(id)firstColumn;
-(void)setLayoutController:(TSDLayoutController *)arg1 ;
@end
