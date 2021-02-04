/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:18 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface NSSQLStoreMappingGenerator : NSObject {

	NSMutableDictionary* _names;

}
+(id)defaultMappingGenerator;
+(void)invalidate;
-(id)newGeneratedPropertyName:(id)arg1 ;
-(id)uniqueNameWithBase:(id)arg1 ;
-(id)generateTableName:(id)arg1 isAncillary:(BOOL)arg2 ;
-(id)newUniqueNameWithBase:(unsigned short*)arg1 withLength:(unsigned long long)arg2 ;
-(id)init;
-(void)dealloc;
@end
