/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:41 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SXDataTableElementStyle, SXJSONDataTableSelector;

@interface SXDataTableStyleMatch : NSObject {

	SXDataTableElementStyle* _style;
	SXJSONDataTableSelector* _selector;

}

@property (nonatomic,readonly) SXDataTableElementStyle * style;                 //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) SXJSONDataTableSelector * selector;              //@synthesize selector=_selector - In the implementation block
+(id)matchWithStyle:(id)arg1 andSelector:(id)arg2 ;
-(SXJSONDataTableSelector *)selector;
-(SXDataTableElementStyle *)style;
-(id)initWithStyle:(id)arg1 andSelector:(id)arg2 ;
@end
