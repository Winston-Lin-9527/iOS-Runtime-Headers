/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:29 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@interface BWZoomDelayBuffer : NSObject {

	SCD_Struct_BW97* _zoomRequestBuffer;
	unsigned _zoomRequestBufferIndex;
	unsigned _maxZoomDelay;
	unsigned _currentZoomDelay;
	int _currentZoomDirection;
	int _operatingMode;

}

@property (nonatomic,readonly) unsigned zoomDelay;              //@synthesize currentZoomDelay=_currentZoomDelay - In the implementation block
@property (assign,nonatomic) int operatingMode;                 //@synthesize operatingMode=_operatingMode - In the implementation block
-(void)dealloc;
-(unsigned)zoomDelay;
-(id)initWithMaxZoomDelay:(unsigned)arg1 ;
-(void)setOperatingMode:(int)arg1 ;
-(void)addZoomRequest:(SCD_Struct_BW97)arg1 ;
-(SCD_Struct_BW97)zoomRequestForISPAppliedZoomFactor:(float)arg1 ;
-(void)updateZoomDelay:(unsigned)arg1 ;
-(int)operatingMode;
@end
