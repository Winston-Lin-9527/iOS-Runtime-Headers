/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:00 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLParallelRenderCommandEncoder <MTLCommandEncoder>
@required
-(void)setColorStoreAction:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
-(void)setDepthStoreAction:(unsigned long long)arg1;
-(void)setStencilStoreAction:(unsigned long long)arg1;
-(void)setColorStoreActionOptions:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
-(void)setDepthStoreActionOptions:(unsigned long long)arg1;
-(void)setStencilStoreActionOptions:(unsigned long long)arg1;
-(id)renderCommandEncoder;

@end
