/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:25 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NEProcessInfo : NSObject
+(void)initGlobals;
+(id)copyUUIDForSingleArch:(int)arg1 ;
+(id)copyUUIDsForFatBinary:(int)arg1 ;
+(id)copyUUIDsFromExecutable:(const char*)arg1 ;
+(id)copyUUIDsForExecutable:(id)arg1 ;
+(id)copyUUIDsForBundleID:(id)arg1 uid:(unsigned)arg2 ;
+(void)clearUUIDCache;
+(id)getApplicationNameFromPlugin:(id)arg1 userUID:(unsigned)arg2 ;
+(id)copyDNSUUIDs;
+(id)copyNEHelperUUIDs;
+(BOOL)is64bitCapable;
-(id)init;
@end
