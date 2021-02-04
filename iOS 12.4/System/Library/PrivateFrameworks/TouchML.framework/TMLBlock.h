/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:02 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TMLBlockJSExports.h>

@interface TMLBlock : NSObject <TMLBlockJSExports> {

	id _block;

}

@property (nonatomic,readonly) id blockValue; 
+(void)initializeJSContext:(id)arg1 ;
+(id)blockWithFunction:(id)arg1 argumentsEncoding:(id)arg2 ;
+(id)createBlockForJSFunction:(id)arg1 argumentsEncoding:(id)arg2 ;
+(id)blockWithFunction:(id)arg1 ;
+(void)callBlock:(id)arg1 arguments:(id)arg2 ;
-(id)initWithFunction:(id)arg1 argumentsEncoding:(id)arg2 ;
-(id)blockValue;
-(void)dealloc;
@end
