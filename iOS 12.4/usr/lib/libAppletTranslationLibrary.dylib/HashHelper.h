/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:49 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /usr/lib/libAppletTranslationLibrary.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libAppletTranslationLibrary.dylib/libAppletTranslationLibrary.dylib-Structs.h>
@interface HashHelper : NSObject {

	CC_SHA256state_st ctx;

}
+(id)hashHelper;
-(id)getHash;
-(id)addString:(id)arg1 ;
-(id)addData:(id)arg1 ;
-(id)addDictionary:(id)arg1 ;
-(id)addObject:(id)arg1 ;
-(id)init;
-(id)addNumber:(id)arg1 ;
-(id)addArray:(id)arg1 ;
@end
