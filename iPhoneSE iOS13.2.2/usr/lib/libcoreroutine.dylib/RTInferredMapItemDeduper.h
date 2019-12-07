/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:44 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
@interface RTInferredMapItemDeduper : NSObject {

	/*^block*/id _deduperFunction;

}

@property (nonatomic,copy,readonly) id deduperFunction;              //@synthesize deduperFunction=_deduperFunction - In the implementation block
-(id)init;
-(id)initWithDeduperFunction:(/*^block*/id)arg1 ;
-(id)dedupeDoubleArrayOfInferredMapItems:(id)arg1 state:(id)arg2 error:(id*)arg3 ;
-(BOOL)inferredMapItem:(id)arg1 dedupesToInferredMapItem:(id)arg2 error:(id*)arg3 ;
-(id)dedupeInferredMapItems:(id)arg1 state:(id)arg2 error:(id*)arg3 ;
-(RTPair*)ingestInferredMapItem:(id)arg1 state:(id)arg2 error:(id*)arg3 ;
-(id)ingestInferredMapItems:(id)arg1 state:(id)arg2 error:(id*)arg3 ;
-(id)dedupeInferredMapItems:(id)arg1 error:(id*)arg2 ;
-(id)dedupeDoubleArrayOfInferredMapItems:(id)arg1 error:(id*)arg2 ;
-(id)deduperFunction;
@end
