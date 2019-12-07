/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:12 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSReading/TSReading-Structs.h>
@class TSWPAttachment, TSDLayout;

@interface TSWPTypesetterAttachmentMap : NSObject {

	TSWPAttachment* _attachment;
	TSDLayout* _layout;
	CTLineRef _lineRef;

}

@property (assign,nonatomic) TSWPAttachment * attachment;              //@synthesize attachment=_attachment - In the implementation block
@property (nonatomic,retain) TSDLayout * layout;                       //@synthesize layout=_layout - In the implementation block
@property (nonatomic,readonly) CTLineRef lineRef;                      //@synthesize lineRef=_lineRef - In the implementation block
+(id)mapWithAttachment:(id)arg1 layout:(id)arg2 pageNumber:(unsigned long long)arg3 pageCount:(unsigned long long)arg4 footnoteMarkProvider:(id)arg5 styleProvider:(id)arg6 colorOverride:(id)arg7 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(TSDLayout *)layout;
-(void)setLayout:(TSDLayout *)arg1 ;
-(TSWPAttachment *)attachment;
-(void)setAttachment:(TSWPAttachment *)arg1 ;
-(CTLineRef)lineRef;
@end
