/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:18 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MIME/MIME-Structs.h>
#import <CoreFoundation/NSEnumerator.h>

@class MFEmailSet;

@interface _MFEmailSetEnumerator : NSEnumerator {

	MFEmailSet* _set;
	SCD_Struct_MF3* _state;

}
-(void)dealloc;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_MF3*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)nextObject;
-(id)initWithSet:(id)arg1 ;
@end
