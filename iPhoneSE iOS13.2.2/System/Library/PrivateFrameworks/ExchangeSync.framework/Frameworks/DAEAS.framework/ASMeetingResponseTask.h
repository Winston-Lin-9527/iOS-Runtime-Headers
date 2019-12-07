/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:14 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASTask.h>

@class NSArray;

@interface ASMeetingResponseTask : ASTask {

	NSArray* _responseItems;

}

@property (nonatomic,retain) NSArray * responseItems;              //@synthesize responseItems=_responseItems - In the implementation block
-(void)finishWithError:(id)arg1 ;
-(id)requestBody;
-(long long)taskStatusForExchangeStatus:(int)arg1 ;
-(id)initWithResponseItems:(id)arg1 ;
-(int)commandCode;
-(BOOL)getTopLevelToken:(char*)arg1 outStatusCodePage:(char*)arg2 outStatusToken:(char*)arg3 ;
-(BOOL)processContext:(id)arg1 ;
-(NSArray *)responseItems;
-(void)setResponseItems:(NSArray *)arg1 ;
@end
