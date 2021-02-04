/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:36 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CPPage;

@interface CPZoneFilter : NSObject {

	CPPage* page;
	double minArea;

}
+(void)filterZonesInPage:(id)arg1 ;
-(void)filterZonesInZone:(id)arg1 ;
-(void)findBackgroundGraphicsInZone:(id)arg1 ;
-(void)findUsedGraphicsInZone:(id)arg1 ;
-(id)initWithPage:(id)arg1 ;
@end
