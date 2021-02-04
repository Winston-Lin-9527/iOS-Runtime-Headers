/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:41 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <CloudDocsDaemon/BRCDirectoryItem.h>
#import <libobjc.A.dylib/BRCFSRooted.h>

@interface BRCZoneRootItem : BRCDirectoryItem <BRCFSRooted>
-(id)fileID;
-(id)st;
-(BOOL)isFSRoot;
-(BOOL)isZoneRoot;
-(BOOL)saveToDB;
-(id)initWithZoneRootItemID:(id)arg1 session:(id)arg2 ;
-(id)parentItemOnFS;
-(BRCDirectoryItem*)asFSRoot;
-(id)parentItemID;
@end
