/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:42 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SXDelayed : NSObject {

	BOOL _cancelled;
	/*^block*/id _block;

}

@property (nonatomic,copy) id block;                      //@synthesize block=_block - In the implementation block
@property (assign,nonatomic) BOOL cancelled;              //@synthesize cancelled=_cancelled - In the implementation block
+(id)execute:(/*^block*/id)arg1 delay:(double)arg2 ;
-(void)invoke;
-(void)cancel;
-(id)block;
-(BOOL)cancelled;
-(void)setBlock:(id)arg1 ;
-(void)setCancelled:(BOOL)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 delay:(double)arg2 ;
@end
