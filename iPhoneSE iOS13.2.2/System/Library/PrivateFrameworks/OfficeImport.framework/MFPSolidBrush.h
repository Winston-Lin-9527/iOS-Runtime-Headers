/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:54 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/MFPBrush.h>

@class OITSUColor;

@interface MFPSolidBrush : MFPBrush {

	OITSUColor* mColor;

}
-(id)color;
-(void)setColor:(id)arg1 ;
-(id)initWithColor:(id)arg1 ;
-(void)fillPath:(id)arg1 evenOddRule:(BOOL)arg2 ;
@end
