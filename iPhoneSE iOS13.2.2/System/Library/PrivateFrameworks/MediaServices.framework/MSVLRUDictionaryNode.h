/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:28 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaServices/MediaServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MSVLRUDictionaryNode : NSObject <NSCopying> {

	id _key;
	id _object;
	MSVLRUDictionaryNode* _next;
	MSVLRUDictionaryNode* _prev;

}

@property (nonatomic,readonly) id key;                                        //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) id object;                                       //@synthesize object=_object - In the implementation block
@property (assign,nonatomic,__weak) MSVLRUDictionaryNode * next;              //@synthesize next=_next - In the implementation block
@property (assign,nonatomic,__weak) MSVLRUDictionaryNode * prev;              //@synthesize prev=_prev - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)key;
-(id)object;
-(void)setObject:(id)arg1 ;
-(MSVLRUDictionaryNode *)next;
-(id)initWithKey:(id)arg1 object:(id)arg2 ;
-(MSVLRUDictionaryNode *)prev;
-(void)setNext:(MSVLRUDictionaryNode *)arg1 ;
-(void)setPrev:(MSVLRUDictionaryNode *)arg1 ;
@end
